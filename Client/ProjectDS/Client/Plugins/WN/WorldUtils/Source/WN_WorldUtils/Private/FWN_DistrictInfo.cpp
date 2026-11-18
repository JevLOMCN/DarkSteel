// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 1

// StaticStruct @ 14a026490

UScriptStruct * __cdecl FWN_DistrictInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_DistrictInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_WorldUtils();
    Z_Registration_Info_UScriptStruct_FWN_DistrictInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_DistrictInfo,(UObject *)pUVar1,
                         L"WN_DistrictInfo");
  }
  return Z_Registration_Info_UScriptStruct_FWN_DistrictInfo.OuterSingleton;
}

