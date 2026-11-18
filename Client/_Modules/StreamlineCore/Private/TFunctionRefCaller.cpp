// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineCore
// Functions: 1

// Call @ 14de75590

TOptional<bool> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStreamlineViewExtension::FStreamlineViewExtension'::__l2::<lambda_1>,TOptional<bool>,ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&>
::Call(void *param_1,ISceneViewExtension **param_2,FSceneViewExtensionContext *param_3)

{
  bool bVar1;
  
  bVar1 = FStreamlineRHI::IsStreamlineAvailable((FStreamlineRHI *)(*param_2)[5]);
  *(bool *)param_1 = bVar1;
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return SUB82(param_1,0);
}

