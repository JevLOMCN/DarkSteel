// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ~FMoveableType @ 1418beff0

void __thiscall Tests::FMoveableType::~FMoveableType(FMoveableType *this)

{
  this->_padding_ = (longlong)&___7FMoveableType_Tests__6B_;
  if (this->bOwnsLeak != false) {
    *LeakCount = *LeakCount + -1;
  }
  return;
}

