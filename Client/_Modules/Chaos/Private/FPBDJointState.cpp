// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FPBDJointState @ 143c44b50

FPBDJointState * __thiscall Chaos::FPBDJointState::FPBDJointState(FPBDJointState *this)

{
  this->Island = -1;
  this->Level = -1;
  this->IslandSize = 0;
  this->bDisabled = false;
  this->bBroken = false;
  this->bBreaking = false;
  this->bDriveTargetChanged = false;
  *(undefined8 *)&this->LinearImpulse = 0;
  *(undefined8 *)&(this->LinearImpulse).field_0x8 = 0;
  *(undefined8 *)&(this->LinearImpulse).field_0x10 = 0;
  *(undefined8 *)&this->AngularImpulse = 0;
  *(undefined8 *)&(this->AngularImpulse).field_0x8 = 0;
  *(undefined8 *)&(this->AngularImpulse).field_0x10 = 0;
  this->ResimType = FullResim;
  this->SyncState = InSync;
  this->Color = -1;
  this->bEnabledDuringResim = true;
  return this;
}

