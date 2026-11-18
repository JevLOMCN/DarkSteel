// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// operator_bool @ 1470f9de0

bool __thiscall UE::Trace::FChannel::operator_bool(FChannel *this)

{
  return (bool)((byte)((uint)this->Enabled >> 0x1f) ^ 1);
}

