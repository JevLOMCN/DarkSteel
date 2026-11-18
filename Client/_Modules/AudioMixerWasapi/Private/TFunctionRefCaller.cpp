// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerWasapi
// Functions: 5

// Call @ 148d43f40

TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FAudioMixerWasapi::EnqueueAsyncDeviceSwap'::__l2::<lambda_1>,TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
::Call(void *param_1)

{
  void *in_RDX;
  
  `Audio::FAudioMixerWasapi::EnqueueAsyncDeviceSwap'::__l2::<lambda_1>::operator()(in_RDX);
  return (TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>)param_1;
}

// Call @ 148d43f70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FAudioMixerWasapi::InitDeviceSwapContextInternal'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  ::Audio::IAudioMixerPlatformInterface::ReadNextBuffer(*(IAudioMixerPlatformInterface **)param_1);
  return;
}

// Call @ 148d43f80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FWasapiAggregateDeviceMgr::OpenAudioStream'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148d43f8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 8) + 8))();
  return;
}

// Call @ 148d43fa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FWasapiDefaultDeviceMgr::OpenAudioStream'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148d43faa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*(longlong *)param_1 + 8) + 8))();
  return;
}

// Call @ 148d43fc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FAudioMixerWasapi::OpenAudioStream'::__l12::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::IAudioMixerPlatformInterface::ReadNextBuffer(*(IAudioMixerPlatformInterface **)param_1);
  return;
}

