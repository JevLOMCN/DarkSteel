// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 1

// StaticStruct @ 149483a70

UScriptStruct * __cdecl FWN_TestInstanceSpawnInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_TestInstanceSpawnInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_Common();
    Z_Registration_Info_UScriptStruct_FWN_TestInstanceSpawnInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_TestInstanceSpawnInfo,(UObject *)pUVar1,
                         L"WN_TestInstanceSpawnInfo");
  }
  return Z_Registration_Info_UScriptStruct_FWN_TestInstanceSpawnInfo.OuterSingleton;
}

