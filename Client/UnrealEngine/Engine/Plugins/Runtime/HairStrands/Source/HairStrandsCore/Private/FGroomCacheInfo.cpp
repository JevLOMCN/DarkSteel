// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// StaticStruct @ 14dfe4400

UScriptStruct * __cdecl FGroomCacheInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGroomCacheInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FGroomCacheInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGroomCacheInfo,(UObject *)pUVar1,
                         L"GroomCacheInfo");
  }
  return Z_Registration_Info_UScriptStruct_FGroomCacheInfo.OuterSingleton;
}

// GetCurrentVersion @ 14e013880

int __cdecl FGroomCacheInfo::GetCurrentVersion(void)

{
  return 0;
}

