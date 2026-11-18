// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// HasValidFrameRate @ 148742b70

bool __thiscall
UE::SVT::FStreamingInstanceRequest::HasValidFrameRate(FStreamingInstanceRequest *this)

{
  return (bool)(this->Flags >> 1 & 1);
}

// IsBlocking @ 14874b480

bool __thiscall UE::SVT::FStreamingInstanceRequest::IsBlocking(FStreamingInstanceRequest *this)

{
  return (bool)(this->Flags & Blocking);
}

