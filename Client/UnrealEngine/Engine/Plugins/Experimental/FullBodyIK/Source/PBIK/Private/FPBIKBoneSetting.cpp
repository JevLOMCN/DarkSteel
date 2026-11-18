// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PBIK
// Functions: 1

// StaticStruct @ 14ded4250

UScriptStruct * __cdecl FPBIKBoneSetting::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPBIKBoneSetting.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PBIK();
    Z_Registration_Info_UScriptStruct_FPBIKBoneSetting.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPBIKBoneSetting,(UObject *)pUVar1,
                         L"PBIKBoneSetting");
  }
  return Z_Registration_Info_UScriptStruct_FPBIKBoneSetting.OuterSingleton;
}

