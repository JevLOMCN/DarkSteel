// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// DoTest @ 1418d6f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCStringGetVarArgsTestBase::DoTest
          (FCStringGetVarArgsTestBase *this,wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  code *pcVar3;
  undefined1 local_res20 [8];
  undefined1 auStack_478 [32];
  wchar_t *local_458;
  undefined1 *local_450;
  FString local_448;
  wchar_t local_438 [512];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_478;
  puVar2 = __local_stdio_printf_options();
  local_458 = (wchar_t *)0x0;
  local_450 = local_res20;
  iVar1 = __stdio_common_vswprintf(*puVar2,local_438,0x200,param_2);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if (iVar1 < 0) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_448,L"\'%s\' could not be parsed.");
  }
  else {
    iVar1 = wcscmp(local_438,param_1);
    if (iVar1 == 0) {
      return;
    }
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    local_458 = param_1;
    ::FString::PrintfImpl(&local_448,L"\'%s\' resulted in \'%s\', expected \'%s\'.");
  }
  (*pcVar3)(this,&local_448,0);
  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  return;
}

