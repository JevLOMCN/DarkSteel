// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// BackendName @ 14198e740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FIoStoreTrace::BackendName(IIoDispatcherBackend *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < IoStoreChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FIoStoreBackendNameFields>((TLogScope<1> *)&local_28);
    iVar5 = 0;
    *local_28 = param_1;
    wVar2 = *param_2;
    pwVar1 = param_2;
    while (wVar2 != L'\0') {
      pwVar1 = pwVar1 + 1;
      iVar5 = iVar5 + 1;
      wVar2 = *pwVar1;
    }
    UE::Trace::Private::Field_WriteStringWide(1,param_2,iVar5);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar3 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar3 + 0x20);
    **(undefined1 **)(lVar3 + 0x20) = 6;
    lVar4 = *(longlong *)(lVar3 + 0x20) + 1;
    *(longlong *)(lVar3 + 0x20) = lVar4;
    if (lVar3 != local_20) {
      *(longlong *)(lVar3 + 0x28) = lVar4;
    }
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// RequestCompleted @ 1419a84c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FIoStoreTrace::RequestCompleted(FIoRequestImpl *param_1,ulong64 param_2)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < IoStoreChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FIoStoreRequestCompletedFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1] = (LARGE_INTEGER)param_1;
    local_20[2].QuadPart = param_2;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// RequestCreate @ 1419a8560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl FIoStoreTrace::RequestCreate(FIoBatch *param_1,FIoRequestImpl *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38 [2];
  LARGE_INTEGER *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)((param_2->ChunkId).Id + 8);
  local_38[0] = (LARGE_INTEGER)*(LARGE_INTEGER *)(param_2->ChunkId).Id;
  uVar2 = local_38[0].s.HighPart;
  uVar3 = local_38[0].s.HighPart._2_2_;
  bVar4 = local_38[0].s.HighPart._3_1_;
  uVar6 = (ulonglong)local_38[0] >> 8;
  uVar7 = (ulonglong)local_38[0] >> 0x10;
  uVar8 = (ulonglong)local_38[0] >> 0x18;
  uVar5 = local_38[0].s.LowPart;
  if (-1 < IoStoreChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FIoStoreRequestCreateFields>((TLogScope<0> *)&local_28);
    QueryPerformanceCounter(local_38);
    local_28->QuadPart = (LONGLONG)local_38[0];
    local_28[1] = (LARGE_INTEGER)param_2;
    local_28[2] = (LARGE_INTEGER)param_1;
    local_28[3].s.LowPart =
         (uVar1 >> 0x18) + 0x58a2c485 +
         ((((((uVar2 >> 8 & 0xff) * 0x21 + (uVar3 & 0xff)) * 0x21 + (uint)bVar4) * 0x21 +
           (uVar1 & 0xff)) * 0x21 + (uVar1 >> 8 & 0xff)) * 0x21 + (uVar1 >> 0x10 & 0xff)) * 0x21 +
         (((uint)uVar6 & 0xff) * 0x21 + ((uint)uVar7 & 0xff)) * 0x40a9121 +
         (uVar2 & 0xff) * -0x13be2b1f + ((uint)uVar8 & 0xff) * 0x747c7101 +
         (uVar5 & 0xff) * 0x30f35d61;
    *(uchar *)((longlong)local_28 + 0x1c) = (param_2->ChunkId).Id[0xb];
    *(undefined4 *)((longlong)local_28 + 0x1d) = 0;
    *(ulong64 *)((longlong)local_28 + 0x21) = (param_2->Options).RequestedOffset;
    *(ulong64 *)((longlong)local_28 + 0x29) = (param_2->Options).RequestedSize;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// RequestFailed @ 1419a86f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FIoStoreTrace::RequestFailed(FIoRequestImpl *param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < IoStoreChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FIoStoreRequestFailedFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1] = (LARGE_INTEGER)param_1;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// RequestStarted @ 1419a8780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FIoStoreTrace::RequestStarted(FIoRequestImpl *param_1,IIoDispatcherBackend *param_2)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < IoStoreChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FIoStoreRequestStartedFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1] = (LARGE_INTEGER)param_1;
    local_20[2] = (LARGE_INTEGER)param_2;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// RequestUnresolved @ 1419a8820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FIoStoreTrace::RequestUnresolved(FIoRequestImpl *param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < IoStoreChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FIoStoreRequestUnresolvedFields>((TLogScope<0> *)&local_20)
    ;
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1] = (LARGE_INTEGER)param_1;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

