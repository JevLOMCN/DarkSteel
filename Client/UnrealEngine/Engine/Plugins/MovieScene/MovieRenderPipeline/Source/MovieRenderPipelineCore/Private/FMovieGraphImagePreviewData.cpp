// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// StaticStruct @ 14dc9db60

UScriptStruct * __cdecl FMovieGraphImagePreviewData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphImagePreviewData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMovieGraphImagePreviewData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphImagePreviewData,(UObject *)pUVar1,
                         L"MovieGraphImagePreviewData");
  }
  return Z_Registration_Info_UScriptStruct_FMovieGraphImagePreviewData.OuterSingleton;
}

