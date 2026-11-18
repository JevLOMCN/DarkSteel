// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraSimCaching
// Functions: 1

// StaticStruct @ 14ea1fe90

UScriptStruct * __cdecl FMovieSceneNiagaraSectionTemplateParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraSimCaching();
    Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter,
                         (UObject *)pUVar1,L"MovieSceneNiagaraSectionTemplateParameter");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter.OuterSingleton
  ;
}

