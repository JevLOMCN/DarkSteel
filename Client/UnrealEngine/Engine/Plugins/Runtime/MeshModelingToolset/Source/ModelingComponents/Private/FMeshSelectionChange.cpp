// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 3

// Apply @ 14ca78b50

void __thiscall FMeshSelectionChange::Apply(FMeshSelectionChange *this,UObject *param_1)

{
  UMeshSelectionSet *this_00;
  
  this_00 = CastChecked<UMeshSelectionSet,UObject>(param_1);
  if (this->bAdded != false) {
    UMeshSelectionSet::AddIndices(this_00,this->ElementType,&this->Indices);
    return;
  }
  UMeshSelectionSet::RemoveIndices(this_00,this->ElementType,&this->Indices);
  return;
}

// Revert @ 14caa0570

void __thiscall FMeshSelectionChange::Revert(FMeshSelectionChange *this,UObject *param_1)

{
  UMeshSelectionSet *this_00;
  
  this_00 = CastChecked<UMeshSelectionSet,UObject>(param_1);
  if (this->bAdded != false) {
    UMeshSelectionSet::RemoveIndices(this_00,this->ElementType,&this->Indices);
    return;
  }
  UMeshSelectionSet::AddIndices(this_00,this->ElementType,&this->Indices);
  return;
}

// ToString @ 14caa7400

FString * __thiscall
FMeshSelectionChange::ToString(FMeshSelectionChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Mesh Selection Change");
  return __return_storage_ptr__;
}

