// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 1

// StaticStruct @ 14dee9600

UScriptStruct * __cdecl FTargetRootSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTargetRootSettings.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FTargetRootSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTargetRootSettings,(UObject *)pUVar1,
                         L"TargetRootSettings");
  }
  return Z_Registration_Info_UScriptStruct_FTargetRootSettings.OuterSingleton;
}

