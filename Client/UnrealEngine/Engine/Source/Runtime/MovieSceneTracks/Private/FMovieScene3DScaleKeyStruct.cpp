// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// StaticStruct @ 14658a130

UScriptStruct * __cdecl FMovieScene3DScaleKeyStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieScene3DScaleKeyStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieScene3DScaleKeyStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct,(UObject *)pUVar1,
                         L"MovieScene3DScaleKeyStruct");
  }
  return Z_Registration_Info_UScriptStruct_FMovieScene3DScaleKeyStruct.OuterSingleton;
}

// PropagateChanges @ 14658a170

void __thiscall
FMovieScene3DScaleKeyStruct::PropagateChanges
          (FMovieScene3DScaleKeyStruct *this,FPropertyChangedEvent *param_1)

{
  FMovieSceneKeyStructHelper::Apply(&this->KeyStructInterop,(FFrameNumber)(this->Time).Value);
  return;
}

