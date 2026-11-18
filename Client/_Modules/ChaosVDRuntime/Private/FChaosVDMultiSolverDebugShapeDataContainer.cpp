// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 1

// StaticStruct @ 1436cb1f0

UScriptStruct * __cdecl FChaosVDMultiSolverDebugShapeDataContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDMultiSolverDebugShapeDataContainer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDMultiSolverDebugShapeDataContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDMultiSolverDebugShapeDataContainer,
                         (UObject *)pUVar1,L"ChaosVDMultiSolverDebugShapeDataContainer");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDMultiSolverDebugShapeDataContainer.OuterSingleton
  ;
}

