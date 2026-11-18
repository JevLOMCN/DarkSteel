// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetContext @ 14163f960

FContextSupplier * __thiscall FFeedbackContextAnsi::GetContext(FFeedbackContextAnsi *this)

{
  return this->Context;
}

// SetContext @ 14165ce90

void __thiscall
FFeedbackContextAnsi::SetContext(FFeedbackContextAnsi *this,FContextSupplier *param_1)

{
  this->Context = param_1;
  return;
}

// IsUsingLocalPrint @ 1416b0e90

bool __thiscall FFeedbackContextAnsi::IsUsingLocalPrint(FFeedbackContextAnsi *this)

{
  bool bVar1;
  char cVar2;
  wchar_t *pwVar3;
  
  if (::_TSS0 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return bIsUsingLocalPrint;
  }
  _Init_thread_header(&::_TSS0);
  if (::_TSS0 == -1) {
    pwVar3 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar3,L"stdout");
    if ((bVar1) ||
       ((GLogConsole != (FOutputDeviceConsole *)0x0 &&
        (cVar2 = (**(code **)(GLogConsole->_padding_ + 0x60))(), cVar2 != '\0')))) {
      bIsUsingLocalPrint = false;
    }
    else {
      bIsUsingLocalPrint = true;
    }
    _Init_thread_footer(&::_TSS0);
    return bIsUsingLocalPrint;
  }
  return bIsUsingLocalPrint;
}

// LocalPrint @ 1416b1c90

void __cdecl FFeedbackContextAnsi::LocalPrint(wchar_t *param_1)

{
  FILE *_File;
  
  wprintf(L"%ls");
  _File = (FILE *)__acrt_iob_func(1);
                    /* WARNING: Could not recover jumptable at 0x0001416b1cb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fflush(_File);
  return;
}

// Serialize @ 1416bfb00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FFeedbackContextAnsi::Serialize
          (FFeedbackContextAnsi *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  (**(code **)(this->_padding_ + 8))();
  return;
}

// Serialize @ 1416bfb30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FFeedbackContextAnsi::Serialize
          (FFeedbackContextAnsi *this,wchar_t *param_1,Type param_2,FName *param_3,double param_4)

{
  wchar_t *pwVar1;
  FOutputDevice *pFVar2;
  bool bVar3;
  FILE *_File;
  wchar_t *pwVar4;
  undefined1 auStackY_4a8 [32];
  TStringBuilderBase<wchar_t> local_468;
  wchar_t local_448 [512];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  bVar3 = IsUsingLocalPrint(this);
  if ((bVar3) && ((byte)(param_2 - Error) < 3)) {
    local_468.Base = local_448;
    local_468.CurPos = local_448;
    local_468.bIsDynamic = false;
    local_468.bIsExternal = false;
    local_468.End = (wchar_t *)local_48;
    FFeedbackContext::FormatLine
              ((FFeedbackContext *)this,&local_468,param_1,param_2,param_3,param_4,(Type *)0x0);
    if (local_468.End < local_468.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,1);
    }
    *local_468.CurPos = L'\n';
    pwVar4 = local_468.CurPos + 1;
    pwVar1 = local_468.CurPos + 2;
    local_468.CurPos = pwVar4;
    if (local_468.End < pwVar1) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,1);
    }
    *local_468.CurPos = L'\0';
    wprintf(L"%ls");
    _File = (FILE *)__acrt_iob_func(1);
    fflush(_File);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
  }
  FFeedbackContext::Serialize((FFeedbackContext *)this,param_1,param_2,param_3,param_4);
  pFVar2 = this->AuxOut;
  if (pFVar2 != (FOutputDevice *)0x0) {
    (**(code **)(pFVar2->_padding_ + 8))(pFVar2,param_1,param_2,param_3);
  }
  return;
}

// SerializeRecord @ 1416bfce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FFeedbackContextAnsi::SerializeRecord(FFeedbackContextAnsi *this,FLogRecord *param_1)

{
  wchar_t *pwVar1;
  Type TVar2;
  FOutputDevice *pFVar3;
  bool bVar4;
  FILE *_File;
  wchar_t *pwVar5;
  undefined1 auStack_458 [32];
  TStringBuilderBase<wchar_t> local_438;
  wchar_t local_418 [512];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_458;
  TVar2 = param_1->Verbosity;
  bVar4 = IsUsingLocalPrint(this);
  if ((bVar4) && ((byte)(TVar2 - Error) < 3)) {
    local_438.Base = local_418;
    local_438.bIsDynamic = false;
    local_438.bIsExternal = false;
    local_438.CurPos = local_418;
    local_438.End = (wchar_t *)local_18;
    FFeedbackContext::FormatRecordLine((FFeedbackContext *)this,&local_438,param_1,(Type *)0x0);
    if (local_438.End < local_438.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_438,1);
    }
    *local_438.CurPos = L'\n';
    pwVar5 = local_438.CurPos + 1;
    pwVar1 = local_438.CurPos + 2;
    local_438.CurPos = pwVar5;
    if (local_438.End < pwVar1) {
      TStringBuilderBase<wchar_t>::Extend(&local_438,1);
    }
    *local_438.CurPos = L'\0';
    wprintf(L"%ls");
    _File = (FILE *)__acrt_iob_func(1);
    fflush(_File);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_438);
  }
  FFeedbackContext::SerializeRecord((FFeedbackContext *)this,param_1);
  pFVar3 = this->AuxOut;
  if (pFVar3 != (FOutputDevice *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x18))(pFVar3,param_1);
  }
  return;
}

// YesNof @ 1416c86f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FFeedbackContextAnsi::YesNof(FFeedbackContextAnsi *this,FText *param_1)

{
  bool bVar1;
  FILE *pFVar2;
  char *pcVar3;
  undefined1 auStack_138 [32];
  char local_118 [256];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  if (GIsClient) {
    FText::ToString(param_1);
    wprintf(L"%ls");
    pFVar2 = (FILE *)__acrt_iob_func(1);
    fflush(pFVar2);
    wprintf(L"%ls");
    pFVar2 = (FILE *)__acrt_iob_func(1);
    fflush(pFVar2);
    if ((GIsSilent != false) || (bVar1 = FApp::IsUnattended(), bVar1)) {
      wprintf(L"%ls");
      pFVar2 = (FILE *)__acrt_iob_func(1);
      fflush(pFVar2);
    }
    else {
      pFVar2 = (FILE *)__acrt_iob_func(0);
      pcVar3 = fgets(local_118,0x100,pFVar2);
      if (pcVar3 != (char *)0x0) {
        return (local_118[0] + 0xa7U & 0xdf) == 0;
      }
    }
  }
  return true;
}

