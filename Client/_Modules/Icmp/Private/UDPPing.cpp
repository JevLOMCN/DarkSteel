// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 4

// CalculatePacketChecksum @ 144554c10

ushort __cdecl UDPPing::CalculatePacketChecksum(uchar *param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == (uchar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PingPacketBuf",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\ICMP\\Private\\UDPPing.cpp"
                       ,0x4a6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (param_2 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BufSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\ICMP\\Private\\UDPPing.cpp"
                       ,0x4a7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0x14) + (uint)*(ushort *)(param_1 + 0x12) +
          (uint)*(ushort *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0xe) +
          (uint)*(ushort *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 10) +
          (uint)*(ushort *)(param_1 + 8) + (uint)*(ushort *)(param_1 + 6) +
          (uint)*(ushort *)(param_1 + 2) + (uint)*(ushort *)param_1;
  iVar5 = (uVar4 & 0xffff) + (uVar4 >> 0x10);
  return ~((short)((uint)iVar5 >> 0x10) + (short)iVar5);
}

// Pack @ 144557a70

bool __cdecl UDPPing::Pack(uchar *param_1,ulong64 param_2,FUdpPingPacket *param_3)

{
  if ((param_1 != (uchar *)0x0) && (0x15 < param_2)) {
    *(ushort *)param_1 = (param_3->Header).Id;
    *(ushort *)(param_1 + 2) = (param_3->Header).Sequence;
    *(ushort *)(param_1 + 4) = (param_3->Header).Checksum;
    *(ulong64 *)(param_1 + 6) = (param_3->Body).TimeCode;
    *(uint *)(param_1 + 0xe) = (param_3->Body).Data[0];
    *(uint *)(param_1 + 0x12) = (param_3->Body).Data[1];
    return true;
  }
  return false;
}

// Unpack @ 14455c980

bool __cdecl UDPPing::Unpack(FUdpPingPacket *param_1,uchar *param_2,ulong64 param_3)

{
  if ((param_2 != (uchar *)0x0) && (0x15 < param_3)) {
    (param_1->Header).Id = *(ushort *)param_2;
    (param_1->Header).Sequence = *(ushort *)(param_2 + 2);
    (param_1->Header).Checksum = *(ushort *)(param_2 + 4);
    (param_1->Body).TimeCode = *(ulong64 *)(param_2 + 6);
    (param_1->Body).Data[0] = *(uint *)(param_2 + 0xe);
    (param_1->Body).Data[1] = *(uint *)(param_2 + 0x12);
    return true;
  }
  return false;
}

// UpdatePacketChecksum @ 14455c9d0

bool __cdecl UDPPing::UpdatePacketChecksum(uchar *param_1,ulong64 param_2,bool param_3)

{
  ushort hostshort;
  uint uVar1;
  int iVar2;
  
  if (param_2 < 0x16) {
    return false;
  }
  param_1[4] = '\0';
  param_1[5] = '\0';
  uVar1 = (uint)*(ushort *)(param_1 + 0x14) + (uint)*(ushort *)(param_1 + 0x12) +
          (uint)*(ushort *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0xe) +
          (uint)*(ushort *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 10) +
          (uint)*(ushort *)(param_1 + 8) + (uint)*(ushort *)(param_1 + 6) +
          (uint)*(ushort *)(param_1 + 2) + (uint)*(ushort *)param_1;
  iVar2 = (uVar1 & 0xffff) + (uVar1 >> 0x10);
  hostshort = ~((short)((uint)iVar2 >> 0x10) + (short)iVar2);
  if (param_3) {
    hostshort = htons(hostshort);
  }
  *(ushort *)(param_1 + 4) = hostshort;
  return true;
}

