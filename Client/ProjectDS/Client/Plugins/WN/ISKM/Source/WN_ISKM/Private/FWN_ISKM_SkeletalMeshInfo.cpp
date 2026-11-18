// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 1

// StaticStruct @ 14a836ee0

UScriptStruct * __cdecl FWN_ISKM_SkeletalMeshInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_ISKM_SkeletalMeshInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_ISKM();
    Z_Registration_Info_UScriptStruct_FWN_ISKM_SkeletalMeshInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_ISKM_SkeletalMeshInfo,(UObject *)pUVar1,
                         L"WN_ISKM_SkeletalMeshInfo");
  }
  return Z_Registration_Info_UScriptStruct_FWN_ISKM_SkeletalMeshInfo.OuterSingleton;
}

