// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralMeshComponent
// Functions: 1

// StaticStruct @ 14d261e00

UScriptStruct * __cdecl FProcMeshTangent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FProcMeshTangent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProceduralMeshComponent();
    Z_Registration_Info_UScriptStruct_FProcMeshTangent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FProcMeshTangent,(UObject *)pUVar1,
                         L"ProcMeshTangent");
  }
  return Z_Registration_Info_UScriptStruct_FProcMeshTangent.OuterSingleton;
}

