// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// StaticStruct @ 146165fe0

UScriptStruct * __cdecl FOptionalMovieSceneBlendType::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptionalMovieSceneBlendType.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FOptionalMovieSceneBlendType.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType,(UObject *)pUVar1,
                         L"OptionalMovieSceneBlendType");
  }
  return Z_Registration_Info_UScriptStruct_FOptionalMovieSceneBlendType.OuterSingleton;
}

// Get @ 146215a40

EMovieSceneBlendType __thiscall
FOptionalMovieSceneBlendType::Get(FOptionalMovieSceneBlendType *this)

{
  code *pcVar1;
  bool bVar2;
  EMovieSceneBlendType EVar3;
  
  if (this->bIsValid != false) {
    return this->BlendType;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneBlendType.h"
                     ,0x4c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return this->BlendType;
}

