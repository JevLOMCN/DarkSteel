// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// BeginClose @ 14198e830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FPlatformFileTrace::BeginClose(ulong64 param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < FileChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FPlatformFileBeginCloseFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1].QuadPart = param_1;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// BeginOpen @ 14198e8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FPlatformFileTrace::BeginOpen(wchar_t *param_1)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  longlong lVar3;
  size_t sVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  sVar4 = wcslen(param_1);
  iVar6 = (int)sVar4;
  if (-1 < FileChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FPlatformFileBeginOpenFields>((TLogScope<1> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    if (iVar6 < 0) {
      iVar6 = 0;
      wVar2 = *param_1;
      pwVar1 = param_1;
      while (wVar2 != L'\0') {
        pwVar1 = pwVar1 + 1;
        iVar6 = iVar6 + 1;
        wVar2 = *pwVar1;
      }
    }
    UE::Trace::Private::Field_WriteStringWide(1,param_1,iVar6);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar3 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar3 + 0x20);
    **(undefined1 **)(lVar3 + 0x20) = 6;
    lVar5 = *(longlong *)(lVar3 + 0x20) + 1;
    *(longlong *)(lVar3 + 0x20) = lVar5;
    if (lVar3 != local_18) {
      *(longlong *)(lVar3 + 0x28) = lVar5;
    }
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// BeginReOpen @ 14198e9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FPlatformFileTrace::BeginReOpen(ulong64 param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < FileChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FPlatformFileBeginReOpenFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1].QuadPart = param_1;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// BeginRead @ 14198ea60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPlatformFileTrace::BeginRead(ulong64 param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < FileChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FPlatformFileBeginReadFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1].QuadPart = param_1;
    local_20[2].QuadPart = param_2;
    local_20[3].QuadPart = param_3;
    local_20[4].QuadPart = param_4;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// BeginWrite @ 14198eb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPlatformFileTrace::BeginWrite(ulong64 param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < FileChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FPlatformFileBeginWriteFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1].QuadPart = param_1;
    local_20[2].QuadPart = param_2;
    local_20[3].QuadPart = param_3;
    local_20[4].QuadPart = param_4;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// EndClose @ 141993510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FPlatformFileTrace::EndClose(ulong64 param_1)

{
  TAtomic<int> TVar1;
  bool bVar2;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < FileChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FPlatformFileEndCloseFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  LOCK();
  TVar1 = (TAtomic<int>)((int)OpenFileHandleCount + -1);
  UNLOCK();
  bVar2 = OpenFileHandleCount == (TAtomic<int>)0x0;
  OpenFileHandleCount = TVar1;
  if (bVar2) {
    if (1 < (byte)LogCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
    }
    LOCK();
    OpenFileHandleCount = (TAtomic<int>)((int)OpenFileHandleCount + 1);
    UNLOCK();
  }
  return;
}

// EndOpen @ 1419935c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FPlatformFileTrace::EndOpen(ulong64 param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < FileChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FPlatformFileEndOpenFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1].QuadPart = param_1;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  LOCK();
  OpenFileHandleCount = (TAtomic<int>)((int)OpenFileHandleCount + 1);
  UNLOCK();
  return;
}

// EndReOpen @ 141993650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FPlatformFileTrace::EndReOpen(ulong64 param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < FileChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FPlatformFileEndReOpenFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1].QuadPart = param_1;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  LOCK();
  OpenFileHandleCount = (TAtomic<int>)((int)OpenFileHandleCount + 1);
  UNLOCK();
  return;
}

// EndRead @ 1419936e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FPlatformFileTrace::EndRead(ulong64 param_1,ulong64 param_2)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < FileChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FPlatformFileEndReadFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1].QuadPart = param_1;
    local_20[2].QuadPart = param_2;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// EndWrite @ 141993780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FPlatformFileTrace::EndWrite(ulong64 param_1,ulong64 param_2)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < FileChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FPlatformFileEndWriteFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1].QuadPart = param_1;
    local_20[2].QuadPart = param_2;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// FailClose @ 141993af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FPlatformFileTrace::FailClose(ulong64 param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < FileChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FPlatformFileEndCloseFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// FailOpen @ 141993b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FPlatformFileTrace::FailOpen(wchar_t *param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < FileChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FPlatformFileEndOpenFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1].QuadPart = -1;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// GetOpenFileHandleCount @ 141995580

uint __cdecl FPlatformFileTrace::GetOpenFileHandleCount(void)

{
  return (uint)OpenFileHandleCount;
}

