// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// StaticStruct @ 14b43a440

UScriptStruct * __cdecl FChainGunInstance::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChainGunInstance.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FChainGunInstance.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChainGunInstance,(UObject *)pUVar1,
                         L"ChainGunInstance");
  }
  return Z_Registration_Info_UScriptStruct_FChainGunInstance.OuterSingleton;
}

