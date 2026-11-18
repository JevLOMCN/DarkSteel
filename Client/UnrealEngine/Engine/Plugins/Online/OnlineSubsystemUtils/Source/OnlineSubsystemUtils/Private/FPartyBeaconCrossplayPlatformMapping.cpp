// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// StaticStruct @ 14eca8570

UScriptStruct * __cdecl FPartyBeaconCrossplayPlatformMapping::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPartyBeaconCrossplayPlatformMapping.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UScriptStruct_FPartyBeaconCrossplayPlatformMapping.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping,
                         (UObject *)pUVar1,L"PartyBeaconCrossplayPlatformMapping");
  }
  return Z_Registration_Info_UScriptStruct_FPartyBeaconCrossplayPlatformMapping.OuterSingleton;
}

