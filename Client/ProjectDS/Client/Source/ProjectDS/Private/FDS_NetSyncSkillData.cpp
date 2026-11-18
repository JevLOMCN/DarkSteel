// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// Clear @ 14ba39680

void __thiscall FDS_NetSyncSkillData::Clear(FDS_NetSyncSkillData *this)

{
  undefined8 uVar1;
  double dVar2;
  
  this->TargetEntityID = 0;
  this->SkillID = 0;
  this->SkillStartTime = 0.0;
  this->SkillEndTime = 0.0;
  this->SkillDuration = 0.0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->SkillRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->SkillRotation).Yaw = dVar2;
  (this->SkillRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DestinationLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DestinationLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->DestinationLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->LocationLerpTime = 0.1;
  this->IsSkillActive = false;
  this->IsCollision = false;
  return;
}

