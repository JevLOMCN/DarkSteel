// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// StaticStruct @ 14dcf4c80

UScriptStruct * __cdecl FMovieGraphMetadataAttribute::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphMetadataAttribute.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMovieGraphMetadataAttribute.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphMetadataAttribute,(UObject *)pUVar1,
                         L"MovieGraphMetadataAttribute");
  }
  return Z_Registration_Info_UScriptStruct_FMovieGraphMetadataAttribute.OuterSingleton;
}

