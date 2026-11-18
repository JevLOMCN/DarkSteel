// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 1

// ~FThreadStream @ 14d392770

void __thiscall UE::Trace::FTidPacketTransport::FThreadStream::~FThreadStream(FThreadStream *this)

{
  FMemory::Free((void *)(this->Buffer)._padding_);
  return;
}

