// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ~FRequestGroupScope @ 1419d2c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLoadTimeProfilerTrace::FRequestGroupScope::~FRequestGroupScope(FRequestGroupScope *this)

{
  undefined1 auStack_48 [32];
  TLogScope<0> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < LoadTimeChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FLoadTimeEndRequestGroupFields>(&local_28);
    *(undefined8 *)(local_28._8_8_ + 0x28) = *(undefined8 *)(local_28._8_8_ + 0x20);
  }
  return;
}

// OutputBegin @ 141a0f8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FLoadTimeProfilerTrace::FRequestGroupScope::OutputBegin(FRequestGroupScope *this)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_48 [32];
  TLogScope<1> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < LoadTimeChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FLoadTimeBeginRequestGroupFields>(&local_28);
    pwVar3 = this->FormatString;
    iVar6 = 0;
    wVar2 = *pwVar3;
    pwVar1 = pwVar3;
    while (wVar2 != L'\0') {
      pwVar1 = pwVar1 + 1;
      iVar6 = iVar6 + 1;
      wVar2 = *pwVar1;
    }
    UE::Trace::Private::Field_WriteStringWide(0,pwVar3,iVar6);
    UE::Trace::Private::Field_WriteAuxData(1,this->FormatArgsBuffer,(uint)this->FormatArgsSize);
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar4 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = *(longlong *)(lVar4 + 0x20);
    **(undefined1 **)(lVar4 + 0x20) = 6;
    lVar5 = *(longlong *)(lVar4 + 0x20) + 1;
    *(longlong *)(lVar4 + 0x20) = lVar5;
    if (lVar4 != local_28._8_8_) {
      *(longlong *)(lVar4 + 0x28) = lVar5;
    }
    *(undefined8 *)(local_28._8_8_ + 0x28) = *(undefined8 *)(local_28._8_8_ + 0x20);
  }
  return;
}

