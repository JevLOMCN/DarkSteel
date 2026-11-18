// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FConstraintData @ 14388ace0

FConstraintData * __thiscall
Chaos::Private::FCharacterGroundConstraintSolver::FConstraintData::FConstraintData
          (FConstraintData *this)

{
  *(undefined8 *)&this->CharacterInvI = 0;
  *(undefined8 *)&(this->CharacterInvI).field_0x8 = 0;
  *(undefined8 *)&(this->CharacterInvI).field_0x10 = 0;
  *(undefined8 *)&(this->CharacterInvI).field_0x18 = 0;
  *(undefined8 *)&(this->CharacterInvI).field_0x20 = 0;
  *(undefined8 *)&(this->CharacterInvI).field_0x28 = 0;
  *(undefined8 *)&(this->CharacterInvI).field_0x30 = 0;
  *(undefined8 *)&(this->CharacterInvI).field_0x38 = 0;
  *(undefined8 *)&this->GroundInvI = 0;
  *(undefined8 *)&(this->GroundInvI).field_0x8 = 0;
  *(undefined8 *)&(this->GroundInvI).field_0x10 = 0;
  *(undefined8 *)&(this->GroundInvI).field_0x18 = 0;
  *(undefined8 *)&(this->GroundInvI).field_0x20 = 0;
  *(undefined8 *)&(this->GroundInvI).field_0x28 = 0;
  *(undefined8 *)&(this->GroundInvI).field_0x30 = 0;
  *(undefined8 *)&(this->GroundInvI).field_0x38 = 0;
  *(undefined8 *)&this->Normal = 0;
  *(undefined4 *)&(this->VerticalAxis).field_0x4 = 0;
  *(undefined8 *)&(this->Normal).field_0x8 = 0x3f800000;
  *(undefined4 *)&(this->VerticalAxis).field_0x8 = 0x3f800000;
  this->CharacterInvM = -1.0;
  return this;
}

// IsValid @ 1438c3c10

bool __thiscall
Chaos::Private::FCharacterGroundConstraintSolver::FConstraintData::IsValid(FConstraintData *this)

{
  return 0.0 < this->CharacterInvM;
}

