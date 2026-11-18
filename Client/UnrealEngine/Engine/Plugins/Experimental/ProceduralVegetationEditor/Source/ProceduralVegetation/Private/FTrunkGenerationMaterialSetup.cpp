// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 1

// StaticStruct @ 14da55640

UScriptStruct * __cdecl FTrunkGenerationMaterialSetup::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTrunkGenerationMaterialSetup.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProceduralVegetation();
    Z_Registration_Info_UScriptStruct_FTrunkGenerationMaterialSetup.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTrunkGenerationMaterialSetup,(UObject *)pUVar1,
                         L"TrunkGenerationMaterialSetup");
  }
  return Z_Registration_Info_UScriptStruct_FTrunkGenerationMaterialSetup.OuterSingleton;
}

