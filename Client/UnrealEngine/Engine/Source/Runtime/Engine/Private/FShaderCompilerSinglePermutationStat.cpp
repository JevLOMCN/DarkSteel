// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 148505530

UScriptStruct * __cdecl FShaderCompilerSinglePermutationStat::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FShaderCompilerSinglePermutationStat.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FShaderCompilerSinglePermutationStat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat,
                         (UObject *)pUVar1,L"ShaderCompilerSinglePermutationStat");
  }
  return Z_Registration_Info_UScriptStruct_FShaderCompilerSinglePermutationStat.OuterSingleton;
}

