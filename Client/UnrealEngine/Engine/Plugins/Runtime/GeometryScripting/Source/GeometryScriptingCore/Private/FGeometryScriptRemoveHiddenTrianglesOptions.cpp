// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// StaticStruct @ 14ce1f520

UScriptStruct * __cdecl FGeometryScriptRemoveHiddenTrianglesOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions,
                         (UObject *)pUVar1,L"GeometryScriptRemoveHiddenTrianglesOptions");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions.
         OuterSingleton;
}

