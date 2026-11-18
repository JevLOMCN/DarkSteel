// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FEngineTrackedActivityScope @ 1418554e0

FEngineTrackedActivityScope * __thiscall
FEngineTrackedActivityScope::FEngineTrackedActivityScope
          (FEngineTrackedActivityScope *this,FString *param_1)

{
  FTrackedActivity *this_00;
  wchar_t *pwVar1;
  
  this_00 = FTrackedActivity::GetEngineActivity();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FTrackedActivity::Push(this_00,pwVar1,false,Inherit);
  return this;
}

// FEngineTrackedActivityScope @ 141855530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FEngineTrackedActivityScope * __thiscall
FEngineTrackedActivityScope::FEngineTrackedActivityScope
          (FEngineTrackedActivityScope *this,wchar_t *param_1)

{
  ulong64 *puVar1;
  FTrackedActivity *this_00;
  undefined1 local_res18 [16];
  undefined1 auStack_2058 [32];
  undefined8 local_2038;
  undefined1 *local_2030;
  wchar_t local_2028 [4096];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14185554c;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2058;
  puVar1 = __local_stdio_printf_options();
  local_2038 = 0;
  local_2030 = local_res18;
  __stdio_common_vswprintf(*puVar1,local_2028,0x1000,param_1);
  this_00 = FTrackedActivity::GetEngineActivity();
  FTrackedActivity::Push(this_00,local_2028,false,Inherit);
  return this;
}

// ~FEngineTrackedActivityScope @ 141857800

void __thiscall
FEngineTrackedActivityScope::~FEngineTrackedActivityScope(FEngineTrackedActivityScope *this)

{
  FTrackedActivity *this_00;
  
  this_00 = FTrackedActivity::GetEngineActivity();
  FTrackedActivity::Pop(this_00);
  return;
}

