// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// StaticStruct @ 146053f60

UScriptStruct * __cdecl FMovieSceneKeyTimeStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneKeyTimeStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneKeyTimeStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct,(UObject *)pUVar1,
                         L"MovieSceneKeyTimeStruct");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneKeyTimeStruct.OuterSingleton;
}

// PropagateChanges @ 146053fa0

void __thiscall
FMovieSceneKeyTimeStruct::PropagateChanges
          (FMovieSceneKeyTimeStruct *this,FPropertyChangedEvent *param_1)

{
  FMovieSceneKeyStructHelper::Apply(&this->KeyStructInterop,(FFrameNumber)(this->Time).Value);
  return;
}

