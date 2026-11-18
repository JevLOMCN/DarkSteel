// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// StaticStruct @ 146053cc0

UScriptStruct * __cdecl FMovieSceneKeyStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneKeyStruct.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneKeyStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneKeyStruct,(UObject *)pUVar1,
                         L"MovieSceneKeyStruct");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneKeyStruct.OuterSingleton;
}

// PropagateChanges @ 146053d60

void __thiscall
FMovieSceneKeyStruct::PropagateChanges(FMovieSceneKeyStruct *this,FPropertyChangedEvent *param_1)

{
  return;
}

// ~FMovieSceneKeyStruct @ 146059560

void __thiscall FMovieSceneKeyStruct::~FMovieSceneKeyStruct(FMovieSceneKeyStruct *this)

{
  *this = (FMovieSceneKeyStruct)&___7FMovieSceneKeyStruct__6B_;
  return;
}

