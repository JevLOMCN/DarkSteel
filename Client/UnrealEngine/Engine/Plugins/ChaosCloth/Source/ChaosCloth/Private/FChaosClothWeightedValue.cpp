// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 1

// StaticStruct @ 14db77040

UScriptStruct * __cdecl FChaosClothWeightedValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosClothWeightedValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosCloth();
    Z_Registration_Info_UScriptStruct_FChaosClothWeightedValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothWeightedValue,(UObject *)pUVar1,
                         L"ChaosClothWeightedValue");
  }
  return Z_Registration_Info_UScriptStruct_FChaosClothWeightedValue.OuterSingleton;
}

