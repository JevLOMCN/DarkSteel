// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 1

// StaticStruct @ 14639a090

UScriptStruct * __cdecl FGeometryCollectionProxyMeshMaterials::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionProxyMeshMaterials.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionEngine();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionProxyMeshMaterials.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionProxyMeshMaterials,
                         (UObject *)pUVar1,L"GeometryCollectionProxyMeshMaterials");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionProxyMeshMaterials.OuterSingleton;
}

