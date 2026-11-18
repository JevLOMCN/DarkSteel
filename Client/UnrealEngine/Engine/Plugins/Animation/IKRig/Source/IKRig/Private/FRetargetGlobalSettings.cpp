// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 1

// StaticStruct @ 14dee9680

UScriptStruct * __cdecl FRetargetGlobalSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRetargetGlobalSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FRetargetGlobalSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRetargetGlobalSettings,(UObject *)pUVar1,
                         L"RetargetGlobalSettings");
  }
  return Z_Registration_Info_UScriptStruct_FRetargetGlobalSettings.OuterSingleton;
}

