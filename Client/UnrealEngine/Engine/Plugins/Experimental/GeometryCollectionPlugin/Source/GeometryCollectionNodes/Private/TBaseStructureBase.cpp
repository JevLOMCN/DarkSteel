// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 5

// Get @ 14e951e80

UScriptStruct * __cdecl TBaseStructureBase<FDataflowConvexDecompositionSettings,1>::Get(void)

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

// Get @ 14e951ec0

UScriptStruct * __cdecl TBaseStructureBase<FDataflowRootProxyMesh,1>::Get(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowRootProxyMesh.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowRootProxyMesh.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowRootProxyMesh,(UObject *)pUVar1,
                         L"DataflowRootProxyMesh");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowRootProxyMesh.OuterSingleton;
}

// Get @ 14e951f00

UScriptStruct * __cdecl TBaseStructureBase<FDataflowSphereCovering,1>::Get(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSphereCovering.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowSphereCovering.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSphereCovering,(UObject *)pUVar1,
                         L"DataflowSphereCovering");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowSphereCovering.OuterSingleton;
}

// Get @ 14e951f40

UScriptStruct * __cdecl TBaseStructureBase<FGeometryCollectionAutoInstanceMesh,1>::Get(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionAutoInstanceMesh.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionEngine();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionAutoInstanceMesh.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh,
                         (UObject *)pUVar1,L"GeometryCollectionAutoInstanceMesh");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionAutoInstanceMesh.OuterSingleton;
}

// Get @ 14e951f50

UScriptStruct * __cdecl TBaseStructureBase<FGeometryCollectionSource,1>::Get(void)

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

