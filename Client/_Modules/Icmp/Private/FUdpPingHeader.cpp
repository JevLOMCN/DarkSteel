// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 2

// HostToNetwork @ 144556b70

void __thiscall UDPPing::FUdpPingHeader::HostToNetwork(FUdpPingHeader *this)

{
  u_short uVar1;
  
  uVar1 = htons(this->Id);
  this->Id = uVar1;
  uVar1 = htons(this->Sequence);
  this->Sequence = uVar1;
  return;
}

// NetworkToHost @ 144557910

void __thiscall UDPPing::FUdpPingHeader::NetworkToHost(FUdpPingHeader *this)

{
  u_short uVar1;
  
  uVar1 = ntohs(this->Id);
  this->Id = uVar1;
  uVar1 = ntohs(this->Sequence);
  this->Sequence = uVar1;
  return;
}

