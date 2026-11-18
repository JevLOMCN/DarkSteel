// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 2

// GetLatestNetworkStatistics @ 14d04e840

/* WARNING: Removing unreachable block (ram,0x00014d04e9e6) */

TOptional<FMessageTransportStatistics> * __cdecl
UE::LiveLinkHub::FClientNetworkStatisticsModel::GetLatestNetworkStatistics
          (TOptional<FMessageTransportStatistics> *__return_storage_ptr__,FMessageAddress *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ulong64 uVar3;
  INetworkMessagingExtension *pIVar4;
  ulong64 *puVar5;
  int local_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  ulong64 local_198;
  ulong64 local_190;
  ulong64 local_188;
  ulong64 local_180;
  ulong64 local_178;
  ulong64 local_170;
  ulong64 local_168;
  ulong64 local_160;
  ulong64 local_158;
  uint local_150;
  ulong64 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130;
  int local_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  undefined1 local_118 [88];
  void *local_c0;
  
  pIVar4 = LiveLinkHub::Private::GetMessagingStatistics();
  if ((pIVar4 == (INetworkMessagingExtension *)0x0) ||
     ((**(code **)((longlong)*pIVar4 + 0x30))(pIVar4,&local_1a8,param_1),
     ((iStack_19c == 0 && iStack_1a0 == 0) && iStack_1a4 == 0) && local_1a8 == 0)) {
    __return_storage_ptr__->bIsSet = false;
  }
  else {
    local_128 = local_1a8;
    iStack_124 = iStack_1a4;
    iStack_120 = iStack_1a0;
    iStack_11c = iStack_19c;
    puVar5 = (ulong64 *)(**(code **)((longlong)*pIVar4 + 0x28))(pIVar4,local_118,&local_128);
    local_198 = *puVar5;
    local_190 = puVar5[1];
    local_188 = puVar5[2];
    local_180 = puVar5[3];
    local_178 = puVar5[4];
    pFVar2 = (FScriptContainerElement *)puVar5[0xb];
    local_170 = puVar5[5];
    local_168 = puVar5[6];
    local_160 = puVar5[7];
    local_158 = puVar5[8];
    local_150 = (uint)puVar5[9];
    local_148 = puVar5[10];
    puVar5[0xb] = 0;
    uVar3 = puVar5[0xc];
    iVar1 = *(int *)((longlong)puVar5 + 100);
    puVar5[0xc] = 0;
    __return_storage_ptr__->bIsSet = true;
    (__return_storage_ptr__->TypedValue).TotalBytesSent = local_198;
    (__return_storage_ptr__->TypedValue).TotalBytesLost = local_190;
    (__return_storage_ptr__->TypedValue).TotalBytesReceived = local_188;
    (__return_storage_ptr__->TypedValue).BytesInflight = local_180;
    (__return_storage_ptr__->TypedValue).PacketsSent = local_178;
    (__return_storage_ptr__->TypedValue).PacketsLost = local_170;
    (__return_storage_ptr__->TypedValue).PacketsAcked = local_168;
    (__return_storage_ptr__->TypedValue).PacketsReceived = local_160;
    (__return_storage_ptr__->TypedValue).PacketsInFlight = local_158;
    (__return_storage_ptr__->TypedValue).WindowSize = local_150;
    (__return_storage_ptr__->TypedValue).AverageRTT.Ticks = local_148;
    (__return_storage_ptr__->TypedValue).IPv4AsString.Data.AllocatorInstance.Data = pFVar2;
    (__return_storage_ptr__->TypedValue).IPv4AsString.Data.ArrayNum = (int)uVar3;
    (__return_storage_ptr__->TypedValue).IPv4AsString.Data.ArrayMax = iVar1;
    local_130 = 1;
    local_138 = 0;
    local_140 = 0;
    if (local_c0 != (void *)0x0) {
      FMemory::Free(local_c0);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// IsOnline @ 14d05fad0

bool __cdecl UE::LiveLinkHub::FClientNetworkStatisticsModel::IsOnline(FMessageAddress *param_1)

{
  INetworkMessagingExtension *pIVar1;
  int *piVar2;
  undefined1 local_18 [16];
  
  pIVar1 = LiveLinkHub::Private::GetMessagingStatistics();
  if (pIVar1 != (INetworkMessagingExtension *)0x0) {
    piVar2 = (int *)(**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,local_18,param_1);
    if (((piVar2[3] != 0 || piVar2[2] != 0) || piVar2[1] != 0) || *piVar2 != 0) {
      return true;
    }
  }
  return false;
}

