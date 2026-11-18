// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 1

// StaticStruct @ 14ace13c0

UScriptStruct * __cdecl FPaperTileSetTerrain::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPaperTileSetTerrain.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Paper2D();
    Z_Registration_Info_UScriptStruct_FPaperTileSetTerrain.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPaperTileSetTerrain,(UObject *)pUVar1,
                         L"PaperTileSetTerrain");
  }
  return Z_Registration_Info_UScriptStruct_FPaperTileSetTerrain.OuterSingleton;
}

