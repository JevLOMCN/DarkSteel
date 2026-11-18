// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCOP
// Functions: 1

// StaticStruct @ 14d3643c0

UScriptStruct * __cdecl FPopulationClassParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPopulationClassParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObjectPopulation();
    Z_Registration_Info_UScriptStruct_FPopulationClassParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPopulationClassParameter,(UObject *)pUVar1,
                         L"PopulationClassParameter");
  }
  return Z_Registration_Info_UScriptStruct_FPopulationClassParameter.OuterSingleton;
}

