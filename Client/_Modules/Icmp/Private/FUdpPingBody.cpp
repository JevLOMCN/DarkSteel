// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 2

// HostToNetwork @ 144556aa0

void __thiscall UDPPing::FUdpPingBody::HostToNetwork(FUdpPingBody *this)

{
  u_long uVar1;
  u_long uVar2;
  ulong64 uVar3;
  
  uVar3 = this->TimeCode;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < `HtoNLL'::`2'::_TSS0) {
    _Init_thread_header(&`HtoNLL'::`2'::_TSS0);
    if (`HtoNLL'::`2'::_TSS0 == -1) {
      uVar1 = htonl(1);
      `HtoNLL'::`2'::bNoConvert = uVar1 == 1;
      _Init_thread_footer(&`HtoNLL'::`2'::_TSS0);
    }
  }
  if (`HtoNLL'::`2'::bNoConvert == false) {
    uVar1 = htonl((u_long)uVar3);
    uVar2 = htonl((u_long)(uVar3 >> 0x20));
    uVar3 = CONCAT44(uVar1,uVar2);
  }
  this->TimeCode = uVar3;
  uVar2 = htonl(this->Data[0]);
  uVar1 = this->Data[1];
  this->Data[0] = uVar2;
  uVar1 = htonl(uVar1);
  this->Data[1] = uVar1;
  return;
}

// NetworkToHost @ 144557840

void __thiscall UDPPing::FUdpPingBody::NetworkToHost(FUdpPingBody *this)

{
  u_long uVar1;
  u_long uVar2;
  ulong64 uVar3;
  
  uVar3 = this->TimeCode;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < `NtoHLL'::`2'::_TSS0) {
    _Init_thread_header(&`NtoHLL'::`2'::_TSS0);
    if (`NtoHLL'::`2'::_TSS0 == -1) {
      uVar1 = ntohl(1);
      `NtoHLL'::`2'::bNoConvert = uVar1 == 1;
      _Init_thread_footer(&`NtoHLL'::`2'::_TSS0);
    }
  }
  if (`NtoHLL'::`2'::bNoConvert == false) {
    uVar1 = ntohl((u_long)uVar3);
    uVar2 = ntohl((u_long)(uVar3 >> 0x20));
    uVar3 = CONCAT44(uVar1,uVar2);
  }
  this->TimeCode = uVar3;
  uVar2 = ntohl(this->Data[0]);
  uVar1 = this->Data[1];
  this->Data[0] = uVar2;
  uVar1 = ntohl(uVar1);
  this->Data[1] = uVar1;
  return;
}

