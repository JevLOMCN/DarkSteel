// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 5

// FPhaseAmble @ 142c97450

FPhaseAmble * __thiscall
UE::Editor::DataStorage::Queries::FPhaseAmble::FPhaseAmble
          (FPhaseAmble *this,ELocation param_1,EQueryTickPhase param_2)

{
  this->Phase = param_2;
  (this->ActivationName).ComparisonIndex = 0;
  (this->ActivationName).Number = 0;
  this->ExecutionMode = Default;
  this->Location = param_1;
  return this;
}

// MakeActivatable @ 142cb06f0

FPhaseAmble * __thiscall
UE::Editor::DataStorage::Queries::FPhaseAmble::MakeActivatable(FPhaseAmble *this,FName param_1)

{
  this->ActivationName = param_1;
  return this;
}

// SetExecutionMode @ 142cbb2c0

FPhaseAmble * __thiscall
UE::Editor::DataStorage::Queries::FPhaseAmble::SetExecutionMode
          (FPhaseAmble *this,EExecutionMode param_1)

{
  this->ExecutionMode = param_1;
  return this;
}

// SetLocation @ 142cbb2f0

FPhaseAmble * __thiscall
UE::Editor::DataStorage::Queries::FPhaseAmble::SetLocation(FPhaseAmble *this,ELocation param_1)

{
  this->Location = param_1;
  return this;
}

// SetPhase @ 142cbb310

FPhaseAmble * __thiscall
UE::Editor::DataStorage::Queries::FPhaseAmble::SetPhase(FPhaseAmble *this,EQueryTickPhase param_1)

{
  this->Phase = param_1;
  return this;
}

