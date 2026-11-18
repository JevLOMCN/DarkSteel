// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 1

// StaticStruct @ 1494bc0c0

UScriptStruct * __cdecl FArrayShaderValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FArrayShaderValue.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ComputeFramework();
    Z_Registration_Info_UScriptStruct_FArrayShaderValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FArrayShaderValue,(UObject *)pUVar1,
                         L"ArrayShaderValue");
  }
  return Z_Registration_Info_UScriptStruct_FArrayShaderValue.OuterSingleton;
}

