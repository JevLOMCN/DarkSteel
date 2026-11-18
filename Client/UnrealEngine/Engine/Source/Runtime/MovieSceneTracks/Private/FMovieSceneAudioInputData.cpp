// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// StaticStruct @ 14658a370

UScriptStruct * __cdecl FMovieSceneAudioInputData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneAudioInputData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneAudioInputData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAudioInputData,(UObject *)pUVar1,
                         L"MovieSceneAudioInputData");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneAudioInputData.OuterSingleton;
}

