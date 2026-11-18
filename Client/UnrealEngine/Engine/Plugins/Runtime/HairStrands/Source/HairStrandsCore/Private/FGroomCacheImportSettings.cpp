// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// StaticStruct @ 14df91690

UScriptStruct * __cdecl FGroomCacheImportSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGroomCacheImportSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FGroomCacheImportSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGroomCacheImportSettings,(UObject *)pUVar1,
                         L"GroomCacheImportSettings");
  }
  return Z_Registration_Info_UScriptStruct_FGroomCacheImportSettings.OuterSingleton;
}

