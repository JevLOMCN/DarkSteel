// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 9

// GetStates @ 1432d9830

TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FNullFileOperationTracker::GetStates(FNullFileOperationTracker *this)

{
  return &this->FileOperationStates;
}

// OnDataStateUpdate @ 1432de9c0

/* WARNING: Enum "EFileOperationState": Some values do not have unique names */

void __thiscall
BuildPatchServices::FNullFileOperationTracker::OnDataStateUpdate
          (FNullFileOperationTracker *this,FGuid *param_1,EFileOperationState param_2)

{
  return;
}

// OnDataStateUpdate @ 1432de9d0

/* WARNING: Enum "EFileOperationState": Some values do not have unique names */

void __thiscall
BuildPatchServices::FNullFileOperationTracker::OnDataStateUpdate
          (FNullFileOperationTracker *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1,
          EFileOperationState param_2)

{
  return;
}

// OnDataStateUpdate @ 1432de9e0

/* WARNING: Enum "EFileOperationState": Some values do not have unique names */

void __thiscall
BuildPatchServices::FNullFileOperationTracker::OnDataStateUpdate
          (FNullFileOperationTracker *this,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1,
          EFileOperationState param_2)

{
  return;
}

// OnFileByteRangeStateUpdate @ 1432df700

/* WARNING: Enum "EFileOperationState": Some values do not have unique names */

void __thiscall
BuildPatchServices::FNullFileOperationTracker::OnFileByteRangeStateUpdate
          (FNullFileOperationTracker *this,FString *param_1,
          TTuple<unsigned___int64,unsigned___int64> *param_2,EFileOperationState param_3)

{
  return;
}

// OnFileStateUpdate @ 1432e0160

/* WARNING: Enum "EFileOperationState": Some values do not have unique names */

void __thiscall
BuildPatchServices::FNullFileOperationTracker::OnFileStateUpdate
          (FNullFileOperationTracker *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          EFileOperationState param_2)

{
  return;
}

// OnFileStateUpdate @ 1432e0170

/* WARNING: Enum "EFileOperationState": Some values do not have unique names */

void __thiscall
BuildPatchServices::FNullFileOperationTracker::OnFileStateUpdate
          (FNullFileOperationTracker *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          EFileOperationState param_2)

{
  return;
}

// OnFileStateUpdate @ 1432e0180

/* WARNING: Enum "EFileOperationState": Some values do not have unique names */

void __thiscall
BuildPatchServices::FNullFileOperationTracker::OnFileStateUpdate
          (FNullFileOperationTracker *this,FString *param_1,EFileOperationState param_2)

{
  return;
}

// OnManifestSelection @ 1432e0550

void __thiscall
BuildPatchServices::FNullFileOperationTracker::OnManifestSelection
          (FNullFileOperationTracker *this,IBuildManifestSet *param_1)

{
  return;
}

