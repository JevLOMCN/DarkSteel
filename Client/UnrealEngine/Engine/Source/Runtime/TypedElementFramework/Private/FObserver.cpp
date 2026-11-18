// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 5

// FObserver @ 142c97370

FObserver * __thiscall
UE::Editor::DataStorage::Queries::FObserver::FObserver
          (FObserver *this,EEvent param_1,UScriptStruct *param_2)

{
  this->Monitor = param_2;
  (this->ActivationName).ComparisonIndex = 0;
  (this->ActivationName).Number = 0;
  this->ExecutionMode = Default;
  this->Event = param_1;
  return this;
}

// MakeActivatable @ 142cb06e0

FObserver * __thiscall
UE::Editor::DataStorage::Queries::FObserver::MakeActivatable(FObserver *this,FName param_1)

{
  this->ActivationName = param_1;
  return this;
}

// SetEvent @ 142cbb2a0

FObserver * __thiscall
UE::Editor::DataStorage::Queries::FObserver::SetEvent(FObserver *this,EEvent param_1)

{
  this->Event = param_1;
  return this;
}

// SetExecutionMode @ 142cbb2b0

FObserver * __thiscall
UE::Editor::DataStorage::Queries::FObserver::SetExecutionMode
          (FObserver *this,EExecutionMode param_1)

{
  this->ExecutionMode = param_1;
  return this;
}

// SetMonitoredColumn @ 142cbb300

FObserver * __thiscall
UE::Editor::DataStorage::Queries::FObserver::SetMonitoredColumn
          (FObserver *this,UScriptStruct *param_1)

{
  this->Monitor = param_1;
  return this;
}

