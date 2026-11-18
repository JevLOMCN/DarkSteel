// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// StaticStruct @ 14e118a40

UScriptStruct * __cdecl FOptimusConstantDefinition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusConstantDefinition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusConstantDefinition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusConstantDefinition,(UObject *)pUVar1,
                         L"OptimusConstantDefinition");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusConstantDefinition.OuterSingleton;
}

