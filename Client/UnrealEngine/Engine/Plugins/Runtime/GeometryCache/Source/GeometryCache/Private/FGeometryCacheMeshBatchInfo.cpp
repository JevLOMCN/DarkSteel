// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 1

// StaticStruct @ 14c9ff590

UScriptStruct * __cdecl FGeometryCacheMeshBatchInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCacheMeshBatchInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCache();
    Z_Registration_Info_UScriptStruct_FGeometryCacheMeshBatchInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo,(UObject *)pUVar1,
                         L"GeometryCacheMeshBatchInfo");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCacheMeshBatchInfo.OuterSingleton;
}

