// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PBIK
// Functions: 1

// StaticStruct @ 14ded45e0

UScriptStruct * __cdecl FPBIKSolverSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPBIKSolverSettings.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_PBIK();
    Z_Registration_Info_UScriptStruct_FPBIKSolverSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPBIKSolverSettings,(UObject *)pUVar1,
                         L"PBIKSolverSettings");
  }
  return Z_Registration_Info_UScriptStruct_FPBIKSolverSettings.OuterSingleton;
}

