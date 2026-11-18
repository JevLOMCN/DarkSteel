// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// StaticStruct @ 14ce1e600

UScriptStruct * __cdecl FGeometryScriptSpatialQueryOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptSpatialQueryOptions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UScriptStruct_FGeometryScriptSpatialQueryOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions,
                         (UObject *)pUVar1,L"GeometryScriptSpatialQueryOptions");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryScriptSpatialQueryOptions.OuterSingleton;
}

