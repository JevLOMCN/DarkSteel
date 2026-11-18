// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// StaticStruct @ 1461e8790

UScriptStruct * __cdecl FMovieSceneSequenceReplProperties::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequenceReplProperties.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneSequenceReplProperties.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties,
                         (UObject *)pUVar1,L"MovieSceneSequenceReplProperties");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneSequenceReplProperties.OuterSingleton;
}

