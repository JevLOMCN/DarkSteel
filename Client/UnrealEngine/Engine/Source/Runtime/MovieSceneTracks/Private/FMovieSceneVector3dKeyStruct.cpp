// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// StaticStruct @ 146721bb0

UScriptStruct * __cdecl FMovieSceneVector3dKeyStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneVector3dKeyStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneVector3dKeyStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVector3dKeyStruct,(UObject *)pUVar1,
                         L"MovieSceneVector3dKeyStruct");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneVector3dKeyStruct.OuterSingleton;
}

// GetPropertyChannelByIndex @ 146721bf0

double * __thiscall
FMovieSceneVector3dKeyStruct::GetPropertyChannelByIndex
          (FMovieSceneVector3dKeyStruct *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  double *pdVar3;
  
  if (2 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar3 = (double *)(*pcVar1)();
      return pdVar3;
    }
  }
  return (double *)((longlong)&(this->Vector).field0_0x0 + (longlong)param_1 * 8);
}

