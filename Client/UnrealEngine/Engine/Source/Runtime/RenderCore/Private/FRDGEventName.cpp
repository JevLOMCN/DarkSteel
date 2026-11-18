// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// FRDGEventName @ 145d8c8f0

FRDGEventName * __thiscall
FRDGEventName::FRDGEventName(FRDGEventName *this,int param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  FRDGEventName *pFVar3;
  
  this->EventFormat = param_2;
  (this->FormattedEventName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FormattedEventName).Data.ArrayNum = 0;
  (this->FormattedEventName).Data.ArrayMax = 0;
  if (param_2 == (wchar_t *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InEventName != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphEvent.cpp"
                       ,0x109,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGEventName *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// FRDGEventName @ 145d8c940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRDGEventName * __thiscall FRDGEventName::FRDGEventName(FRDGEventName *this,wchar_t *param_1)

{
  ulong64 *puVar1;
  undefined1 local_res18 [16];
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined1 *local_240;
  wchar_t local_238 [256];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_268;
  this->EventFormat = param_1;
  (this->FormattedEventName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FormattedEventName).Data.ArrayNum = 0;
  (this->FormattedEventName).Data.ArrayMax = 0;
  if (GRDGValidation != 0) {
    puVar1 = __local_stdio_printf_options();
    local_248 = 0;
    local_240 = local_res18;
    __stdio_common_vswprintf(*puVar1,local_238,0x100,param_1);
    ::FString::operator=(&this->FormattedEventName,local_238);
  }
  return this;
}

// GetTCHAR @ 145dbbc10

wchar_t * __thiscall FRDGEventName::GetTCHAR(FRDGEventName *this)

{
  if (1 < (this->FormattedEventName).Data.ArrayNum) {
    return (wchar_t *)(this->FormattedEventName).Data.AllocatorInstance.Data;
  }
  return this->EventFormat;
}

