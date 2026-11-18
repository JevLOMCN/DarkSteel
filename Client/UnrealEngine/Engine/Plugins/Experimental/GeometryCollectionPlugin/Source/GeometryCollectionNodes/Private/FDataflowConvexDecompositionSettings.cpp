// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 1

// StaticStruct @ 14e8ab010

UScriptStruct * __cdecl FDataflowConvexDecompositionSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowConvexDecompositionSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowConvexDecompositionSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings,
                         (UObject *)pUVar1,L"DataflowConvexDecompositionSettings");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowConvexDecompositionSettings.OuterSingleton;
}

