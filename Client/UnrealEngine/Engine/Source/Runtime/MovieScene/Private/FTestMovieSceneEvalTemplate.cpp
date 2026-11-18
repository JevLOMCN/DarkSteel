// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// StaticStruct @ 146267f30

UScriptStruct * __cdecl FTestMovieSceneEvalTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestMovieSceneEvalTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FTestMovieSceneEvalTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate,(UObject *)pUVar1,
                         L"TestMovieSceneEvalTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FTestMovieSceneEvalTemplate.OuterSingleton;
}

// GetScriptStructImpl @ 1462b0470

UScriptStruct * __thiscall
FTestMovieSceneEvalTemplate::GetScriptStructImpl(FTestMovieSceneEvalTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestMovieSceneEvalTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FTestMovieSceneEvalTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate,(UObject *)pUVar1,
                         L"TestMovieSceneEvalTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FTestMovieSceneEvalTemplate.OuterSingleton;
}

