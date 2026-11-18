// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 1

// StaticStruct @ 1463009a0

UScriptStruct * __cdecl FChaosDebugSubstepControl::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosDebugSubstepControl.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosDebugSubstepControl.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosDebugSubstepControl,(UObject *)pUVar1,
                         L"ChaosDebugSubstepControl");
  }
  return Z_Registration_Info_UScriptStruct_FChaosDebugSubstepControl.OuterSingleton;
}

