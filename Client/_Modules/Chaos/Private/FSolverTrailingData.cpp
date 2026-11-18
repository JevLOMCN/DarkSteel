// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// StaticStruct @ 144054c50

UScriptStruct * __cdecl FSolverTrailingData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSolverTrailingData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UScriptStruct_FSolverTrailingData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSolverTrailingData,(UObject *)pUVar1,
                         L"SolverTrailingData");
  }
  return Z_Registration_Info_UScriptStruct_FSolverTrailingData.OuterSingleton;
}

