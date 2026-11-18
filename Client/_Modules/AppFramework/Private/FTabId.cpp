// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// FTabId @ 142f36e00

FTabId * __thiscall FTabId::FTabId(FTabId *this,FName param_1)

{
  this->TabType = param_1;
  this->InstanceId = -1;
  this->Flags = SaveLayout;
  return this;
}

