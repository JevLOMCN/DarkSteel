// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// Update @ 14705a4a0

bool __thiscall FAITestCommand_WaitOneTick::Update(FAITestCommand_WaitOneTick *this)

{
  if (this->bAlreadyRun == false) {
    this->bAlreadyRun = true;
    return true;
  }
  return false;
}

