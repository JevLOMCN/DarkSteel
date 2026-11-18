// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 20

// ReportAnsiName @ 1441e82e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNetTraceReporter::ReportAnsiName(uint param_1,uint param_2,char *param_3)

{
  longlong lVar1;
  size_t sVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  uint *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceNameEventFields>((TLogScope<1> *)&local_28);
    *local_28 = param_1;
    if ((int)param_2 < 0) {
      sVar2 = strlen(param_3);
      param_2 = (uint)sVar2;
    }
    UE::Trace::Private::Field_WriteStringAnsi(1,param_3,param_2);
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0x20);
    **(undefined1 **)(lVar1 + 0x20) = 6;
    lVar3 = *(longlong *)(lVar1 + 0x20) + 1;
    *(longlong *)(lVar1 + 0x20) = lVar3;
    if (lVar1 != local_20) {
      *(longlong *)(lVar1 + 0x28) = lVar3;
    }
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// ReportConnectionClosed @ 1441e83d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNetTraceReporter::ReportConnectionClosed(uint param_1,uint param_2)

{
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceConnectionClosedEventFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = (short)param_2;
    *(char *)(local_28 + 1) = (char)param_1;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// ReportConnectionCreated @ 1441e8450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNetTraceReporter::ReportConnectionCreated(uint param_1,uint param_2)

{
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceConnectionCreatedEventFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = (short)param_2;
    *(char *)(local_28 + 1) = (char)param_1;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// ReportConnectionStateUpdated @ 1441e84d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FNetTraceReporter::ReportConnectionStateUpdated(uint param_1,uint param_2,uchar param_3)

{
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceConnectionStateUpdatedEventFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = (short)param_2;
    *(char *)(local_28 + 1) = (char)param_1;
    *(uchar *)((longlong)local_28 + 3) = param_3;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// ReportConnectionUpdated @ 1441e8560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FNetTraceReporter::ReportConnectionUpdated
          (uint param_1,uint param_2,wchar_t *param_3,wchar_t *param_4)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceConnectionUpdatedEventFields>
              ((TLogScope<1> *)&local_38);
    *(char *)(local_38 + 1) = (char)param_1;
    *local_38 = (short)param_2;
    iVar5 = 0;
    wVar1 = *param_4;
    iVar6 = iVar5;
    pwVar3 = param_4;
    while (wVar1 != L'\0') {
      pwVar3 = pwVar3 + 1;
      iVar6 = iVar6 + 1;
      wVar1 = *pwVar3;
    }
    UE::Trace::Private::Field_WriteStringWide(2,param_4,iVar6);
    wVar1 = *param_3;
    pwVar3 = param_3;
    while (wVar1 != L'\0') {
      pwVar3 = pwVar3 + 1;
      iVar5 = iVar5 + 1;
      wVar1 = *pwVar3;
    }
    UE::Trace::Private::Field_WriteStringWide(3,param_3,iVar5);
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
    **(undefined1 **)(lVar2 + 0x20) = 6;
    lVar4 = *(longlong *)(lVar2 + 0x20) + 1;
    *(longlong *)(lVar2 + 0x20) = lVar4;
    if (lVar2 != local_30) {
      *(longlong *)(lVar2 + 0x28) = lVar4;
    }
    *(undefined8 *)(local_30 + 0x28) = *(undefined8 *)(local_30 + 0x20);
  }
  return;
}

// ReportFrameStatsCounter @ 1441e8680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNetTraceReporter::ReportFrameStatsCounter(uint param_1,uint param_2,uint param_3)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceFrameStatsCounterEventFields>
              ((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1].s.LowPart = param_3;
    *(uint *)((longlong)local_20 + 0xc) = param_2;
    *(char *)(local_20 + 2) = (char)param_1;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// ReportInitEvent @ 1441e8730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNetTraceReporter::ReportInitEvent(uint param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceInitEventFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1].s.LowPart = param_1;
    *(uint *)((longlong)local_20 + 0xc) = NetTraceReporterVersion;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// ReportInstanceDestroyed @ 1441e87c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNetTraceReporter::ReportInstanceDestroyed(uint param_1)

{
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceInstanceDestroyedEventFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = (char)param_1;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// ReportInstanceUpdated @ 1441e8830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNetTraceReporter::ReportInstanceUpdated(uint param_1,bool param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceInstanceUpdatedEventFields>
              ((TLogScope<1> *)&local_28);
    iVar5 = 0;
    *local_28 = (char)param_1;
    local_28[1] = param_2;
    wVar1 = *param_3;
    pwVar3 = param_3;
    while (wVar1 != L'\0') {
      pwVar3 = pwVar3 + 1;
      iVar5 = iVar5 + 1;
      wVar1 = *pwVar3;
    }
    UE::Trace::Private::Field_WriteStringWide(2,param_3,iVar5);
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
    **(undefined1 **)(lVar2 + 0x20) = 6;
    lVar4 = *(longlong *)(lVar2 + 0x20) + 1;
    *(longlong *)(lVar2 + 0x20) = lVar4;
    if (lVar2 != local_20) {
      *(longlong *)(lVar2 + 0x28) = lVar4;
    }
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// ReportObjectCreated @ 1441e8930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FNetTraceReporter::ReportObjectCreated
          (uint param_1,ulong64 param_2,uint param_3,ulong64 param_4,uint param_5)

{
  undefined1 auStack_48 [32];
  ulong64 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceObjectCreatedEventFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = param_4;
    local_28[1] = param_2;
    *(uint *)(local_28 + 2) = param_5;
    *(uint *)((longlong)local_28 + 0x14) = param_3;
    *(char *)(local_28 + 3) = (char)param_1;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// ReportObjectDestroyed @ 1441e89e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNetTraceReporter::ReportObjectDestroyed(uint param_1,ulong64 param_2)

{
  undefined1 auStack_48 [32];
  ulong64 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceObjectDestroyedEventFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = param_2;
    *(char *)(local_28 + 1) = (char)param_1;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// ReportObjectExists @ 1441e8a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FNetTraceReporter::ReportObjectExists
          (uint param_1,ulong64 param_2,uint param_3,ulong64 param_4,uint param_5)

{
  undefined1 auStack_48 [32];
  ulong64 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceObjectExistsEventFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = param_4;
    local_28[1] = param_2;
    *(uint *)(local_28 + 2) = param_5;
    *(uint *)((longlong)local_28 + 0x14) = param_3;
    *(char *)(local_28 + 3) = (char)param_1;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// ReportObjectPolled @ 1441e8b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FNetTraceReporter::ReportObjectPolled(uint param_1,ulong64 param_2,ulong64 param_3,bool param_4)

{
  undefined1 auStack_48 [32];
  ulong64 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceObjectPolledEventFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = param_2;
    local_28[1] = param_3;
    *(bool *)(local_28 + 2) = param_4;
    *(char *)((longlong)local_28 + 0x11) = (char)param_1;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// ReportObjectQuantized @ 1441e8bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNetTraceReporter::ReportObjectQuantized(uint param_1,ulong64 param_2,ulong64 param_3)

{
  undefined1 auStack_48 [32];
  ulong64 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceObjectQuantizedEventFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = param_2;
    local_28[1] = param_3;
    *(char *)(local_28 + 2) = (char)param_1;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// ReportObjectWritten @ 1441e8c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNetTraceReporter::ReportObjectWritten(uint param_1,ulong64 param_2,ulong64 param_3)

{
  undefined1 auStack_48 [32];
  ulong64 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceObjectWrittenEventFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = param_2;
    local_28[1] = param_3;
    *(char *)(local_28 + 2) = (char)param_1;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// ReportPacket @ 1441e8cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNetTraceReporter::ReportPacket(FNetTracePacketInfo *param_1,uint param_2)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTracePacketEventFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1].s.LowPart = param_2;
    *(uint *)((longlong)local_20 + 0xc) = param_1->PacketSequenceNumber;
    *(ushort *)(local_20 + 2) = param_1->ConnectionId;
    *(char *)((longlong)local_20 + 0x12) = (char)param_1->GameInstanceId;
    *(ENetTracePacketType *)((longlong)local_20 + 0x13) = param_1->PacketType;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// ReportPacketContent @ 1441e8d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FNetTraceReporter::ReportPacketContent
          (FNetTracePacketContentEvent *param_1,uint param_2,FNetTracePacketInfo *param_3)

{
  FNetTracePacketContentEvent *pFVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  byte bVar8;
  byte bVar9;
  ulonglong uVar10;
  ulong64 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  int iVar18;
  undefined1 auStack_c98 [32];
  ushort *local_c78;
  longlong local_c70;
  ushort *local_c68;
  longlong local_c60;
  byte local_c58 [2];
  byte local_c56 [3102];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c98;
  uVar12 = 0;
  pbVar15 = local_c58;
  if (((int)param_2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (param_1 != param_1 + (int)param_2) {
    plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    pbVar17 = &param_1->NestingLevel;
    do {
      pbVar14 = pbVar15;
      if (0xc04 < (longlong)pbVar15 - (longlong)local_c58) {
        if (-1 < NetChannel->Enabled) {
          UE::Trace::Private::FLogScope::Enter<FNetTracePacketContentEventFields>
                    ((TLogScope<1> *)&local_c78);
          *local_c78 = param_3->ConnectionId;
          *(char *)(local_c78 + 1) = (char)param_3->GameInstanceId;
          *(ENetTracePacketType *)((longlong)local_c78 + 3) = param_3->PacketType;
          UE::Trace::Private::Field_WriteAuxData
                    (3,local_c58,(int)pbVar15 - (int)local_c58 & 0x7ffff);
          lVar4 = *plVar2;
          if (*(char *)(lVar4 + 0x9d48) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar4 = *(longlong *)(lVar4 + 0x20);
          **(undefined1 **)(lVar4 + 0x20) = 6;
          lVar7 = *(longlong *)(lVar4 + 0x20) + 1;
          *(longlong *)(lVar4 + 0x20) = lVar7;
          if (lVar4 != local_c70) {
            *(longlong *)(lVar4 + 0x28) = lVar7;
          }
          *(undefined8 *)(local_c70 + 0x28) = *(undefined8 *)(local_c70 + 0x20);
        }
        pbVar14 = local_c58;
        uVar12 = 0;
      }
      *pbVar14 = pbVar17[-4];
      pbVar15 = pbVar14 + 1;
      bVar8 = pbVar17[-4];
      iVar18 = (int)pbVar15;
      if (bVar8 == 0) {
        *pbVar15 = *pbVar17;
        pbVar15 = pbVar14 + 2;
        uVar11 = (((FNetTracePacketContentEvent *)(pbVar17 + -0xf))->field0_0x0).ObjectId;
        do {
          bVar8 = 0;
          bVar9 = (byte)uVar11;
          if (0x7f < uVar11) {
            bVar8 = 0x80;
          }
          uVar11 = uVar11 >> 7;
          *pbVar15 = bVar8 | bVar9 & 0x7f;
          pbVar15 = pbVar15 + 1;
        } while (uVar11 != 0);
        uVar10 = (ulonglong)(*(uint *)(pbVar17 + -7) & 0xffffff);
        uVar12 = uVar10 - uVar12;
        do {
          bVar8 = 0;
          bVar9 = (byte)uVar12;
          if (0x7f < uVar12) {
            bVar8 = 0x80;
          }
          uVar12 = uVar12 >> 7;
          *pbVar15 = bVar8 | bVar9 & 0x7f;
          pbVar15 = pbVar15 + 1;
        } while (uVar12 != 0);
        uVar13 = (*(uint *)(pbVar17 + -3) & 0xffffff) - uVar10;
        do {
          bVar8 = 0;
          bVar9 = (byte)uVar13;
          if (0x7f < uVar13) {
            bVar8 = 0x80;
          }
          uVar13 = uVar13 >> 7;
          *pbVar15 = bVar8 | bVar9 & 0x7f;
          pbVar15 = pbVar15 + 1;
          iVar18 = (int)pbVar15;
          uVar12 = uVar10;
        } while (uVar13 != 0);
      }
      else if (bVar8 == 1) {
        *pbVar15 = *pbVar17;
        pbVar15 = pbVar14 + 2;
        uVar10 = (ulonglong)
                 (((FNetTracePacketContentEvent *)(pbVar17 + -0xf))->field0_0x0).DebugNameId;
        do {
          bVar8 = 0;
          bVar9 = (byte)uVar10;
          if (0x7f < uVar10) {
            bVar8 = 0x80;
          }
          uVar10 = uVar10 >> 7;
          *pbVar15 = bVar8 | bVar9 & 0x7f;
          pbVar15 = pbVar15 + 1;
        } while (uVar10 != 0);
        uVar10 = (ulonglong)(*(uint *)(pbVar17 + -7) & 0xffffff);
        uVar12 = uVar10 - uVar12;
        do {
          bVar8 = 0;
          bVar9 = (byte)uVar12;
          if (0x7f < uVar12) {
            bVar8 = 0x80;
          }
          uVar12 = uVar12 >> 7;
          *pbVar15 = bVar8 | bVar9 & 0x7f;
          pbVar15 = pbVar15 + 1;
        } while (uVar12 != 0);
        uVar13 = (*(uint *)(pbVar17 + -3) & 0xffffff) - uVar10;
        do {
          bVar8 = 0;
          bVar9 = (byte)uVar13;
          if (0x7f < uVar13) {
            bVar8 = 0x80;
          }
          uVar13 = uVar13 >> 7;
          *pbVar15 = bVar8 | bVar9 & 0x7f;
          pbVar15 = pbVar15 + 1;
          iVar18 = (int)pbVar15;
          uVar12 = uVar10;
        } while (uVar13 != 0);
      }
      else if (bVar8 == 2) {
        uVar12 = (ulonglong)
                 (((FNetTracePacketContentEvent *)(pbVar17 + -0xf))->field0_0x0).DebugNameId;
        pbVar16 = pbVar15;
        pbVar14 = pbVar14 + 2;
        do {
          pbVar15 = pbVar14;
          bVar8 = 0;
          bVar9 = (byte)uVar12;
          if (0x7f < uVar12) {
            bVar8 = 0x80;
          }
          uVar12 = uVar12 >> 7;
          *pbVar16 = bVar8 | bVar9 & 0x7f;
          pbVar16 = pbVar15;
          pbVar14 = pbVar15 + 1;
        } while (uVar12 != 0);
        uVar12 = (ulonglong)(*(uint *)(pbVar17 + -3) & 0xffffff);
        do {
          bVar8 = 0;
          bVar9 = (byte)uVar12;
          if (0x7f < uVar12) {
            bVar8 = 0x80;
          }
          uVar12 = uVar12 >> 7;
          *pbVar15 = bVar8 | bVar9 & 0x7f;
          pbVar15 = pbVar15 + 1;
          iVar18 = (int)pbVar15;
        } while (uVar12 != 0);
        uVar12 = 0;
      }
      else if (bVar8 == 3) {
        uVar3 = *(uint *)(pbVar17 + -3);
        uVar10 = (ulonglong)(*(uint *)(pbVar17 + -7) & 0xffffff);
        pbVar16 = pbVar15;
        pbVar14 = pbVar14 + 2;
        do {
          pbVar15 = pbVar14;
          bVar8 = 0;
          bVar9 = (byte)uVar10;
          if (0x7f < uVar10) {
            bVar8 = 0x80;
          }
          uVar10 = uVar10 >> 7;
          *pbVar16 = bVar8 | bVar9 & 0x7f;
          pbVar16 = pbVar15;
          pbVar14 = pbVar15 + 1;
        } while (uVar10 != 0);
        uVar10 = (ulonglong)(uVar3 & 0xffffff);
        do {
          bVar9 = (byte)uVar10;
          bVar8 = 0;
          if (0x7f < uVar10) {
            bVar8 = 0x80;
          }
          uVar10 = uVar10 >> 7;
          *pbVar15 = bVar8 | bVar9 & 0x7f;
          pbVar15 = pbVar15 + 1;
          iVar18 = (int)pbVar15;
        } while (uVar10 != 0);
        if ((uVar3 & 0xffffff) != 0) {
          uVar11 = (((FNetTracePacketContentEvent *)(pbVar17 + -0xf))->field0_0x0).ObjectId;
          do {
            bVar8 = 0;
            bVar9 = (byte)uVar11;
            if (0x7f < uVar11) {
              bVar8 = 0x80;
            }
            uVar11 = uVar11 >> 7;
            *pbVar15 = bVar8 | bVar9 & 0x7f;
            pbVar15 = pbVar15 + 1;
            iVar18 = (int)pbVar15;
          } while (uVar11 != 0);
        }
      }
      pFVar1 = (FNetTracePacketContentEvent *)(pbVar17 + 1);
      pbVar17 = pbVar17 + 0x10;
    } while (pFVar1 != param_1 + (int)param_2);
    if ((local_c58 < pbVar15) && (-1 < NetChannel->Enabled)) {
      UE::Trace::Private::FLogScope::Enter<FNetTracePacketContentEventFields>
                ((TLogScope<1> *)&local_c68);
      *local_c68 = param_3->ConnectionId;
      *(char *)(local_c68 + 1) = (char)param_3->GameInstanceId;
      *(ENetTracePacketType *)((longlong)local_c68 + 3) = param_3->PacketType;
      UE::Trace::Private::Field_WriteAuxData(3,local_c58,iVar18 - (int)local_c58 & 0x7ffff);
      lVar4 = *plVar2;
      if (*(char *)(lVar4 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar4 = *(longlong *)(lVar4 + 0x20);
      **(undefined1 **)(lVar4 + 0x20) = 6;
      lVar7 = *(longlong *)(lVar4 + 0x20) + 1;
      *(longlong *)(lVar4 + 0x20) = lVar7;
      if (lVar4 != local_c60) {
        *(longlong *)(lVar4 + 0x28) = lVar7;
      }
      *(undefined8 *)(local_c60 + 0x28) = *(undefined8 *)(local_c60 + 0x20);
    }
  }
  return;
}

// ReportPacketDropped @ 1441e9270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNetTraceReporter::ReportPacketDropped(FNetTracePacketInfo *param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTracePacketDroppedEventFields>
              ((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1].s.LowPart = param_1->PacketSequenceNumber;
    *(ushort *)((longlong)local_20 + 0xc) = param_1->ConnectionId;
    *(char *)((longlong)local_20 + 0xe) = (char)param_1->GameInstanceId;
    *(ENetTracePacketType *)((longlong)local_20 + 0xf) = param_1->PacketType;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// ReportPacketStatsCounter @ 1441e9310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FNetTraceReporter::ReportPacketStatsCounter(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined1 auStack_48 [32];
  uint *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTracePacketStatsCounterEventFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = param_4;
    local_28[1] = param_3;
    *(short *)(local_28 + 2) = (short)param_2;
    *(char *)((longlong)local_28 + 10) = (char)param_1;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// ReportSubObject @ 1441e93b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNetTraceReporter::ReportSubObject(uint param_1,ulong64 param_2,ulong64 param_3)

{
  undefined1 auStack_48 [32];
  ulong64 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceSubObjectEventFields>((TLogScope<0> *)&local_28);
    *local_28 = param_2;
    local_28[1] = param_3;
    *(char *)(local_28 + 2) = (char)param_1;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

