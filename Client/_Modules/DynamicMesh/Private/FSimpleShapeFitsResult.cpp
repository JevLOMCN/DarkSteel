// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// FSimpleShapeFitsResult @ 14c897c40

FSimpleShapeFitsResult * __thiscall
UE::Geometry::FSimpleShapeFitsResult::FSimpleShapeFitsResult(FSimpleShapeFitsResult *this)

{
  undefined8 uVar1;
  
  this->bHaveSphere = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Sphere).Center.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Sphere).Center.field0_0x0._s_0.Y = (double)uVar1;
  (this->Sphere).Center.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Sphere).Radius = 0.0;
  (this->Box).Frame.Rotation.field0_0x0._s_0.Z = 0.0;
  (this->Box).Frame.Rotation.field0_0x0._s_0.Y = 0.0;
  (this->Box).Frame.Rotation.field0_0x0._s_0.X = 0.0;
  (this->Box).Frame.Rotation.field0_0x0._s_0.W = 1.0;
  this->bHaveBox = false;
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
  this->bHaveCapsule = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Capsule).Segment.Center.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Capsule).Segment.Center.field0_0x0._s_0.Y = (double)uVar1;
  (this->Capsule).Segment.Center.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  (this->Capsule).Segment.Direction.field0_0x0._s_0.X =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
  (this->Capsule).Segment.Direction.field0_0x0._s_0.Y = (double)uVar1;
  (this->Capsule).Segment.Direction.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  (this->Capsule).Segment.Extent = 0.0;
  (this->Capsule).Radius = 0.0;
  this->bHaveConvex = false;
  FDynamicMesh3::FDynamicMesh3(&this->Convex);
  return this;
}

