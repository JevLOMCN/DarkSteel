// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNAbilityRuntime
// Functions: 1

// StaticStruct @ 148db3a00

UScriptStruct * __cdecl FWN_AbilityBreakOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_AbilityBreakOptions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WNAbilityRuntime();
    Z_Registration_Info_UScriptStruct_FWN_AbilityBreakOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_AbilityBreakOptions,(UObject *)pUVar1,
                         L"WN_AbilityBreakOptions");
  }
  return Z_Registration_Info_UScriptStruct_FWN_AbilityBreakOptions.OuterSingleton;
}

