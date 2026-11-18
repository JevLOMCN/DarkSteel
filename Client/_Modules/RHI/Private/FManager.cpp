// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// FManager @ 145c86200

FManager * __thiscall FRHIDrawStatsCategory::FManager::FManager(FManager *this)

{
  this->NumCategory = 0;
  memset(this,0,0xf8);
  memset(&this->DisplayCounts,0,0x3e0);
  return this;
}

