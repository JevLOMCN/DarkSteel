// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// StaticStruct @ 1461e8b10

UScriptStruct * __cdecl FMovieSceneEasingSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEasingSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneEasingSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEasingSettings,(UObject *)pUVar1,
                         L"MovieSceneEasingSettings");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEasingSettings.OuterSingleton;
}

