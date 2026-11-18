// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// FCurvedStairGenerator @ 14ce26390

FCurvedStairGenerator * __thiscall
UE::Geometry::FCurvedStairGenerator::FCurvedStairGenerator(FCurvedStairGenerator *this)

{
  FStairGenerator::FStairGenerator((FStairGenerator *)this);
  this->InnerRadius = 150.0;
  this->_padding_ = (longlong)&___7FCurvedStairGenerator_Geometry_UE__6B_;
  this->CurveRadians = 0.0;
  this->CurveRadiansPerStep = 0.0;
  this->OuterRadius = 0.0;
  this->CurveAngle = 90.0;
  this->bIsClockwise = true;
  this->RadiusRatio = 1.0;
  *(undefined8 *)&(this->BackNormal).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->BackNormal).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)&this->_padding_ = 0;
  return this;
}

