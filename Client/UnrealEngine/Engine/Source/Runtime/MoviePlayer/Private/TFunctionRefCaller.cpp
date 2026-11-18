// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MoviePlayer
// Functions: 4

// Call @ 146c788e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDefaultGameMoviePlayer::Initialize'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FTickableObjectRenderThread::Register(*(FTickableObjectRenderThread **)param_1);
  return;
}

// Call @ 146c788f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDefaultGameMoviePlayer::Shutdown'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FTickableObjectRenderThread::Unregister(*(FTickableObjectRenderThread **)param_1);
  return;
}

// Call @ 146c78900

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer'::__l9::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FTickableObjectRenderThread::Unregister(*(FTickableObjectRenderThread **)param_1);
  return;
}

// Call @ 146c78910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDefaultGameMoviePlayer::WaitForMovieToFinish'::__l28::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  GFrameNumberRenderThread = GFrameNumberRenderThread + 1;
  FDefaultGameMoviePlayer::TickStreamer
            (*(FDefaultGameMoviePlayer **)param_1,param_2,*(float *)((longlong)param_1 + 8));
  return;
}

