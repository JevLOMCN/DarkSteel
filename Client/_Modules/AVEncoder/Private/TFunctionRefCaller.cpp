// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 4

// Call @ 148d03bf0

FVideoDecoder * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<AVEncoder::FVideoDecoderH264_Dummy_*_(__cdecl*)(void),AVEncoder::FVideoDecoder_*>
::Call(void *param_1)

{
  FVideoDecoder *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148d03bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FVideoDecoder *)(**(code **)param_1)();
  return pFVar1;
}

// Call @ 148d03c00

FVideoDecoder * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<AVEncoder::FVideoDecoderH264_WindowsImpl_*_(__cdecl*)(void),AVEncoder::FVideoDecoder_*>
::Call(void *param_1)

{
  FVideoDecoder *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148d03c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FVideoDecoder *)(**(code **)param_1)();
  return pFVar1;
}

// Call @ 148d03c10

FVideoDecoder * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<AVEncoder::FVideoDecoderMPEG4_Impl_*_(__cdecl*)(void),AVEncoder::FVideoDecoder_*>
::Call(void *param_1)

{
  FVideoDecoder *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148d03c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FVideoDecoder *)(**(code **)param_1)();
  return pFVar1;
}

// Call @ 148d03c20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`AVEncoder::FVideoDecoderH264_WindowsImpl::CreateWorkerThread'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  AVEncoder::FVideoDecoderH264_WindowsImpl::WorkerThreadFN
            (*(FVideoDecoderH264_WindowsImpl **)param_1);
  return;
}

