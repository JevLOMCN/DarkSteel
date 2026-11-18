// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 2

// GetBufferSize @ 14ab71920

ulong64 __thiscall UE::Mutable::Private::FOutputSizeStream::GetBufferSize(FOutputSizeStream *this)

{
  return this->WrittenBytes;
}

// Write @ 14ab8e670

void __thiscall
UE::Mutable::Private::FOutputSizeStream::Write
          (FOutputSizeStream *this,void *param_1,ulong64 param_2)

{
  this->WrittenBytes = this->WrittenBytes + param_2;
  return;
}

