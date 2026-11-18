// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 1

// ~FOversubscriptionAllowedScope @ 14266a2e0

void __thiscall
LowLevelTasks::Private::FOversubscriptionAllowedScope::~FOversubscriptionAllowedScope
          (FOversubscriptionAllowedScope *this)

{
  *this->bValue = this->bPreviousValue;
  return;
}

