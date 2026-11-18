// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// StaticStruct @ 144320610

UScriptStruct * __cdecl FVectorNetQuantize100NetSerializerConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVectorNetQuantize100NetSerializerConfig.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IrisCore();
    Z_Registration_Info_UScriptStruct_FVectorNetQuantize100NetSerializerConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVectorNetQuantize100NetSerializerConfig,
                         (UObject *)pUVar1,L"VectorNetQuantize100NetSerializerConfig");
  }
  return Z_Registration_Info_UScriptStruct_FVectorNetQuantize100NetSerializerConfig.OuterSingleton;
}

