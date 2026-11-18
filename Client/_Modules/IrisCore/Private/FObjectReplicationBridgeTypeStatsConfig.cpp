// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// StaticStruct @ 14429ff60

UScriptStruct * __cdecl FObjectReplicationBridgeTypeStatsConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IrisCore();
    Z_Registration_Info_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig,
                         (UObject *)pUVar1,L"ObjectReplicationBridgeTypeStatsConfig");
  }
  return Z_Registration_Info_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig.OuterSingleton;
}

