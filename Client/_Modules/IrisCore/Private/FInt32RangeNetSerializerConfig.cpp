// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// StaticStruct @ 14431fb70

UScriptStruct * __cdecl FInt32RangeNetSerializerConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInt32RangeNetSerializerConfig.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IrisCore();
    Z_Registration_Info_UScriptStruct_FInt32RangeNetSerializerConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInt32RangeNetSerializerConfig,(UObject *)pUVar1,
                         L"Int32RangeNetSerializerConfig");
  }
  return Z_Registration_Info_UScriptStruct_FInt32RangeNetSerializerConfig.OuterSingleton;
}

