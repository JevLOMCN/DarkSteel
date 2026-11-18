// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 8

// FProcessor @ 142c97470

FProcessor * __thiscall
UE::Editor::DataStorage::Queries::FProcessor::FProcessor
          (FProcessor *this,EQueryTickPhase param_1,FName param_2)

{
  this->Phase = param_1;
  this->Group = param_2;
  (this->BeforeGroup).ComparisonIndex = 0;
  (this->BeforeGroup).Number = 0;
  (this->AfterGroup).ComparisonIndex = 0;
  (this->AfterGroup).Number = 0;
  (this->ActivationName).ComparisonIndex = 0;
  (this->ActivationName).Number = 0;
  this->ExecutionMode = Default;
  this->bBatchModifications = false;
  return this;
}

// BatchModifications @ 142ca6ec0

FProcessor * __thiscall
UE::Editor::DataStorage::Queries::FProcessor::BatchModifications(FProcessor *this,bool param_1)

{
  this->bBatchModifications = param_1;
  return this;
}

// MakeActivatable @ 142cb0700

FProcessor * __thiscall
UE::Editor::DataStorage::Queries::FProcessor::MakeActivatable(FProcessor *this,FName param_1)

{
  this->ActivationName = param_1;
  return this;
}

// SetAfterGroup @ 142cbaf20

FProcessor * __thiscall
UE::Editor::DataStorage::Queries::FProcessor::SetAfterGroup(FProcessor *this,FName param_1)

{
  this->AfterGroup = param_1;
  return this;
}

// SetBeforeGroup @ 142cbaf30

FProcessor * __thiscall
UE::Editor::DataStorage::Queries::FProcessor::SetBeforeGroup(FProcessor *this,FName param_1)

{
  this->BeforeGroup = param_1;
  return this;
}

// SetExecutionMode @ 142cbb2d0

FProcessor * __thiscall
UE::Editor::DataStorage::Queries::FProcessor::SetExecutionMode
          (FProcessor *this,EExecutionMode param_1)

{
  this->ExecutionMode = param_1;
  return this;
}

// SetGroup @ 142cbb2e0

FProcessor * __thiscall
UE::Editor::DataStorage::Queries::FProcessor::SetGroup(FProcessor *this,FName param_1)

{
  this->Group = param_1;
  return this;
}

// SetPhase @ 142cbb320

FProcessor * __thiscall
UE::Editor::DataStorage::Queries::FProcessor::SetPhase(FProcessor *this,EQueryTickPhase param_1)

{
  this->Phase = param_1;
  return this;
}

