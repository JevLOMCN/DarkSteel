// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenCVLensDistortion
// Functions: 1

// Call @ 14d7c7520

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOpenCVLensDistortionParameters::DrawDisplacementMapToRenderTarget'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  DrawUVDisplacementToRenderTargetFromPreComputedDisplacementMap_RenderThread
            (param_2,*(FTextureResource **)param_1,(FName *)((longlong)param_1 + 0x10),
             *(FTextureRenderTargetResource **)((longlong)param_1 + 8),
             *(Type *)((longlong)param_1 + 0x18));
  return;
}

