// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsSolver
// Functions: 1

// StaticStruct @ 14e245a50

UScriptStruct * __cdecl FGroomSolverSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGroomSolverSettings.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsSolver();
    Z_Registration_Info_UScriptStruct_FGroomSolverSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGroomSolverSettings,(UObject *)pUVar1,
                         L"GroomSolverSettings");
  }
  return Z_Registration_Info_UScriptStruct_FGroomSolverSettings.OuterSingleton;
}

