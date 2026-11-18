// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// StaticStruct @ 14dc65820

UScriptStruct * __cdecl FMovieGraphRenderOutputData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphRenderOutputData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMovieGraphRenderOutputData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphRenderOutputData,(UObject *)pUVar1,
                         L"MovieGraphRenderOutputData");
  }
  return Z_Registration_Info_UScriptStruct_FMovieGraphRenderOutputData.OuterSingleton;
}

