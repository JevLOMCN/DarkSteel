// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// StaticStruct @ 146270810

UScriptStruct * __cdecl FMovieSceneSubSectionOriginOverrideMask::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSubSectionOriginOverrideMask.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneSubSectionOriginOverrideMask.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSubSectionOriginOverrideMask,
                         (UObject *)pUVar1,L"MovieSceneSubSectionOriginOverrideMask");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneSubSectionOriginOverrideMask.OuterSingleton;
}

