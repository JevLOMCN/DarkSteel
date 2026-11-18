// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// StaticStruct @ 14caae930

UScriptStruct * __cdecl FCreateTextureObjectResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCreateTextureObjectResult.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ModelingComponents();
    Z_Registration_Info_UScriptStruct_FCreateTextureObjectResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCreateTextureObjectResult,(UObject *)pUVar1,
                         L"CreateTextureObjectResult");
  }
  return Z_Registration_Info_UScriptStruct_FCreateTextureObjectResult.OuterSingleton;
}

