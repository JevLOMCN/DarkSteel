// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 2

// StaticStruct @ 146399e10

UScriptStruct * __cdecl FGeometryCollectionCollisionTypeData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionCollisionTypeData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionEngine();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionCollisionTypeData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData,
                         (UObject *)pUVar1,L"GeometryCollectionCollisionTypeData");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionCollisionTypeData.OuterSingleton;
}

// FGeometryCollectionCollisionTypeData @ 1463a1490

FGeometryCollectionCollisionTypeData * __thiscall
FGeometryCollectionCollisionTypeData::FGeometryCollectionCollisionTypeData
          (FGeometryCollectionCollisionTypeData *this)

{
  this->CollisionType = Chaos_Volumetric;
  this->ImplicitType = Chaos_Implicit_Convex;
  this->CollisionMarginFraction = 0.0;
  (this->LevelSet).MinLevelSetResolution = 5;
  (this->LevelSet).MaxLevelSetResolution = 10;
  (this->LevelSet).MinClusterLevelSetResolution = 0x19;
  (this->LevelSet).MaxClusterLevelSetResolution = 0x32;
  (this->CollisionParticles).CollisionParticlesFraction = 1.0;
  *(undefined8 *)&(this->CollisionParticles).MaximumCollisionParticles = 0x3c;
  return this;
}

