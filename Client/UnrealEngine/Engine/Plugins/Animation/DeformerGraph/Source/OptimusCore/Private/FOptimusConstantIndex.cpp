// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// StaticStruct @ 14e118c00

UScriptStruct * __cdecl FOptimusConstantIndex::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusConstantIndex.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusConstantIndex.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusConstantIndex,(UObject *)pUVar1,
                         L"OptimusConstantIndex");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusConstantIndex.OuterSingleton;
}

