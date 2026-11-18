// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 1

// StaticStruct @ 1494bc100

UScriptStruct * __cdecl FShaderValueContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FShaderValueContainer.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ComputeFramework();
    Z_Registration_Info_UScriptStruct_FShaderValueContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FShaderValueContainer,(UObject *)pUVar1,
                         L"ShaderValueContainer");
  }
  return Z_Registration_Info_UScriptStruct_FShaderValueContainer.OuterSingleton;
}

