// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// StaticStruct @ 14cd9a140

UScriptStruct * __cdecl FGeometryScriptFlareWarpOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptFlareWarpOptions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UScriptStruct_FGeometryScriptFlareWarpOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions,(UObject *)pUVar1
                         ,L"GeometryScriptFlareWarpOptions");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryScriptFlareWarpOptions.OuterSingleton;
}

