// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 1

// StaticStruct @ 14ace1380

UScriptStruct * __cdecl FPaperTileMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPaperTileMetadata.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Paper2D();
    Z_Registration_Info_UScriptStruct_FPaperTileMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPaperTileMetadata,(UObject *)pUVar1,
                         L"PaperTileMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FPaperTileMetadata.OuterSingleton;
}

