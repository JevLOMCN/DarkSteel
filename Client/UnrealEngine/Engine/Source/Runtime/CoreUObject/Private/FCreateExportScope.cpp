// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FCreateExportScope @ 141f21000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCreateExportScope * __thiscall
FLoadTimeProfilerTracePrivate::FCreateExportScope::FCreateExportScope
          (FCreateExportScope *this,void *param_1,UObject **param_2)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  this->Object = param_2;
  if (-1 < LoadTimeChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FLoadTimeBeginCreateExportFields>
              ((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1] = (LARGE_INTEGER)param_1;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return this;
}

// ~FCreateExportScope @ 141f23950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLoadTimeProfilerTracePrivate::FCreateExportScope::~FCreateExportScope(FCreateExportScope *this)

{
  LONGLONG LVar1;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < LoadTimeChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FLoadTimeEndCreateExportFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1] = *(LARGE_INTEGER *)this->Object;
    LVar1 = 0;
    if (*this->Object != (UObject *)0x0) {
      LVar1 = *(LONGLONG *)&(*this->Object)->field_0x10;
    }
    local_20[2].QuadPart = LVar1;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

