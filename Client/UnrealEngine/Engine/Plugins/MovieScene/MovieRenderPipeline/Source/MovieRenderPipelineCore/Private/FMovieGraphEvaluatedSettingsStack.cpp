// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// StaticStruct @ 14dc66fa0

UScriptStruct * __cdecl FMovieGraphEvaluatedSettingsStack::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphEvaluatedSettingsStack.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMovieGraphEvaluatedSettingsStack.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack,
                         (UObject *)pUVar1,L"MovieGraphEvaluatedSettingsStack");
  }
  return Z_Registration_Info_UScriptStruct_FMovieGraphEvaluatedSettingsStack.OuterSingleton;
}

