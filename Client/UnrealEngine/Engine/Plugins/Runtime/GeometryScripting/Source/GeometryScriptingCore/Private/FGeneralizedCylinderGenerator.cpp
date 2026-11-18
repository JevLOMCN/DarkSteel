// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// FGeneralizedCylinderGenerator @ 14ce26410

FGeneralizedCylinderGenerator * __thiscall
UE::Geometry::FGeneralizedCylinderGenerator::FGeneralizedCylinderGenerator
          (FGeneralizedCylinderGenerator *this)

{
  undefined8 uVar1;
  
  *(undefined2 *)&this->_padding_ = 0x100;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CrossSection).Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CrossSection).Vertices.ArrayNum = 0;
  (this->CrossSection).Vertices.ArrayMax = 0;
  (this->Path).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Path).ArrayNum = 0;
  (this->Path).ArrayMax = 0;
  (this->InitialFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->InitialFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->InitialFrame).Rotation.field0_0x0._s_0.X = 0.0;
  this->_padding_ = (longlong)&___7FGeneralizedCylinderGenerator_Geometry_UE__6B_;
  (this->InitialFrame).Rotation.field0_0x0._s_0.W = 1.0;
  *(undefined1 *)&this->_padding_ = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->InitialFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InitialFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->InitialFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->InitialFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->InitialFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->InitialFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->InitialFrame).Rotation.field0_0x0._s_0.W = 1.0;
  this->StartScale = 1.0;
  this->EndScale = 1.0;
  this->MiterLimit = 1.0;
  (this->PathFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathFrames).ArrayNum = 0;
  (this->PathFrames).ArrayMax = 0;
  (this->PathScales).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathScales).ArrayNum = 0;
  (this->PathScales).ArrayMax = 0;
  this->bCapped = false;
  this->bLoop = false;
  this->CapType = FlatTriangulation;
  this->bAlignFramesToSampledTangents = false;
  this->bUVScaleRelativeWorld = false;
  this->UnitUVInWorldCoordinates = 100.0;
  (this->CrossSectionTexCoord).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CrossSectionTexCoord).ArrayNum = 0;
  (this->CrossSectionTexCoord).ArrayMax = 0;
  (this->PathTexCoord).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathTexCoord).ArrayNum = 0;
  (this->PathTexCoord).ArrayMax = 0;
  return this;
}

