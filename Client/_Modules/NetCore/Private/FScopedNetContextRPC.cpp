// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 2

// FScopedNetContextRPC @ 1441d26c0

FScopedNetContextRPC * __thiscall
UE::Net::FScopedNetContextRPC::FScopedNetContextRPC(FScopedNetContextRPC *this)

{
  FNetContext::bIsInRPCStack = true;
  return this;
}

// ~FScopedNetContextRPC @ 1441d43e0

void __thiscall UE::Net::FScopedNetContextRPC::~FScopedNetContextRPC(FScopedNetContextRPC *this)

{
  FNetContext::bIsInRPCStack = false;
  return;
}

