// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// StaticStruct @ 146721790

UScriptStruct * __cdecl FMovieSceneVector2DKeyStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneVector2DKeyStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneVector2DKeyStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct,(UObject *)pUVar1,
                         L"MovieSceneVector2DKeyStruct");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneVector2DKeyStruct.OuterSingleton;
}

// GetPropertyChannelByIndex @ 1467217d0

double * __thiscall
FMovieSceneVector2DKeyStruct::GetPropertyChannelByIndex
          (FMovieSceneVector2DKeyStruct *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  double *pdVar3;
  
  if (1 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                       ,0x4b0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar3 = (double *)(*pcVar1)();
      return pdVar3;
    }
  }
  return (double *)((longlong)&(this->Vector).field0_0x0 + (longlong)param_1 * 8);
}

