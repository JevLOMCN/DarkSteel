// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// StaticStruct @ 1442ed760

UScriptStruct * __cdecl FEnumInt32NetSerializerConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEnumInt32NetSerializerConfig.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IrisCore();
    Z_Registration_Info_UScriptStruct_FEnumInt32NetSerializerConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig,(UObject *)pUVar1,
                         L"EnumInt32NetSerializerConfig");
  }
  return Z_Registration_Info_UScriptStruct_FEnumInt32NetSerializerConfig.OuterSingleton;
}

