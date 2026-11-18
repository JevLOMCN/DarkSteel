// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Env
// Functions: 1

// StaticStruct @ 14a043ef0

UScriptStruct * __cdecl FWN_MeshDayReactSetting::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_MeshDayReactSetting.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_Env();
    Z_Registration_Info_UScriptStruct_FWN_MeshDayReactSetting.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_MeshDayReactSetting,(UObject *)pUVar1,
                         L"WN_MeshDayReactSetting");
  }
  return Z_Registration_Info_UScriptStruct_FWN_MeshDayReactSetting.OuterSingleton;
}

