// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// StaticStruct @ 14cd9ab40

UScriptStruct * __cdecl FGeometryScriptMeshWriteLOD::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptMeshWriteLOD.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UScriptStruct_FGeometryScriptMeshWriteLOD.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD,(UObject *)pUVar1,
                         L"GeometryScriptMeshWriteLOD");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryScriptMeshWriteLOD.OuterSingleton;
}

