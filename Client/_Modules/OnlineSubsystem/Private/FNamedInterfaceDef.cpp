// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// StaticStruct @ 14eb23080

UScriptStruct * __cdecl FNamedInterfaceDef::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNamedInterfaceDef.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystem();
    Z_Registration_Info_UScriptStruct_FNamedInterfaceDef.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNamedInterfaceDef,(UObject *)pUVar1,
                         L"NamedInterfaceDef");
  }
  return Z_Registration_Info_UScriptStruct_FNamedInterfaceDef.OuterSingleton;
}

