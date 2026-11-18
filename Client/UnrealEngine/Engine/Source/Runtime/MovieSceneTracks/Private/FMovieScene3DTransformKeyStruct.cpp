// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// StaticStruct @ 14658a860

UScriptStruct * __cdecl FMovieScene3DTransformKeyStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieScene3DTransformKeyStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieScene3DTransformKeyStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct,(UObject *)pUVar1
                         ,L"MovieScene3DTransformKeyStruct");
  }
  return Z_Registration_Info_UScriptStruct_FMovieScene3DTransformKeyStruct.OuterSingleton;
}

// PropagateChanges @ 14658a920

void __thiscall
FMovieScene3DTransformKeyStruct::PropagateChanges
          (FMovieScene3DTransformKeyStruct *this,FPropertyChangedEvent *param_1)

{
  FMovieSceneKeyStructHelper::Apply(&this->KeyStructInterop,(FFrameNumber)(this->Time).Value);
  return;
}

