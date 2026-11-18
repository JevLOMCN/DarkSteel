// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// AllocAndCopyCounterName @ 141925e10

wchar_t * __cdecl FCountersTrace::AllocAndCopyCounterName(wchar_t *param_1)

{
  undefined1 auVar1 [16];
  size_t sVar2;
  ulong64 uVar3;
  wchar_t *_Dest;
  
  sVar2 = wcslen(param_1);
  sVar2 = (size_t)(int)sVar2;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = sVar2 + 1;
  uVar3 = SUB168(ZEXT816(2) * auVar1,0);
  if (SUB168(ZEXT816(2) * auVar1,8) != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  _Dest = operator_new__(uVar3);
  wcsncpy(_Dest,param_1,sVar2);
  _Dest[sVar2] = L'\0';
  return _Dest;
}

// FreeCounterName @ 141943b00

void __cdecl FCountersTrace::FreeCounterName(wchar_t *param_1)

{
  FLowLevelMemTracker *this;
  
  if (param_1 != (wchar_t *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,param_1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::FreeExternal(param_1);
      return;
    }
    DoGamethreadHook(2);
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,param_1);
  }
  return;
}

// OutputInitCounter @ 1419591f0

ushort __cdecl
FCountersTrace::OutputInitCounter
          (wchar_t *param_1,ETraceCounterType param_2,ETraceCounterDisplayHint param_3)

{
  code *pcVar1;
  atomic<unsigned_int> aVar2;
  wchar_t wVar3;
  bool bVar4;
  size_t sVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint uVar8;
  ushort uVar9;
  FImportantLogScope local_18;
  
  if (CountersChannel->Enabled < 0) {
    return 0;
  }
  LOCK();
  aVar2 = (atomic<unsigned_int>)((int)NextId + 1);
  UNLOCK();
  uVar9 = NextId._0_2_ + 1;
  NextId = aVar2;
  if ((param_1 == (wchar_t *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CounterName",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CountersTrace.cpp"
                         ,0x35,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return uVar9;
  }
  sVar5 = wcslen(param_1);
  if (-1 < CountersChannel->Enabled) {
    uVar7 = sVar5 & 0xffff;
    uVar8 = (uint)uVar7;
    UE::Trace::Private::FImportantLogScope::Enter<FCountersSpecFields>(&local_18,uVar8);
    puVar6 = (uint *)((longlong)local_18.Ptr + (longlong)local_18.AuxCursor);
    *(ushort *)local_18.Ptr = uVar9;
    *(ETraceCounterType *)((longlong)local_18.Ptr + 2) = param_2;
    *(ETraceCounterDisplayHint *)((longlong)local_18.Ptr + 3) = param_3;
    *puVar6 = uVar8 << 0xd | 0x300;
    *(undefined1 *)puVar6 = 1;
    puVar6 = puVar6 + 1;
    if (uVar8 != 0) {
      do {
        wVar3 = *param_1;
        param_1 = param_1 + 1;
        *(char *)puVar6 = (char)wVar3;
        puVar6 = (uint *)((longlong)puVar6 + 1);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    *(undefined1 *)((longlong)(int)(local_18.AuxCursor + uVar8) + 4 + (longlong)local_18.Ptr) = 3;
    LOCK();
    *(int *)((longlong)local_18.BufferOffset + (longlong)local_18.Ptr) =
         *(int *)((longlong)local_18.BufferOffset + (longlong)local_18.Ptr) + 1;
    UNLOCK();
  }
  return uVar9;
}

// OutputSetValue @ 141959610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FCountersTrace::OutputSetValue(ushort param_1,double param_2)

{
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  LARGE_INTEGER *local_30;
  longlong local_28;
  ulonglong local_20;
  
  if ((param_1 != 0) &&
     (local_20 = __security_cookie.value ^ (ulonglong)auStack_58, -1 < CountersChannel->Enabled)) {
    UE::Trace::Private::FLogScope::Enter<FCountersSetValueFloatFields>((TLogScope<0> *)&local_30);
    QueryPerformanceCounter(&local_38);
    *local_30 = local_38;
    local_30[1] = (LARGE_INTEGER)param_2;
    *(ushort *)(local_30 + 2) = param_1;
    *(undefined8 *)(local_28 + 0x28) = *(undefined8 *)(local_28 + 0x20);
  }
  return;
}

// OutputSetValue @ 1419596c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FCountersTrace::OutputSetValue(ushort param_1,long64 param_2)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  if ((param_1 != 0) &&
     (local_10 = __security_cookie.value ^ (ulonglong)auStack_48, -1 < CountersChannel->Enabled)) {
    UE::Trace::Private::FLogScope::Enter<FCountersSetValueIntFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1].QuadPart = param_2;
    *(ushort *)(local_20 + 2) = param_1;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

