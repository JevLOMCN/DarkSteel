// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// StaticStruct @ 146722bb0

UScriptStruct * __cdecl FMovieSceneColorKeyStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneColorKeyStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneColorKeyStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct,(UObject *)pUVar1,
                         L"MovieSceneColorKeyStruct");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneColorKeyStruct.OuterSingleton;
}

// PropagateChanges @ 146722c30

void __thiscall
FMovieSceneColorKeyStruct::PropagateChanges
          (FMovieSceneColorKeyStruct *this,FPropertyChangedEvent *param_1)

{
  FMovieSceneKeyStructHelper::Apply(&this->KeyStructInterop,(FFrameNumber)(this->Time).Value);
  return;
}

