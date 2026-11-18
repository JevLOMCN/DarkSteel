// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 2

// FGeometryCollectionCreationParameters @ 14635c690

FGeometryCollectionCreationParameters * __thiscall
FGeometryCollectionCreationParameters::FGeometryCollectionCreationParameters
          (FGeometryCollectionCreationParameters *this,FGeometryCollection *param_1,bool param_2,
          bool param_3)

{
  this->ReCalculateNormals = param_2;
  this->ReCalculateTangents = param_3;
  this->GeometryCollection = param_1;
  return this;
}

// ~FGeometryCollectionCreationParameters @ 14635eca0

void __thiscall
FGeometryCollectionCreationParameters::~FGeometryCollectionCreationParameters
          (FGeometryCollectionCreationParameters *this)

{
  if (this->ReCalculateNormals != false) {
    GeometryCollectionEngineUtility::ComputeNormals(this->GeometryCollection);
  }
  if (this->ReCalculateTangents != false) {
    GeometryCollectionEngineUtility::ComputeTangents(this->GeometryCollection);
  }
  return;
}

