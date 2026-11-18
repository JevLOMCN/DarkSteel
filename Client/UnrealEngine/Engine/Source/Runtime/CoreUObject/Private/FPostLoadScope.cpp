// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FPostLoadScope @ 141f21d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPostLoadScope * __thiscall
FLoadTimeProfilerTracePrivate::FPostLoadScope::FPostLoadScope(FPostLoadScope *this)

{
  undefined1 auStack_48 [32];
  TLogScope<0> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < LoadTimeChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FLoadTimeBeginPostLoadFields>(&local_28);
    *(undefined8 *)(local_28._8_8_ + 0x28) = *(undefined8 *)(local_28._8_8_ + 0x20);
  }
  return this;
}

// ~FPostLoadScope @ 141f23c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FLoadTimeProfilerTracePrivate::FPostLoadScope::~FPostLoadScope(FPostLoadScope *this)

{
  undefined1 auStack_48 [32];
  TLogScope<0> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < LoadTimeChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FLoadTimeEndPostLoadFields>(&local_28);
    *(undefined8 *)(local_28._8_8_ + 0x28) = *(undefined8 *)(local_28._8_8_ + 0x20);
  }
  return;
}

