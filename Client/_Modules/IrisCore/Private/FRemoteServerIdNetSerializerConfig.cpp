// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// StaticStruct @ 1443220c0

UScriptStruct * __cdecl FRemoteServerIdNetSerializerConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRemoteServerIdNetSerializerConfig.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IrisCore();
    Z_Registration_Info_UScriptStruct_FRemoteServerIdNetSerializerConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRemoteServerIdNetSerializerConfig,
                         (UObject *)pUVar1,L"RemoteServerIdNetSerializerConfig");
  }
  return Z_Registration_Info_UScriptStruct_FRemoteServerIdNetSerializerConfig.OuterSingleton;
}

