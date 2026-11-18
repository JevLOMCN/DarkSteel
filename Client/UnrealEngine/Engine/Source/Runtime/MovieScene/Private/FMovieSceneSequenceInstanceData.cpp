// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// StaticStruct @ 1461e2f40

UScriptStruct * __cdecl FMovieSceneSequenceInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequenceInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneSequenceInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData,(UObject *)pUVar1
                         ,L"MovieSceneSequenceInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneSequenceInstanceData.OuterSingleton;
}

// GetScriptStructImpl @ 1461e2f80

UScriptStruct * __thiscall
FMovieSceneSequenceInstanceData::GetScriptStructImpl(FMovieSceneSequenceInstanceData *this)

{
  code *pcVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UPackage *pUVar4;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneSequenceInstanceData.h"
                     ,0x32,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UScriptStruct *)(*pcVar1)();
    return pUVar3;
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequenceInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneSequenceInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData,(UObject *)pUVar4
                         ,L"MovieSceneSequenceInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneSequenceInstanceData.OuterSingleton;
}

// ~FMovieSceneSequenceInstanceData @ 1461ff640

void __thiscall
FMovieSceneSequenceInstanceData::~FMovieSceneSequenceInstanceData
          (FMovieSceneSequenceInstanceData *this)

{
  *this = (FMovieSceneSequenceInstanceData)&___7FMovieSceneSequenceInstanceData__6B_;
  return;
}

