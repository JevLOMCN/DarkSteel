// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// StaticStruct @ 146063dd0

UScriptStruct * __cdecl FMovieSceneTrackInstanceComponent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceComponent.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceComponent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent,
                         (UObject *)pUVar1,L"MovieSceneTrackInstanceComponent");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceComponent.OuterSingleton;
}

