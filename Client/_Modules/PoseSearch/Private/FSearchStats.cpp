// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 2

// operator== @ 14a8e4da0

bool __thiscall UE::PoseSearch::FSearchStats::operator==(FSearchStats *this,FSearchStats *param_1)

{
  if ((((param_1->AverageSpeed == this->AverageSpeed) && (param_1->MaxSpeed == this->MaxSpeed)) &&
      (param_1->AverageAcceleration == this->AverageAcceleration)) &&
     (param_1->MaxAcceleration == this->MaxAcceleration)) {
    return true;
  }
  return false;
}

// Reset @ 14a907610

void __thiscall UE::PoseSearch::FSearchStats::Reset(FSearchStats *this)

{
  this->AverageSpeed = 0.0;
  this->MaxSpeed = 0.0;
  this->AverageAcceleration = 0.0;
  this->MaxAcceleration = 0.0;
  return;
}

