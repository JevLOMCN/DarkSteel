// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// IsValidData @ 14b9fa480

bool __thiscall FDS_TargetInfo::IsValidData(FDS_TargetInfo *this)

{
  return this->bIsValid;
}

// ResetData @ 14ba184d0

void __thiscall FDS_TargetInfo::ResetData(FDS_TargetInfo *this)

{
  undefined8 uVar1;
  
  this->bIsValid = false;
  this->bIsForcedSetTarget = false;
  this->TargetEntityID = 0;
  this->TargetHitSphereID = 0;
  this->TargetRadius = 0.0;
  this->DistanceOnSelected = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetLocationOnSelected).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetLocationOnSelected).field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetLocationOnSelected).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ForcedTargetLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ForcedTargetLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->ForcedTargetLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

