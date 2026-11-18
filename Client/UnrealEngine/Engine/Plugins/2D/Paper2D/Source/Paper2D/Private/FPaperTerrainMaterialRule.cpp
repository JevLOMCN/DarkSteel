// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 1

// StaticStruct @ 14ace0cf0

UScriptStruct * __cdecl FPaperTerrainMaterialRule::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPaperTerrainMaterialRule.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Paper2D();
    Z_Registration_Info_UScriptStruct_FPaperTerrainMaterialRule.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule,(UObject *)pUVar1,
                         L"PaperTerrainMaterialRule");
  }
  return Z_Registration_Info_UScriptStruct_FPaperTerrainMaterialRule.OuterSingleton;
}

