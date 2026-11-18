// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// FGridBoxMeshGenerator @ 14c897100

FGridBoxMeshGenerator * __thiscall
UE::Geometry::FGridBoxMeshGenerator::FGridBoxMeshGenerator(FGridBoxMeshGenerator *this)

{
  undefined8 uVar1;
  
  this->_padding_ = (longlong)&___7FGridBoxMeshGenerator_Geometry_UE__6B_;
  (this->Box).Frame.Rotation.field0_0x0._s_0.W = 1.0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Box).Frame.Rotation.field0_0x0._s_0.Z = 0.0;
  (this->Box).Frame.Rotation.field0_0x0._s_0.Y = 0.0;
  (this->Box).Frame.Rotation.field0_0x0._s_0.X = 0.0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Box).Frame.Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Box).Frame.Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->Box).Frame.Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Box).Frame.Rotation.field0_0x0._s_0.X = 0.0;
  (this->Box).Frame.Rotation.field0_0x0._s_0.Y = 0.0;
  (this->Box).Frame.Rotation.field0_0x0._s_0.Z = 0.0;
  (this->Box).Frame.Rotation.field0_0x0._s_0.W = 1.0;
  (this->Box).Extents.field0_0x0._s_0.X = 1.0;
  (this->Box).Extents.field0_0x0._s_0.Y = 1.0;
  (this->Box).Extents.field0_0x0._s_0.Z = 1.0;
  (this->EdgeVertices).field0_0x0._s_0.A = 8;
  (this->EdgeVertices).field0_0x0._s_0.B = 8;
  (this->EdgeVertices).field0_0x0._s_0.C = 8;
  this->bScaleUVByAspectRatio = true;
  this->bPolygroupPerQuad = false;
  return this;
}

