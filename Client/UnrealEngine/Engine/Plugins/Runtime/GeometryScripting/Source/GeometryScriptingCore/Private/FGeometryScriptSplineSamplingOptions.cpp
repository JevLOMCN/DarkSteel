// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// StaticStruct @ 14cea87b0

UScriptStruct * __cdecl FGeometryScriptSplineSamplingOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptSplineSamplingOptions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UScriptStruct_FGeometryScriptSplineSamplingOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions,
                         (UObject *)pUVar1,L"GeometryScriptSplineSamplingOptions");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryScriptSplineSamplingOptions.OuterSingleton;
}

