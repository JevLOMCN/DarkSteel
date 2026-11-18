// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// StaticStruct @ 146589a50

UScriptStruct * __cdecl FMovieScene3DLocationKeyStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieScene3DLocationKeyStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieScene3DLocationKeyStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct,(UObject *)pUVar1,
                         L"MovieScene3DLocationKeyStruct");
  }
  return Z_Registration_Info_UScriptStruct_FMovieScene3DLocationKeyStruct.OuterSingleton;
}

// PropagateChanges @ 146589ac0

void __thiscall
FMovieScene3DLocationKeyStruct::PropagateChanges
          (FMovieScene3DLocationKeyStruct *this,FPropertyChangedEvent *param_1)

{
  FMovieSceneKeyStructHelper::Apply(&this->KeyStructInterop,(FFrameNumber)(this->Time).Value);
  return;
}

