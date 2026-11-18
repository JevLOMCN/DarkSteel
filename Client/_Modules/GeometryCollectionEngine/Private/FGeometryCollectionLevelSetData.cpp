// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 2

// StaticStruct @ 146399d90

UScriptStruct * __cdecl FGeometryCollectionLevelSetData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionLevelSetData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionEngine();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionLevelSetData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData,(UObject *)pUVar1
                         ,L"GeometryCollectionLevelSetData");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionLevelSetData.OuterSingleton;
}

// FGeometryCollectionLevelSetData @ 1463a1900

FGeometryCollectionLevelSetData * __thiscall
FGeometryCollectionLevelSetData::FGeometryCollectionLevelSetData
          (FGeometryCollectionLevelSetData *this)

{
  this->MinLevelSetResolution = 5;
  this->MaxLevelSetResolution = 10;
  this->MinClusterLevelSetResolution = 0x19;
  this->MaxClusterLevelSetResolution = 0x32;
  return this;
}

