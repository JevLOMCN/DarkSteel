// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 147f0bca0

UScriptStruct * __cdecl FRuntimeVirtualTextureParameterValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRuntimeVirtualTextureParameterValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRuntimeVirtualTextureParameterValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue,
                         (UObject *)pUVar1,L"RuntimeVirtualTextureParameterValue");
  }
  return Z_Registration_Info_UScriptStruct_FRuntimeVirtualTextureParameterValue.OuterSingleton;
}

