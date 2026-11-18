// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// FObjectInfo @ 1442f6280

FObjectInfo * __thiscall UE::Net::FWorldLocations::FObjectInfo::FObjectInfo(FObjectInfo *this)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorldLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WorldLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->WorldLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->CullDistance = 0.0;
  this->CullDistanceOverride = 3.4028235e+38;
  return this;
}

