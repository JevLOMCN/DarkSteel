// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 25

// CanBeUsedOnAnyThread @ 14162d9f0

bool __thiscall FOutputDevice::CanBeUsedOnAnyThread(FOutputDevice *this)

{
  return false;
}

// CanBeUsedOnMultipleThreads @ 14162da10

bool __thiscall FOutputDevice::CanBeUsedOnMultipleThreads(FOutputDevice *this)

{
  return false;
}

// CanBeUsedOnPanicThread @ 14162da20

bool __thiscall FOutputDevice::CanBeUsedOnPanicThread(FOutputDevice *this)

{
  return false;
}

// Dump @ 141636980

void __thiscall FOutputDevice::Dump(FOutputDevice *this,FArchive *param_1)

{
  return;
}

// Flush @ 14163bee0

void __thiscall FOutputDevice::Flush(FOutputDevice *this)

{
  return;
}

// IsMemoryOnly @ 14164a060

bool __thiscall FOutputDevice::IsMemoryOnly(FOutputDevice *this)

{
  return false;
}

// Serialize @ 141659d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputDevice::Serialize
          (FOutputDevice *this,wchar_t *param_1,Type param_2,FName *param_3,double param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000141659d63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))();
  return;
}

// TearDown @ 141664110

void __thiscall FOutputDevice::TearDown(FOutputDevice *this)

{
  return;
}

// FOutputDevice @ 1418bc8d0

FOutputDevice * __thiscall FOutputDevice::FOutputDevice(FOutputDevice *this,FOutputDevice *param_1)

{
  this->_padding_ = (longlong)&___7FOutputDevice__6B_;
  this->bSuppressEventTag = param_1->bSuppressEventTag;
  this->bAutoEmitLineTerminator = param_1->bAutoEmitLineTerminator;
  return this;
}

// FOutputDevice @ 1418bc900

FOutputDevice * __thiscall FOutputDevice::FOutputDevice(FOutputDevice *this,FOutputDevice *param_1)

{
  this->_padding_ = (longlong)&___7FOutputDevice__6B_;
  this->bSuppressEventTag = param_1->bSuppressEventTag;
  this->bAutoEmitLineTerminator = param_1->bAutoEmitLineTerminator;
  return this;
}

// FOutputDevice @ 1418bc930

FOutputDevice * __thiscall FOutputDevice::FOutputDevice(FOutputDevice *this)

{
  this->bSuppressEventTag = false;
  this->bAutoEmitLineTerminator = true;
  this->_padding_ = (longlong)&___7FOutputDevice__6B_;
  return this;
}

// ~FOutputDevice @ 1418bf010

void __thiscall FOutputDevice::~FOutputDevice(FOutputDevice *this)

{
  this->_padding_ = (longlong)&___7FOutputDevice__6B_;
  return;
}

// operator= @ 1418bf5d0

FOutputDevice * __thiscall FOutputDevice::operator=(FOutputDevice *this,FOutputDevice *param_1)

{
  this->bSuppressEventTag = param_1->bSuppressEventTag;
  this->bAutoEmitLineTerminator = param_1->bAutoEmitLineTerminator;
  return this;
}

// operator= @ 1418bf5f0

FOutputDevice * __thiscall FOutputDevice::operator=(FOutputDevice *this,FOutputDevice *param_1)

{
  this->bSuppressEventTag = param_1->bSuppressEventTag;
  this->bAutoEmitLineTerminator = param_1->bAutoEmitLineTerminator;
  return this;
}

// CategorizedLogfImpl @ 1418ca080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputDevice::CategorizedLogfImpl(FOutputDevice *this,FName *param_1,Type param_2,wchar_t *param_3)

{
  int iVar1;
  ulong64 *puVar2;
  undefined1 *_Memory;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStackY_498 [32];
  undefined1 local_458 [1024];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_498;
  _Memory = (undefined1 *)0x0;
  lVar3 = 0x200;
  puVar2 = __local_stdio_printf_options();
  puVar4 = local_458;
  while( true ) {
    iVar1 = __stdio_common_vswprintf(*puVar2);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    if ((-1 < iVar1) && (iVar1 < (int)lVar3 + -1)) break;
    MemoryTrace_Free((ulong64)_Memory,0,0);
    free(_Memory);
    lVar3 = (longlong)((int)lVar3 * 2);
    _Memory = malloc(lVar3 * 2);
    MemoryTrace_Alloc((ulong64)_Memory,lVar3 * 2,0,0,0);
    puVar4 = _Memory;
    if (_Memory == (undefined1 *)0x0) {
      return;
    }
  }
  *(undefined2 *)(puVar4 + (longlong)iVar1 * 2) = 0;
  (**(code **)(this->_padding_ + 0x10))(this,puVar4,param_2,param_1);
  MemoryTrace_Free((ulong64)_Memory,0,0);
  free(_Memory);
  return;
}

// Log @ 1418e7330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOutputDevice::Log(FOutputDevice *this,FName *param_1,Type param_2,FString *param_3)

{
  if ((param_3->Data).ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001418e7343. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))
              (this,(param_3->Data).AllocatorInstance.Data,param_2,param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001418e7351. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this,L"",param_2,param_1);
  return;
}

// Log @ 1418e7360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOutputDevice::Log(FOutputDevice *this,FName *param_1,Type param_2,wchar_t *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001418e736c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this,param_3,param_2,param_1);
  return;
}

// Log @ 1418e7380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOutputDevice::Log(FOutputDevice *this,FString *param_1)

