// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsMoviePlayer
// Functions: 2

// Call @ 14f1293a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMediaFoundationMovieStreamer::OpenNextMovie'::__l18::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FSlateTexture2DRHIRef::Resize
            (*(FSlateTexture2DRHIRef **)param_1,*(uint *)((longlong)param_1 + 8),
             *(uint *)((longlong)param_1 + 0xc));
  return;
}

// Call @ 14f1293c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMediaFoundationMovieStreamer::OpenNextMovie'::__l20::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014f1293ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x28) + 0x18))();
  return;
}

