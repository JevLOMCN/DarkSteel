// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// StaticStruct @ 146166e10

UScriptStruct * __cdecl FMovieSceneTrackLabels::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackLabels.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTrackLabels.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackLabels,(UObject *)pUVar1,
                         L"MovieSceneTrackLabels");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneTrackLabels.OuterSingleton;
}

