// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// StaticStruct @ 14dc6a2a0

UScriptStruct * __cdecl FMovieGraphBranch::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphBranch.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMovieGraphBranch.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphBranch,(UObject *)pUVar1,
                         L"MovieGraphBranch");
  }
  return Z_Registration_Info_UScriptStruct_FMovieGraphBranch.OuterSingleton;
}

