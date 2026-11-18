// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 2

// StaticStruct @ 1463486d0

UScriptStruct * __cdecl FGeomComponentCacheParameters::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeomComponentCacheParameters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionEngine();
    Z_Registration_Info_UScriptStruct_FGeomComponentCacheParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeomComponentCacheParameters,(UObject *)pUVar1,
                         L"GeomComponentCacheParameters");
  }
  return Z_Registration_Info_UScriptStruct_FGeomComponentCacheParameters.OuterSingleton;
}

// FGeomComponentCacheParameters @ 14635c620

FGeomComponentCacheParameters * __thiscall
FGeomComponentCacheParameters::FGeomComponentCacheParameters(FGeomComponentCacheParameters *this)

{
  this->CacheMode = None;
  (this->TargetCache).field0_0x0.DebugPtr = (UGeometryCollectionCache *)0x0;
  this->ReverseCacheBeginTime = 0.0;
  this->SaveCollisionData = false;
  this->DoGenerateCollisionData = false;
  this->DoCollisionDataSpatialHash = false;
  this->SaveBreakingData = false;
  this->DoGenerateBreakingData = false;
  this->DoBreakingDataSpatialHash = false;
  this->SaveTrailingData = false;
  this->DoGenerateTrailingData = false;
  this->CollisionDataSizeMax = 0x200;
  this->CollisionDataSpatialHashRadius = 50.0;
  this->MaxCollisionPerCell = 1;
  this->BreakingDataSizeMax = 0x200;
  this->BreakingDataSpatialHashRadius = 50.0;
  this->MaxBreakingPerCell = 1;
  this->TrailingDataSizeMax = 0x200;
  this->TrailingMinSpeedThreshold = 200.0;
  this->TrailingMinVolumeThreshold = 10000.0;
  return this;
}

