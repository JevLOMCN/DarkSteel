// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 1

// StaticStruct @ 148c70460

UScriptStruct * __cdecl FComparisonToleranceAmount::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FComparisonToleranceAmount.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FunctionalTesting();
    Z_Registration_Info_UScriptStruct_FComparisonToleranceAmount.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FComparisonToleranceAmount,(UObject *)pUVar1,
                         L"ComparisonToleranceAmount");
  }
  return Z_Registration_Info_UScriptStruct_FComparisonToleranceAmount.OuterSingleton;
}

