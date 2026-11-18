// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// StaticStruct @ 14eb23040

UScriptStruct * __cdecl FNamedInterface::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNamedInterface.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystem();
    Z_Registration_Info_UScriptStruct_FNamedInterface.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNamedInterface,(UObject *)pUVar1,
                         L"NamedInterface");
  }
  return Z_Registration_Info_UScriptStruct_FNamedInterface.OuterSingleton;
}

