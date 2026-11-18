// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FullBodyIK
// Functions: 1

// StaticStruct @ 14df6e200

UScriptStruct * __cdecl FSolverInput::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSolverInput.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FullBodyIK();
    Z_Registration_Info_UScriptStruct_FSolverInput.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSolverInput,(UObject *)pUVar1,L"SolverInput");
  }
  return Z_Registration_Info_UScriptStruct_FSolverInput.OuterSingleton;
}

