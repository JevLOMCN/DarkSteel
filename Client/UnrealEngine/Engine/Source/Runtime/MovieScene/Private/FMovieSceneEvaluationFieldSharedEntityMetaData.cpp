// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// StaticStruct @ 146162a20

UScriptStruct * __cdecl FMovieSceneEvaluationFieldSharedEntityMetaData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData,
                           (UObject *)pUVar1,L"MovieSceneEvaluationFieldSharedEntityMetaData");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData.
         OuterSingleton;
}

