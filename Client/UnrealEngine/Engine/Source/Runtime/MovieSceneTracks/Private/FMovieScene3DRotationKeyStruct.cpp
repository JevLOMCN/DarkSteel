// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// StaticStruct @ 146589df0

UScriptStruct * __cdecl FMovieScene3DRotationKeyStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieScene3DRotationKeyStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieScene3DRotationKeyStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct,(UObject *)pUVar1,
                         L"MovieScene3DRotationKeyStruct");
  }
  return Z_Registration_Info_UScriptStruct_FMovieScene3DRotationKeyStruct.OuterSingleton;
}

// PropagateChanges @ 146589e30

void __thiscall
FMovieScene3DRotationKeyStruct::PropagateChanges
          (FMovieScene3DRotationKeyStruct *this,FPropertyChangedEvent *param_1)

{
  FMovieSceneKeyStructHelper::Apply(&this->KeyStructInterop,(FFrameNumber)(this->Time).Value);
  return;
}

