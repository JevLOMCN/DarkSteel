// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicWind
// Functions: 1

// StaticStruct @ 14da49480

UScriptStruct * __cdecl FDynamicWindExtraBoneData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDynamicWindExtraBoneData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DynamicWind();
    Z_Registration_Info_UScriptStruct_FDynamicWindExtraBoneData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDynamicWindExtraBoneData,(UObject *)pUVar1,
                         L"DynamicWindExtraBoneData");
  }
  return Z_Registration_Info_UScriptStruct_FDynamicWindExtraBoneData.OuterSingleton;
}

