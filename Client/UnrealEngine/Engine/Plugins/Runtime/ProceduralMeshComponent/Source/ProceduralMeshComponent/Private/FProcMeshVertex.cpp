// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralMeshComponent
// Functions: 1

// StaticStruct @ 14d261f60

UScriptStruct * __cdecl FProcMeshVertex::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FProcMeshVertex.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProceduralMeshComponent();
    Z_Registration_Info_UScriptStruct_FProcMeshVertex.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FProcMeshVertex,(UObject *)pUVar1,
                         L"ProcMeshVertex");
  }
  return Z_Registration_Info_UScriptStruct_FProcMeshVertex.OuterSingleton;
}

