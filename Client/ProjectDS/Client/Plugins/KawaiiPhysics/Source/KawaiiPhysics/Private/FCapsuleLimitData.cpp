// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: KawaiiPhysics
// Functions: 1

// StaticStruct @ 14de3ba70

UScriptStruct * __cdecl FCapsuleLimitData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCapsuleLimitData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_KawaiiPhysics();
    Z_Registration_Info_UScriptStruct_FCapsuleLimitData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCapsuleLimitData,(UObject *)pUVar1,
                         L"CapsuleLimitData");
  }
  return Z_Registration_Info_UScriptStruct_FCapsuleLimitData.OuterSingleton;
}

