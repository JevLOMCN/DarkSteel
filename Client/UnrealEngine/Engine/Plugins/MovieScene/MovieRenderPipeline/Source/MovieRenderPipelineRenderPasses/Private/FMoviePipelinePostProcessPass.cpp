// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// StaticStruct @ 14ddbac10

UScriptStruct * __cdecl FMoviePipelinePostProcessPass::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMoviePipelinePostProcessPass.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineRenderPasses();
    Z_Registration_Info_UScriptStruct_FMoviePipelinePostProcessPass.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass,(UObject *)pUVar1,
                         L"MoviePipelinePostProcessPass");
  }
  return Z_Registration_Info_UScriptStruct_FMoviePipelinePostProcessPass.OuterSingleton;
}

