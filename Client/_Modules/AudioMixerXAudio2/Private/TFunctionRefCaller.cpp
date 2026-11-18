// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerXAudio2
// Functions: 4

// Call @ 148d3c750

TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerPlatformXAudio2::EnqueueAsyncDeviceSwap'::__l2::<lambda_1>,TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
::Call(void *param_1)

{
  void *in_RDX;
  
  `Audio::FMixerPlatformXAudio2::EnqueueAsyncDeviceSwap'::__l2::<lambda_1>::operator()(in_RDX);
  return (TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>)param_1;
}

// Call @ 148d3c780

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::Run'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d3c7b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  return;
}

// Call @ 148d3c7d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 148d3c7f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<TFunction<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>___cdecl(void)>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>,TUniqueFunction<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>___cdecl(void)>_&>
            ((TPromise<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
              *)((longlong)param_1 + 0x30),param_1);
  return false;
}

