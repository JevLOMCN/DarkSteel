// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 2

// StaticStruct @ 146399dd0

UScriptStruct * __cdecl FGeometryCollectionCollisionParticleData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionCollisionParticleData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionEngine();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionCollisionParticleData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData,
                         (UObject *)pUVar1,L"GeometryCollectionCollisionParticleData");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionCollisionParticleData.OuterSingleton;
}

// FGeometryCollectionCollisionParticleData @ 1463a1470

FGeometryCollectionCollisionParticleData * __thiscall
FGeometryCollectionCollisionParticleData::FGeometryCollectionCollisionParticleData
          (FGeometryCollectionCollisionParticleData *this)

{
  this->CollisionParticlesFraction = 1.0;
  this->MaximumCollisionParticles = 0x3c;
  return this;
}

