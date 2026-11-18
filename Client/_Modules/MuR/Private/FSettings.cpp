// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 3

// SetImageCompressionQuality @ 14ab88030

void __thiscall
UE::Mutable::Private::FSettings::SetImageCompressionQuality(FSettings *this,int param_1)

{
  this->ImageCompressionQuality = param_1;
  return;
}

// SetProfile @ 14ab89c30

void __thiscall UE::Mutable::Private::FSettings::SetProfile(FSettings *this,bool param_1)

{
  this->bProfile = param_1;
  return;
}

// SetWorkingMemoryBytes @ 14ab8be80

void __thiscall
UE::Mutable::Private::FSettings::SetWorkingMemoryBytes(FSettings *this,ulong64 param_1)

{
  this->WorkingMemoryBytes = param_1;
  return;
}

