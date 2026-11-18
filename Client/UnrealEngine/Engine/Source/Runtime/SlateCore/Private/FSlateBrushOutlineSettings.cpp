// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// StaticStruct @ 14252d800

UScriptStruct * __cdecl FSlateBrushOutlineSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSlateBrushOutlineSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FSlateBrushOutlineSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSlateBrushOutlineSettings,(UObject *)pUVar1,
                         L"SlateBrushOutlineSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSlateBrushOutlineSettings.OuterSingleton;
}

