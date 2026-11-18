// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// StaticStruct @ 1440bcb10

UScriptStruct * __cdecl FSolverCollisionFilterSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSolverCollisionFilterSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UScriptStruct_FSolverCollisionFilterSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings,(UObject *)pUVar1,
                         L"SolverCollisionFilterSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSolverCollisionFilterSettings.OuterSingleton;
}

