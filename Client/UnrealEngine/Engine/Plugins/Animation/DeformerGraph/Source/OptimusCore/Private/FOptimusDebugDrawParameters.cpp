// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// StaticStruct @ 14e113580

UScriptStruct * __cdecl FOptimusDebugDrawParameters::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusDebugDrawParameters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusDebugDrawParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusDebugDrawParameters,(UObject *)pUVar1,
                         L"OptimusDebugDrawParameters");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusDebugDrawParameters.OuterSingleton;
}

