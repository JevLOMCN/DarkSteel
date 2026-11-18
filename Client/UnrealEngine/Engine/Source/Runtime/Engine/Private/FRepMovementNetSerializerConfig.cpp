// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 1484a4e00

UScriptStruct * __cdecl FRepMovementNetSerializerConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRepMovementNetSerializerConfig.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRepMovementNetSerializerConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRepMovementNetSerializerConfig,(UObject *)pUVar1
                         ,L"RepMovementNetSerializerConfig");
  }
  return Z_Registration_Info_UScriptStruct_FRepMovementNetSerializerConfig.OuterSingleton;
}

