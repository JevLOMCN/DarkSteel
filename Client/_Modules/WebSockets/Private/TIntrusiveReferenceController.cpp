// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebSockets
// Functions: 1

// DestroyObject @ 14b3fb5c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLwsWebSocket,1>::DestroyObject
          (TIntrusiveReferenceController<FLwsWebSocket,1> *this)

{
  FLwsWebSocket::~FLwsWebSocket((FLwsWebSocket *)&this->ObjectStorage);
  return;
}

