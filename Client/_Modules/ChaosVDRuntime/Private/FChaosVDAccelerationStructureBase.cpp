// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 1

// StaticStruct @ 1436ca5a0

UScriptStruct * __cdecl FChaosVDAccelerationStructureBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDAccelerationStructureBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDAccelerationStructureBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase,
                         (UObject *)pUVar1,L"ChaosVDAccelerationStructureBase");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDAccelerationStructureBase.OuterSingleton;
}

