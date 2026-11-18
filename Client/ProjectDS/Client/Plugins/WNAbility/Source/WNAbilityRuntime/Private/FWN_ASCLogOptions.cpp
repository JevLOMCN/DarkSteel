// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNAbilityRuntime
// Functions: 1

// StaticStruct @ 148db37a0

UScriptStruct * __cdecl FWN_ASCLogOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_ASCLogOptions.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WNAbilityRuntime();
    Z_Registration_Info_UScriptStruct_FWN_ASCLogOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_ASCLogOptions,(UObject *)pUVar1,
                         L"WN_ASCLogOptions");
  }
  return Z_Registration_Info_UScriptStruct_FWN_ASCLogOptions.OuterSingleton;
}

