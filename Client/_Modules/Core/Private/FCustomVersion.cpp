// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// GetFriendlyName @ 1419fe430

FName __thiscall FCustomVersion::GetFriendlyName(FCustomVersion *this)

{
  FName FVar1;
  FName in_RDX;
  TOptional<FCustomVersion> local_38;
  
  if (this->FriendlyName == (FName)0x0) {
    FCurrentCustomVersions::Get(&local_38,&this->Key);
    if (local_38.bIsSet != false) {
      FVar1 = GetFriendlyName(&local_38.TypedValue);
      this->FriendlyName = *(FName *)FVar1;
    }
  }
  *(FName *)in_RDX = this->FriendlyName;
  return in_RDX;
}

