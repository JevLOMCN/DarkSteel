// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// StaticStruct @ 1461e9390

UScriptStruct * __cdecl FMovieSceneBindingProxy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneBindingProxy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneBindingProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBindingProxy,(UObject *)pUVar1,
                         L"MovieSceneBindingProxy");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneBindingProxy.OuterSingleton;
}

// GetMovieScene @ 146219670

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieScene * __thiscall FMovieSceneBindingProxy::GetMovieScene(FMovieSceneBindingProxy *this)

{
  UMovieSceneSequence *pUVar1;
  UMovieScene *pUVar2;
  
  pUVar1 = (this->Sequence).field0_0x0.DebugPtr;
  if (pUVar1 != (UMovieSceneSequence *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014621967c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UMovieScene *)(**(code **)(pUVar1->_padding_ + 0x2f8))();
    return pUVar2;
  }
  return (UMovieScene *)0x0;
}