{
  FOverride *pFVar1;
  wchar_t *pwVar2;
  
  pFVar1 = FLogScopedCategoryAndVerbosityOverride::GetTLSCurrent();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Could not recover jumptable at 0x0001418e73c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this,pwVar2,pFVar1->Verbosity,&pFVar1->Category);
  return;
}

// Log @ 1418e73d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOutputDevice::Log(FOutputDevice *this,FText *param_1)

{
  Type TVar1;
  code *UNRECOVERED_JUMPTABLE;
  FOverride *pFVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  
  pFVar2 = FLogScopedCategoryAndVerbosityOverride::GetTLSCurrent();
  TVar1 = pFVar2->Verbosity;
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x10);
  pFVar3 = FText::ToString(param_1);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Could not recover jumptable at 0x0001418e7445. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pwVar4,TVar1,&pFVar2->Category);
  return;
}

// Log @ 1418e7450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOutputDevice::Log(FOutputDevice *this,wchar_t *param_1)

{
  FOverride *pFVar1;
  
  pFVar1 = FLogScopedCategoryAndVerbosityOverride::GetTLSCurrent();
                    /* WARNING: Could not recover jumptable at 0x0001418e7484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this,param_1,pFVar1->Verbosity,&pFVar1->Category);
  return;
}

// Log @ 1418e7490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOutputDevice::Log(FOutputDevice *this,Type param_1,FString *param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  if ((param_2->Data).ArrayNum != 0) {
    (**(code **)(this->_padding_ + 0x10))
              (this,(param_2->Data).AllocatorInstance.Data,param_1,local_res8);
    return;
  }
  (**(code **)(this->_padding_ + 0x10))(this,L"",param_1,local_res8);
  return;
}

// Log @ 1418e74e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOutputDevice::Log(FOutputDevice *this,Type param_1,wchar_t *param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  (**(code **)(this->_padding_ + 0x10))(this,param_2,param_1,local_res8);
  return;
}

// LogfImpl @ 1418e7510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOutputDevice::LogfImpl(FOutputDevice *this,wchar_t *param_1)

{
  int iVar1;
  FOverride *pFVar2;
  ulong64 *puVar3;
  undefined1 *_Memory;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStackY_488 [32];
  undefined1 local_458 [1024];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_488;
  pFVar2 = FLogScopedCategoryAndVerbosityOverride::GetTLSCurrent();
  lVar4 = 0x200;
  _Memory = (undefined1 *)0x0;
  puVar3 = __local_stdio_printf_options();
  puVar5 = local_458;
  while( true ) {
    iVar1 = __stdio_common_vswprintf(*puVar3);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    if ((-1 < iVar1) && (iVar1 < (int)lVar4 + -1)) break;
    MemoryTrace_Free((ulong64)_Memory,0,0);
    free(_Memory);
    lVar4 = (longlong)((int)lVar4 * 2);
    _Memory = malloc(lVar4 * 2);
    MemoryTrace_Alloc((ulong64)_Memory,lVar4 * 2,0,0,0);
    puVar5 = _Memory;
    if (_Memory == (undefined1 *)0x0) {
      return;
    }
  }
  *(undefined2 *)(puVar5 + (longlong)iVar1 * 2) = 0;
  (**(code **)(this->_padding_ + 0x10))(this,puVar5,pFVar2->Verbosity,&pFVar2->Category);
  MemoryTrace_Free((ulong64)_Memory,0,0);
  free(_Memory);
  return;
}

// LogfImpl @ 1418e7670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOutputDevice::LogfImpl(FOutputDevice *this,Type param_1,wchar_t *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  undefined1 *_Memory;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStackY_498 [32];
  undefined8 local_468 [2];
  undefined1 local_458 [1024];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_498;
  _Memory = (undefined1 *)0x0;
  lVar3 = 0x200;
  puVar2 = __local_stdio_printf_options();
  puVar4 = local_458;
  while( true ) {
    iVar1 = __stdio_common_vswprintf(*puVar2);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    if ((-1 < iVar1) && (iVar1 < (int)lVar3 + -1)) break;
    MemoryTrace_Free((ulong64)_Memory,0,0);
    free(_Memory);
    lVar3 = (longlong)((int)lVar3 * 2);
    _Memory = malloc(lVar3 * 2);
    MemoryTrace_Alloc((ulong64)_Memory,lVar3 * 2,0,0,0);
    puVar4 = _Memory;
    if (_Memory == (undefined1 *)0x0) {
      return;
    }
  }
  *(undefined2 *)(puVar4 + (longlong)iVar1 * 2) = 0;
  local_468[0] = 0;
  (**(code **)(this->_padding_ + 0x10))(this,puVar4,param_1,local_468);
  MemoryTrace_Free((ulong64)_Memory,0,0);
  free(_Memory);
  return;
}

// SerializeRecord @ 1418f7500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOutputDevice::SerializeRecord(FOutputDevice *this,FLogRecord *param_1)

{
  Type TVar1;
  code *pcVar2;
  undefined1 auStack_468 [32];
  TStringBuilderBase<wchar_t> local_448;
  wchar_t local_428 [512];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_468;
  local_448.bIsDynamic = false;
  local_448.bIsExternal = false;
  local_448.Base = local_428;
  local_448.CurPos = local_428;
  local_448.End = (wchar_t *)local_28;
  UE::FLogRecord::FormatMessageTo(param_1,&local_448);
  TVar1 = param_1->Verbosity;
  pcVar2 = *(code **)(this->_padding_ + 0x10);
  if (local_448.End < local_448.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_448,1);
  }
  *local_448.CurPos = L'\0';
  (*pcVar2)(this,local_448.Base,TVar1,&param_1->Category);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_448);
  return;
}

