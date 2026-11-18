// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// StaticStruct @ 144321a70

UScriptStruct * __cdecl FNetRoleNetSerializerConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetRoleNetSerializerConfig.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IrisCore();
    Z_Registration_Info_UScriptStruct_FNetRoleNetSerializerConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig,(UObject *)pUVar1,
                         L"NetRoleNetSerializerConfig");
  }
  return Z_Registration_Info_UScriptStruct_FNetRoleNetSerializerConfig.OuterSingleton;
}

