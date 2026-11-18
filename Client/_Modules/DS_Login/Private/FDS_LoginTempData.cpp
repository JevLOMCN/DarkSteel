// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DS_Login
// Functions: 1

// FDS_LoginTempData @ 14c2656d0

FDS_LoginTempData * __thiscall FDS_LoginTempData::FDS_LoginTempData(FDS_LoginTempData *this)

{
  ::FString::FString(&this->ID,L"");
  ::FString::FString(&this->Password,L"");
  ::FString::FString(&this->SessionUID,L"");
  this->WorldId = 0;
  this->PlayerUID = 0;
  ::FString::FString(&this->JwtKey,L"");
  this->CharID = 0;
  return this;
}

