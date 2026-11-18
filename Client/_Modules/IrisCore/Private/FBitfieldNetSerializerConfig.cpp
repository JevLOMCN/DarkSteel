// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// StaticStruct @ 1443216c0

UScriptStruct * __cdecl FBitfieldNetSerializerConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBitfieldNetSerializerConfig.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IrisCore();
    Z_Registration_Info_UScriptStruct_FBitfieldNetSerializerConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig,(UObject *)pUVar1,
                         L"BitfieldNetSerializerConfig");
  }
  return Z_Registration_Info_UScriptStruct_FBitfieldNetSerializerConfig.OuterSingleton;
}

