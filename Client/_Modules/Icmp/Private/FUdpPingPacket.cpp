// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 4

// Create @ 1445556f0

FUdpPingPacket * __cdecl
UDPPing::FUdpPingPacket::Create
          (FUdpPingPacket *__return_storage_ptr__,ushort param_1,ushort param_2)

{
  LARGE_INTEGER local_res8 [4];
  
  *(undefined8 *)&(__return_storage_ptr__->Header).Checksum = 0;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Body).TimeCode + 4) = 0;
  (__return_storage_ptr__->Header).Id = param_1;
  (__return_storage_ptr__->Header).Sequence = param_2;
  (__return_storage_ptr__->Body).Data[0] = 0xaaaaaaaa;
  (__return_storage_ptr__->Body).Data[1] = 0xbbbbbbbb;
  QueryPerformanceCounter(local_res8);
  (__return_storage_ptr__->Body).TimeCode = (ulong64)local_res8[0];
  return __return_storage_ptr__;
}

// HostToNetwork @ 144556ba0

void __thiscall UDPPing::FUdpPingPacket::HostToNetwork(FUdpPingPacket *this)

{
  u_short uVar1;
  u_long uVar2;
  u_long uVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  
  uVar1 = htons((this->Header).Id);
  (this->Header).Id = uVar1;
  uVar1 = htons((this->Header).Sequence);
  uVar4 = (ulonglong)_tls_index;
  (this->Header).Sequence = uVar1;
  uVar5 = (this->Body).TimeCode;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0x9d4c) <
      `HtoNLL'::`2'::_TSS0) {
    _Init_thread_header(&`HtoNLL'::`2'::_TSS0);
    if (`HtoNLL'::`2'::_TSS0 == -1) {
      uVar2 = htonl(1);
      `HtoNLL'::`2'::bNoConvert = uVar2 == 1;
      _Init_thread_footer(&`HtoNLL'::`2'::_TSS0);
    }
  }
  if (`HtoNLL'::`2'::bNoConvert == false) {
    uVar2 = htonl((u_long)uVar5);
    uVar3 = htonl((u_long)(uVar5 >> 0x20));
    uVar5 = CONCAT44(uVar2,uVar3);
  }
  (this->Body).TimeCode = uVar5;
  uVar3 = htonl((this->Body).Data[0]);
  uVar2 = (this->Body).Data[1];
  (this->Body).Data[0] = uVar3;
  uVar2 = htonl(uVar2);
  (this->Body).Data[1] = uVar2;
  return;
}

// NetworkToHost @ 144557940

void __thiscall UDPPing::FUdpPingPacket::NetworkToHost(FUdpPingPacket *this)

{
  u_short uVar1;
  u_long uVar2;
  u_long uVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  
  uVar1 = ntohs((this->Header).Id);
  (this->Header).Id = uVar1;
  uVar1 = ntohs((this->Header).Sequence);
  uVar4 = (ulonglong)_tls_index;
  (this->Header).Sequence = uVar1;
  uVar5 = (this->Body).TimeCode;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0x9d4c) <
      `NtoHLL'::`2'::_TSS0) {
    _Init_thread_header(&`NtoHLL'::`2'::_TSS0);
    if (`NtoHLL'::`2'::_TSS0 == -1) {
      uVar2 = ntohl(1);
      `NtoHLL'::`2'::bNoConvert = uVar2 == 1;
      _Init_thread_footer(&`NtoHLL'::`2'::_TSS0);
    }
  }
  if (`NtoHLL'::`2'::bNoConvert == false) {
    uVar2 = ntohl((u_long)uVar5);
    uVar3 = ntohl((u_long)(uVar5 >> 0x20));
    uVar5 = CONCAT44(uVar2,uVar3);
  }
  (this->Body).TimeCode = uVar5;
  uVar3 = ntohl((this->Body).Data[0]);
  uVar2 = (this->Body).Data[1];
  (this->Body).Data[0] = uVar3;
  uVar2 = ntohl(uVar2);
  (this->Body).Data[1] = uVar2;
  return;
}

// Validate @ 14455ca60

bool __thiscall
UDPPing::FUdpPingPacket::Validate(FUdpPingPacket *this,ushort param_1,ushort param_2)

{
  if (((((this->Header).Id == param_1) && ((this->Header).Sequence == param_2)) &&
      ((this->Body).Data[0] == 0xaaaaaaaa)) &&
     (((this->Body).Data[1] == 0xbbbbbbbb && ((this->Body).TimeCode != 0)))) {
    return true;
  }
  return false;
}

