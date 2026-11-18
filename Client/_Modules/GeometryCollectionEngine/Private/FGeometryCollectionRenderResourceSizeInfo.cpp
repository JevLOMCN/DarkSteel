// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 1

// StaticStruct @ 14639a560

UScriptStruct * __cdecl FGeometryCollectionRenderResourceSizeInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionRenderResourceSizeInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionEngine();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionRenderResourceSizeInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionRenderResourceSizeInfo,
                         (UObject *)pUVar1,L"GeometryCollectionRenderResourceSizeInfo");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionRenderResourceSizeInfo.OuterSingleton;
}

