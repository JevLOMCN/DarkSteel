// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerXAudio2
// Functions: 1

// Run @ 148d41310

uint __thiscall
TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::Run
          (TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
           *this)

{
  FRunnableThread **ppFVar1;
  <lambda_1> local_58;
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  SetPromise<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>,TUniqueFunction<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  ppFVar1 = TFutureBase<FRunnableThread_*>::Get
                      ((TFutureBase<FRunnableThread_*> *)&this->ThreadFuture);
  local_58.Thread = *ppFVar1;
  local_58.__this = this;
  Async<_TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::Run_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_48,TaskGraph,&local_58,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  return 0;
}

