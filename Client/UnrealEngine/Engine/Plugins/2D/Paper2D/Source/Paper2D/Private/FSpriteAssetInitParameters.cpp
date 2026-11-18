// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 1

// StaticStruct @ 14acddc40

UScriptStruct * __cdecl FSpriteAssetInitParameters::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSpriteAssetInitParameters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Paper2D();
    Z_Registration_Info_UScriptStruct_FSpriteAssetInitParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSpriteAssetInitParameters,(UObject *)pUVar1,
                         L"SpriteAssetInitParameters");
  }
  return Z_Registration_Info_UScriptStruct_FSpriteAssetInitParameters.OuterSingleton;
}

