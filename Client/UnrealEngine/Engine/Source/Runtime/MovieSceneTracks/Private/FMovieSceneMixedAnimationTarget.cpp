// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// StaticStruct @ 14658b860

UScriptStruct * __cdecl FMovieSceneMixedAnimationTarget::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneMixedAnimationTarget.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneMixedAnimationTarget.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneMixedAnimationTarget,(UObject *)pUVar1
                         ,L"MovieSceneMixedAnimationTarget");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneMixedAnimationTarget.OuterSingleton;
}

// ~FMovieSceneMixedAnimationTarget @ 146620de0

void __thiscall
FMovieSceneMixedAnimationTarget::~FMovieSceneMixedAnimationTarget
          (FMovieSceneMixedAnimationTarget *this)

{
  this->_padding_ = (longlong)&___7FMovieSceneMixedAnimationTarget__6B_;
  return;
}

