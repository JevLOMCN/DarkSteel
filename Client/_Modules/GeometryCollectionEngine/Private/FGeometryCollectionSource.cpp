// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 1

// StaticStruct @ 146399c70

UScriptStruct * __cdecl FGeometryCollectionSource::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionSource.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionEngine();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionSource.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionSource,(UObject *)pUVar1,
                         L"GeometryCollectionSource");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionSource.OuterSingleton;
}

