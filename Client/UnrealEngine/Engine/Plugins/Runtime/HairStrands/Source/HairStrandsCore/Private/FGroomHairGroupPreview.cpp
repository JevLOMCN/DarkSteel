// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// StaticStruct @ 14e031d00

UScriptStruct * __cdecl FGroomHairGroupPreview::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGroomHairGroupPreview.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FGroomHairGroupPreview.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGroomHairGroupPreview,(UObject *)pUVar1,
                         L"GroomHairGroupPreview");
  }
  return Z_Registration_Info_UScriptStruct_FGroomHairGroupPreview.OuterSingleton;
}

