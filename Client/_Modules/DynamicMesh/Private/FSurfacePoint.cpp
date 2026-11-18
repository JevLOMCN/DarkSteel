// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 4

// FSurfacePoint @ 14c6e00a0

FSurfacePoint * __thiscall
UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint::FSurfacePoint
          (FSurfacePoint *this,int param_1)

{
  this->PositionType = Vertex;
  (this->Position).EdgePosition.EdgeID = param_1;
  return this;
}

// FSurfacePoint @ 14c6e00c0

FSurfacePoint * __thiscall
UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint::FSurfacePoint
          (FSurfacePoint *this,int param_1,TVector<double> *param_2)

{
  double dVar1;
  
  (this->Position).EdgePosition.EdgeID = param_1;
  this->PositionType = Triangle;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->Position).EdgePosition.Alpha = (param_2->field0_0x0)._s_0.X;
  *(double *)((longlong)&this->Position + 0x10) = dVar1;
  *(double *)((longlong)&this->Position + 0x18) = (param_2->field0_0x0)._s_0.Z;
  return this;
}

// FSurfacePoint @ 14c6e00f0

FSurfacePoint * __thiscall
UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint::FSurfacePoint
          (FSurfacePoint *this,int param_1,double param_2)

{
  (this->Position).EdgePosition.Alpha = param_2;
  this->PositionType = Edge;
  (this->Position).EdgePosition.EdgeID = param_1;
  return this;
}

// FSurfacePoint @ 14c6e0110

FSurfacePoint * __thiscall
UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint::FSurfacePoint(FSurfacePoint *this)

{
  this->PositionType = Vertex;
  (this->Position).EdgePosition.EdgeID = -1;
  return this;
}

