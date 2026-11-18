// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FSerializeExportScope @ 141f224b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSerializeExportScope * __thiscall
FLoadTimeProfilerTracePrivate::FSerializeExportScope::FSerializeExportScope
          (FSerializeExportScope *this,UObject *param_1,ulong64 param_2)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < LoadTimeChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FLoadTimeBeginSerializeExportFields>
              ((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1] = (LARGE_INTEGER)param_1;
    local_20[2].QuadPart = param_2;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return this;
}

// ~FSerializeExportScope @ 141f23d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLoadTimeProfilerTracePrivate::FSerializeExportScope::~FSerializeExportScope
          (FSerializeExportScope *this)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < LoadTimeChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FLoadTimeEndSerializeExportFields>
              ((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

