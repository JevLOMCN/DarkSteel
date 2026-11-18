// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCOP
// Functions: 1

// StaticStruct @ 14d363d50

UScriptStruct * __cdecl FClassWeightPair::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClassWeightPair.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObjectPopulation();
    Z_Registration_Info_UScriptStruct_FClassWeightPair.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClassWeightPair,(UObject *)pUVar1,
                         L"ClassWeightPair");
  }
  return Z_Registration_Info_UScriptStruct_FClassWeightPair.OuterSingleton;
}

