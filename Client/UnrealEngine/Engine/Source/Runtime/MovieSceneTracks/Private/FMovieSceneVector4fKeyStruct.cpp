// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// StaticStruct @ 146729160

UScriptStruct * __cdecl FMovieSceneVector4fKeyStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneVector4fKeyStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneVector4fKeyStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVector4fKeyStruct,(UObject *)pUVar1,
                         L"MovieSceneVector4fKeyStruct");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneVector4fKeyStruct.OuterSingleton;
}

// GetPropertyChannelByIndex @ 1467291b0

float * __thiscall
FMovieSceneVector4fKeyStruct::GetPropertyChannelByIndex
          (FMovieSceneVector4fKeyStruct *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  
  if (3 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar3 = (float *)(*pcVar1)();
      return pfVar3;
    }
  }
  return (float *)((longlong)&(this->Vector).field0_0x0 + (longlong)param_1 * 4);
}

