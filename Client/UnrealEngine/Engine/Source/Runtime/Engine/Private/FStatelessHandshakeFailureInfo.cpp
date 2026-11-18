// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FStatelessHandshakeFailureInfo @ 14808ac20

FStatelessHandshakeFailureInfo * __thiscall
UE::Net::FStatelessHandshakeFailureInfo::FStatelessHandshakeFailureInfo
          (FStatelessHandshakeFailureInfo *this)

{
  this->FailureReason = None;
  this->RemoteNetworkVersion = 0;
  this->RemoteNetworkFeatures = None;
  return this;
}

