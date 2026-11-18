// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 148ee30c0

UScriptStruct * __cdecl FMovieSceneNiagaraSystemTrackTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate,
                         (UObject *)pUVar1,L"MovieSceneNiagaraSystemTrackTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate.OuterSingleton;
}

// GetScriptStructImpl @ 148ee3100

UScriptStruct * __thiscall
FMovieSceneNiagaraSystemTrackTemplate::GetScriptStructImpl
          (FMovieSceneNiagaraSystemTrackTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate,
                         (UObject *)pUVar1,L"MovieSceneNiagaraSystemTrackTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate.OuterSingleton;
}

