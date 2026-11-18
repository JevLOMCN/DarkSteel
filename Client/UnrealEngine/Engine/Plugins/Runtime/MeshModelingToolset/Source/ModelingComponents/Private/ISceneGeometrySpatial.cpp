// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 2

// ISceneGeometrySpatial @ 14cb624f0

ISceneGeometrySpatial * __thiscall
UE::Geometry::ISceneGeometrySpatial::ISceneGeometrySpatial(ISceneGeometrySpatial *this)

{
  atomic<int> aVar1;
  
  this->SpatialID = 0;
  this->_padding_ = (longlong)&___7ISceneGeometrySpatial_Geometry_UE__6B_;
  LOCK();
  UNLOCK();
  aVar1 = (atomic<int>)((int)UniqueIDGenerator + 1);
  this->SpatialID = (int)UniqueIDGenerator;
  UniqueIDGenerator = aVar1;
  return this;
}

// ~ISceneGeometrySpatial @ 14cb64c30

void __thiscall
UE::Geometry::ISceneGeometrySpatial::~ISceneGeometrySpatial(ISceneGeometrySpatial *this)

{
  this->_padding_ = (longlong)&___7ISceneGeometrySpatial_Geometry_UE__6B_;
  return;
}

