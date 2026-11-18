// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// StaticStruct @ 146052d50

UScriptStruct * __cdecl FMovieSceneEvaluationOperand::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationOperand.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationOperand.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand,(UObject *)pUVar1,
                         L"MovieSceneEvaluationOperand");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationOperand.OuterSingleton;
}

