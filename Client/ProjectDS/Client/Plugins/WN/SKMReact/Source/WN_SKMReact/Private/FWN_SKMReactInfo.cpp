// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_SKMReact
// Functions: 1

// StaticStruct @ 14acd3e00

UScriptStruct * __cdecl FWN_SKMReactInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_SKMReactInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_SKMReact();
    Z_Registration_Info_UScriptStruct_FWN_SKMReactInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_SKMReactInfo,(UObject *)pUVar1,
                         L"WN_SKMReactInfo");
  }
  return Z_Registration_Info_UScriptStruct_FWN_SKMReactInfo.OuterSingleton;
}

