// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 92

// AddCrashPropertyInternal<wchar_t_[1]> @ 14160c170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGenericCrashContext::AddCrashPropertyInternal<wchar_t_[1]>
          (FString *param_1,TStringView<wchar_t> *param_2,wchar_t (*param_3) [1])

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  FXmlEscapedString<512> *this;
  undefined1 auStack_4b8 [32];
  undefined8 local_498;
  int local_490;
  undefined4 local_488;
  undefined4 uStack_484;
  TStringView<wchar_t> local_478;
  FString local_468;
  FXmlEscapedString<512> local_458;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  ::FString::FString(&local_468,*param_3);
  uVar1 = *(undefined4 *)&param_2->DataPtr;
  uVar2 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iVar3 = param_2->Size;
  local_478.Size = local_468.Data.ArrayNum + -1;
  if (local_468.Data.ArrayNum == 0) {
    local_478.Size = 0;
  }
  local_478.DataPtr = (wchar_t *)local_468.Data.AllocatorInstance.Data;
  this = FXmlEscapedString<512>::FXmlEscapedString<512>(&local_458,&local_478);
  if (*(ulonglong *)&this->field_0x10 < *(longlong *)&this->field_0x8 + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this,1);
  }
  **(undefined2 **)&this->field_0x8 = 0;
  local_498 = *(undefined8 *)this;
  local_490 = iVar3;
  local_488 = uVar1;
  uStack_484 = uVar2;
  ::FString::AppendfImpl(param_1,L"<%.*s>%s</%.*s>\r\n");
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_458);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  return;
}

// AddCrashPropertyInternal<wchar_t_[256]> @ 14160c280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGenericCrashContext::AddCrashPropertyInternal<wchar_t_[256]>
          (FString *param_1,TStringView<wchar_t> *param_2,wchar_t (*param_3) [256])

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  FXmlEscapedString<512> *this;
  undefined1 auStack_4b8 [32];
  undefined8 local_498;
  int local_490;
  undefined4 local_488;
  undefined4 uStack_484;
  TStringView<wchar_t> local_478;
  FString local_468;
  FXmlEscapedString<512> local_458;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  ::FString::FString(&local_468,*param_3);
  uVar1 = *(undefined4 *)&param_2->DataPtr;
  uVar2 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iVar3 = param_2->Size;
  local_478.Size = local_468.Data.ArrayNum + -1;
  if (local_468.Data.ArrayNum == 0) {
    local_478.Size = 0;
  }
  local_478.DataPtr = (wchar_t *)local_468.Data.AllocatorInstance.Data;
  this = FXmlEscapedString<512>::FXmlEscapedString<512>(&local_458,&local_478);
  if (*(ulonglong *)&this->field_0x10 < *(longlong *)&this->field_0x8 + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this,1);
  }
  **(undefined2 **)&this->field_0x8 = 0;
  local_498 = *(undefined8 *)this;
  local_490 = iVar3;
  local_488 = uVar1;
  uStack_484 = uVar2;
  ::FString::AppendfImpl(param_1,L"<%.*s>%s</%.*s>\r\n");
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_458);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  return;
}

// AddCrashPropertyInternal<wchar_t_[64]> @ 14160c390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGenericCrashContext::AddCrashPropertyInternal<wchar_t_[64]>
          (FString *param_1,TStringView<wchar_t> *param_2,wchar_t (*param_3) [64])

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  FXmlEscapedString<512> *this;
  undefined1 auStack_4b8 [32];
  undefined8 local_498;
  int local_490;
  undefined4 local_488;
  undefined4 uStack_484;
  TStringView<wchar_t> local_478;
  FString local_468;
  FXmlEscapedString<512> local_458;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  ::FString::FString(&local_468,*param_3);
  uVar1 = *(undefined4 *)&param_2->DataPtr;
  uVar2 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iVar3 = param_2->Size;
  local_478.Size = local_468.Data.ArrayNum + -1;
  if (local_468.Data.ArrayNum == 0) {
    local_478.Size = 0;
  }
  local_478.DataPtr = (wchar_t *)local_468.Data.AllocatorInstance.Data;
  this = FXmlEscapedString<512>::FXmlEscapedString<512>(&local_458,&local_478);
  if (*(ulonglong *)&this->field_0x10 < *(longlong *)&this->field_0x8 + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this,1);
  }
  **(undefined2 **)&this->field_0x8 = 0;
  local_498 = *(undefined8 *)this;
  local_490 = iVar3;
  local_488 = uVar1;
  uStack_484 = uVar2;
  ::FString::AppendfImpl(param_1,L"<%.*s>%s</%.*s>\r\n");
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_458);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  return;
}

// AddCrashPropertyInternal<int> @ 14160c4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGenericCrashContext::AddCrashPropertyInternal<int>
          (FString *param_1,TStringView<wchar_t> *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  FXmlEscapedString<512> *this;
  undefined1 auStack_4b8 [32];
  undefined8 local_498;
  int local_490;
  undefined4 local_488;
  undefined4 uStack_484;
  TStringView<wchar_t> local_478;
  FString local_468;
  FXmlEscapedString<512> local_458;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  ::FString::PrintfImpl(&local_468,L"%d");
  uVar1 = *(undefined4 *)&param_2->DataPtr;
  uVar2 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iVar3 = param_2->Size;
  local_478.Size = local_468.Data.ArrayNum + -1;
  if (local_468.Data.ArrayNum == 0) {
    local_478.Size = 0;
  }
  local_478.DataPtr = (wchar_t *)local_468.Data.AllocatorInstance.Data;
  this = FXmlEscapedString<512>::FXmlEscapedString<512>(&local_458,&local_478);
  if (*(ulonglong *)&this->field_0x10 < *(longlong *)&this->field_0x8 + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this,1);
  }
  **(undefined2 **)&this->field_0x8 = 0;
  local_498 = *(undefined8 *)this;
  local_490 = iVar3;
  local_488 = uVar1;
  uStack_484 = uVar2;
  ::FString::AppendfImpl(param_1,L"<%.*s>%s</%.*s>\r\n");
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_458);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  return;
}

// AddCrashPropertyInternal<unsigned_int> @ 14160c5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGenericCrashContext::AddCrashPropertyInternal<unsigned_int>
          (FString *param_1,TStringView<wchar_t> *param_2,uint *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  FXmlEscapedString<512> *this;
  undefined1 auStack_4b8 [32];
  undefined8 local_498;
  int local_490;
  undefined4 local_488;
  undefined4 uStack_484;
  TStringView<wchar_t> local_478;
  FString local_468;
  FXmlEscapedString<512> local_458;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  ::FString::PrintfImpl(&local_468,L"%u");
  uVar1 = *(undefined4 *)&param_2->DataPtr;
  uVar2 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iVar3 = param_2->Size;
  local_478.Size = local_468.Data.ArrayNum + -1;
  if (local_468.Data.ArrayNum == 0) {
    local_478.Size = 0;
  }
  local_478.DataPtr = (wchar_t *)local_468.Data.AllocatorInstance.Data;
  this = FXmlEscapedString<512>::FXmlEscapedString<512>(&local_458,&local_478);
  if (*(ulonglong *)&this->field_0x10 < *(longlong *)&this->field_0x8 + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this,1);
  }
  **(undefined2 **)&this->field_0x8 = 0;
  local_498 = *(undefined8 *)this;
  local_490 = iVar3;
  local_488 = uVar1;
  uStack_484 = uVar2;
  ::FString::AppendfImpl(param_1,L"<%.*s>%s</%.*s>\r\n");
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_458);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  return;
}

// AddCrashPropertyInternal<wchar_t_const_*> @ 14160c6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGenericCrashContext::AddCrashPropertyInternal<wchar_t_const_*>
          (FString *param_1,TStringView<wchar_t> *param_2,wchar_t **param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  FXmlEscapedString<512> *this;
  undefined1 auStack_4b8 [32];
  undefined8 local_498;
  int local_490;
  undefined4 local_488;
  undefined4 uStack_484;
  TStringView<wchar_t> local_478;
  FString local_468;
  FXmlEscapedString<512> local_458;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  ::FString::FString(&local_468,*param_3);
  uVar1 = *(undefined4 *)&param_2->DataPtr;
  uVar2 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iVar3 = param_2->Size;
  local_478.Size = local_468.Data.ArrayNum + -1;
  if (local_468.Data.ArrayNum == 0) {
    local_478.Size = 0;
  }
  local_478.DataPtr = (wchar_t *)local_468.Data.AllocatorInstance.Data;
  this = FXmlEscapedString<512>::FXmlEscapedString<512>(&local_458,&local_478);
  if (*(ulonglong *)&this->field_0x10 < *(longlong *)&this->field_0x8 + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this,1);
  }
  **(undefined2 **)&this->field_0x8 = 0;
  local_498 = *(undefined8 *)this;
  local_490 = iVar3;
  local_488 = uVar1;
  uStack_484 = uVar2;
  ::FString::AppendfImpl(param_1,L"<%.*s>%s</%.*s>\r\n");
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_458);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  return;
}

// AddCrashPropertyInternal<FString> @ 14160c7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGenericCrashContext::AddCrashPropertyInternal<FString>
          (FString *param_1,TStringView<wchar_t> *param_2,FString *param_3)

{
  FScriptContainerElement *_Src;
  FXmlEscapedString<512> *this;
  longlong lVar1;
  undefined1 auStackY_4c8 [32];
  ForAnyElementType local_488;
  int local_480;
  int local_47c;
  TStringView<wchar_t> local_478;
  FXmlEscapedString<512> local_468;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  local_480 = (param_3->Data).ArrayNum;
  lVar1 = (longlong)local_480;
  _Src = (param_3->Data).AllocatorInstance.Data;
  local_488.Data = (FScriptContainerElement *)0x0;
  if (local_480 == 0) {
    local_47c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_480,0,&local_488,local_480,&local_47c);
    memcpy(local_488.Data,_Src,lVar1 * 2);
  }
  local_478.Size = local_480 + -1;
  if (local_480 == 0) {
    local_478.Size = 0;
  }
  local_478.DataPtr = (wchar_t *)local_488.Data;
  this = FXmlEscapedString<512>::FXmlEscapedString<512>(&local_468,&local_478);
  if (*(ulonglong *)&this->field_0x10 < *(longlong *)&this->field_0x8 + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this,1);
  }
  **(undefined2 **)&this->field_0x8 = 0;
  ::FString::AppendfImpl(param_1,L"<%.*s>%s</%.*s>\r\n");
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_468);
  if (local_488.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data);
  }
  return;
}

// AddCrashPropertyInternal<unsigned___int64> @ 14160c930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGenericCrashContext::AddCrashPropertyInternal<unsigned___int64>
          (FString *param_1,TStringView<wchar_t> *param_2,ulong64 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  FXmlEscapedString<512> *this;
  undefined1 auStack_4b8 [32];
  undefined8 local_498;
  int local_490;
  undefined4 local_488;
  undefined4 uStack_484;
  TStringView<wchar_t> local_478;
  FString local_468;
  FXmlEscapedString<512> local_458;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  ::FString::PrintfImpl(&local_468,L"%llu");
  uVar1 = *(undefined4 *)&param_2->DataPtr;
  uVar2 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iVar3 = param_2->Size;
  local_478.Size = local_468.Data.ArrayNum + -1;
  if (local_468.Data.ArrayNum == 0) {
    local_478.Size = 0;
  }
  local_478.DataPtr = (wchar_t *)local_468.Data.AllocatorInstance.Data;
  this = FXmlEscapedString<512>::FXmlEscapedString<512>(&local_458,&local_478);
  if (*(ulonglong *)&this->field_0x10 < *(longlong *)&this->field_0x8 + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this,1);
  }
  **(undefined2 **)&this->field_0x8 = 0;
  local_498 = *(undefined8 *)this;
  local_490 = iVar3;
  local_488 = uVar1;
  uStack_484 = uVar2;
  ::FString::AppendfImpl(param_1,L"<%.*s>%s</%.*s>\r\n");
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_458);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  return;
}

// AddCrashPropertyInternal<bool> @ 14160ca40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGenericCrashContext::AddCrashPropertyInternal<bool>
          (FString *param_1,TStringView<wchar_t> *param_2,bool *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  FXmlEscapedString<512> *this;
  wchar_t *pwVar4;
  undefined1 auStack_4a8 [32];
  undefined8 local_488;
  int local_480;
  undefined4 local_478;
  undefined4 uStack_474;
  TStringView<wchar_t> local_468;
  FString local_458;
  FXmlEscapedString<512> local_448;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_4a8;
  pwVar4 = L"true";
  if (*param_3 == false) {
    pwVar4 = L"false";
  }
  ::FString::FString(&local_458,pwVar4);
  uVar1 = *(undefined4 *)&param_2->DataPtr;
  uVar2 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iVar3 = param_2->Size;
  local_468.Size = local_458.Data.ArrayNum + -1;
  if (local_458.Data.ArrayNum == 0) {
    local_468.Size = 0;
  }
  local_468.DataPtr = (wchar_t *)local_458.Data.AllocatorInstance.Data;
  this = FXmlEscapedString<512>::FXmlEscapedString<512>(&local_448,&local_468);
  if (*(ulonglong *)&this->field_0x10 < *(longlong *)&this->field_0x8 + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this,1);
  }
  **(undefined2 **)&this->field_0x8 = 0;
  local_488 = *(undefined8 *)this;
  local_480 = iVar3;
  local_478 = uVar1;
  uStack_474 = uVar2;
  ::FString::AppendfImpl(param_1,L"<%.*s>%s</%.*s>\r\n");
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_448);
  if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data.AllocatorInstance.Data);
  }
  return;
}

// FGenericCrashContext @ 14161d6a0

FGenericCrashContext * __thiscall
FGenericCrashContext::FGenericCrashContext
          (FGenericCrashContext *this,ECrashContextType param_1,wchar_t *param_2)

{
  int iVar1;
  
  this->Type = param_1;
  this->_padding_ = (longlong)&___7FGenericCrashContext__6B_;
  this->CrashedThreadId = 0xffffffff;
  this->ProcessHandle = (FProcHandle)0x0;
  this->NumMinidumpFramesToIgnore = 0;
  (this->CallStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CallStack).ArrayNum = 0;
  (this->CallStack).ArrayMax = 0;
  (this->ThreadCallStacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ThreadCallStacks).ArrayNum = 0;
  (this->ThreadCallStacks).ArrayMax = 0;
  (this->ModulesInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModulesInfo).ArrayNum = 0;
  (this->ModulesInfo).ArrayMax = 0;
  this->ErrorMessage = param_2;
  (this->CommonBuffer).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommonBuffer).Data.ArrayNum = 0;
  (this->CommonBuffer).Data.ArrayMax = 0;
  ::FString::Reserve(&this->CommonBuffer,0x20000);
  iVar1 = StaticCrashContextIndex + 1;
  this->CrashContextIndex = StaticCrashContextIndex;
  StaticCrashContextIndex = iVar1;
  return this;
}

// ~FGenericCrashContext @ 141620bd0

void __thiscall FGenericCrashContext::~FGenericCrashContext(FGenericCrashContext *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FGenericCrashContext__6B_;
  pFVar1 = (this->CommonBuffer).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ModulesInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FThreadStackFrames,int>
            ((FThreadStackFrames *)(this->ThreadCallStacks).AllocatorInstance.Data,
             (this->ThreadCallStacks).ArrayNum);
  pFVar1 = (this->ThreadCallStacks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCrashStackFrame,int>
            ((FCrashStackFrame *)(this->CallStack).AllocatorInstance.Data,(this->CallStack).ArrayNum
            );
  pFVar1 = (this->CallStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 141621fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FGenericCrashContext::CleanupTempSessionContextFiles'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,bool param_2)

{
  double dVar1;
  ulonglong _Size;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  IFileManager *pIVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  wchar_t local_48 [12];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (!param_2) {
    iVar4 = 0;
    iVar9 = iVar4;
    local_68.DataPtr = param_1;
    if (param_1 != (wchar_t *)0x0) {
      sVar6 = wcslen(param_1);
      iVar9 = (int)sVar6;
    }
    local_68.Size = iVar9;
    iVar3 = iVar9;
    if (4 < iVar9) {
      iVar3 = 4;
    }
    iVar10 = iVar4;
    if (0 < iVar3) {
      iVar10 = iVar3;
    }
    if ((iVar10 == 4) &&
       (iVar3 = FGenericPlatformStricmp::Strnicmp
                          (L".xml",param_1 + ((longlong)iVar9 - (longlong)iVar10),4), iVar3 == 0)) {
      iVar3 = *(int *)(*(undefined8 **)this + 1);
      iVar10 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar10 = iVar4;
      }
      iVar3 = iVar9;
      if (iVar10 < iVar9) {
        iVar3 = iVar10;
      }
      if (0 < iVar3) {
        iVar4 = iVar3;
      }
      if (((iVar10 == iVar4) &&
          (((iVar10 == 0 || (iVar4 == 0)) ||
           (iVar3 = FGenericPlatformStricmp::Strnicmp
                              ((wchar_t *)**(undefined8 **)this,param_1,(longlong)iVar4), iVar3 == 0
           )))) && (iVar10 == iVar4)) {
        pIVar7 = IFileManager::Get();
        dVar1 = (double)**(longlong **)((longlong)this + 8) * __real_3e7ad7f29abcaf48;
        dVar11 = (double)(**(code **)((longlong)*pIVar7 + 0xd0))(pIVar7,param_1);
        if (dVar1 < dVar11) {
          local_58.DataPtr = local_68.DataPtr;
          local_58.Size = local_68.Size;
          local_58._12_4_ = local_68._12_4_;
          iVar4 = UE::String::FindLastChar(&local_58,L'-',CaseSensitive);
          local_68.Size = iVar9 - (iVar4 + 1);
          local_68.DataPtr = param_1 + (iVar4 + 1);
          uVar5 = UE::String::FindLastChar(&local_68,L'.',CaseSensitive);
          if (uVar5 < 0xb) {
            _Size = (longlong)(int)uVar5 * 2;
            if (0 < (int)uVar5) {
              memcpy(local_48,param_1 + (iVar4 + 1),_Size);
            }
            if (0x15 < _Size) {
                    /* WARNING: Subroutine does not return */
              __report_rangecheckfailure();
            }
            local_58.DataPtr = (wchar_t *)0x0;
            local_48[(int)uVar5] = L'\0';
            lVar8 = _wcstoi64(local_48,&local_58.DataPtr,10);
            if ((local_58.DataPtr == local_48 + (int)uVar5) &&
               (bVar2 = FWindowsPlatformProcess::IsApplicationRunning((uint)lVar8), !bVar2)) {
              pIVar7 = IFileManager::Get();
              local_78 = 0;
              (**(code **)((longlong)*pIVar7 + 0x38))(pIVar7,param_1,0,0);
            }
          }
        }
      }
    }
  }
  return true;
}

// operator() @ 141622bb0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall `FGenericCrashContext::Initialize'::__l57::<lambda_1>::operator()(void *this)

{
  FCulture *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  
  pFVar4 = FInternationalization::Get();
  if ((pFVar4->CurrentLanguage).Object == (FCulture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = (pFVar4->CurrentLanguage).Object;
  pTVar1 = (pFVar4->CurrentLanguage).SharedReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FCulture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  NCached::Session.LanguageLCID = FCulture::GetLCID(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// operator() @ 141622d80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`FGenericCrashContext::Initialize'::__l2::<lambda_2>::operator()(void *this,float param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:___cdecl__public:_static_void___cdecl_FGenericCrashContext::Initialize(void)_::_2_::<lambda_2>::operator()(float)const_::_2_::FStat_STAT_NCachedCrashContextProperties_LambdaTicker>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_28;
  
  FVar10.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_NCachedCrashContextProperties_LambdaTicker ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_static_void___cdecl_FGenericCrashContext::Initialize(void)_::_2_::<lambda_2>::operator()(float)const_::_2_::FStat_STAT_NCachedCrashContextProperties_LambdaTicker>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res18.s,
                                "STAT_NCachedCrashContextProperties_LambdaTicker");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_NCachedCrashContextProperties_LambdaTicker,*pFVar5,
                   L"STAT_NCachedCrashContextProperties_LambdaTicker","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_NCachedCrashContextProperties_LambdaTicker;
  if (StatPtr_STAT_NCachedCrashContextProperties_LambdaTicker ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_static_void___cdecl_FGenericCrashContext::Initialize(void)_::_2_::<lambda_2>::operator()(float)const_::_2_::FStat_STAT_NCachedCrashContextProperties_LambdaTicker>
       )0x0) {
    pFVar5 = ::FName::FName(&local_res20,"STAT_NCachedCrashContextProperties_LambdaTicker");
    FVar6 = (FThreadSafeStaticStat<_public:___cdecl__public:_static_void___cdecl_FGenericCrashContext::Initialize(void)_::_2_::<lambda_2>::operator()(float)const_::_2_::FStat_STAT_NCachedCrashContextProperties_LambdaTicker>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_NCachedCrashContextProperties_LambdaTicker,*pFVar5,
                         L"STAT_NCachedCrashContextProperties_LambdaTicker","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar3 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      bVar3 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
      if ((bVar3) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
        (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x38))
                  (FActiveExternalProfilerBase::ActiveProfiler,&local_res18);
      }
      if (GTrackCsvNamedEvents != false) {
        LOCK();
        GNamedEventMarkers = (atomic<unsigned_int>)((int)GNamedEventMarkers + 1);
        UNLOCK();
      }
      bVar3 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar8.Value;
        local_res18.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformCrashContext.cpp"
                   ,0x1c2);
        bVar3 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar8.Value;
      local_res18.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar2 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_141622f2a;
    }
  }
  bVar2 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_141622f2a:
  QueryPerformanceCounter(&local_res18);
  NCached::Session.SecondsSinceStart =
       (int)(((double)CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) *
              FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000) - GStartTime);
  if (bVar4) {
    bVar4 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
    if ((bVar4) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
      (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x48))();
    }
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar2) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res18);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return true;
}

// operator() @ 1416231e0

void __thiscall
`FGenericCrashContext::Initialize'::__l2::<lambda_6>::operator()
          (void *this,FCrashOverrideParameters *param_1)

{
  FString *pFVar1;
  ForAnyElementType _Source;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (param_1->bSetGameNameSuffix != false) {
    pFVar1 = ::FString::FString(&local_18,L"UE-");
    ::FString::ConcatFC(&local_28,pFVar1,GInternalProjectName);
    ::FString::ConcatFF(&local_38,&local_28,&param_1->GameNameSuffix);
    _Source.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      _Source.Data = local_38.Data.AllocatorInstance.Data;
    }
    wcsncpy(NCached::Session.GameName,(wchar_t *)_Source.Data,0x3f);
    NCached::Session.GameName[0x3f] = L'\0';
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((param_1->SendUnattendedBugReports).bIsSet != false) {
    NCached::UserSettings.bSendUnattendedBugReports = (param_1->SendUnattendedBugReports).TypedValue
    ;
  }
  if ((param_1->SendUsageData).bIsSet != false) {
    NCached::UserSettings.bSendUsageData = (param_1->SendUsageData).TypedValue;
  }
  FGenericCrashContext::SerializeTempCrashContextToFile();
  return;
}

// operator() @ 1416232c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FGenericCrashContext::Initialize'::__l2::<lambda_9>::operator()
          (void *this,EForkProcessRole param_1)

{
  FString local_18;
  
  if (param_1 == Child) {
    if (6 < (byte)LogCrashContext._0_1_) {
      FWindowsPlatformProcess::GetCurrentProcessId();
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogCrashContext);
    }
    NCached::Session.ProcessId = FWindowsPlatformProcess::GetCurrentProcessId();
    FGenericCrashContext::GenerateNewCrashGuidBase(&local_18);
    if (4 < (byte)LogInit._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    FGenericCrashContext::SerializeTempCrashContextToFile();
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// AddCrashPropertyInternal @ 1416272f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGenericCrashContext::AddCrashPropertyInternal
          (FString *param_1,TStringView<wchar_t> *param_2,TStringView<wchar_t> *param_3)

{
  int iVar1;
  wchar_t *pwVar2;
  FXmlEscapedString<512> *this;
  undefined1 auStack_498 [32];
  undefined8 local_478;
  int local_470;
  wchar_t *local_468;
  TStringView<wchar_t> local_458;
  FXmlEscapedString<512> local_448;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_498;
  local_458.DataPtr = param_3->DataPtr;
  local_458.Size = param_3->Size;
  local_458._12_4_ = *(undefined4 *)&param_3->field_0xc;
  pwVar2 = param_2->DataPtr;
  iVar1 = param_2->Size;
  this = FXmlEscapedString<512>::FXmlEscapedString<512>(&local_448,&local_458);
  if (*(ulonglong *)&this->field_0x10 < *(longlong *)&this->field_0x8 + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this,1);
  }
  **(undefined2 **)&this->field_0x8 = 0;
  local_478 = *(undefined8 *)this;
  local_470 = iVar1;
  local_468 = pwVar2;
  ::FString::AppendfImpl(param_1,L"<%.*s>%s</%.*s>\r\n");
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_448);
  return;
}

// AddFile @ 1416273c0

void __cdecl FGenericCrashContext::AddFile(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&NCached::CriticalSection);
  if (((NCached::FilePaths.AllocatorInstance.Data <= param_1) &&
      (param_1 < NCached::FilePaths.AllocatorInstance.Data +
                 (longlong)NCached::FilePaths.ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (NCached::FilePaths.ArrayNum == NCached::FilePaths.ArrayMax) {
    NCached::FilePaths.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&NCached::FilePaths.AllocatorInstance,&NCached::FilePaths.ArrayMax);
  }
  lVar3 = (longlong)NCached::FilePaths.ArrayNum;
  NCached::FilePaths.ArrayNum = NCached::FilePaths.ArrayNum + 1;
  ::FString::FString((FString *)(NCached::FilePaths.AllocatorInstance.Data + lVar3 * 0x10),param_1);
                    /* WARNING: Could not recover jumptable at 0x00014162749d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&NCached::CriticalSection);
  return;
}

// AddFooter @ 1416274b0

void __cdecl FGenericCrashContext::AddFooter(FString *param_1)

{
  ::FString::AppendfImpl(param_1,L"</%s>\r\n");
  return;
}

// AddGPUBreadcrumbs @ 1416274d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FGenericCrashContext::AddGPUBreadcrumbs(FGenericCrashContext *this)

{
  FString *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  byte bVar4;
  ForAnyElementType FVar5;
  TOptional<FGPUBreadcrumbCrashData> *pTVar6;
  bool bVar7;
  FXmlEscapedString<512> *pFVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  FString *pFVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined1 auStackY_a48 [32];
  undefined1 local_a08 [8];
  ForAnyElementType local_a00;
  int local_9f8;
  int local_9f4;
  ForAnyElementType local_9f0;
  int local_9e8;
  int local_9e4;
  FString local_9e0;
  FString local_9d0;
  int local_9c0;
  TOptional<FGPUBreadcrumbCrashData> *local_9b8;
  uint uStack_9b0;
  uint uStack_9ac;
  undefined8 local_9a8;
  undefined4 uStack_9a0;
  uint uStack_99c;
  uint local_998;
  undefined4 uStack_994;
  int iStack_990;
  undefined4 uStack_98c;
  TOptional<FGPUBreadcrumbCrashData> *local_988;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_980;
  undefined8 uStack_960;
  wchar_t *local_958;
  undefined4 uStack_950;
  undefined4 uStack_94c;
  wchar_t *local_948;
  undefined4 uStack_940;
  undefined4 uStack_93c;
  wchar_t *local_938;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  FScriptContainerElement *local_928;
  uint uStack_920;
  undefined4 uStack_91c;
  FScriptContainerElement *local_918;
  uint uStack_910;
  undefined4 uStack_90c;
  wchar_t *local_908;
  undefined4 uStack_900;
  undefined4 uStack_8fc;
  TStringView<wchar_t> local_8f8;
  TStringView<wchar_t> local_8e8;
  TStringView<wchar_t> local_8d8;
  TStringView<wchar_t> local_8c8;
  TStringView<wchar_t> local_8b8;
  TStringView<wchar_t> local_8a8 [2];
  undefined4 local_87c;
  FXmlEscapedString<512> local_878;
  FXmlEscapedString<512> local_458;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a48;
  if (NCached::GPUBreadcrumbs.bIsSet) {
    pFVar1 = &this->CommonBuffer;
    ::FString::AppendfImpl(pFVar1,L"<%s>\r\n");
    if ((NCached::GPUBreadcrumbs.bIsSet == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStack_950 = 0xd;
    local_958 = L"FormatVersion";
    local_8f8._12_4_ = uStack_94c;
    local_8f8.Size = 0xd;
    local_8f8.DataPtr = L"FormatVersion";
    AddCrashPropertyInternal<FString>(pFVar1,&local_8f8,&NCached::GPUBreadcrumbs.TypedValue.Version)
    ;
    if ((NCached::GPUBreadcrumbs.bIsSet == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStack_940 = 6;
    local_948 = L"Source";
    local_8e8._12_4_ = uStack_93c;
    local_8e8.Size = 6;
    local_8e8.DataPtr = L"Source";
    AddCrashPropertyInternal<FString>
              (pFVar1,&local_8e8,&NCached::GPUBreadcrumbs.TypedValue.SourceName);
    if ((NCached::GPUBreadcrumbs.bIsSet == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStack_9b0 = 0;
    uStack_9ac = 1;
    uVar16 = 0;
    uVar14 = NCached::GPUBreadcrumbs.TypedValue.Queues._40_4_;
    uStack_99c = uStack_9b0;
    local_998 = uVar16;
    if (uVar14 != 0) {
      puVar17 = (uint *)&NCached::GPUBreadcrumbs.TypedValue.Queues.field_0x10;
      if (NCached::GPUBreadcrumbs.TypedValue.Queues._32_8_ != 0) {
        puVar17 = (uint *)NCached::GPUBreadcrumbs.TypedValue.Queues._32_8_;
      }
      uVar13 = *puVar17;
      local_998 = 0;
      uStack_9b0 = 0;
      while (uVar13 == 0) {
        lVar9 = (longlong)(int)uStack_9b0;
        local_998 = local_998 + 0x20;
        uStack_9b0 = uStack_9b0 + 1;
        uStack_99c = uVar14;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_9b0)
        goto LAB_1416276b0;
        uVar13 = puVar17[lVar9 + 1];
      }
      uStack_9ac = -uVar13 & uVar13;
      uVar2 = (ulonglong)uStack_9ac * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_9c0 = (int)lVar9;
      uStack_99c = (local_998 - 1) + local_9c0;
      if ((int)uVar14 < (int)uStack_99c) {
        uStack_99c = uVar14;
      }
    }
LAB_1416276b0:
    uStack_994 = local_87c;
    uVar13 = uVar14 & 0xffffffe0;
    iStack_990 = NCached::GPUBreadcrumbs.TypedValue.Queues._8_4_ -
                 NCached::GPUBreadcrumbs.TypedValue.Queues._52_4_;
    local_9a8 = 0x154ea6b70;
    local_9b8 = &NCached::GPUBreadcrumbs;
    bVar4 = NCached::GPUBreadcrumbs.TypedValue.Queues._40_1_;
    uStack_9a0 = 0xffffffff;
    TStack_980.CurrentBitIndex = uStack_99c;
    TStack_980.UnvisitedBitMask = 0xffffffff;
    TStack_980._padding_ = CONCAT44(uStack_9ac,uStack_9b0);
    local_988 = &NCached::GPUBreadcrumbs;
    iVar11 = (int)uVar14 >> 5;
    TStack_980._28_4_ = local_87c;
    TStack_980.BaseBitIndex = local_998;
    uStack_960 = CONCAT44(uStack_98c,iStack_990);
    TStack_980.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)
         &NCached::GPUBreadcrumbs.TypedValue.Queues.field_0x10;
    uVar15 = uVar14;
    if ((int)uVar14 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar15 = NCached::GPUBreadcrumbs.TypedValue.Queues._40_4_;
    }
    if (uVar14 != uVar15) {
      lVar9 = 0x154ea6b70;
      if (NCached::GPUBreadcrumbs.TypedValue.Queues._32_8_ != 0) {
        lVar9 = NCached::GPUBreadcrumbs.TypedValue.Queues._32_8_;
      }
      uVar14 = -1 << (bVar4 & 0x1f) & *(uint *)(lVar9 + (longlong)iVar11 * 4);
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar11;
        uVar13 = uVar13 + 0x20;
        iVar11 = iVar11 + 1;
        uVar14 = uVar15;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_1416277c3;
        uVar14 = *(uint *)(lVar9 + 4 + lVar10 * 4);
      }
      uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar14 = (int)lVar9 + -1 + uVar13;
      if ((int)uVar15 < (int)uVar14) {
        uVar14 = uVar15;
      }
    }
LAB_1416277c3:
    while( true ) {
      pTVar6 = local_988;
      if (*(int *)&(local_988->TypedValue).Queues.field_0x8 -
          *(int *)&(local_988->TypedValue).Queues.field_0x34 != (int)uStack_960) {
        `TSparseArray<TSparseSetElement<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_a08);
      }
      if (((TStack_980.CurrentBitIndex == uVar14) &&
          (TStack_980.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)
           &NCached::GPUBreadcrumbs.TypedValue.Queues.field_0x10)) &&
         (pTVar6 == &NCached::GPUBreadcrumbs)) break;
      pFVar12 = (FString *)
                (*(longlong *)&(pTVar6->TypedValue).Queues +
                (longlong)TStack_980.CurrentBitIndex * 0x50);
      ::FString::AppendfImpl(pFVar1,L"<%s>\r\n");
      local_938 = L"Name";
      uStack_930 = 4;
      local_8d8._12_4_ = uStack_92c;
      local_8d8.Size = 4;
      local_8d8.DataPtr = L"Name";
      AddCrashPropertyInternal<FString>(pFVar1,&local_8d8,pFVar12);
      local_9e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_9e0.Data.ArrayNum = 0;
      local_9e0.Data.ArrayMax = 0;
      BytesToHex((uchar *)(pFVar12 + 2),0x14,&local_9e0);
      FVar5.Data = local_9e0.Data.AllocatorInstance.Data;
      lVar9 = (longlong)local_9e0.Data.ArrayNum;
      local_a00.Data = (FScriptContainerElement *)0x0;
      local_9f8 = local_9e0.Data.ArrayNum;
      if (local_9e0.Data.ArrayNum == 0) {
        local_9f4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_9e0.Data.ArrayNum,0,&local_a00,local_9e0.Data.ArrayNum,&local_9f4);
        memcpy(local_a00.Data,FVar5.Data,lVar9 * 2);
      }
      uStack_920 = local_9f8 - 1;
      if (local_9f8 == 0) {
        uStack_920 = uVar16;
      }
      local_8c8._12_4_ = uStack_91c;
      local_8c8.Size = uStack_920;
      local_928 = local_a00.Data;
      local_8c8.DataPtr = (wchar_t *)local_a00.Data;
      pFVar8 = FXmlEscapedString<512>::FXmlEscapedString<512>(&local_878,&local_8c8);
      if (*(ulonglong *)&pFVar8->field_0x10 < *(longlong *)&pFVar8->field_0x8 + 2U) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)pFVar8,1);
      }
      **(undefined2 **)&pFVar8->field_0x8 = 0;
      ::FString::AppendfImpl(pFVar1,L"<%.*s>%s</%.*s>\r\n");
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
                ((TStringBuilderBase<wchar_t> *)&local_878);
      if (local_a00.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a00.Data);
      }
      if (local_9e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9e0.Data.AllocatorInstance.Data);
      }
      local_9d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_9d0.Data.ArrayNum = 0;
      local_9d0.Data.ArrayMax = 0;
      BytesToHex((uchar *)((longlong)&pFVar12[3].Data.AllocatorInstance.Data + 4),0x14,&local_9d0);
      FVar5.Data = local_9d0.Data.AllocatorInstance.Data;
      lVar9 = (longlong)local_9d0.Data.ArrayNum;
      local_9f0.Data = (FScriptContainerElement *)0x0;
      local_9e8 = local_9d0.Data.ArrayNum;
      if (local_9d0.Data.ArrayNum == 0) {
        local_9e4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_9d0.Data.ArrayNum,0,&local_9f0,local_9d0.Data.ArrayNum,&local_9e4);
        memcpy(local_9f0.Data,FVar5.Data,lVar9 * 2);
      }
      uStack_910 = local_9e8 - 1;
      if (local_9e8 == 0) {
        uStack_910 = uVar16;
      }
      local_8b8._12_4_ = uStack_90c;
      local_8b8.Size = uStack_910;
      local_918 = local_9f0.Data;
      local_8b8.DataPtr = (wchar_t *)local_9f0.Data;
      pFVar8 = FXmlEscapedString<512>::FXmlEscapedString<512>(&local_458,&local_8b8);
      if (*(ulonglong *)&pFVar8->field_0x10 < *(longlong *)&pFVar8->field_0x8 + 2U) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)pFVar8,1);
      }
      **(undefined2 **)&pFVar8->field_0x8 = 0;
      ::FString::AppendfImpl(pFVar1,L"<%.*s>%s</%.*s>\r\n");
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
                ((TStringBuilderBase<wchar_t> *)&local_458);
      if (local_9f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9f0.Data);
      }
      if (local_9d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9d0.Data.AllocatorInstance.Data);
      }
      uStack_900 = 0xb;
      local_908 = L"Breadcrumbs";
      local_8a8[0]._12_4_ = uStack_8fc;
      local_8a8[0].Size = 0xb;
      local_8a8[0].DataPtr = L"Breadcrumbs";
      AddCrashPropertyInternal<FString>(pFVar1,local_8a8,pFVar12 + 1);
      ::FString::AppendfImpl(pFVar1,L"</%s>\r\n");
      TStack_980.UnvisitedBitMask = TStack_980.UnvisitedBitMask & ~TStack_980._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_980);
    }
    ::FString::AppendfImpl(pFVar1,L"</%s>\r\n");
  }
  return;
}

// AddHeader @ 141627ba0

void __cdecl FGenericCrashContext::AddHeader(FString *param_1)

{
  ::FString::AppendChars(param_1,L"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n",0x28);
  ::FString::AppendfImpl(param_1,L"<%s>\r\n");
  return;
}

// AddPlatformSpecificProperties @ 141627cc0

void __thiscall FGenericCrashContext::AddPlatformSpecificProperties(FGenericCrashContext *this)

{
  return;
}

// AddPlugin @ 141627cd0

void __cdecl FGenericCrashContext::AddPlugin(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  
  if (((NCached::EnabledPluginsList.AllocatorInstance.Data <= param_1) &&
      (param_1 < NCached::EnabledPluginsList.AllocatorInstance.Data +
                 (longlong)NCached::EnabledPluginsList.ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (NCached::EnabledPluginsList.ArrayNum == NCached::EnabledPluginsList.ArrayMax) {
    NCached::EnabledPluginsList.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&NCached::EnabledPluginsList.AllocatorInstance,
                    &NCached::EnabledPluginsList.ArrayMax);
  }
  lVar3 = (longlong)NCached::EnabledPluginsList.ArrayNum;
  NCached::EnabledPluginsList.ArrayNum = NCached::EnabledPluginsList.ArrayNum + 1;
  ::FString::FString((FString *)(NCached::EnabledPluginsList.AllocatorInstance.Data + lVar3 * 0x10),
                     param_1);
  return;
}

// AddPortableCallStack @ 141627da0

void __thiscall FGenericCrashContext::AddPortableCallStack(FGenericCrashContext *this)

{
  FString *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  TArrayView<FCrashStackFrame_const_,int> local_18;
  
  pFVar1 = &this->CommonBuffer;
  if ((this->CallStack).ArrayNum == 0) {
    local_28._12_4_ = uStack_3c;
    local_28.Size = 10;
    local_28.DataPtr = L"PCallStack";
    AddCrashPropertyInternal<wchar_t_[1]>(pFVar1,&local_28,(wchar_t (*) [1])L"");
    return;
  }
  ::FString::AppendfImpl(pFVar1,L"<%s>\r\n");
  local_18.DataPtr = (FCrashStackFrame *)(this->CallStack).AllocatorInstance.Data;
  iVar2 = (this->CallStack).ArrayNum;
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iVar2;
  AppendPortableCallstack(pFVar1,&local_18);
  ::FString::AppendfImpl(pFVar1,L"</%s>\r\n");
  return;
}

// AddPortableCallStackHash @ 141627e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FGenericCrashContext::AddPortableCallStackHash(FGenericCrashContext *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  size_t sVar6;
  wchar_t *pwVar7;
  uint uVar8;
  ForAnyElementType _Str;
  int iVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  undefined1 auStackY_188 [32];
  FString local_158;
  FString local_148;
  FScriptContainerElement *local_138 [2];
  wchar_t *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  wchar_t *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  FSHA1 local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((this->CallStack).ArrayNum == 0) {
    uStack_120 = 0xe;
    local_128 = L"PCallStackHash";
    local_108._12_4_ = uStack_11c;
    local_108.Size = 0xe;
    local_108.DataPtr = L"PCallStackHash";
    AddCrashPropertyInternal<wchar_t_[1]>(&this->CommonBuffer,&local_108,(wchar_t (*) [1])L"");
    return;
  }
  pwVar5 = FWindowsPlatformProcess::ExecutableName(true);
  FSHA1::FSHA1(&local_c8);
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  for (uVar8 = 0; (-1 < (int)uVar8 && ((int)uVar8 < (this->CallStack).ArrayNum)); uVar8 = uVar8 + 1)
  {
    iVar9 = -((int)~uVar8 >> 0x1f);
    if ((iVar9 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->CallStack).AllocatorInstance.Data;
    lVar11 = (longlong)(int)uVar8 * 0x20;
    if (*(int *)(pFVar1 + lVar11 + 8) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = *(wchar_t **)(pFVar1 + lVar11);
    }
    iVar4 = StricmpImpl<wchar_t,wchar_t>(pwVar7,pwVar5);
    if (iVar4 == 0) {
LAB_141628030:
      iVar4 = 0;
      if ((int)uVar8 < (this->CallStack).ArrayNum) {
        iVar4 = iVar9;
      }
      if ((iVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FSHA1::Update(&local_c8,(uchar *)((this->CallStack).AllocatorInstance.Data + lVar11 + 0x18),8)
      ;
    }
    else {
      iVar4 = 0;
      if ((int)uVar8 < (this->CallStack).ArrayNum) {
        iVar4 = iVar9;
      }
      if ((iVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = ::FString::Find((FString *)((this->CallStack).AllocatorInstance.Data + lVar11),
                              L"UnrealEditor",0xc,IgnoreCase,FromStart,-1);
      if (iVar4 != -1) goto LAB_141628030;
    }
  }
  FSHA1::Final(&local_c8);
  FSHA1::GetHash(&local_c8,(uchar *)&local_e8);
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.Data.ArrayNum = 0;
  local_158.Data.ArrayMax = 0;
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  BytesToHex((uchar *)&local_e8,0x14,&local_148);
  FVar10.Data = local_148.Data.AllocatorInstance.Data;
  if (local_148.Data.ArrayNum == 0) {
    _Str.Data = (FScriptContainerElement *)L"";
  }
  else {
    _Str.Data = local_148.Data.AllocatorInstance.Data;
    if (local_148.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_1416281ee;
  }
  sVar6 = wcslen((wchar_t *)_Str.Data);
  if ((int)sVar6 != 0) {
    pFVar1 = _Str.Data + (longlong)(int)sVar6 * 2;
    for (; _Str.Data != pFVar1; _Str.Data = _Str.Data + 2) {
      switch(*(wchar_t *)_Str.Data) {
      case L'\r':
        break;
      default:
        ::FString::AppendChar(&local_158,*(wchar_t *)_Str.Data);
        break;
      case L'\"':
        ::FString::AppendChars(&local_158,L"&quot;",6);
        break;
      case L'&':
        ::FString::AppendChars(&local_158,L"&amp;",5);
        break;
      case L'\'':
        ::FString::AppendChars(&local_158,L"&apos;",6);
        break;
      case L'<':
        ::FString::AppendChars(&local_158,L"&lt;",4);
        break;
      case L'>':
        ::FString::AppendChars(&local_158,L"&gt;",4);
      }
      FVar10.Data = local_148.Data.AllocatorInstance.Data;
    }
  }
LAB_1416281ee:
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  local_118 = L"PCallStackHash";
  local_138[0] = (FScriptContainerElement *)L"";
  if (local_158.Data.ArrayNum != 0) {
    local_138[0] = local_158.Data.AllocatorInstance.Data;
  }
  uStack_110 = 0xe;
  local_f8._12_4_ = uStack_10c;
  local_f8.Size = 0xe;
  local_f8.DataPtr = L"PCallStackHash";
  AddCrashPropertyInternal<wchar_t_const_*>(&this->CommonBuffer,&local_f8,(wchar_t **)local_138);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  FSHA1::~FSHA1(&local_c8);
  return;
}

// AddPortableThreadCallStack @ 1416282e0

void __thiscall
FGenericCrashContext::AddPortableThreadCallStack
          (FGenericCrashContext *this,uint param_1,wchar_t *param_2,ulong64 *param_3,int param_4)

{
  return;
}

// AddPortableThreadCallStacks @ 1416282f0

void __thiscall
FGenericCrashContext::AddPortableThreadCallStacks
          (FGenericCrashContext *this,TArrayView<FThreadCallStack_const_,int> *param_1)

{
  FThreadCallStack *pFVar1;
  FThreadCallStack *pFVar2;
  
  pFVar1 = param_1->DataPtr;
  pFVar2 = pFVar1 + param_1->ArrayNum;
  for (; pFVar1 != pFVar2; pFVar1 = pFVar1 + 1) {
    (**(code **)(this->_padding_ + 0x38))
              (this,pFVar1->ThreadId,pFVar1->ThreadName,(pFVar1->StackFrames).DataPtr,
               (pFVar1->StackFrames).ArrayNum);
  }
  return;
}

// AddSection @ 141628360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FGenericCrashContext::AddSection(FString *param_1,wchar_t *param_2,FString *param_3)

{
  int iVar1;
  FXmlEscapedString<512> *this;
  undefined1 auStack_478 [32];
  TStringView<wchar_t> local_458;
  FXmlEscapedString<512> local_448;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_478;
  ::FString::AppendfImpl(param_1,L"<%s>\r\n");
  local_458.DataPtr = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  iVar1 = (param_3->Data).ArrayNum;
  local_458.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_458.Size = 0;
  }
  this = FXmlEscapedString<512>::FXmlEscapedString<512>(&local_448,&local_458);
  if (*(ulonglong *)&this->field_0x10 < *(longlong *)&this->field_0x8 + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this,1);
  }
  **(undefined2 **)&this->field_0x8 = 0;
  ::FString::AppendfImpl(param_1,L"%s");
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_448);
  ::FString::AppendfImpl(param_1,L"</%s>\r\n");
  return;
}

// AppendEscapedXMLString @ 1416293f0

void __cdecl
FGenericCrashContext::AppendEscapedXMLString
          (TStringBuilderBase<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  pwVar4 = param_2->DataPtr;
  iVar3 = (int)*(undefined8 *)&param_2->Size;
  if (iVar3 != 0) {
    pwVar1 = pwVar4 + iVar3;
    for (; pwVar4 != pwVar1; pwVar4 = pwVar4 + 1) {
      wVar2 = *pwVar4;
      switch(wVar2) {
      case L'\r':
        break;
      default:
        if (param_1->End < param_1->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_1,1);
        }
        *param_1->CurPos = wVar2;
        param_1->CurPos = param_1->CurPos + 1;
        break;
      case L'\"':
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"&quot;",6);
        break;
      case L'&':
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"&amp;",5);
        break;
      case L'\'':
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"&apos;",6);
        break;
      case L'<':
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"&lt;",4);
        break;
      case L'>':
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"&gt;",4);
      }
    }
  }
  return;
}

// AppendEscapedXMLString @ 141629580

void __cdecl
FGenericCrashContext::AppendEscapedXMLString(FString *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  pwVar3 = param_2->DataPtr;
  iVar2 = (int)*(undefined8 *)&param_2->Size;
  if (iVar2 != 0) {
    pwVar1 = pwVar3 + iVar2;
    for (; pwVar3 != pwVar1; pwVar3 = pwVar3 + 1) {
      switch(*pwVar3) {
      case L'\r':
        break;
      default:
        ::FString::AppendChar(param_1,*pwVar3);
        break;
      case L'\"':
        ::FString::AppendChars(param_1,L"&quot;",6);
        break;
      case L'&':
        ::FString::AppendChars(param_1,L"&amp;",5);
        break;
      case L'\'':
        ::FString::AppendChars(param_1,L"&apos;",6);
        break;
      case L'<':
        ::FString::AppendChars(param_1,L"&lt;",4);
        break;
      case L'>':
        ::FString::AppendChars(param_1,L"&gt;",4);
      }
    }
  }
  return;
}

// AppendPortableCallstack @ 1416296f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FGenericCrashContext::AppendPortableCallstack
          (FString *param_1,TArrayView<FCrashStackFrame_const_,int> *param_2)

{
  FScriptContainerElement *pFVar1;
  wchar_t wVar2;
  int iVar3;
  FCrashStackFrame *pFVar4;
  ulong64 uVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  FCrashStackFrame *pFVar11;
  wchar_t *pwVar12;
  FCrashStackFrame *pFVar13;
  int iVar14;
  undefined1 auStack_4c8 [32];
  ulong64 local_4a8;
  ulong64 local_4a0;
  int local_498;
  FCrashStackFrame *local_490;
  FCrashStackFrame *local_488;
  ulong64 local_480;
  FString *local_478;
  TStringBuilderBase<wchar_t> local_468;
  wchar_t local_448 [512];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_4c8;
  local_478 = param_1;
  ::FString::AppendChars(param_1,L"\r\n",2);
  pFVar13 = param_2->DataPtr;
  iVar14 = 0;
  pFVar11 = pFVar13 + param_2->ArrayNum;
  local_490 = pFVar13;
  local_488 = pFVar11;
  if (pFVar13 != pFVar11) {
    do {
      iVar3 = (pFVar13->ModuleName).Data.ArrayNum;
      local_468.Base = local_448;
      pFVar10 = (pFVar13->ModuleName).Data.AllocatorInstance.Data;
      local_468.End = (wchar_t *)local_48;
      iVar6 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      local_468.bIsDynamic = false;
      local_468.bIsExternal = false;
      pwVar7 = local_448;
      pwVar12 = local_448;
      if (iVar6 != 0) {
        pFVar1 = pFVar10 + (longlong)iVar6 * 2;
        pwVar9 = local_468.End;
        for (; local_468.CurPos = pwVar7, pwVar7 = local_468.CurPos, pFVar10 != pFVar1;
            pFVar10 = pFVar10 + 2) {
          wVar2 = *(wchar_t *)pFVar10;
          switch(wVar2) {
          case L'\r':
            break;
          default:
            pwVar7 = local_468.CurPos + 1;
            pwVar8 = local_468.CurPos;
            local_468.CurPos = pwVar12;
            if (pwVar9 < pwVar7) {
              TStringBuilderBase<wchar_t>::Extend(&local_468,1);
              pwVar8 = local_468.CurPos;
            }
            *pwVar8 = wVar2;
            pwVar7 = local_468.CurPos + 1;
            pwVar9 = local_468.End;
            pwVar12 = pwVar7;
            break;
          case L'\"':
            if (pwVar9 < local_468.CurPos + 6) {
              local_468.CurPos = pwVar12;
              TStringBuilderBase<wchar_t>::Extend(&local_468,6);
            }
            *(undefined8 *)local_468.CurPos = _u__quot_;
            *(undefined4 *)(local_468.CurPos + 4) = DAT_150641ce8;
            pwVar7 = local_468.CurPos + 6;
            pwVar9 = local_468.End;
            pwVar12 = pwVar7;
            break;
          case L'&':
            if (pwVar9 < local_468.CurPos + 5) {
              local_468.CurPos = pwVar12;
              TStringBuilderBase<wchar_t>::Extend(&local_468,5);
            }
            *(undefined8 *)local_468.CurPos = _u__amp_;
            local_468.CurPos[4] = DAT_150641cd8;
            pwVar7 = local_468.CurPos + 5;
            pwVar9 = local_468.End;
            pwVar12 = pwVar7;
            break;
          case L'\'':
            if (pwVar9 < local_468.CurPos + 6) {
              local_468.CurPos = pwVar12;
              TStringBuilderBase<wchar_t>::Extend(&local_468,6);
            }
            *(undefined8 *)local_468.CurPos = _u__apos_;
            *(undefined4 *)(local_468.CurPos + 4) = DAT_150641cf8;
            pwVar7 = local_468.CurPos + 6;
            pwVar9 = local_468.End;
            pwVar12 = pwVar7;
            break;
          case L'<':
            if (pwVar9 < local_468.CurPos + 4) {
              local_468.CurPos = pwVar12;
              TStringBuilderBase<wchar_t>::Extend(&local_468,4);
            }
            builtin_wcsncpy(local_468.CurPos,L"&lt;",4);
            pwVar7 = local_468.CurPos + 4;
            pwVar9 = local_468.End;
            pwVar12 = pwVar7;
            break;
          case L'>':
            if (pwVar9 < local_468.CurPos + 4) {
              local_468.CurPos = pwVar12;
              TStringBuilderBase<wchar_t>::Extend(&local_468,4);
            }
            builtin_wcsncpy(local_468.CurPos,L"&gt;",4);
            pwVar7 = local_468.CurPos + 4;
            pwVar9 = local_468.End;
            pwVar12 = pwVar7;
          }
          local_468.CurPos = pwVar12;
          pwVar12 = local_468.CurPos;
          pFVar11 = local_488;
        }
      }
      local_468.CurPos = pwVar12;
      iVar6 = (int)((longlong)pwVar7 - (longlong)local_468.Base >> 1);
      if (iVar6 < iVar14) {
        iVar6 = iVar14;
      }
      iVar14 = iVar6;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
      pFVar13 = pFVar13 + 1;
    } while (pFVar13 != pFVar11);
    local_498 = iVar14 + 1;
    pFVar13 = local_490;
    do {
      iVar6 = (pFVar13->ModuleName).Data.ArrayNum;
      local_490 = (FCrashStackFrame *)pFVar13->Offset;
      pwVar12 = (wchar_t *)local_48;
      local_480 = pFVar13->BaseAddress;
      pFVar10 = (pFVar13->ModuleName).Data.AllocatorInstance.Data;
      iVar14 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar14 = 0;
      }
      local_468.Base = local_448;
      local_468.bIsDynamic = false;
      local_468.bIsExternal = false;
      pwVar9 = local_448;
      pwVar7 = local_448;
      local_468.End = pwVar12;
      if (iVar14 != 0) {
        pFVar1 = pFVar10 + (longlong)iVar14 * 2;
        for (; local_468.CurPos = pwVar9, pwVar9 = local_468.CurPos, pFVar10 != pFVar1;
            pFVar10 = pFVar10 + 2) {
          wVar2 = *(wchar_t *)pFVar10;
          switch(wVar2) {
          case L'\r':
            break;
          default:
            pwVar9 = local_468.CurPos + 1;
            pwVar8 = local_468.CurPos;
            local_468.CurPos = pwVar7;
            if (pwVar12 < pwVar9) {
              TStringBuilderBase<wchar_t>::Extend(&local_468,1);
              pwVar8 = local_468.CurPos;
            }
            *pwVar8 = wVar2;
            pwVar9 = local_468.CurPos + 1;
            pwVar12 = local_468.End;
            pwVar7 = pwVar9;
            break;
          case L'\"':
            if (pwVar12 < local_468.CurPos + 6) {
              local_468.CurPos = pwVar7;
              TStringBuilderBase<wchar_t>::Extend(&local_468,6);
            }
            *(undefined8 *)local_468.CurPos = _u__quot_;
            *(undefined4 *)(local_468.CurPos + 4) = DAT_150641ce8;
            pwVar9 = local_468.CurPos + 6;
            pwVar12 = local_468.End;
            pwVar7 = pwVar9;
            break;
          case L'&':
            if (pwVar12 < local_468.CurPos + 5) {
              local_468.CurPos = pwVar7;
              TStringBuilderBase<wchar_t>::Extend(&local_468,5);
            }
            *(undefined8 *)local_468.CurPos = _u__amp_;
            local_468.CurPos[4] = DAT_150641cd8;
            pwVar9 = local_468.CurPos + 5;
            pwVar12 = local_468.End;
            pwVar7 = pwVar9;
            break;
          case L'\'':
            if (pwVar12 < local_468.CurPos + 6) {
              local_468.CurPos = pwVar7;
              TStringBuilderBase<wchar_t>::Extend(&local_468,6);
            }
            *(undefined8 *)local_468.CurPos = _u__apos_;
            *(undefined4 *)(local_468.CurPos + 4) = DAT_150641cf8;
            pwVar9 = local_468.CurPos + 6;
            pwVar12 = local_468.End;
            pwVar7 = pwVar9;
            break;
          case L'<':
            if (pwVar12 < local_468.CurPos + 4) {
              local_468.CurPos = pwVar7;
              TStringBuilderBase<wchar_t>::Extend(&local_468,4);
            }
            builtin_wcsncpy(local_468.CurPos,L"&lt;",4);
            pwVar9 = local_468.CurPos + 4;
            pwVar12 = local_468.End;
            pwVar7 = pwVar9;
            break;
          case L'>':
            if (pwVar12 < local_468.CurPos + 4) {
              local_468.CurPos = pwVar7;
              TStringBuilderBase<wchar_t>::Extend(&local_468,4);
            }
            builtin_wcsncpy(local_468.CurPos,L"&gt;",4);
            pwVar9 = local_468.CurPos + 4;
            pwVar12 = local_468.End;
            pwVar7 = pwVar9;
          }
          local_468.CurPos = pwVar7;
          pwVar7 = local_468.CurPos;
          pFVar11 = local_488;
        }
      }
      local_468.CurPos = pwVar7;
      uVar5 = local_480;
      pFVar4 = local_490;
      if (pwVar12 < pwVar9 + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,1);
        pwVar9 = local_468.CurPos;
      }
      *pwVar9 = L'\0';
      local_4a8 = uVar5;
      local_4a0 = (ulong64)pFVar4;
      ::FString::AppendfImpl(local_478,L"%-*s 0x%016llx + %-16llx\r\n");
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
      pFVar13 = pFVar13 + 1;
    } while (pFVar13 != pFVar11);
  }
  return;
}

// BeginSection @ 14162c130

void __cdecl FGenericCrashContext::BeginSection(FString *param_1,wchar_t *param_2)

{
  ::FString::AppendfImpl(param_1,L"<%s>\r\n");
  return;
}

// CaptureModules @ 14162dd40

void __thiscall FGenericCrashContext::CaptureModules(FGenericCrashContext *this)

{
  (this->ModulesInfo).ArrayNum = 0;
  if ((this->ModulesInfo).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x468,8,0,&(this->ModulesInfo).AllocatorInstance,0,&(this->ModulesInfo).ArrayMax);
  }
                    /* WARNING: Could not recover jumptable at 0x00014162dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x28))(this,&this->ModulesInfo);
  return;
}

// CapturePortableCallStack @ 14162dda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGenericCrashContext::CapturePortableCallStack(FGenericCrashContext *this,int param_1,void *param_2)

{
  uint uVar1;
  undefined1 auStack_358 [32];
  ulong64 local_338 [100];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_358;
  memset(local_338,0,800);
  uVar1 = FWindowsPlatformStackWalk::CaptureStackBackTrace(local_338,100,param_2);
  (**(code **)(this->_padding_ + 0x10))(this,local_338,uVar1);
  return;
}

// CapturePortableCallStack @ 14162de30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGenericCrashContext::CapturePortableCallStack
          (FGenericCrashContext *this,void *param_1,void *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulong64 *puVar6;
  undefined1 auStack_358 [32];
  ulong64 local_338 [100];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_358;
  memset(local_338,0,800);
  uVar1 = FWindowsPlatformStackWalk::CaptureStackBackTrace(local_338,100,param_2);
  uVar5 = (ulonglong)(int)uVar1;
  puVar6 = local_338;
  if ((param_1 != (void *)0x0) && (uVar2 = 0, uVar4 = uVar2, 0 < (int)uVar1)) {
    do {
      iVar3 = (int)uVar4;
      if ((void *)local_338[uVar2] == param_1) {
        this->NumMinidumpFramesToIgnore = iVar3;
        uVar5 = (ulonglong)(uVar1 - iVar3);
        puVar6 = local_338 + iVar3;
        break;
      }
      uVar2 = uVar2 + 1;
      uVar4 = (ulonglong)(iVar3 + 1);
    } while ((longlong)uVar2 < (longlong)uVar5);
  }
  (**(code **)(this->_padding_ + 0x10))(this,puVar6,uVar5 & 0xffffffff);
  return;
}

// CaptureThreadPortableCallStack @ 14162df10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGenericCrashContext::CaptureThreadPortableCallStack
          (FGenericCrashContext *this,ulong64 param_1,void *param_2)

{
  uint uVar1;
  undefined1 auStack_368 [32];
  ulong64 local_348 [100];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
  memset(local_348,0,800);
  uVar1 = FWindowsPlatformStackWalk::CaptureThreadStackBackTrace(param_1,local_348,100,param_2);
  (**(code **)(this->_padding_ + 0x10))(this,local_348,uVar1);
  return;
}

// CleanupTempSessionContextFiles @ 14162e380

void __cdecl FGenericCrashContext::CleanupTempSessionContextFiles(FTimespan *param_1)

{
  code *pcVar1;
  wchar_t *pwVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar3;
  IFileManager *pIVar4;
  int iVar5;
  int iVar6;
  undefined1 local_38 [16];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  undefined1 local_18 [16];
  
  ::FString::PrintfImpl((FString *)local_38,L"UECrashContext-");
  pwVar2 = FWindowsPlatformProcess::UserTempDir();
  iVar5 = 1;
  iVar6 = local_38._8_4_;
  if (local_38._8_4_ == 0) {
    iVar6 = 1;
  }
  pTVar3 = &::FString::FString((FString *)local_18,pwVar2)->Data;
  if ((pTVar3->ArrayNum != 0) || (iVar6 == 0)) {
    iVar5 = 0;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_28,pTVar3,iVar5 + iVar6);
  if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_18._0_8_);
  }
  iVar6 = local_38._8_4_ + -1;
  if (local_38._8_4_ == 0) {
    iVar6 = 0;
  }
  ::FString::PathAppend((FString *)&local_28,(wchar_t *)local_38._0_8_,iVar6);
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  pIVar4 = IFileManager::Get();
  local_38._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FGenericCrashContext::CleanupTempSessionContextFiles'::__l2::<lambda_1>,bool,wchar_t_const_*,bool>
       ::Call;
  pcVar1 = *(code **)((longlong)*pIVar4 + 0x90);
  local_38._8_8_ = param_1;
  pwVar2 = FWindowsPlatformProcess::UserTempDir();
  (*pcVar1)(pIVar4,pwVar2,local_18);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// CopyPlatformSpecificFiles @ 14162fd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGenericCrashContext::CopyPlatformSpecificFiles
          (FGenericCrashContext *this,wchar_t *param_1,void *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  IFileManager *pIVar6;
  size_t sVar7;
  FString *pFVar8;
  ForAnyElementType FVar9;
  wchar_t *_Str;
  ForAnyElementType FVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res20 [8];
  ulonglong in_stack_ffffffffffffff68;
  FString local_78;
  TStringView<wchar_t> local_68;
  FScriptContainerElement *local_58;
  int local_50;
  TStringView<wchar_t> local_48;
  wchar_t *local_38;
  int local_30;
  
  pwVar5 = GetCrashConfigFilePath();
  pIVar6 = IFileManager::Get();
  cVar2 = (**(code **)((longlong)*pIVar6 + 0x50))(pIVar6,pwVar5);
  iVar11 = 0;
  if (cVar2 != '\0') {
    ::FString::FString((FString *)&local_48,pwVar5);
    FPaths::GetCleanFilename((FString *)&local_68,(FString *)&local_48);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
    _Str = L"";
    if (local_68.Size != 0) {
      _Str = local_68.DataPtr;
    }
    local_48.Size = iVar11;
    local_48.DataPtr = param_1;
    if (param_1 != (wchar_t *)0x0) {
      sVar7 = wcslen(param_1);
      local_48.Size = (int)sVar7;
    }
    local_30 = iVar11;
    local_38 = _Str;
    if (_Str != (wchar_t *)0x0) {
      sVar7 = wcslen(_Str);
      local_30 = (int)sVar7;
    }
    FPaths::CombineInternal(&local_78,&local_48,2);
    pIVar6 = IFileManager::Get();
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar10.Data = local_78.Data.AllocatorInstance.Data;
    }
    in_stack_ffffffffffffff68 = 0;
    (**(code **)((longlong)*pIVar6 + 0x40))(pIVar6,FVar10.Data,pwVar5,1,0,0,0,0,0);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_68.DataPtr);
    }
  }
  iVar3 = NCached::FilePaths.ArrayNum;
  pFVar12 = NCached::FilePaths.AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  FVar10.Data = NCached::FilePaths.AllocatorInstance.Data;
  while( true ) {
    if (NCached::FilePaths.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (FVar10.Data == pFVar12) break;
    pIVar6 = IFileManager::Get();
    if (*(int *)(FVar10.Data + 8) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = *(wchar_t **)FVar10.Data;
    }
    cVar2 = (**(code **)((longlong)*pIVar6 + 0x50))(pIVar6,pwVar5);
    if (cVar2 != '\0') {
      pFVar8 = FPaths::GetCleanFilename((FString *)&local_48,(FString *)FVar10.Data);
      iVar4 = iVar11;
      local_68.DataPtr = param_1;
      if (param_1 != (wchar_t *)0x0) {
        sVar7 = wcslen(param_1);
        iVar4 = (int)sVar7;
      }
      local_58 = (pFVar8->Data).AllocatorInstance.Data;
      iVar1 = (pFVar8->Data).ArrayNum;
      local_50 = iVar1 + -1;
      if (iVar1 == 0) {
        local_50 = iVar11;
      }
      local_68.Size = iVar4;
      FPaths::CombineInternal(&local_78,&local_68,2);
      if (local_48.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_48.DataPtr);
      }
      pIVar6 = IFileManager::Get();
      if (*(int *)(FVar10.Data + 8) == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = *(wchar_t **)FVar10.Data;
      }
      in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffffffffff00;
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_78.Data.ArrayNum != 0) {
        FVar9.Data = local_78.Data.AllocatorInstance.Data;
      }
      cVar2 = (**(code **)((longlong)*pIVar6 + 0x48))
                        (pIVar6,FVar9.Data,pwVar5,1,0,0,in_stack_ffffffffffffff68);
      if ((cVar2 == '\0') && (1 < (byte)LogCrashContext._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCrashContext);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    FVar10.Data = FVar10.Data + 0x10;
  }
  return;
}

// CopySharedCrashContext @ 14162ffc0

void __cdecl FGenericCrashContext::CopySharedCrashContext(FSharedCrashContext *param_1)

{
  FUserSettingsContext *pFVar1;
  FUserSettingsContext *pFVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  wchar_t wVar10;
  wchar_t wVar11;
  wchar_t *pwVar12;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *pTVar13;
  bool bVar14;
  FUserSettingsContext *pFVar15;
  void *pvVar16;
  size_t sVar17;
  longlong lVar18;
  FUserSettingsContext *pFVar19;
  ulong64 uVar20;
  wchar_t *_Dst;
  int iVar21;
  int iVar22;
  ForAnyElementType FVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  uint *puVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TStringBuilderBase<wchar_t> local_168;
  undefined1 local_148 [8];
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_140;
  uint uStack_138;
  uint uStack_134;
  undefined8 local_130;
  undefined4 uStack_128;
  uint uStack_124;
  uint local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  int local_10c;
  int local_108;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined8 local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  int local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  memcpy(&param_1->SessionContext,&NCached::Session,0x20c8);
  lVar25 = 4;
  pFVar15 = &NCached::UserSettings;
  pFVar19 = &param_1->UserSettings;
  do {
    pFVar1 = (FUserSettingsContext *)(pFVar19->LogFilePath + 0x3e);
    bVar14 = pFVar15->bSendUnattendedBugReports;
    bVar8 = pFVar15->bSendUsageData;
    bVar9 = pFVar15->bImplicitSend;
    wVar10 = pFVar15->LogFilePath[0];
    wVar11 = pFVar15->LogFilePath[1];
    uVar7 = *(undefined8 *)(pFVar15->LogFilePath + 2);
    pFVar2 = (FUserSettingsContext *)(pFVar15->LogFilePath + 0x3e);
    pFVar19->bNoDialog = pFVar15->bNoDialog;
    pFVar19->bSendUnattendedBugReports = bVar14;
    pFVar19->bSendUsageData = bVar8;
    pFVar19->bImplicitSend = bVar9;
    pFVar19->LogFilePath[0] = wVar10;
    pFVar19->LogFilePath[1] = wVar11;
    *(undefined8 *)(pFVar19->LogFilePath + 2) = uVar7;
    uVar7 = *(undefined8 *)(pFVar15->LogFilePath + 10);
    *(undefined8 *)(pFVar19->LogFilePath + 6) = *(undefined8 *)(pFVar15->LogFilePath + 6);
    *(undefined8 *)(pFVar19->LogFilePath + 10) = uVar7;
    uVar7 = *(undefined8 *)(pFVar15->LogFilePath + 0x12);
    *(undefined8 *)(pFVar19->LogFilePath + 0xe) = *(undefined8 *)(pFVar15->LogFilePath + 0xe);
    *(undefined8 *)(pFVar19->LogFilePath + 0x12) = uVar7;
    uVar7 = *(undefined8 *)(pFVar15->LogFilePath + 0x1a);
    *(undefined8 *)(pFVar19->LogFilePath + 0x16) = *(undefined8 *)(pFVar15->LogFilePath + 0x16);
    *(undefined8 *)(pFVar19->LogFilePath + 0x1a) = uVar7;
    uVar7 = *(undefined8 *)(pFVar15->LogFilePath + 0x22);
    *(undefined8 *)(pFVar19->LogFilePath + 0x1e) = *(undefined8 *)(pFVar15->LogFilePath + 0x1e);
    *(undefined8 *)(pFVar19->LogFilePath + 0x22) = uVar7;
    uVar7 = *(undefined8 *)(pFVar15->LogFilePath + 0x2a);
    *(undefined8 *)(pFVar19->LogFilePath + 0x26) = *(undefined8 *)(pFVar15->LogFilePath + 0x26);
    *(undefined8 *)(pFVar19->LogFilePath + 0x2a) = uVar7;
    uVar7 = *(undefined8 *)(pFVar15->LogFilePath + 0x32);
    *(undefined8 *)(pFVar19->LogFilePath + 0x2e) = *(undefined8 *)(pFVar15->LogFilePath + 0x2e);
    *(undefined8 *)(pFVar19->LogFilePath + 0x32) = uVar7;
    uVar7 = *(undefined8 *)(pFVar15->LogFilePath + 0x3a);
    *(undefined8 *)(pFVar19->LogFilePath + 0x36) = *(undefined8 *)(pFVar15->LogFilePath + 0x36);
    *(undefined8 *)(pFVar19->LogFilePath + 0x3a) = uVar7;
    lVar25 = lVar25 + -1;
    pFVar15 = pFVar2;
    pFVar19 = pFVar1;
  } while (lVar25 != 0);
  bVar14 = pFVar2->bSendUnattendedBugReports;
  bVar8 = pFVar2->bSendUsageData;
  bVar9 = pFVar2->bImplicitSend;
  pFVar1->bNoDialog = pFVar2->bNoDialog;
  pFVar1->bSendUnattendedBugReports = bVar14;
  pFVar1->bSendUsageData = bVar8;
  pFVar1->bImplicitSend = bVar9;
  local_168.Base = (wchar_t *)0x0;
  local_168.CurPos = (wchar_t *)0x0;
  local_168.End = (wchar_t *)0x0;
  local_168.bIsDynamic = false;
  local_168.bIsExternal = false;
  TStringBuilderBase<wchar_t>::Extend(&local_168,0x8000);
  param_1->EnabledPluginsOffset = (uint)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1)
  ;
  param_1->EnabledPluginsNum = NCached::EnabledPluginsList.ArrayNum;
  iVar22 = NCached::EnabledPluginsList.ArrayNum;
  pFVar29 = NCached::EnabledPluginsList.AllocatorInstance.Data +
            (longlong)NCached::EnabledPluginsList.ArrayNum * 0x10;
  _Dst = local_168.CurPos;
  FVar23 = NCached::EnabledPluginsList.AllocatorInstance;
  while( true ) {
    uVar24 = 0;
    if (NCached::EnabledPluginsList.ArrayNum != iVar22) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
      _Dst = local_168.CurPos;
    }
    if (FVar23.Data == pFVar29) break;
    pvVar16 = *(void **)FVar23.Data;
    iVar21 = *(int *)(FVar23.Data + 8) + -1;
    if (*(int *)(FVar23.Data + 8) == 0) {
      iVar21 = 0;
    }
    uVar20 = (ulong64)iVar21;
    if (local_168.End < _Dst + uVar20) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,uVar20);
      _Dst = local_168.CurPos;
    }
    if (iVar21 != 0) {
      pvVar16 = memcpy(_Dst,pvVar16,uVar20 * 2);
      _Dst = (wchar_t *)((longlong)pvVar16 + uVar20 * 2);
      local_168.CurPos = _Dst;
    }
    pwVar12 = CR_PAIR_DELIM;
    iVar21 = 0;
    if (CR_PAIR_DELIM != (wchar_t *)0x0) {
      sVar17 = wcslen(CR_PAIR_DELIM);
      iVar21 = (int)sVar17;
    }
    uVar20 = (ulong64)iVar21;
    if (local_168.End < _Dst + uVar20) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,uVar20);
      _Dst = local_168.CurPos;
    }
    if (iVar21 != 0) {
      pvVar16 = memcpy(_Dst,pwVar12,uVar20 * 2);
      _Dst = (wchar_t *)((longlong)pvVar16 + uVar20 * 2);
      local_168.CurPos = _Dst;
    }
    FVar23.Data = FVar23.Data + 0x10;
  }
  uStack_134 = 1;
  param_1->EngineDataOffset = (uint)((longlong)_Dst - (longlong)local_168.Base >> 1);
  param_1->EngineDataNum = NCached::EngineData._8_4_ - NCached::EngineData._52_4_;
  uVar28 = NCached::EngineData._40_4_;
  uStack_124 = uVar24;
  local_120 = uVar24;
  if (uVar28 != 0) {
    puVar27 = (uint *)&NCached::EngineData.field_0x10;
    if (NCached::EngineData._32_8_ != 0) {
      puVar27 = (uint *)NCached::EngineData._32_8_;
    }
    uVar30 = *puVar27;
    while (uVar30 == 0) {
      lVar25 = (longlong)(int)uVar24;
      local_120 = local_120 + 0x20;
      uVar24 = uVar24 + 1;
      uStack_124 = uVar28;
      if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar24)
      goto LAB_141630251;
      uVar30 = puVar27[lVar25 + 1];
    }
    uStack_134 = -uVar30 & uVar30;
    uVar3 = (ulonglong)uStack_134 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_110 = (int)lVar25;
    uStack_124 = (local_120 - 1) + local_110;
    if ((int)uVar28 < (int)uStack_124) {
      uStack_124 = uVar28;
    }
  }
LAB_141630251:
  uStack_11c = local_54;
  uVar30 = uVar28 & 0xffffffe0;
  iStack_118 = NCached::EngineData._8_4_ - NCached::EngineData._52_4_;
  local_130 = 0x154b76aa0;
  local_140 = &NCached::EngineData;
  bVar6 = NCached::EngineData._40_1_;
  TStack_c8._padding_ = CONCAT44(uStack_134,uVar24);
  uStack_128 = 0xffffffff;
  TStack_c8.CurrentBitIndex = uStack_124;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  local_d0 = &NCached::EngineData;
  iVar22 = (int)uVar28 >> 5;
  TStack_c8._28_4_ = local_54;
  TStack_c8.BaseBitIndex = local_120;
  uStack_a8 = CONCAT44(uStack_114,iStack_118);
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&NCached::EngineData.field_0x10;
  uVar26 = uVar28;
  uStack_138 = uVar24;
  if ((int)uVar28 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar26 = NCached::EngineData._40_4_;
    _Dst = local_168.CurPos;
  }
  if (uVar28 != uVar26) {
    lVar25 = 0x154b76aa0;
    if (NCached::EngineData._32_8_ != 0) {
      lVar25 = NCached::EngineData._32_8_;
    }
    uVar24 = -1 << (bVar6 & 0x1f) & *(uint *)(lVar25 + (longlong)iVar22 * 4);
    while (uVar24 == 0) {
      lVar18 = (longlong)iVar22;
      uVar30 = uVar30 + 0x20;
      iVar22 = iVar22 + 1;
      uVar28 = uVar26;
      if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
      goto LAB_141630380;
      uVar24 = *(uint *)(lVar25 + 4 + lVar18 * 4);
    }
    uVar3 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_10c = (int)lVar25;
    uVar28 = (uVar30 - 1) + local_10c;
    if ((int)uVar26 < (int)uVar28) {
      uVar28 = uVar26;
    }
  }
LAB_141630380:
  while( true ) {
    pTVar13 = local_d0;
    if (*(int *)&local_d0->field_0x8 - *(int *)&local_d0->field_0x34 != (int)uStack_a8) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      _Dst = local_168.CurPos;
    }
    lVar25 = (longlong)TStack_c8.CurrentBitIndex;
    if (((TStack_c8.CurrentBitIndex == uVar28) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)&NCached::EngineData.field_0x10)
        ) && (pTVar13 == &NCached::EngineData)) break;
    lVar4 = *(longlong *)pTVar13;
    pvVar16 = *(void **)(lVar4 + lVar25 * 0x28);
    lVar18 = lVar4 + lVar25 * 0x28;
    iVar21 = *(int *)(lVar4 + 8 + lVar25 * 0x28);
    iVar22 = iVar21 + -1;
    if (iVar21 == 0) {
      iVar22 = 0;
    }
    uVar20 = (ulong64)iVar22;
    if (local_168.End < _Dst + uVar20) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,uVar20);
      _Dst = local_168.CurPos;
    }
    if (iVar22 != 0) {
      pvVar16 = memcpy(_Dst,pvVar16,uVar20 * 2);
      _Dst = (wchar_t *)((longlong)pvVar16 + uVar20 * 2);
      local_168.CurPos = _Dst;
    }
    pwVar12 = CR_PAIR_EQ;
    iVar22 = 0;
    if (CR_PAIR_EQ != (wchar_t *)0x0) {
      sVar17 = wcslen(CR_PAIR_EQ);
      iVar22 = (int)sVar17;
    }
    uVar20 = (ulong64)iVar22;
    if (local_168.End < _Dst + uVar20) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,uVar20);
      _Dst = local_168.CurPos;
    }
    if (iVar22 != 0) {
      pvVar16 = memcpy(_Dst,pwVar12,uVar20 * 2);
      _Dst = (wchar_t *)((longlong)pvVar16 + uVar20 * 2);
      local_168.CurPos = _Dst;
    }
    iVar21 = *(int *)(lVar18 + 0x18);
    pvVar16 = *(void **)(lVar18 + 0x10);
    iVar22 = iVar21 + -1;
    if (iVar21 == 0) {
      iVar22 = 0;
    }
    uVar20 = (ulong64)iVar22;
    if (local_168.End < _Dst + uVar20) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,uVar20);
      _Dst = local_168.CurPos;
    }
    if (iVar22 != 0) {
      pvVar16 = memcpy(_Dst,pvVar16,uVar20 * 2);
      _Dst = (wchar_t *)((longlong)pvVar16 + uVar20 * 2);
      local_168.CurPos = _Dst;
    }
    pwVar12 = CR_PAIR_DELIM;
    iVar22 = 0;
    if (CR_PAIR_DELIM != (wchar_t *)0x0) {
      sVar17 = wcslen(CR_PAIR_DELIM);
      iVar22 = (int)sVar17;
    }
    uVar20 = (ulong64)iVar22;
    if (local_168.End < _Dst + uVar20) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,uVar20);
      _Dst = local_168.CurPos;
    }
    if (iVar22 != 0) {
      pvVar16 = memcpy(_Dst,pwVar12,uVar20 * 2);
      local_168.CurPos = (wchar_t *)((longlong)pvVar16 + uVar20 * 2);
    }
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
    _Dst = local_168.CurPos;
  }
  iStack_f8 = 0;
  uStack_f4 = 1;
  local_e0 = 0;
  param_1->GameDataOffset = (uint)((longlong)_Dst - (longlong)local_168.Base >> 1);
  param_1->GameDataNum = NCached::GameData._8_4_ - NCached::GameData._52_4_;
  uVar24 = NCached::GameData._40_4_;
  uStack_e4 = 0;
  if (uVar24 != 0) {
    puVar27 = (uint *)&NCached::GameData.field_0x10;
    if (NCached::GameData._32_8_ != 0) {
      puVar27 = (uint *)NCached::GameData._32_8_;
    }
    uVar28 = *puVar27;
    while (uVar28 == 0) {
      lVar25 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      uStack_e4 = uVar24;
      if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_f8)
      goto LAB_141630610;
      uVar28 = puVar27[lVar25 + 1];
    }
    uStack_f4 = -uVar28 & uVar28;
    uVar3 = (ulonglong)uStack_f4 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_108 = (int)lVar25;
    uStack_e4 = local_e0 + -1 + local_108;
    if ((int)uVar24 < (int)uStack_e4) {
      uStack_e4 = uVar24;
    }
  }
LAB_141630610:
  uStack_dc = uStack_124;
  uVar28 = uVar24 & 0xffffffe0;
  iStack_d8 = NCached::GameData._8_4_ - NCached::GameData._52_4_;
  local_100 = &NCached::GameData;
  bVar6 = NCached::GameData._40_1_;
  uStack_e8 = 0xffffffff;
  TStack_98._padding_ = CONCAT44(uStack_f4,iStack_f8);
  local_f0 = 0x154b76af0;
  TStack_98.CurrentBitIndex = uStack_e4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  local_a0 = &NCached::GameData;
  iVar22 = (int)uVar24 >> 5;
  TStack_98._28_4_ = uStack_124;
  TStack_98.BaseBitIndex = local_e0;
  uStack_78 = CONCAT44(uStack_d4,iStack_d8);
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)&NCached::GameData.field_0x10;
  uVar30 = uVar24;
  if ((int)uVar24 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar30 = NCached::GameData._40_4_;
    _Dst = local_168.CurPos;
  }
  if (uVar24 != uVar30) {
    lVar25 = 0x154b76af0;
    if (NCached::GameData._32_8_ != 0) {
      lVar25 = NCached::GameData._32_8_;
    }
    uVar24 = -1 << (bVar6 & 0x1f) & *(uint *)(lVar25 + (longlong)iVar22 * 4);
    while (uVar24 == 0) {
      lVar18 = (longlong)iVar22;
      uVar28 = uVar28 + 0x20;
      iVar22 = iVar22 + 1;
      uVar24 = uVar30;
      if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
      goto LAB_141630730;
      uVar24 = *(uint *)(lVar25 + 4 + lVar18 * 4);
    }
    uVar3 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    uVar24 = (uVar28 - 1) + (int)lVar25;
    if ((int)uVar30 < (int)uVar24) {
      uVar24 = uVar30;
    }
  }
LAB_141630730:
  while( true ) {
    pTVar13 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      _Dst = local_168.CurPos;
    }
    lVar25 = (longlong)TStack_98.CurrentBitIndex;
    if (((TStack_98.CurrentBitIndex == uVar24) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)&NCached::GameData.field_0x10))
       && (pTVar13 == &NCached::GameData)) break;
    lVar4 = *(longlong *)pTVar13;
    pvVar16 = *(void **)(lVar4 + lVar25 * 0x28);
    lVar18 = lVar4 + lVar25 * 0x28;
    iVar21 = *(int *)(lVar4 + 8 + lVar25 * 0x28);
    iVar22 = iVar21 + -1;
    if (iVar21 == 0) {
      iVar22 = 0;
    }
    uVar20 = (ulong64)iVar22;
    if (local_168.End < _Dst + uVar20) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,uVar20);
      _Dst = local_168.CurPos;
    }
    if (iVar22 != 0) {
      pvVar16 = memcpy(_Dst,pvVar16,uVar20 * 2);
      _Dst = (wchar_t *)(uVar20 * 2 + (longlong)pvVar16);
      local_168.CurPos = _Dst;
    }
    pwVar12 = CR_PAIR_EQ;
    iVar22 = 0;
    if (CR_PAIR_EQ != (wchar_t *)0x0) {
      sVar17 = wcslen(CR_PAIR_EQ);
      iVar22 = (int)sVar17;
    }
    uVar20 = (ulong64)iVar22;
    if (local_168.End < _Dst + uVar20) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,uVar20);
      _Dst = local_168.CurPos;
    }
    if (iVar22 != 0) {
      pvVar16 = memcpy(_Dst,pwVar12,uVar20 * 2);
      _Dst = (wchar_t *)(uVar20 * 2 + (longlong)pvVar16);
      local_168.CurPos = _Dst;
    }
    iVar21 = *(int *)(lVar18 + 0x18);
    pvVar16 = *(void **)(lVar18 + 0x10);
    iVar22 = iVar21 + -1;
    if (iVar21 == 0) {
      iVar22 = 0;
    }
    uVar20 = (ulong64)iVar22;
    if (local_168.End < _Dst + uVar20) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,uVar20);
      _Dst = local_168.CurPos;
    }
    if (iVar22 != 0) {
      pvVar16 = memcpy(_Dst,pvVar16,uVar20 * 2);
      _Dst = (wchar_t *)(uVar20 * 2 + (longlong)pvVar16);
      local_168.CurPos = _Dst;
    }
    pwVar12 = CR_PAIR_DELIM;
    iVar22 = 0;
    if (CR_PAIR_DELIM != (wchar_t *)0x0) {
      sVar17 = wcslen(CR_PAIR_DELIM);
      iVar22 = (int)sVar17;
    }
    uVar20 = (ulong64)iVar22;
    if (local_168.End < _Dst + uVar20) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,uVar20);
      _Dst = local_168.CurPos;
    }
    if (iVar22 != 0) {
      pvVar16 = memcpy(_Dst,pwVar12,uVar20 * 2);
      local_168.CurPos = (wchar_t *)(uVar20 * 2 + (longlong)pvVar16);
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    _Dst = local_168.CurPos;
  }
  param_1->FilePathsOffset = (uint)((longlong)_Dst - (longlong)local_168.Base >> 1);
  param_1->FilePathsNum = NCached::FilePaths.ArrayNum;
  iVar22 = NCached::FilePaths.ArrayNum;
  pFVar29 = NCached::FilePaths.AllocatorInstance.Data + (longlong)NCached::FilePaths.ArrayNum * 0x10
  ;
  FVar23 = NCached::FilePaths.AllocatorInstance;
  while( true ) {
    if (NCached::FilePaths.ArrayNum != iVar22) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_148);
      _Dst = local_168.CurPos;
    }
    if (FVar23.Data == pFVar29) break;
    pvVar16 = *(void **)FVar23.Data;
    iVar21 = *(int *)(FVar23.Data + 8) + -1;
    if (*(int *)(FVar23.Data + 8) == 0) {
      iVar21 = 0;
    }
    uVar20 = (ulong64)iVar21;
    if (local_168.End < _Dst + uVar20) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,uVar20);
      _Dst = local_168.CurPos;
    }
    if (iVar21 != 0) {
      pvVar16 = memcpy(_Dst,pvVar16,uVar20 * 2);
      _Dst = (wchar_t *)(uVar20 * 2 + (longlong)pvVar16);
      local_168.CurPos = _Dst;
    }
    pwVar12 = CR_PAIR_DELIM;
    iVar21 = 0;
    if (CR_PAIR_DELIM != (wchar_t *)0x0) {
      sVar17 = wcslen(CR_PAIR_DELIM);
      iVar21 = (int)sVar17;
    }
    uVar20 = (ulong64)iVar21;
    if (local_168.End < _Dst + uVar20) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,uVar20);
      _Dst = local_168.CurPos;
    }
    if (iVar21 != 0) {
      pvVar16 = memcpy(_Dst,pwVar12,uVar20 * 2);
      _Dst = (wchar_t *)(uVar20 * 2 + (longlong)pvVar16);
      local_168.CurPos = _Dst;
    }
    FVar23.Data = FVar23.Data + 0x10;
  }
  if (local_168.End < _Dst + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,1);
    _Dst = local_168.CurPos;
  }
  *_Dst = L'\0';
  wcsncpy(param_1->DynamicData,local_168.Base,0x7ffe);
  param_1->DynamicData[0x7ffe] = L'\0';
  param_1->DynamicData[0x7fff] = L'\0';
  if (NCached::GPUBreadcrumbs.bIsSet != false) {
    GPUBreadcrumbsToSharedContext(&NCached::GPUBreadcrumbs.TypedValue,&param_1->GPUBreadcrumbs);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
  return;
}

// CreateCrashReportDirectory @ 141632840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FGenericCrashContext::CreateCrashReportDirectory(wchar_t *param_1,int param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  size_t sVar5;
  IFileManager *pIVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  undefined1 auStack_1a8 [32];
  int local_188;
  FString local_178;
  void *local_168 [2];
  TStringView<wchar_t> local_158;
  wchar_t *local_148;
  undefined4 local_140;
  wchar_t *local_138;
  undefined4 local_130;
  wchar_t local_128 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_188 = param_2;
  TCString<wchar_t>::SnprintfImpl(local_128,0x80,L"%s_%04i");
  bVar2 = FCommandLine::IsInitialized();
  uVar3 = 0;
  if (bVar2) {
    pFVar4 = FPaths::ProjectSavedDir();
    pwVar7 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      local_158.DataPtr = L"";
    }
    else {
      local_158.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    local_158.Size = 0;
    if ((FScriptContainerElement *)local_158.DataPtr != (FScriptContainerElement *)0x0) {
      sVar5 = wcslen(local_158.DataPtr);
      local_158.Size = (int)sVar5;
    }
    local_140 = 7;
    local_148 = L"Crashes";
    local_138 = local_128;
    sVar5 = wcslen(local_128);
    local_130 = (undefined4)sVar5;
    FPaths::CombineInternal(&local_178,&local_158,3);
    pIVar6 = IFileManager::Get();
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_178.Data.ArrayNum != 0) {
      FVar8.Data = local_178.Data.AllocatorInstance.Data;
    }
    pFVar4 = (FString *)(**(code **)((longlong)*pIVar6 + 0x108))(pIVar6,local_168,FVar8.Data);
    if (param_3 != pFVar4) {
      pFVar1 = (param_3->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_3->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_3->Data).ArrayNum = (pFVar4->Data).ArrayNum;
      (param_3->Data).ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_168[0] != (void *)0x0) {
      FMemory::Free(local_168[0]);
    }
    pIVar6 = IFileManager::Get();
    if ((param_3->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
    }
    uVar3 = (**(code **)((longlong)*pIVar6 + 0x60))(pIVar6,pwVar7,1);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  return (bool)uVar3;
}

// DumpAdditionalContext @ 141636990

void __cdecl FGenericCrashContext::DumpAdditionalContext(wchar_t *param_1)

{
  FScopedAdditionalCrashContextProvider *pFVar1;
  code *pcVar2;
  FAdditionalCrashContextStack *pFVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  BOOL BVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined **local_38;
  wchar_t *local_30;
  FDestructionSentinel local_28;
  
  local_38 = &___7FCrashContextExtendedWriterImpl__6B_;
  local_30 = param_1;
  bVar4 = UE::IsGCLocked();
  if (!bVar4) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &AdditionalCrashContextDelegate,(FWriteAccessScope *)&local_28);
    bVar4 = false;
    AdditionalCrashContextDelegate._28_4_ = AdditionalCrashContextDelegate._28_4_ + 1;
    uVar11 = AdditionalCrashContextDelegate._16_4_ - 1;
    if (-1 < (int)uVar11) {
      lVar13 = (longlong)(int)uVar11 << 4;
      do {
        uVar7 = 0;
        if ((int)uVar11 < (int)AdditionalCrashContextDelegate._16_4_) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((*(int *)(lVar13 + 8 + AdditionalCrashContextDelegate._8_8_) == 0) ||
            (*(longlong **)(lVar13 + AdditionalCrashContextDelegate._8_8_) == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(**(longlong **)(lVar13 + AdditionalCrashContextDelegate._8_8_) +
                                0x68))(), cVar6 == '\0')) {
          bVar4 = true;
        }
        lVar13 = lVar13 + -0x10;
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
    }
    AdditionalCrashContextDelegate._28_4_ = AdditionalCrashContextDelegate._28_4_ + -1;
    if (bVar4) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &AdditionalCrashContextDelegate,false);
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)GetAdditionalProviderLock();
  BVar8 = TryEnterCriticalSection(lpCriticalSection);
  pFVar3 = GProviderHead;
  if (BVar8 != 0) {
    for (; pFVar3 != (FAdditionalCrashContextStack *)0x0; pFVar3 = pFVar3->Next) {
      uVar12 = 0;
      if (pFVar3->StackIndex != 0) {
        do {
          pFVar1 = pFVar3->Stack[uVar12];
          UE::Core::Private::Function::CheckCallable(*(void **)&pFVar1->Func);
          plVar10 = *(longlong **)&(pFVar1->Func).field_0x28;
          pcVar2 = *(code **)&pFVar1->Func;
          if (plVar10 == (longlong *)0x0) {
            plVar10 = (longlong *)&(pFVar1->Func).field_0x10;
          }
          uVar9 = (**(code **)(*plVar10 + 8))();
          (*pcVar2)(uVar9,&local_38);
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < pFVar3->StackIndex);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// DumpLog @ 141636d70

FString * __cdecl FGenericCrashContext::DumpLog(FString *__return_storage_ptr__,FString *param_1)

{
  char cVar1;
  bool bVar2;
  size_t sVar3;
  FOutputDevice *pFVar4;
  FOutputDeviceRedirector *pFVar5;
  IFileManager *pIVar6;
  FScriptContainerElement *pFVar7;
  wchar_t *_Str;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  FString local_48;
  FString local_38;
  FOutputDevice local_28;
  FScriptContainerElement *local_18;
  undefined4 local_10;
  
  FGenericPlatformOutputDevices::GetAbsoluteLogFilename(&local_48);
  FPaths::GetCleanFilename(&local_38,&local_48);
  pwVar8 = L"";
  local_18 = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    local_18 = local_38.Data.AllocatorInstance.Data;
  }
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  local_28.bSuppressEventTag = false;
  local_28.bAutoEmitLineTerminator = false;
  local_28._10_2_ = 0;
  local_28._padding_ = (longlong)_Str;
  if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
    sVar3 = wcslen(_Str);
    local_28._8_4_ = SUB84(sVar3,0);
  }
  local_10 = 0;
  if (local_18 != (FScriptContainerElement *)0x0) {
    sVar3 = wcslen((wchar_t *)local_18);
    local_10 = (undefined4)sVar3;
  }
  FPaths::CombineInternal(__return_storage_ptr__,(TStringView<wchar_t> *)&local_28,2);
  pFVar4 = FGenericPlatformOutputDevices::GetLog();
  cVar1 = (**(code **)(pFVar4->_padding_ + 0x38))(pFVar4);
  pFVar5 = FOutputDeviceRedirector::Get();
  bVar2 = FOutputDeviceRedirector::HasBacklogForCrash(pFVar5);
  if ((cVar1 != '\0') || (bVar2)) {
    pIVar6 = IFileManager::Get();
    if ((__return_storage_ptr__->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
    }
    pFVar7 = (FScriptContainerElement *)(**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,pwVar8,0x10);
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      if (cVar1 == '\0') {
        FOutputDevice::FOutputDevice(&local_28);
        local_28._padding_ = (longlong)&___7FOutputDeviceArchiveWrapper__6B_;
        local_18 = pFVar7;
        pFVar5 = GetGlobalLogSingleton();
        FOutputDeviceRedirector::SerializeBacklogForCrash(pFVar5,&local_28);
        FOutputDevice::~FOutputDevice(&local_28);
      }
      else {
        pFVar4 = FGenericPlatformOutputDevices::GetLog();
        (**(code **)(pFVar4->_padding_ + 0x30))(pFVar4,pFVar7);
      }
      (**(code **)(*(longlong *)pFVar7 + 0x208))(pFVar7);
      (*(code *)**(undefined8 **)pFVar7)(pFVar7,1);
    }
  }
  else {
    pIVar6 = IFileManager::Get();
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar9.Data = local_48.Data.AllocatorInstance.Data;
    }
    if ((__return_storage_ptr__->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar6 + 0x40))(pIVar6,pwVar8,FVar9.Data,1,0,0,0,4,0x10);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EndSection @ 1416383f0

void __cdecl FGenericCrashContext::EndSection(FString *param_1,wchar_t *param_2)

{
  ::FString::AppendfImpl(param_1,L"</%s>\r\n");
  return;
}

// GenerateNewCrashGuidBase @ 14163d920

FString * __cdecl FGenericCrashContext::GenerateNewCrashGuidBase(FString *__return_storage_ptr__)

{
  wchar_t *_Source;
  FString local_38;
  FString local_28;
  FGuid local_18;
  
  FGuid::NewGuid(&local_18);
  ::FString::FString(&local_28,"Windows");
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FGuid::AppendString(&local_18,&local_38,Digits);
  _Source = L"";
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s%s-%s");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Data).ArrayNum != 0) {
    _Source = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.CrashGUIDRoot,_Source,0x3f);
  NCached::Session.CrashGUIDRoot[0x3f] = L'\0';
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCachedSessionContext @ 14163ee00

FSessionContext * __cdecl FGenericCrashContext::GetCachedSessionContext(void)

{
  return &NCached::Session;
}

// GetCallstackProperty @ 14163ee10

wchar_t * __thiscall FGenericCrashContext::GetCallstackProperty(FGenericCrashContext *this)

{
  return L"";
}

// GetCrashConfigFilePath @ 141640670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * __cdecl FGenericCrashContext::GetCrashConfigFilePath(void)

{
  size_t sVar1;
  IFileManager *pIVar2;
  FString *pFVar3;
  ForAnyElementType FVar4;
  undefined1 auStack_88 [32];
  FString local_68;
  void *local_58 [2];
  TStringView<wchar_t> local_48;
  undefined8 local_38;
  undefined4 local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  sVar1 = wcslen(NCached::Session.CrashConfigFilePath);
  if ((int)sVar1 == 0) {
    local_48.DataPtr = GetCrashConfigFolder();
    local_48.Size = 0;
    if (local_48.DataPtr != (wchar_t *)0x0) {
      sVar1 = wcslen(local_48.DataPtr);
      local_48.Size = (int)sVar1;
    }
    local_38 = 0x154ea56c0;
    sVar1 = wcslen(NCached::Session.CrashGUIDRoot);
    local_30 = (undefined4)sVar1;
    local_20 = 0x15;
    local_28 = L"CrashReportClient.ini";
    FPaths::CombineInternal(&local_68,&local_48,3);
    pIVar2 = IFileManager::Get();
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar4.Data = local_68.Data.AllocatorInstance.Data;
    }
    pFVar3 = (FString *)(**(code **)((longlong)*pIVar2 + 0x100))(pIVar2,local_58,FVar4.Data);
    if (&local_68 != pFVar3) {
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      local_68.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_68.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar4.Data = local_68.Data.AllocatorInstance.Data;
    }
    wcsncpy(NCached::Session.CrashConfigFilePath,(wchar_t *)FVar4.Data,0xff);
    NCached::Session.CrashConfigFilePath[0xff] = L'\0';
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  return NCached::Session.CrashConfigFilePath;
}

// GetCrashConfigFolder @ 141640800

wchar_t * __cdecl FGenericCrashContext::GetCrashConfigFolder(void)

{
  FString *pFVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FGenericCrashContext::GetCrashConfigFolder'::__l2::
             _dynamic_atexit_destructor_for__CrashConfigFolder__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pwVar3 = L"";
  if (CrashConfigFolder.Data.ArrayNum < 2) {
    pFVar1 = FPaths::GeneratedConfigDir(&local_38);
    if ((pFVar1->Data).ArrayNum == 0) {
      local_28.DataPtr = L"";
    }
    else {
      local_28.DataPtr = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    }
    local_28.Size = 0;
    if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
      sVar2 = wcslen(local_28.DataPtr);
      local_28.Size = (int)sVar2;
    }
    local_10 = 0x11;
    local_18 = L"CrashReportClient";
    FPaths::CombineInternal(&local_48,&local_28,2);
    if (CrashConfigFolder.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(CrashConfigFolder.Data.AllocatorInstance.Data);
    }
    CrashConfigFolder.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    CrashConfigFolder.Data.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    CrashConfigFolder.Data.ArrayNum = local_48.Data.ArrayNum;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (CrashConfigFolder.Data.ArrayNum != 0) {
    pwVar3 = (wchar_t *)CrashConfigFolder.Data.AllocatorInstance.Data;
  }
  return (wchar_t *)(FScriptContainerElement *)pwVar3;
}

// GetCrashGameName @ 141640950

FString * __cdecl FGenericCrashContext::GetCrashGameName(FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,NCached::Session.GameName);
  return __return_storage_ptr__;
}

// GetCrashTypeString @ 141640980

wchar_t * __cdecl FGenericCrashContext::GetCrashTypeString(ECrashContextType param_1)

{
  switch(param_1) {
  case Assert:
    return L"Assert";
  case Ensure:
    return L"Ensure";
  case Stall:
    return L"Stall";
  case GPUCrash:
    return L"GPUCrash";
  case Hang:
    return L"Hang";
  case OutOfMemory:
    return L"OutOfMemory";
  case AbnormalShutdown:
    return L"AbnormalShutdown";
  case VerseRuntimeError:
    return L"VerseRuntimeError";
  default:
    return L"Crash";
  }
}

// GetDeploymentName @ 141641050

wchar_t * __cdecl FGenericCrashContext::GetDeploymentName(void)

{
  return NCached::Session.DeploymentName;
}

// GetEngineData @ 141641c10

FString * __cdecl FGenericCrashContext::GetEngineData(FString *param_1)

{
  uint uVar1;
  int iVar2;
  FString *pFVar3;
  int iVar4;
  wchar_t *pwVar5;
  FString *pFVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar2 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&NCached::EngineData,uVar1,param_1);
  pFVar6 = (FString *)0x0;
  if (iVar2 != -1) {
    pFVar6 = (FString *)(NCached::EngineData._0_8_ + (longlong)iVar2 * 0x28);
  }
  pFVar3 = pFVar6 + 1;
  if (pFVar6 == (FString *)0x0) {
    pFVar3 = (FString *)0x0;
  }
  return pFVar3;
}

// GetEngineData @ 141641c90

TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> * __cdecl
FGenericCrashContext::GetEngineData(void)

{
  return &NCached::EngineData;
}

// GetGameData @ 1416425a0

FString * __cdecl FGenericCrashContext::GetGameData(FString *param_1)

{
  uint uVar1;
  int iVar2;
  FString *pFVar3;
  int iVar4;
  wchar_t *pwVar5;
  FString *pFVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar2 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&NCached::GameData,uVar1,param_1);
  pFVar6 = (FString *)0x0;
  if (iVar2 != -1) {
    pFVar6 = (FString *)(NCached::GameData._0_8_ + (longlong)iVar2 * 0x28);
  }
  pFVar3 = pFVar6 + 1;
  if (pFVar6 == (FString *)0x0) {
    pFVar3 = (FString *)0x0;
  }
  return pFVar3;
}

// GetGameData @ 141642620

TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> * __cdecl
FGenericCrashContext::GetGameData(void)

{
  return &NCached::GameData;
}

// GetGameName @ 141642630

FString * __cdecl FGenericCrashContext::GetGameName(FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"UE-%s");
  return __return_storage_ptr__;
}

// GetModules @ 141643a90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FGenericCrashContext::GetModules
          (FGenericCrashContext *this,
          TArray<FStackWalkModuleInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FWindowsPlatformStackWalk::GetProcessModuleCount();
  if (0 < iVar1) {
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x468,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
    iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x468,8,iVar1,&param_1->AllocatorInstance,&param_1->ArrayNum,
                       &param_1->ArrayMax);
    memset((param_1->AllocatorInstance).Data + (longlong)iVar2 * 0x468,0,(longlong)iVar1 * 0x468);
    iVar1 = FWindowsPlatformStackWalk::GetProcessModuleSignatures
                      ((FStackWalkModuleInfo *)(param_1->AllocatorInstance).Data,iVar1);
    TArray<FStackWalkModuleInfo,TSizedDefaultAllocator<32>_>::SetNum(param_1,iVar1,Default);
  }
  return;
}

// GetOutOfProcessCrashReporterExitCode @ 141643f40

TOptional<int> __cdecl FGenericCrashContext::GetOutOfProcessCrashReporterExitCode(void)

{
  TOptional<int> in_RCX;
  
  *(undefined1 *)((longlong)in_RCX + 4) = 0;
  if ((OutOfProcessCrashReporterExitCode & 0xffffffff00000000U) != 0) {
    *(int *)in_RCX = (int)OutOfProcessCrashReporterExitCode;
    *(undefined1 *)((longlong)in_RCX + 4) = 1;
  }
  return in_RCX;
}

// GetPlatformAllThreadContextsString @ 141644a20

bool __thiscall
FGenericCrashContext::GetPlatformAllThreadContextsString
          (FGenericCrashContext *this,FString *param_1)

{
  return false;
}

// GetPortableCallStack @ 1416451f0

/* WARNING: Removing unreachable block (ram,0x00014164545d) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FGenericCrashContext::GetPortableCallStack
          (FGenericCrashContext *this,ulong64 *param_1,int param_2,
          TArray<FCrashStackFrame,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FCrashStackFrame *pFVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  FStackWalkModuleInfo *pFVar12;
  undefined1 local_res18 [16];
  TArray<FStackWalkModuleInfo,TSizedDefaultAllocator<32>_> local_c8;
  FScriptContainerElement *local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  longlong local_a0;
  FScriptContainerElement *local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  iVar7 = FWindowsPlatformStackWalk::GetProcessModuleCount();
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x468,8,iVar7,&local_c8.AllocatorInstance,&local_c8.ArrayNum,&local_c8.ArrayMax);
  iVar7 = FWindowsPlatformStackWalk::GetProcessModuleSignatures
                    ((FStackWalkModuleInfo *)local_c8.AllocatorInstance.Data,iVar7);
  TArray<FStackWalkModuleInfo,TSizedDefaultAllocator<32>_>::SetNum(&local_c8,iVar7,Default);
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  pFVar2 = (FCrashStackFrame *)(param_3->AllocatorInstance).Data;
  piVar1 = &param_3->ArrayMax;
  if (param_3->ArrayMax < param_2) {
    DestructItems<FCrashStackFrame,int>(pFVar2,param_3->ArrayNum);
    param_3->ArrayNum = 0;
    if (*piVar1 != param_2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_2,&param_3->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FCrashStackFrame,int>(pFVar2,param_3->ArrayNum);
    param_3->ArrayNum = 0;
  }
  local_70 = (longlong)param_2;
  if (param_2 != 0) {
    local_78 = 0;
    do {
      iVar7 = local_c8.ArrayNum;
      uVar9 = (ulonglong)local_c8.ArrayNum;
      uVar3 = param_1[local_78];
      pFVar12 = (FStackWalkModuleInfo *)(local_c8.AllocatorInstance.Data + uVar9 * 0x468);
      FVar10.Data = local_c8.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar9 != iVar7) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FStackWalkModuleInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
          uVar9 = local_c8._8_8_ & 0xffffffff;
        }
        if ((FStackWalkModuleInfo *)FVar10.Data == pFVar12) {
          pFVar8 = ::FString::FString(&local_48,L"Unknown");
          local_98 = (pFVar8->Data).AllocatorInstance.Data;
          (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_90._0_4_ = (pFVar8->Data).ArrayNum;
          local_90._4_4_ = (pFVar8->Data).ArrayMax;
          (pFVar8->Data).ArrayNum = 0;
          (pFVar8->Data).ArrayMax = 0;
          local_88 = 0;
          pFVar11 = (pFVar8->Data).AllocatorInstance.Data;
          local_80 = uVar3;
          if (pFVar11 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar11);
          }
          pFVar11 = (param_3->AllocatorInstance).Data;
          if (((pFVar11 <= (FScriptContainerElement *)&local_98) &&
              ((FScriptContainerElement *)&local_98 < pFVar11 + (longlong)*piVar1 * 0x20)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar7 = param_3->ArrayNum;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&param_3->AllocatorInstance,piVar1);
          }
          param_3->ArrayNum = iVar7 + 1;
          pFVar11 = (param_3->AllocatorInstance).Data + (longlong)iVar7 * 0x20;
          *(undefined8 *)pFVar11 = 0;
          *(FScriptContainerElement **)pFVar11 = local_98;
          local_98 = (FScriptContainerElement *)0x0;
          *(undefined4 *)(pFVar11 + 8) = (undefined4)local_90;
          *(undefined4 *)(pFVar11 + 0xc) = local_90._4_4_;
          local_90 = 0;
          *(undefined8 *)(pFVar11 + 0x10) = local_88;
          *(ulonglong *)(pFVar11 + 0x18) = local_80;
          FVar10.Data = (FScriptContainerElement *)0x0;
          goto LAB_141645579;
        }
        uVar4 = ((FStackWalkModuleInfo *)FVar10.Data)->BaseOfImage;
        if ((uVar4 <= uVar3) && (uVar3 < ((FStackWalkModuleInfo *)FVar10.Data)->ImageSize + uVar4))
        break;
        FVar10.Data = FVar10.Data + 0x468;
      }
      ::FString::FString(&local_68,((FStackWalkModuleInfo *)FVar10.Data)->ImageName);
      pFVar8 = FPaths::GetBaseFilename(&local_58,&local_68,true);
      local_b8 = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b0._0_4_ = (pFVar8->Data).ArrayNum;
      local_b0._4_4_ = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
      pFVar11 = (pFVar8->Data).AllocatorInstance.Data;
      local_a8 = uVar4;
      local_a0 = uVar3 - uVar4;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      pFVar11 = (param_3->AllocatorInstance).Data;
      if (((pFVar11 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar11 + (longlong)*piVar1 * 0x20)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = param_3->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar7 + 1;
      pFVar11 = (param_3->AllocatorInstance).Data + (longlong)iVar7 * 0x20;
      *(undefined8 *)pFVar11 = 0;
      *(FScriptContainerElement **)pFVar11 = local_b8;
      *(undefined4 *)(pFVar11 + 8) = (undefined4)local_b0;
      *(undefined4 *)(pFVar11 + 0xc) = local_b0._4_4_;
      *(ulonglong *)(pFVar11 + 0x10) = local_a8;
      *(longlong *)(pFVar11 + 0x18) = local_a0;
      local_b0 = 0;
      local_b8 = (FScriptContainerElement *)0x0;
      FVar10.Data = local_68.Data.AllocatorInstance.Data;
LAB_141645579:
      if (FVar10.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar10.Data);
      }
      local_78 = local_78 + 1;
    } while (local_78 < local_70);
  }
  if ((FStackWalkModuleInfo *)local_c8.AllocatorInstance.Data != (FStackWalkModuleInfo *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  return;
}

// GetTempSessionContextFilePath @ 141646dd0

FString * __cdecl
FGenericCrashContext::GetTempSessionContextFilePath(FString *__return_storage_ptr__,ulong64 param_1)

{
  wchar_t *pwVar1;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"UECrashContext-%llu.xml");
  pwVar1 = FWindowsPlatformProcess::UserTempDir();
  ::operator/(__return_storage_ptr__,pwVar1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetUniqueCrashName @ 141647330

void __thiscall
FGenericCrashContext::GetUniqueCrashName(FGenericCrashContext *this,wchar_t *param_1,int param_2)

{
  TCString<wchar_t>::SnprintfImpl(param_1,param_2,L"%s_%04i");
  return;
}

// Initialize @ 141647d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl FGenericCrashContext::Initialize(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FCulture *this;
  code *pcVar4;
  EBuildConfiguration EVar5;
  bool bVar6;
  FEngineVersion *pFVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  FInternationalization *pFVar10;
  FTSTicker *this_00;
  undefined8 *puVar11;
  ulong64 uVar12;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this_01;
  uint uVar13;
  wchar_t *pwVar14;
  ForAnyElementType FVar15;
  undefined1 auStackY_4c8 [32];
  FString local_490;
  undefined1 local_480 [8];
  FDelegateAllocation local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FGuid local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FDestructionSentinel local_368;
  FDestructionSentinel local_350;
  FDelegateAllocation *local_338;
  <lambda_1> local_330 [8];
  <lambda_3> local_328 [8];
  <lambda_4> local_320 [8];
  <lambda_5> local_318 [8];
  <lambda_6> local_310 [8];
  <lambda_7> local_308 [8];
  <lambda_8> local_300 [8];
  undefined1 local_2f8 [8];
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  TWeakPtr<FTSTicker::FElement,1> local_270;
  <lambda_9> local_260 [8];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  NCached::Session.bIsInternalBuild = FEngineBuildSettings::IsInternalBuild();
  NCached::Session.bIsPerforceBuild = FEngineBuildSettings::IsPerforceBuild();
  NCached::Session.bWithDebugInfo = FApp::GetIsWithDebugInfo();
  NCached::Session.bIsSourceDistribution = FEngineBuildSettings::IsSourceDistribution();
  NCached::Session.ProcessId = FWindowsPlatformProcess::GetCurrentProcessId();
  pFVar7 = FEngineVersion::Current();
  pFVar8 = FEngineVersion::ToString(pFVar7,&local_2f0,Branch);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.EngineVersion,pwVar9,0x3f);
  NCached::Session.EngineVersion[0x3f] = L'\0';
  if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
  }
  pFVar7 = FEngineVersion::Current();
  pFVar8 = FEngineVersion::ToString(pFVar7,&local_2e0,Branch);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.EngineCompatibleVersion,pwVar9,0x3f);
  NCached::Session.EngineCompatibleVersion[0x3f] = L'\0';
  if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
  }
  pwVar9 = FApp::GetBuildVersion();
  wcsncpy(NCached::Session.BuildVersion,pwVar9,0x3f);
  NCached::Session.BuildVersion[0x3f] = L'\0';
  ::FString::PrintfImpl(&local_408,L"UE-%s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_408.Data.ArrayNum != 0) {
    FVar15.Data = local_408.Data.AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.GameName,(wchar_t *)FVar15.Data,0x3f);
  NCached::Session.GameName[0x3f] = L'\0';
  if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data.AllocatorInstance.Data);
  }
  wcsncpy(NCached::Session.GameSessionID,L"",0x3f);
  NCached::Session.GameSessionID[0x3f] = L'\0';
  wcsncpy(NCached::Session.GameStateName,L"",0x3f);
  NCached::Session.GameStateName[0x3f] = L'\0';
  wcsncpy(NCached::Session.UserActivityHint,L"",0x3f);
  NCached::Session.UserActivityHint[0x3f] = L'\0';
  EVar5 = FApp::GetBuildConfiguration();
  pwVar9 = L"Unknown";
  if (EVar5 == Debug) {
    pwVar14 = L"Debug";
  }
  else if (EVar5 == DebugGame) {
    pwVar14 = L"DebugGame";
  }
  else if (EVar5 == Development) {
    pwVar14 = L"Development";
  }
  else if (EVar5 == Shipping) {
    pwVar14 = L"Shipping";
  }
  else if (EVar5 == Test) {
    pwVar14 = L"Test";
  }
  else {
    pwVar14 = L"Unknown";
  }
  wcsncpy(NCached::Session.BuildConfigurationName,pwVar14,0x3f);
  NCached::Session.BuildConfigurationName[0x3f] = L'\0';
  pwVar14 = FWindowsPlatformProcess::ExecutableName(true);
  wcsncpy(NCached::Session.ExecutableName,pwVar14,0x3f);
  NCached::Session.ExecutableName[0x3f] = L'\0';
  pwVar14 = FWindowsPlatformProcess::BaseDir();
  wcsncpy(NCached::Session.BaseDir,pwVar14,0xff);
  NCached::Session.BaseDir[0xff] = L'\0';
  pwVar14 = FGenericPlatformMisc::RootDir();
  wcsncpy(NCached::Session.RootDir,pwVar14,0xff);
  NCached::Session.RootDir[0xff] = L'\0';
  local_468.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_468.Data.ArrayNum = 0;
  local_468.Data.ArrayMax = 0;
  ::FString::FString(&local_3c8,L"AccountId");
  ::FString::FString(&local_3d8,L"Unreal Engine/Identifiers");
  ::FString::FString(&local_3e8,L"Epic Games");
  FWindowsPlatformMisc::GetStoredValue(&local_3e8,&local_3d8,&local_3c8,&local_468);
  if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
  }
  if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
  }
  if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
  }
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_468.Data.ArrayNum != 0) {
    FVar15.Data = local_468.Data.AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.EpicAccountId,(wchar_t *)FVar15.Data,0x3f);
  NCached::Session.EpicAccountId[0x3f] = L'\0';
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  FGenericPlatformMisc::GetMachineId(&local_428);
  if (((local_428.C == 0 && local_428.A == 0) && local_428.D == 0) && local_428.B == 0) {
    local_458.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_458.Data.ArrayNum = 0;
    local_458.Data.ArrayMax = 0;
  }
  else {
    local_418.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_418.Data.ArrayNum = 0;
    local_418.Data.ArrayMax = 0;
    FGuid::AppendString(&local_428,&local_418,Digits);
    ::FString::ToLower(&local_418,&local_458);
    if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.Data.AllocatorInstance.Data);
    }
    FVar15.Data = local_458.Data.AllocatorInstance.Data;
    if (local_458.Data.ArrayNum != 0) goto LAB_141648143;
  }
  FVar15.Data = (FScriptContainerElement *)L"";
LAB_141648143:
  wcsncpy(NCached::Session.LoginIdStr,(wchar_t *)FVar15.Data,0x3f);
  NCached::Session.LoginIdStr[0x3f] = L'\0';
  if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data.AllocatorInstance.Data);
  }
  FApp::GetBuildVersion();
  ::FString::PrintfImpl(&local_490,L"%s");
  ::FString::PrintfImpl(&local_3b8,L"%s-%s-%s");
  pFVar8 = ::FString::Replace(&local_3b8,&local_2d0,L"+",L"*",IgnoreCase);
  if (&local_490 != pFVar8) {
    if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_490.Data.AllocatorInstance.Data);
    }
    local_490.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_490.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_490.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
  }
  if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
  }
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_490.Data.ArrayNum != 0) {
    FVar15.Data = local_490.Data.AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.SymbolsLabel,(wchar_t *)FVar15.Data,0x7f);
  NCached::Session.SymbolsLabel[0x7f] = L'\0';
  uVar13 = local_490.Data.ArrayNum - 1;
  if (local_490.Data.ArrayNum == 0) {
    uVar13 = 0;
  }
  if ((0x7f < uVar13) && (1 < (byte)LogInit._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  local_438.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_438.Data.ArrayNum = 0;
  local_438.Data.ArrayMax = 0;
  local_448.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_448.Data.ArrayNum = 0;
  local_448.Data.ArrayMax = 0;
  FWindowsPlatformMisc::GetOSVersions(&local_438,&local_448);
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_438.Data.ArrayNum != 0) {
    FVar15.Data = local_438.Data.AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.OsVersion,(wchar_t *)FVar15.Data,0x3f);
  NCached::Session.OsVersion[0x3f] = L'\0';
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_448.Data.ArrayNum != 0) {
    FVar15.Data = local_448.Data.AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.OsSubVersion,(wchar_t *)FVar15.Data,0x3f);
  NCached::Session.OsSubVersion[0x3f] = L'\0';
  NCached::Session.NumberOfCores = FWindowsPlatformMisc::NumberOfCores();
  NCached::Session.NumberOfCoresIncludingHyperthreads =
       FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
  pFVar8 = FWindowsPlatformMisc::GetCPUVendor(&local_2c0);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.CPUVendor,pwVar14,0x3f);
  NCached::Session.CPUVendor[0x3f] = L'\0';
  if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
  }
  pFVar8 = FWindowsPlatformMisc::GetCPUBrand(&local_2b0);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.CPUBrand,pwVar14,0x3f);
  NCached::Session.CPUBrand[0x3f] = L'\0';
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  NCached::Session.CPUModelID = FWindowsPlatformMisc::GetCPUModelID();
  NCached::Session.CPUMicrocodeRevision = FWindowsPlatformMisc::GetCPUMicrocodeRevision();
  pFVar8 = FWindowsPlatformMisc::GetPrimaryGPUBrand(&local_2a0);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.PrimaryGPUBrand,pwVar14,0x3f);
  NCached::Session.PrimaryGPUBrand[0x3f] = L'\0';
  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
  }
  pwVar14 = FWindowsPlatformProcess::UserName(true);
  wcsncpy(NCached::Session.UserName,pwVar14,0x3f);
  NCached::Session.UserName[0x3f] = L'\0';
  pFVar8 = FWindowsPlatformMisc::GetDefaultLocale(&local_290);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.DefaultLocale,pwVar14,0x3f);
  NCached::Session.DefaultLocale[0x3f] = L'\0';
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  local_258._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_258,"Windows",7,Yes);
  wcsncpy(NCached::Session.PlatformName,local_258.Ptr,0x3f);
  NCached::Session.PlatformName[0x3f] = L'\0';
  if ((void *)local_258._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  local_138._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"Windows",7,Yes);
  wcsncpy(NCached::Session.PlatformNameIni,local_138.Ptr,0x3f);
  NCached::Session.PlatformNameIni[0x3f] = L'\0';
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  wcsncpy(NCached::Session.AttendedStatus,L"Unknown",0x3f);
  NCached::Session.AttendedStatus[0x3f] = L'\0';
  bVar6 = FCommandLine::IsInitialized();
  if (bVar6) {
    NCached::Session.bIsUERelease = FApp::IsEngineInstalled();
    bVar6 = FCommandLine::IsInitialized();
    if (bVar6) {
      pwVar14 = FCommandLine::GetOriginalForLogging();
    }
    else {
      pwVar14 = L"";
    }
    wcsncpy(NCached::Session.CommandLine,pwVar14,0x3ff);
    pwVar14 = L"Commandlet";
    NCached::Session.CommandLine[0x3ff] = L'\0';
    if (PRIVATE_GIsRunningCommandlet == false) {
      pwVar14 = L"Game";
    }
    wcsncpy(NCached::Session.EngineMode,pwVar14,0x3f);
    NCached::Session.EngineMode[0x3f] = L'\0';
    wcsncpy(NCached::Session.EngineModeEx,L"Unset",0x3f);
    NCached::Session.EngineModeEx[0x3f] = L'\0';
    pFVar8 = FGenericPlatformOutputDevices::GetAbsoluteLogFilename(&local_280);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    wcsncpy(NCached::UserSettings.LogFilePath,pwVar14,0xff);
    NCached::UserSettings.LogFilePath[0xff] = L'\0';
    if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data.AllocatorInstance.Data);
    }
    pwVar14 = FCommandLine::Get();
    FParse::Value(pwVar14,L"EPICAPP=",NCached::Session.DeploymentName,0x40,true,(wchar_t **)0x0);
    NCached::Session.CrashDumpMode = 0;
    bVar6 = FCommandLine::IsInitialized();
    if (bVar6) {
      pwVar14 = FCommandLine::Get();
      bVar6 = FParse::Param(pwVar14,L"fullcrashdumpalways");
      if (bVar6) {
        NCached::Session.CrashDumpMode = 2;
      }
      else {
        bVar6 = FParse::Param(pwVar14,L"fullcrashdump");
        if (bVar6) {
          NCached::Session.CrashDumpMode = 1;
        }
      }
    }
    NCached::UserSettings.bNoDialog = FApp::IsUnattended();
    uVar13 = (uint)NCached::UserSettings.bNoDialog;
    if (uVar13 != 0xffffffff) {
      if (uVar13 == 0) {
        pwVar9 = L"Attended";
      }
      else if (uVar13 == 1) {
        pwVar9 = L"Unattended";
      }
    }
    wcsncpy(NCached::Session.AttendedStatus,pwVar9,0x3f);
    NCached::Session.AttendedStatus[0x3f] = L'\0';
  }
  GenerateNewCrashGuidBase(&local_3f8);
  if (4 < (byte)LogInit._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  bVar6 = FInternationalization::IsAvailable();
  if (bVar6) {
    pFVar10 = FInternationalization::Get();
    if (((pFVar10->CurrentLanguage).Object == (FCulture *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar3 = (pFVar10->CurrentLanguage).SharedReferenceCount.ReferenceController;
    this = (pFVar10->CurrentLanguage).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this == (FCulture *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    NCached::Session.LanguageLCID = FCulture::GetLCID(this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddLambda<_FGenericCrashContext::Initialize_::__l57::<lambda_1>_>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pFVar10->CultureChangedEvent,local_330);
  }
  this_00 = FTSTicker::GetCoreTicker();
  local_480 = (undefined1  [8])0x0;
  local_478.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_478.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_480,
             (FWriteAccessScope *)&local_350);
  local_338 = &local_478;
  puVar11 = UE::Core::Private::DelegateAllocate(0x20,&local_478);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_2>_>
                ::_vftable_;
  }
  if (local_350.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_350.Accessor,&local_350);
  }
  FTSTicker::AddTicker
            (this_00,&local_270,
             (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_480,__real_3f800000)
  ;
  if (local_270.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_270.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_270.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_270.WeakReferenceCount.ReferenceController,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_480,
             (FWriteAccessScope *)&local_368);
  if ((local_478.DelegateSize != 0) &&
     (local_478.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_478.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_478,0,0,0x10);
    local_478.DelegateSize = 0;
  }
  if (local_368.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_368.Accessor,&local_368);
  }
  if (local_478.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_478.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_480);
  TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
  AddLambda<_FGenericCrashContext::Initialize_::__l2::<lambda_3>_>
            ((TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
              *)&FCoreDelegates::UserActivityStringChanged,local_328);
  TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
  AddLambda<_FGenericCrashContext::Initialize_::__l2::<lambda_4>_>
            ((TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
              *)&FCoreDelegates::GameSessionIDChanged,local_320);
  TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
  AddLambda<_FGenericCrashContext::Initialize_::__l2::<lambda_5>_>
            ((TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
              *)&FCoreDelegates::GameStateClassChanged,local_318);
  TMulticastDelegateRegistration<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy>
  ::AddLambda<_FGenericCrashContext::Initialize_::__l2::<lambda_6>_>
            ((TMulticastDelegateRegistration<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy>
              *)&FCoreDelegates::CrashOverrideParamsChanged,local_310);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_FGenericCrashContext::Initialize_::__l2::<lambda_7>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPostEngineInit,local_308);
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
  AddLambda<_FGenericCrashContext::Initialize_::__l2::<lambda_8>_>
            ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::IsVanillaProductChanged,local_300);
  this_01 = FCoreDelegates::TSConfigReadyForUse();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::AddStatic<>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
             this_01,(_func___cdecl_void *)local_2f8);
  TMulticastDelegateRegistration<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy>::
  AddLambda<_FGenericCrashContext::Initialize_::__l2::<lambda_9>_>
            (&FCoreDelegates::OnPostFork,local_260);
  pwVar9 = FApp::GetBuildURL();
  if (pwVar9 != (wchar_t *)0x0) {
    ::FString::FString(&local_398,pwVar9);
    ::FString::FString(&local_3a8,L"BuildURL");
    SetEngineData(&local_3a8,&local_398);
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
    }
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
  }
  pwVar9 = FApp::GetExecutingJobURL();
  if (pwVar9 != (wchar_t *)0x0) {
    ::FString::FString(&local_378,pwVar9);
    ::FString::FString(&local_388,L"ExecutingJobURL");
    SetEngineData(&local_388,&local_378);
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
  }
  SerializeTempCrashContextToFile();
  CleanupPlatformSpecificFiles();
  bIsInitialized = true;
  if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
  }
  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.Data.AllocatorInstance.Data);
  }
  if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_490.Data.AllocatorInstance.Data);
  }
  return;
}

// InitializeFromConfig @ 141648b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FGenericCrashContext::InitializeFromConfig(void)

{
  FConfigSection *pFVar1;
  wchar_t *pwVar2;
  FString *pFVar3;
  size_t sVar4;
  FPlatformFileManager *this;
  IPlatformFile *pIVar5;
  undefined8 *puVar6;
  FTextLocalizationManager *pFVar7;
  ForAnyElementType FVar8;
  int iVar9;
  undefined1 auStack_278 [32];
  TPairInitializer<FString_&&,FConfigSection_const_&> local_258;
  TStringView<wchar_t> local_248;
  wchar_t *local_238;
  undefined4 local_230;
  FString local_228;
  TStringView<wchar_t> *local_218;
  undefined1 *local_210;
  undefined1 local_208 [144];
  void *local_178;
  undefined4 local_170;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_168;
  ForElementType<FSetElementId> local_128;
  int local_120;
  FConfigFile local_108;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_278;
  PurgeOldCrashConfig();
  pFVar1 = FConfigCacheIni::GetSection(GConfig,L"CrashReportClient",false,&GEngineIni);
  iVar9 = 0;
  if (pFVar1 != (FConfigSection *)0x0) {
    FConfigFile::FConfigFile(&local_108);
    FConfigSection::FConfigSection((FConfigSection *)local_208,pFVar1);
    ::FString::FString((FString *)&local_248,L"CrashReportClient");
    AcquireSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    local_218 = &local_248;
    local_210 = local_208;
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FConfigSection_const_&>_>
              ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                *)&local_108,&local_258,(bool *)&local_218);
    ReleaseSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if (local_248.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_248.DataPtr);
    }
    local_108.Dirty = true;
    local_258.Key = (FString *)0x0;
    local_258.Value = (FConfigSection *)0x0;
    pwVar2 = GetCrashConfigFilePath();
    pFVar3 = ::FString::FString((FString *)&local_248,pwVar2);
    FConfigFile::Write(&local_108,pFVar3,true,(FString *)&local_258);
    if (local_248.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_248.DataPtr);
    }
    if (local_258.Key != (FString *)0x0) {
      FMemory::Free(local_258.Key);
    }
    local_120 = 0;
    if (local_128 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_128);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_168);
    local_170 = 0;
    if (local_178 != (void *)0x0) {
      FMemory::Free(local_178);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_208 + 0x50));
    local_208._72_4_ = 0;
    if ((void *)local_208._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_208._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_208);
    FConfigFile::~FConfigFile(&local_108);
  }
  UpdateLocalizedStrings();
  local_248.DataPtr = FWindowsPlatformProcess::ApplicationSettingsDir();
  if (local_248.DataPtr != (wchar_t *)0x0) {
    sVar4 = wcslen(local_248.DataPtr);
    iVar9 = (int)sVar4;
  }
  local_238 = L"NotAllowedUnattendedBugReports";
  local_230 = 0x1e;
  local_248.Size = iVar9;
  FPaths::CombineInternal(&local_228,&local_248,2);
  if (NCached::UserSettings.bSendUnattendedBugReports == false) {
    this = FPlatformFileManager::Get();
    pIVar5 = FPlatformFileManager::GetPlatformFile(this);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_228.Data.ArrayNum != 0) {
      FVar8.Data = local_228.Data.AllocatorInstance.Data;
    }
    puVar6 = (undefined8 *)(**(code **)((longlong)*pIVar5 + 0x110))(pIVar5,FVar8.Data,0,0);
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  pFVar7 = FTextLocalizationManager::Get();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar7->OnTextRevisionChangedEvent,(_func___cdecl_void *)&local_258);
  SerializeTempCrashContextToFile();
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  return;
}

// InitializeFromContext @ 141648e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGenericCrashContext::InitializeFromContext
          (FSessionContext *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4,
          wchar_t *param_5,FGPUBreadcrumbsSharedContext *param_6)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FString *pFVar5;
  FGPUBreadcrumbCrashData *pFVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  undefined1 auStack_1c8 [32];
  undefined1 local_178;
  undefined1 local_177 [7];
  TArray<FString,TSizedDefaultAllocator<32>_> local_170;
  TArray<FString,TSizedDefaultAllocator<32>_> local_160;
  TArray<FString,TSizedDefaultAllocator<32>_> local_150;
  TArray<FString,TSizedDefaultAllocator<32>_> local_140;
  undefined1 local_130 [8];
  FScriptContainerElement *local_128;
  FScriptContainerElement *local_120;
  FScriptContainerElement *local_118;
  FScriptContainerElement *local_110;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  undefined1 local_c8 [72];
  uint local_80;
  ForAnyElementType local_78;
  ForAnyElementType local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    TokenDelim[0] = CR_PAIR_DELIM;
    TokenDelim[1] = CR_PAIR_EQ;
    _Init_thread_footer(&::_TSS0);
  }
  memcpy(&NCached::Session,param_1,0x20c8);
  if (param_2 != (wchar_t *)0x0) {
    local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.ArrayNum = 0;
    local_150.ArrayMax = 0;
    pFVar5 = ::FString::FString(&local_108,param_2);
    ::FString::ParseIntoArray(pFVar5,&local_150,TokenDelim,2,true);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    iVar4 = local_150.ArrayNum;
    pFVar11 = local_150.AllocatorInstance.Data + (longlong)local_150.ArrayNum * 0x10;
    FVar10.Data = local_150.AllocatorInstance.Data;
    while( true ) {
      if (local_150.ArrayNum != iVar4) {
        local_178 = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_178);
      }
      if (FVar10.Data == pFVar11) break;
      bVar2 = ::FString::StartsWith((FString *)FVar10.Data,L"{",1,IgnoreCase);
      if ((bVar2) && (bVar2 = ::FString::EndsWith((FString *)FVar10.Data,L"}",1,IgnoreCase), bVar2))
      {
        if ((NCached::EnabledPluginsList.AllocatorInstance.Data <= FVar10.Data) &&
           ((FVar10.Data <
             NCached::EnabledPluginsList.AllocatorInstance.Data +
             (longlong)NCached::EnabledPluginsList.ArrayMax * 0x10 &&
            (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar2)))) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (NCached::EnabledPluginsList.ArrayNum == NCached::EnabledPluginsList.ArrayMax) {
          NCached::EnabledPluginsList.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&NCached::EnabledPluginsList.AllocatorInstance,
                          &NCached::EnabledPluginsList.ArrayMax);
        }
        lVar7 = (longlong)NCached::EnabledPluginsList.ArrayNum;
        NCached::EnabledPluginsList.ArrayNum = NCached::EnabledPluginsList.ArrayNum + 1;
        ::FString::FString((FString *)
                           (NCached::EnabledPluginsList.AllocatorInstance.Data + lVar7 * 0x10),
                           (FString *)FVar10.Data);
      }
      FVar10.Data = FVar10.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_150.AllocatorInstance.Data,local_150.ArrayNum);
    if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.AllocatorInstance.Data);
    }
  }
  if (param_3 != (wchar_t *)0x0) {
    local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_170.ArrayNum = 0;
    local_170.ArrayMax = 0;
    pFVar5 = ::FString::FString(&local_f8,param_3);
    ::FString::ParseIntoArray(pFVar5,&local_170,TokenDelim,2,true);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    uVar12 = 0;
    if (1 < local_170.ArrayNum) {
      do {
        uVar3 = 0;
        if ((int)uVar12 < local_170.ArrayNum) {
          uVar3 = ~uVar12 >> 0x1f;
        }
        iVar4 = local_170.ArrayNum;
        if (uVar3 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar4 = local_170.ArrayNum;
        }
        pFVar11 = local_170.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10;
        uVar8 = uVar12 + 1;
        uVar3 = 0;
        if ((int)uVar8 < iVar4) {
          uVar3 = ~uVar8 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_120 = local_170.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
        local_128 = pFVar11;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                  ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    *)&NCached::EngineData,
                   (TPairInitializer<FString_const_&,FString_const_&> *)local_130,(bool *)&local_128
                  );
        iVar4 = uVar12 + 3;
        uVar12 = uVar12 + 2;
      } while (iVar4 < local_170.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_170.AllocatorInstance.Data,local_170.ArrayNum);
    if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.AllocatorInstance.Data);
    }
  }
  uVar12 = 0;
  if (param_4 != (wchar_t *)0x0) {
    local_160.ArrayNum = 0;
    local_160.ArrayMax = 0;
    local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5 = ::FString::FString(&local_e8,param_4);
    ::FString::ParseIntoArray(pFVar5,&local_160,TokenDelim,2,true);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    uVar3 = 0;
    if (1 < local_160.ArrayNum) {
      do {
        uVar8 = uVar12;
        if ((int)uVar3 < local_160.ArrayNum) {
          uVar8 = ~uVar3 >> 0x1f;
        }
        iVar4 = local_160.ArrayNum;
        if (uVar8 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar4 = local_160.ArrayNum;
        }
        pFVar11 = local_160.AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10;
        uVar9 = uVar3 + 1;
        uVar8 = uVar12;
        if ((int)uVar9 < iVar4) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_110 = local_160.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
        local_118 = pFVar11;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                  ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    *)&NCached::GameData,
                   (TPairInitializer<FString_const_&,FString_const_&> *)(local_130 + 4),
                   (bool *)&local_118);
        iVar4 = uVar3 + 3;
        uVar3 = uVar3 + 2;
      } while (iVar4 < local_160.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_160.AllocatorInstance.Data,local_160.ArrayNum);
    if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.AllocatorInstance.Data);
    }
  }
  if (param_5 != (wchar_t *)0x0) {
    local_140.ArrayNum = 0;
    local_140.ArrayMax = 0;
    local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5 = ::FString::FString(&local_d8,param_5);
    ::FString::ParseIntoArray(pFVar5,&local_140,TokenDelim,2,true);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    iVar4 = local_140.ArrayNum;
    pFVar11 = local_140.AllocatorInstance.Data + (longlong)local_140.ArrayNum * 0x10;
    FVar10.Data = local_140.AllocatorInstance.Data;
    while( true ) {
      if (local_140.ArrayNum != iVar4) {
        local_177[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_177);
      }
      if (FVar10.Data == pFVar11) break;
      if (((NCached::FilePaths.AllocatorInstance.Data <= FVar10.Data) &&
          (FVar10.Data <
           NCached::FilePaths.AllocatorInstance.Data + (longlong)NCached::FilePaths.ArrayMax * 0x10)
          ) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (NCached::FilePaths.ArrayNum == NCached::FilePaths.ArrayMax) {
        NCached::FilePaths.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&NCached::FilePaths.AllocatorInstance,&NCached::FilePaths.ArrayMax);
      }
      lVar7 = (longlong)NCached::FilePaths.ArrayNum;
      NCached::FilePaths.ArrayNum = NCached::FilePaths.ArrayNum + 1;
      ::FString::FString((FString *)(NCached::FilePaths.AllocatorInstance.Data + lVar7 * 0x10),
                         (FString *)FVar10.Data);
      FVar10.Data = FVar10.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_140.AllocatorInstance.Data,local_140.ArrayNum);
    if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.AllocatorInstance.Data);
    }
  }
  if ((param_6 != (FGPUBreadcrumbsSharedContext *)0x0) && (param_6->NumQueues != 0)) {
    pFVar6 = GPUBreadcrumbsFromSharedContext((FGPUBreadcrumbCrashData *)local_c8,param_6);
    SetGPUBreadcrumbs(pFVar6);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    local_80 = uVar12;
    if ((void *)local_c8._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_c8._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_c8);
  }
  SerializeTempCrashContextToFile();
  bIsInitialized = true;
  return;
}

// IsFullCrashDump @ 141649da0

bool __thiscall FGenericCrashContext::IsFullCrashDump(FGenericCrashContext *this)

{
  switch(this->Type) {
  default:
    return NCached::Session.CrashDumpMode - 1U < 2;
  case Ensure:
  case Stall:
  case VerseRuntimeError:
    return NCached::Session.CrashDumpMode == 2;
  }
}

// OnThreadStuck @ 14164f4f0

void __cdecl FGenericCrashContext::OnThreadStuck(uint param_1)

{
  if ((NCached::Session.bIsStuck) && (NCached::Session.StuckThreadId == param_1)) {
    return;
  }
  NCached::Session.bIsStuck = true;
  NCached::Session.StuckThreadId = param_1;
  SerializeTempCrashContextToFile();
  return;
}

// OnThreadUnstuck @ 14164f520

void __cdecl FGenericCrashContext::OnThreadUnstuck(uint param_1)

{
  if (NCached::Session.bIsStuck) {
    NCached::Session.bIsStuck = false;
    NCached::Session.StuckThreadId = 0;
    SerializeTempCrashContextToFile();
    return;
  }
  return;
}

// PurgeOldCrashConfig @ 141651dc0

void __cdecl FGenericCrashContext::PurgeOldCrashConfig(void)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined4 uVar5;
  IFileManager *pIVar6;
  size_t sVar7;
  FDateTime FVar8;
  int iVar9;
  ForAnyElementType FVar10;
  FString *pFVar11;
  wchar_t *_Str;
  FString *pFVar12;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar13 [16];
  undefined1 local_res8 [8];
  int local_res10 [2];
  longlong local_res18 [2];
  FString *local_a8;
  undefined8 local_a0;
  FString local_98;
  FString local_88;
  TStringView<wchar_t> local_78;
  FScriptContainerElement *local_68;
  undefined4 local_60;
  
  local_res10[0] = 2;
  FConfigCacheIni::GetInt
            (GConfig,L"CrashReportClient",L"CrashConfigPurgeDays",local_res10,&GEngineIni);
  if (0 < local_res10[0]) {
    pIVar6 = IFileManager::Get();
    local_a8 = (FString *)0x0;
    local_a0 = 0;
    pcVar1 = *(code **)((longlong)*pIVar6 + 0x80);
    local_78.DataPtr = GetCrashConfigFolder();
    local_78.Size = 0;
    if (local_78.DataPtr != (wchar_t *)0x0) {
      sVar7 = wcslen(local_78.DataPtr);
      local_78.Size = (int)sVar7;
    }
    local_68 = (FScriptContainerElement *)0x150632620;
    local_60 = 5;
    FPaths::CombineInternal(&local_88,&local_78,2);
    ::FString::ConcatFC(&local_98,&local_88,L"*");
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar10.Data = local_98.Data.AllocatorInstance.Data;
    }
    (*pcVar1)(pIVar6,&local_a8,FVar10.Data,0,1);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    dVar3 = __real_4269254d38000000;
    dVar2 = __real_3fe0000000000000;
    iVar4 = (int)local_a0;
    pFVar12 = local_a8 + (int)local_a0;
    pFVar11 = local_a8;
    while( true ) {
      if ((int)local_a0 != iVar4) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar11 == pFVar12) break;
      if ((pFVar11->Data).ArrayNum == 0) {
        _Str = L"";
      }
      else {
        _Str = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      local_78.DataPtr = GetCrashConfigFolder();
      iVar9 = 0;
      if (local_78.DataPtr != (wchar_t *)0x0) {
        sVar7 = wcslen(local_78.DataPtr);
        iVar9 = (int)sVar7;
      }
      uVar5 = 0;
      local_78.Size = iVar9;
      local_68 = (FScriptContainerElement *)_Str;
      if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
        sVar7 = wcslen(_Str);
        uVar5 = (undefined4)sVar7;
      }
      local_60 = uVar5;
      FPaths::CombineInternal(&local_98,&local_78,2);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar10.Data = local_98.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar6 + 0xd8))(pIVar6,local_res18,FVar10.Data);
      FVar8 = FDateTime::Now();
      auVar13._0_8_ = (double)local_res10[0] * dVar3 + dVar2;
      auVar13._8_8_ = 0;
      auVar13 = roundpd(extraout_XMM0,auVar13,1);
      if ((longlong)auVar13._0_8_ < *(longlong *)FVar8.Ticks - local_res18[0]) {
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_98.Data.ArrayNum != 0) {
          FVar10.Data = local_98.Data.AllocatorInstance.Data;
        }
        (**(code **)((longlong)*pIVar6 + 0x68))(pIVar6,FVar10.Data,0,1);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      pFVar11 = pFVar11 + 1;
    }
    DestructItems<FString,int>(local_a8,(int)local_a0);
    if (local_a8 != (FString *)0x0) {
      FMemory::Free(local_a8);
    }
  }
  return;
}

// ResetEngineData @ 141658090

void __cdecl FGenericCrashContext::ResetEngineData(void)

{
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           *)&NCached::EngineData);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(&OnEngineDataReset);
  return;
}

// ResetGameData @ 1416580c0

void __cdecl FGenericCrashContext::ResetGameData(void)

{
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           *)&NCached::GameData);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(&OnGameDataReset);
  return;
}

// SerializeAsXML @ 141659d70

void __thiscall FGenericCrashContext::SerializeAsXML(FGenericCrashContext *this,wchar_t *param_1)

{
  int iVar1;
  IFileManager *pIVar2;
  TStringView<wchar_t> local_18;
  
  SerializeContentToBuffer(this);
  pIVar2 = IFileManager::Get();
  iVar1 = (this->CommonBuffer).Data.ArrayNum;
  local_18.DataPtr = (wchar_t *)(this->CommonBuffer).Data.AllocatorInstance.Data;
  local_18.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_18.Size = 0;
  }
  FFileHelper::SaveStringToFile(&local_18,param_1,AutoDetect,pIVar2,0);
  return;
}

// SerializeContentToBuffer @ 141659de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FGenericCrashContext::SerializeContentToBuffer(FGenericCrashContext *this)

{
  FString *this_00;
  ulonglong uVar1;
  code *pcVar2;
  byte bVar3;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar4
  ;
  char cVar5;
  bool bVar6;
  FXmlEscapedString<512> *this_01;
  wchar_t *_Str;
  size_t sVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 auStack_928 [32];
  undefined8 local_908;
  undefined4 local_900;
  wchar_t *local_8f8;
  bool local_8e8;
  bool local_8e7;
  bool local_8e6 [3];
  undefined1 local_8e3 [3];
  int local_8e0 [2];
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_8d8;
  uint uStack_8d0;
  uint uStack_8cc;
  undefined8 local_8c8;
  undefined4 uStack_8c0;
  uint uStack_8bc;
  uint local_8b8;
  undefined4 uStack_8b4;
  int iStack_8b0;
  undefined4 uStack_8ac;
  FString local_8a8;
  wchar_t *local_898;
  undefined8 local_890;
  int local_888;
  int local_884;
  int local_880;
  FScriptContainerElement *local_878;
  wchar_t *local_870;
  wchar_t *local_868;
  wchar_t *local_860;
  wchar_t *local_858;
  wchar_t *local_850;
  FString local_848;
  wchar_t *local_838;
  int iStack_830;
  undefined4 uStack_82c;
  wchar_t *local_828;
  int iStack_820;
  undefined4 uStack_81c;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_818;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_810;
  undefined8 uStack_7f0;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_7e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_7e0;
  undefined8 uStack_7c0;
  wchar_t *local_7b8;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  wchar_t *local_7a8;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  wchar_t *local_798;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  wchar_t *local_788;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  wchar_t *local_778;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  FScriptContainerElement *local_768;
  int iStack_760;
  undefined4 uStack_75c;
  wchar_t *local_758;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  wchar_t *local_748;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  wchar_t *local_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  FCrashStackFrame *local_728;
  int iStack_720;
  undefined4 uStack_71c;
  wchar_t *local_718;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  wchar_t *local_708;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  wchar_t *local_6f8;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  wchar_t *local_6e8;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  wchar_t *local_6d8;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  wchar_t *local_6c8;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  TStringView<wchar_t> local_6b8;
  TStringView<wchar_t> local_6a8;
  TStringView<wchar_t> local_698;
  TStringView<wchar_t> local_688;
  TStringView<wchar_t> local_678;
  TStringView<wchar_t> local_668;
  TStringView<wchar_t> local_658;
  TStringView<wchar_t> local_648;
  TStringView<wchar_t> local_638;
  TArrayView<FCrashStackFrame_const_,int> local_628;
  TStringView<wchar_t> local_618;
  TStringView<wchar_t> local_608;
  TStringView<wchar_t> local_5f8;
  TStringView<wchar_t> local_5e8;
  TStringView<wchar_t> local_5d8;
  TStringView<wchar_t> local_5c8;
  TStringView<wchar_t> local_5b8;
  TStringView<wchar_t> local_5a8 [2];
  undefined4 local_57c;
  undefined4 local_55c;
  FXmlEscapedString<512> local_558;
  wchar_t local_138 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_928;
  this_00 = &this->CommonBuffer;
  ::FString::Reset(this_00,0);
  local_908 = CONCAT44(local_908._4_4_,this->CrashContextIndex);
  TCString<wchar_t>::SnprintfImpl(local_138,0x80,L"%s_%04i");
  ::FString::AppendChars(this_00,L"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n",0x28);
  ::FString::AppendfImpl(this_00,L"<%s>\r\n");
  ::FString::AppendfImpl(this_00,L"<%s>\r\n");
  uStack_6e0 = 0xc;
  local_6e8 = L"CrashVersion";
  local_5c8._12_4_ = uStack_6dc;
  local_5c8.Size = 0xc;
  local_5c8.DataPtr = L"CrashVersion";
  local_8e0[0] = 3;
  AddCrashPropertyInternal<int>(this_00,&local_5c8,local_8e0);
  local_8a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8a8.Data.ArrayNum = 0;
  local_8a8.Data.ArrayMax = 0;
  FGuid::AppendString(&ExecutionGuid,&local_8a8,Digits);
  uStack_6d0 = 0xd;
  local_878 = (FScriptContainerElement *)L"";
  if (local_8a8.Data.ArrayNum != 0) {
    local_878 = local_8a8.Data.AllocatorInstance.Data;
  }
  local_6d8 = L"ExecutionGuid";
  local_5b8._12_4_ = uStack_6cc;
  local_5b8.Size = 0xd;
  local_5b8.DataPtr = L"ExecutionGuid";
  AddCrashPropertyInternal<wchar_t_const_*>(this_00,&local_5b8,(wchar_t **)&local_878);
  if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
  }
  local_870 = local_138;
  uStack_6c0 = 9;
  local_6c8 = L"CrashGUID";
  local_5a8[0]._12_4_ = uStack_6bc;
  local_5a8[0].Size = 9;
  local_5a8[0].DataPtr = L"CrashGUID";
  AddCrashPropertyInternal<wchar_t_const_*>(this_00,local_5a8,&local_870);
  local_8e8 = this->Type == Ensure;
  local_7b8 = L"IsEnsure";
  uStack_7b0 = 8;
  local_6b8._12_4_ = uStack_7ac;
  local_6b8.Size = 8;
  local_6b8.DataPtr = L"IsEnsure";
  AddCrashPropertyInternal<bool>(this_00,&local_6b8,&local_8e8);
  local_8e7 = this->Type == Stall;
  local_7a8 = L"IsStall";
  uStack_7a0 = 7;
  local_6a8._12_4_ = uStack_79c;
  local_6a8.Size = 7;
  local_6a8.DataPtr = L"IsStall";
  AddCrashPropertyInternal<bool>(this_00,&local_6a8,&local_8e7);
  local_8e6[0] = this->Type == Assert;
  local_798 = L"IsAssert";
  uStack_790 = 8;
  local_698._12_4_ = uStack_78c;
  local_698.Size = 8;
  local_698.DataPtr = L"IsAssert";
  AddCrashPropertyInternal<bool>(this_00,&local_698,local_8e6);
  switch(this->Type) {
  case Assert:
    local_868 = L"Assert";
    break;
  case Ensure:
    local_868 = L"Ensure";
    break;
  case Stall:
    local_868 = L"Stall";
    break;
  case GPUCrash:
    local_868 = L"GPUCrash";
    break;
  case Hang:
    local_868 = L"Hang";
    break;
  case OutOfMemory:
    local_868 = L"OutOfMemory";
    break;
  case AbnormalShutdown:
    local_868 = L"AbnormalShutdown";
    break;
  case VerseRuntimeError:
    local_868 = L"VerseRuntimeError";
    break;
  default:
    local_868 = L"Crash";
  }
  uStack_780 = 9;
  local_788 = L"CrashType";
  local_688._12_4_ = uStack_77c;
  local_688.Size = 9;
  local_688.DataPtr = L"CrashType";
  AddCrashPropertyInternal<wchar_t_const_*>(this_00,&local_688,&local_868);
  uStack_770 = 0xc;
  local_778 = L"ErrorMessage";
  local_678._12_4_ = uStack_76c;
  local_678.Size = 0xc;
  local_678.DataPtr = L"ErrorMessage";
  AddCrashPropertyInternal<wchar_t_const_*>(this_00,&local_678,&this->ErrorMessage);
  ::FString::FString(&local_848,NCached::Session.CrashReportClientRichText);
  local_768 = local_848.Data.AllocatorInstance.Data;
  iStack_760 = local_848.Data.ArrayNum + -1;
  if (local_848.Data.ArrayNum == 0) {
    iStack_760 = 0;
  }
  local_668._12_4_ = uStack_75c;
  local_668.Size = iStack_760;
  local_668.DataPtr = (wchar_t *)local_848.Data.AllocatorInstance.Data;
  this_01 = FXmlEscapedString<512>::FXmlEscapedString<512>(&local_558,&local_668);
  if (*(ulonglong *)&this_01->field_0x10 < *(longlong *)&this_01->field_0x8 + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this_01,1);
  }
  local_8f8 = L"CrashReporterMessage";
  local_900 = 0x14;
  **(undefined2 **)&this_01->field_0x8 = 0;
  local_908 = *(undefined8 *)this_01;
  ::FString::AppendfImpl(this_00,L"<%.*s>%s</%.*s>\r\n");
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_558);
  if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_848.Data.AllocatorInstance.Data);
  }
  local_758 = L"CrashReporterMessage";
  uStack_750 = 0x14;
  local_658._12_4_ = uStack_74c;
  local_658.Size = 0x14;
  local_658.DataPtr = L"CrashReporterMessage";
  AddCrashPropertyInternal<wchar_t_[64]>(this_00,&local_658,&NCached::Session.AttendedStatus);
  SerializeSessionContext(this_00);
  uStack_740 = 0x19;
  local_748 = L"NumMinidumpFramesToIgnore";
  local_648._12_4_ = uStack_73c;
  local_648.Size = 0x19;
  local_648.DataPtr = L"NumMinidumpFramesToIgnore";
  AddCrashPropertyInternal<int>(this_00,&local_648,&this->NumMinidumpFramesToIgnore);
  ::FString::AppendChars(this_00,L"<CallStack>",0xb);
  _Str = (wchar_t *)(**(code **)(this->_padding_ + 0x50))(this);
  sVar7 = wcslen(_Str);
  ::FString::AppendChars(this_00,_Str,(int)sVar7);
  ::FString::AppendChars(this_00,L"</CallStack>",0xc);
  ::FString::AppendChars(this_00,L"\r\n",2);
  if ((this->CallStack).ArrayNum == 0) {
    local_738 = L"PCallStack";
    uStack_730 = 10;
    local_638._12_4_ = uStack_72c;
    local_638.Size = 10;
    local_638.DataPtr = L"PCallStack";
    AddCrashPropertyInternal<wchar_t_[1]>(this_00,&local_638,(wchar_t (*) [1])L"");
  }
  else {
    ::FString::AppendfImpl(this_00,L"<%s>\r\n");
    local_728 = (FCrashStackFrame *)(this->CallStack).AllocatorInstance.Data;
    iStack_720 = (this->CallStack).ArrayNum;
    if ((iStack_720 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_628._12_4_ = uStack_71c;
    local_628.ArrayNum = iStack_720;
    local_628.DataPtr = local_728;
    AppendPortableCallstack(this_00,&local_628);
    ::FString::AppendfImpl(this_00,L"</%s>\r\n");
  }
  AddPortableCallStackHash(this);
  AddGPUBreadcrumbs(this);
  local_898 = (wchar_t *)0x0;
  local_890 = 0;
  cVar5 = (**(code **)(this->_padding_ + 0x48))(this,&local_898);
  if (cVar5 != '\0') {
    ::FString::AppendChars(this_00,L"<Threads>",9);
    iVar10 = (int)local_890 + -1;
    if ((int)local_890 == 0) {
      iVar10 = 0;
    }
    ::FString::AppendChars(this_00,local_898,iVar10);
    ::FString::AppendChars(this_00,L"</Threads>",10);
    ::FString::AppendChars(this_00,L"\r\n",2);
  }
  if (local_898 != (wchar_t *)0x0) {
    FMemory::Free(local_898);
  }
  ::FString::AppendfImpl(this_00,L"</%s>\r\n");
  ::FString::AppendfImpl(this_00,L"<%s>\r\n");
  (**(code **)(this->_padding_ + 0x58))(this);
  uStack_710 = 0x16;
  local_718 = L"PlatformCallbackResult";
  local_618._12_4_ = uStack_70c;
  local_618.Size = 0x16;
  local_618.DataPtr = L"PlatformCallbackResult";
  AddCrashPropertyInternal<int>(this_00,&local_618,&NCached::Session.CrashTrigger);
  uStack_700 = 0xc;
  local_708 = L"CrashTrigger";
  local_608._12_4_ = uStack_6fc;
  local_608.Size = 0xc;
  local_608.DataPtr = L"CrashTrigger";
  AddCrashPropertyInternal<int>(this_00,&local_608,&NCached::Session.CrashTrigger);
  ::FString::AppendfImpl(this_00,L"</%s>\r\n");
  ::FString::AppendfImpl(this_00,L"<%s>\r\n");
  uVar12 = NCached::EngineData._40_4_;
  uStack_8d0 = 0;
  uStack_8cc = 1;
  uStack_8bc = uStack_8d0;
  local_8b8 = uStack_8d0;
  if (uVar12 != 0) {
    puVar15 = (uint *)&NCached::EngineData.field_0x10;
    if (NCached::EngineData._32_8_ != 0) {
      puVar15 = (uint *)NCached::EngineData._32_8_;
    }
    uStack_8cc = *puVar15;
    local_8b8 = 0;
    uStack_8d0 = 0;
    while (uStack_8cc == 0) {
      lVar8 = (longlong)(int)uStack_8d0;
      local_8b8 = local_8b8 + 0x20;
      uStack_8d0 = uStack_8d0 + 1;
      uStack_8cc = 1;
      uStack_8bc = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_8d0)
      goto LAB_14165a5a0;
      uStack_8cc = puVar15[lVar8 + 1];
    }
    uStack_8cc = -uStack_8cc & uStack_8cc;
    uVar1 = (ulonglong)uStack_8cc * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_888 = (int)lVar8;
    uStack_8bc = (local_8b8 - 1) + local_888;
    if ((int)uVar12 < (int)uStack_8bc) {
      uStack_8bc = uVar12;
    }
  }
LAB_14165a5a0:
  uStack_8b4 = local_57c;
  uVar16 = uVar12 & 0xffffffe0;
  iStack_8b0 = NCached::EngineData._8_4_ - NCached::EngineData._52_4_;
  local_8c8 = 0x154b76aa0;
  local_8d8 = &NCached::EngineData;
  bVar3 = NCached::EngineData._40_1_;
  TStack_810._padding_ = CONCAT44(uStack_8cc,uStack_8d0);
  uStack_8c0 = 0xffffffff;
  TStack_810.CurrentBitIndex = uStack_8bc;
  TStack_810.UnvisitedBitMask = 0xffffffff;
  local_818 = &NCached::EngineData;
  iVar10 = (int)uVar12 >> 5;
  TStack_810._28_4_ = local_57c;
  TStack_810.BaseBitIndex = local_8b8;
  uStack_7f0 = CONCAT44(uStack_8ac,iStack_8b0);
  TStack_810.Array = (TBitArray<FDefaultBitArrayAllocator> *)&NCached::EngineData.field_0x10;
  uVar14 = uVar12;
  if ((int)uVar12 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar14 = NCached::EngineData._40_4_;
  }
  if (uVar12 != uVar14) {
    lVar8 = 0x154b76aa0;
    if (NCached::EngineData._32_8_ != 0) {
      lVar8 = NCached::EngineData._32_8_;
    }
    uVar12 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar8 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar16 = uVar16 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_14165a6d0;
      uVar12 = *(uint *)(lVar8 + 4 + lVar9 * 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_884 = (int)lVar8;
    uVar12 = (uVar16 - 1) + local_884;
    if ((int)uVar14 < (int)uVar12) {
      uVar12 = uVar14;
    }
  }
LAB_14165a6d0:
  do {
    pTVar4 = local_818;
    if (*(int *)&local_818->field_0x8 - *(int *)&local_818->field_0x34 != (int)uStack_7f0) {
      local_8e6[1] = false;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_8e6 + 1);
    }
    lVar8 = (longlong)TStack_810.CurrentBitIndex;
    if (((TStack_810.CurrentBitIndex == uVar12) &&
        (TStack_810.Array == (TBitArray<FDefaultBitArrayAllocator> *)&NCached::EngineData.field_0x10
        )) && (pTVar4 == &NCached::EngineData)) break;
    lVar9 = *(longlong *)pTVar4;
    if (*(int *)(lVar9 + 0x18 + lVar8 * 0x28) == 0) {
      local_860 = L"";
    }
    else {
      local_860 = *(wchar_t **)(lVar9 + 0x10 + lVar8 * 0x28);
    }
    if (*(int *)(lVar9 + 8 + lVar8 * 0x28) == 0) {
      local_838 = L"";
LAB_14165a756:
      sVar7 = wcslen(local_838);
      iVar10 = (int)sVar7;
    }
    else {
      local_838 = *(wchar_t **)(lVar9 + lVar8 * 0x28);
      iVar10 = 0;
      if (local_838 != (wchar_t *)0x0) goto LAB_14165a756;
    }
    local_5f8._12_4_ = uStack_82c;
    local_5f8.Size = iVar10;
    local_5f8.DataPtr = local_838;
    iStack_830 = iVar10;
    AddCrashPropertyInternal<wchar_t_const_*>(this_00,&local_5f8,&local_860);
    TStack_810.UnvisitedBitMask = TStack_810.UnvisitedBitMask & ~TStack_810._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_810);
  } while( true );
  ::FString::AppendfImpl(this_00,L"</%s>\r\n");
  ::FString::AppendfImpl(this_00,L"<%s>\r\n");
  uStack_8d0 = 0;
  local_8b8 = 0;
  uVar12 = NCached::GameData._40_4_;
  uStack_8bc = 0;
  if (uVar12 == 0) {
LAB_14165a841:
    uStack_8cc = 1;
  }
  else {
    puVar15 = (uint *)&NCached::GameData.field_0x10;
    if (NCached::GameData._32_8_ != 0) {
      puVar15 = (uint *)NCached::GameData._32_8_;
    }
    uStack_8cc = *puVar15;
    while (uStack_8cc == 0) {
      lVar8 = (longlong)(int)uStack_8d0;
      local_8b8 = local_8b8 + 0x20;
      uStack_8d0 = uStack_8d0 + 1;
      uStack_8bc = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_8d0)
      goto LAB_14165a841;
      uStack_8cc = puVar15[lVar8 + 1];
    }
    uStack_8cc = -uStack_8cc & uStack_8cc;
    uVar1 = (ulonglong)uStack_8cc * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_880 = (int)lVar8;
    uStack_8bc = local_8b8 + -1 + local_880;
    if ((int)uVar12 < (int)uStack_8bc) {
      uStack_8bc = uVar12;
    }
  }
  uStack_8b4 = local_55c;
  uVar16 = uVar12 & 0xffffffe0;
  iStack_8b0 = NCached::GameData._8_4_ - NCached::GameData._52_4_;
  local_8d8 = &NCached::GameData;
  bVar3 = NCached::GameData._40_1_;
  uStack_8c0 = 0xffffffff;
  TStack_7e0._padding_ = CONCAT44(uStack_8cc,uStack_8d0);
  local_8c8 = 0x154b76af0;
  TStack_7e0.CurrentBitIndex = uStack_8bc;
  TStack_7e0.UnvisitedBitMask = 0xffffffff;
  local_7e8 = &NCached::GameData;
  iVar10 = (int)uVar12 >> 5;
  TStack_7e0._28_4_ = local_55c;
  TStack_7e0.BaseBitIndex = local_8b8;
  uStack_7c0 = CONCAT44(uStack_8ac,iStack_8b0);
  TStack_7e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&NCached::GameData.field_0x10;
  uVar14 = uVar12;
  if ((int)uVar12 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar14 = NCached::GameData._40_4_;
  }
  if (uVar12 != uVar14) {
    lVar8 = 0x154b76af0;
    if (NCached::GameData._32_8_ != 0) {
      lVar8 = NCached::GameData._32_8_;
    }
    uVar12 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar8 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar16 = uVar16 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_14165a970;
      uVar12 = *(uint *)(lVar8 + 4 + lVar9 * 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar12 = (uVar16 - 1) + (int)lVar8;
    if ((int)uVar14 < (int)uVar12) {
      uVar12 = uVar14;
    }
  }
LAB_14165a970:
  do {
    pTVar4 = local_7e8;
    if (*(int *)&local_7e8->field_0x8 - *(int *)&local_7e8->field_0x34 != (int)uStack_7c0) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_8e6 + 2);
    }
    lVar8 = (longlong)TStack_7e0.CurrentBitIndex;
    if (((TStack_7e0.CurrentBitIndex == uVar12) &&
        (TStack_7e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)&NCached::GameData.field_0x10))
       && (pTVar4 == &NCached::GameData)) {
      ::FString::AppendfImpl(this_00,L"</%s>\r\n");
      if (0 < NCached::EnabledPluginsList.ArrayNum) {
        ::FString::AppendfImpl(this_00,L"<%s>\r\n");
        iVar10 = NCached::EnabledPluginsList.ArrayNum;
        pFVar13 = NCached::EnabledPluginsList.AllocatorInstance.Data +
                  (longlong)NCached::EnabledPluginsList.ArrayNum * 0x10;
        FVar11 = NCached::EnabledPluginsList.AllocatorInstance;
        while( true ) {
          if (NCached::EnabledPluginsList.ArrayNum != iVar10) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_8e3);
          }
          if (FVar11.Data == pFVar13) break;
          if (*(int *)(FVar11.Data + 8) == 0) {
            local_850 = L"";
          }
          else {
            local_850 = *(wchar_t **)FVar11.Data;
          }
          local_6f8 = L"Plugin";
          uStack_6f0 = 6;
          local_5d8._12_4_ = uStack_6ec;
          local_5d8.Size = 6;
          local_5d8.DataPtr = L"Plugin";
          AddCrashPropertyInternal<wchar_t_const_*>(this_00,&local_5d8,&local_850);
          FVar11.Data = FVar11.Data + 0x10;
        }
        ::FString::AppendfImpl(this_00,L"</%s>\r\n");
      }
      ::FString::AppendfImpl(this_00,L"</%s>\r\n");
      return;
    }
    lVar9 = *(longlong *)pTVar4;
    if (*(int *)(lVar9 + 0x18 + lVar8 * 0x28) == 0) {
      local_858 = L"";
    }
    else {
      local_858 = *(wchar_t **)(lVar9 + 0x10 + lVar8 * 0x28);
    }
    if (*(int *)(lVar9 + 8 + lVar8 * 0x28) == 0) {
      local_828 = L"";
LAB_14165a9e9:
      sVar7 = wcslen(local_828);
      iVar10 = (int)sVar7;
    }
    else {
      local_828 = *(wchar_t **)(lVar9 + lVar8 * 0x28);
      iVar10 = 0;
      if (local_828 != (wchar_t *)0x0) goto LAB_14165a9e9;
    }
    local_5e8._12_4_ = uStack_81c;
    local_5e8.Size = iVar10;
    local_5e8.DataPtr = local_828;
    iStack_820 = iVar10;
    AddCrashPropertyInternal<wchar_t_const_*>(this_00,&local_5e8,&local_858);
    TStack_7e0.UnvisitedBitMask = TStack_7e0.UnvisitedBitMask & ~TStack_7e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_7e0);
  } while( true );
}

// SerializeSessionContext @ 14165ab70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FGenericCrashContext::SerializeSessionContext(FString *param_1)

{
  bool bVar1;
  size_t sVar2;
  FXmlEscapedString<512> *pFVar3;
  FString *pFVar4;
  FGenericPlatformMemoryConstants *pFVar5;
  undefined1 auStackY_4d8 [32];
  TStringView<wchar_t> local_498;
  TStringView<wchar_t> local_488;
  FScriptContainerElement *local_478 [2];
  FString local_468;
  FString local_458;
  FXmlEscapedString<512> local_448;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  local_458.Data.ArrayNum = 9;
  local_458.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x150632868;
  local_498._12_4_ = local_458.Data.ArrayMax;
  local_498.Size = 9;
  local_498.DataPtr = L"ProcessId";
  AddCrashPropertyInternal<unsigned_int>(param_1,&local_498,&NCached::Session.ProcessId);
  local_468.Data.ArrayNum = 0x11;
  local_468.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x150632880;
  local_498._12_4_ = local_468.Data.ArrayMax;
  local_498.Size = 0x11;
  local_498.DataPtr = L"SecondsSinceStart";
  AddCrashPropertyInternal<int>(param_1,&local_498,&NCached::Session.SecondsSinceStart);
  local_468.Data.ArrayNum = 0xf;
  local_468.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x150632958;
  local_498._12_4_ = local_468.Data.ArrayMax;
  local_498.Size = 0xf;
  local_498.DataPtr = L"IsInternalBuild";
  AddCrashPropertyInternal<bool>(param_1,&local_498,&NCached::Session.bIsInternalBuild);
  local_468.Data.ArrayNum = 0xf;
  local_468.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x150632978;
  local_498._12_4_ = local_468.Data.ArrayMax;
  local_498.Size = 0xf;
  local_498.DataPtr = L"IsPerforceBuild";
  AddCrashPropertyInternal<bool>(param_1,&local_498,&NCached::Session.bIsPerforceBuild);
  local_468.Data.ArrayNum = 0xf;
  local_468.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x150632998;
  local_498._12_4_ = local_468.Data.ArrayMax;
  local_498.Size = 0xf;
  local_498.DataPtr = L"IsWithDebugInfo";
  AddCrashPropertyInternal<bool>(param_1,&local_498,&NCached::Session.bWithDebugInfo);
  local_468.Data.ArrayNum = 0x14;
  local_468.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x1506329b8;
  local_498.Size = 0x14;
  local_498._12_4_ = local_468.Data.ArrayMax;
  local_498.DataPtr = L"IsSourceDistribution";
  AddCrashPropertyInternal<bool>(param_1,&local_498,&NCached::Session.bIsSourceDistribution);
  sVar2 = wcslen(NCached::Session.GameName);
  if ((int)sVar2 < 1) {
    if (GInternalProjectName[0] == L'\0') {
      local_498.Size = 8;
      local_498.DataPtr = L"GameName";
      AddCrashPropertyInternal<wchar_t_[1]>(param_1,&local_498,(wchar_t (*) [1])L"");
    }
    else {
      ::FString::PrintfImpl(&local_468,L"UE-%s");
      local_498.Size = 8;
      local_478[0] = (FScriptContainerElement *)L"";
      if (local_468.Data.ArrayNum != 0) {
        local_478[0] = local_468.Data.AllocatorInstance.Data;
      }
      local_498.DataPtr = L"GameName";
      AddCrashPropertyInternal<wchar_t_const_*>(param_1,&local_498,(wchar_t **)local_478);
      if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_468.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_468.Data.ArrayNum = 8;
    local_468.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x150632730;
    local_498._12_4_ = local_468.Data.ArrayMax;
    local_498.Size = 8;
    local_498.DataPtr = L"GameName";
    AddCrashPropertyInternal<wchar_t_[64]>(param_1,&local_498,&NCached::Session.GameName);
  }
  local_498.Size = 0xe;
  local_498.DataPtr = L"ExecutableName";
  AddCrashPropertyInternal<wchar_t_[64]>(param_1,&local_498,&NCached::Session.ExecutableName);
  local_498.Size = 0x12;
  local_498.DataPtr = L"BuildConfiguration";
  AddCrashPropertyInternal<wchar_t_[64]>
            (param_1,&local_498,&NCached::Session.BuildConfigurationName);
  local_498.Size = 0xd;
  local_498.DataPtr = L"GameSessionID";
  AddCrashPropertyInternal<wchar_t_[64]>(param_1,&local_498,&NCached::Session.GameSessionID);
  local_498.Size = 0xc;
  local_498.DataPtr = L"PlatformName";
  AddCrashPropertyInternal<wchar_t_[64]>(param_1,&local_498,&NCached::Session.PlatformName);
  local_498.Size = 0x10;
  local_498.DataPtr = L"PlatformFullName";
  AddCrashPropertyInternal<wchar_t_[64]>(param_1,&local_498,&NCached::Session.PlatformName);
  local_498.Size = 0xf;
  local_498.DataPtr = L"PlatformNameIni";
  AddCrashPropertyInternal<wchar_t_[64]>(param_1,&local_498,&NCached::Session.PlatformNameIni);
  local_498.Size = 10;
  local_498.DataPtr = L"EngineMode";
  AddCrashPropertyInternal<wchar_t_[64]>(param_1,&local_498,&NCached::Session.EngineMode);
  local_498.Size = 0xc;
  local_498.DataPtr = L"EngineModeEx";
  AddCrashPropertyInternal<wchar_t_[64]>(param_1,&local_498,&NCached::Session.EngineModeEx);
  local_498.Size = 0xe;
  local_498.DataPtr = L"DeploymentName";
  AddCrashPropertyInternal<wchar_t_[64]>(param_1,&local_498,&NCached::Session.DeploymentName);
  local_498.Size = 0xd;
  local_498.DataPtr = L"EngineVersion";
  AddCrashPropertyInternal<wchar_t_[64]>(param_1,&local_498,&NCached::Session.EngineVersion);
  local_498.Size = 0x17;
  local_498.DataPtr = L"EngineCompatibleVersion";
  AddCrashPropertyInternal<wchar_t_[64]>
            (param_1,&local_498,&NCached::Session.EngineCompatibleVersion);
  ::FString::FString(&local_468,NCached::Session.CommandLine);
  local_498.Size = local_468.Data.ArrayNum + -1;
  if (local_468.Data.ArrayNum == 0) {
    local_498.Size = 0;
  }
  local_498.DataPtr = (wchar_t *)local_468.Data.AllocatorInstance.Data;
  pFVar3 = FXmlEscapedString<512>::FXmlEscapedString<512>(&local_448,&local_498);
  if (*(ulonglong *)&pFVar3->field_0x10 < *(longlong *)&pFVar3->field_0x8 + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)pFVar3,1);
  }
  **(undefined2 **)&pFVar3->field_0x8 = 0;
  ::FString::AppendfImpl(param_1,L"<%.*s>%s</%.*s>\r\n");
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_448);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  local_498.Size = 0xc;
  local_498.DataPtr = L"LanguageLCID";
  AddCrashPropertyInternal<int>(param_1,&local_498,&NCached::Session.LanguageLCID);
  local_498.Size = 0x10;
  local_498.DataPtr = L"AppDefaultLocale";
  AddCrashPropertyInternal<wchar_t_[64]>(param_1,&local_498,&NCached::Session.DefaultLocale);
  local_498.Size = 0xc;
  local_498.DataPtr = L"BuildVersion";
  AddCrashPropertyInternal<wchar_t_[64]>(param_1,&local_498,&NCached::Session.BuildVersion);
  ::FString::FString(&local_468,NCached::Session.SymbolsLabel);
  local_498.Size = local_468.Data.ArrayNum + -1;
  if (local_468.Data.ArrayNum == 0) {
    local_498.Size = 0;
  }
  local_498.DataPtr = (wchar_t *)local_468.Data.AllocatorInstance.Data;
  pFVar3 = FXmlEscapedString<512>::FXmlEscapedString<512>(&local_448,&local_498);
  if (*(ulonglong *)&pFVar3->field_0x10 < *(longlong *)&pFVar3->field_0x8 + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)pFVar3,1);
  }
  **(undefined2 **)&pFVar3->field_0x8 = 0;
  ::FString::AppendfImpl(param_1,L"<%.*s>%s</%.*s>\r\n");
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_448);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  local_498.Size = 0xb;
  local_498.DataPtr = L"IsUERelease";
  AddCrashPropertyInternal<bool>(param_1,&local_498,&NCached::Session.bIsUERelease);
  local_498.Size = 0x10;
  local_498.DataPtr = L"IsRequestingExit";
  AddCrashPropertyInternal<bool>(param_1,&local_498,&NCached::Session.bIsExitRequested);
  bVar1 = NCached::Session.bIsInternalBuild;
  pFVar4 = ::FString::FString((FString *)&local_498,NCached::Session.UserName);
  ::FString::Replace(pFVar4,&local_458,L".",L"",IgnoreCase);
  if (local_498.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_498.DataPtr);
  }
  local_478[0] = (FScriptContainerElement *)L"";
  if ((bVar1 != false) && (local_458.Data.ArrayNum != 0)) {
    local_478[0] = local_458.Data.AllocatorInstance.Data;
  }
  local_498.Size = 8;
  local_498.DataPtr = L"UserName";
  AddCrashPropertyInternal<wchar_t_const_*>(param_1,&local_498,(wchar_t **)local_478);
  local_498.Size = 7;
  local_498.DataPtr = L"BaseDir";
  AddCrashPropertyInternal<wchar_t_[256]>(param_1,&local_498,&NCached::Session.BaseDir);
  local_498.Size = 7;
  local_498.DataPtr = L"RootDir";
  AddCrashPropertyInternal<wchar_t_[256]>(param_1,&local_498,&NCached::Session.RootDir);
  pFVar4 = ::FString::FString((FString *)&local_488,NCached::Session.LoginIdStr);
  pFVar4 = ::FString::ToUpper(pFVar4,&local_468);
  if ((pFVar4->Data).ArrayNum == 0) {
    local_478[0] = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_478[0] = (pFVar4->Data).AllocatorInstance.Data;
  }
  local_498.Size = 9;
  local_498.DataPtr = L"MachineId";
  AddCrashPropertyInternal<wchar_t_const_*>(param_1,&local_498,(wchar_t **)local_478);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  if (local_488.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_488.DataPtr);
  }
  local_498.Size = 7;
  local_498.DataPtr = L"LoginId";
  local_488.DataPtr = L"LoginId";
  local_488.Size = 7;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<wchar_t_[64]>(param_1,&local_488,&NCached::Session.LoginIdStr);
  local_498.Size = 0xd;
  local_498.DataPtr = L"EpicAccountId";
  local_488.DataPtr = L"EpicAccountId";
  local_488.Size = 0xd;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<wchar_t_[64]>(param_1,&local_488,&NCached::Session.EpicAccountId);
  local_498.Size = 0xd;
  local_498.DataPtr = L"SourceContext";
  local_488.DataPtr = L"SourceContext";
  local_488.Size = 0xd;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<wchar_t_[1]>(param_1,&local_488,(wchar_t (*) [1])L"");
  local_498.Size = 0xf;
  local_498.DataPtr = L"UserDescription";
  local_488.DataPtr = L"UserDescription";
  local_488.Size = 0xf;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<wchar_t_[1]>(param_1,&local_488,(wchar_t (*) [1])L"");
  local_498.Size = 0x10;
  local_498.DataPtr = L"UserActivityHint";
  local_488.DataPtr = L"UserActivityHint";
  local_488.Size = 0x10;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<wchar_t_[64]>(param_1,&local_488,&NCached::Session.UserActivityHint);
  local_498.Size = 0xd;
  local_498.DataPtr = L"CrashDumpMode";
  local_488.DataPtr = L"CrashDumpMode";
  local_488.Size = 0xd;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<int>(param_1,&local_488,&NCached::Session.CrashDumpMode);
  local_498.Size = 0xd;
  local_498.DataPtr = L"GameStateName";
  local_488.DataPtr = L"GameStateName";
  local_488.Size = 0xd;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<wchar_t_[64]>(param_1,&local_488,&NCached::Session.GameStateName);
  local_498.Size = 0x12;
  local_498.DataPtr = L"Misc.NumberOfCores";
  local_488.DataPtr = L"Misc.NumberOfCores";
  local_488.Size = 0x12;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<int>(param_1,&local_488,&NCached::Session.NumberOfCores);
  local_498.Size = 0x27;
  local_498.DataPtr = L"Misc.NumberOfCoresIncludingHyperthreads";
  local_488.DataPtr = L"Misc.NumberOfCoresIncludingHyperthreads";
  local_488.Size = 0x27;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<int>
            (param_1,&local_488,&NCached::Session.NumberOfCoresIncludingHyperthreads);
  bVar1 = FWindowsPlatformMisc::Is64bitOperatingSystem();
  local_478[0] = (FScriptContainerElement *)CONCAT44(local_478[0]._4_4_,(uint)bVar1);
  local_498.Size = 0x1b;
  local_498.DataPtr = L"Misc.Is64bitOperatingSystem";
  local_488.DataPtr = L"Misc.Is64bitOperatingSystem";
  local_488.Size = 0x1b;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<int>(param_1,&local_488,(int *)local_478);
  local_498.Size = 0xe;
  local_498.DataPtr = L"Misc.CPUVendor";
  local_488.DataPtr = L"Misc.CPUVendor";
  local_488.Size = 0xe;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<wchar_t_[64]>(param_1,&local_488,&NCached::Session.CPUVendor);
  local_498.Size = 0xd;
  local_498.DataPtr = L"Misc.CPUBrand";
  local_488.DataPtr = L"Misc.CPUBrand";
  local_488.Size = 0xd;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<wchar_t_[64]>(param_1,&local_488,&NCached::Session.CPUBrand);
  local_498.Size = 0xf;
  local_498.DataPtr = L"Misc.CPUModelID";
  local_488.DataPtr = L"Misc.CPUModelID";
  local_488.Size = 0xf;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<unsigned_int>(param_1,&local_488,&NCached::Session.CPUModelID);
  local_498.Size = 0x19;
  local_498.DataPtr = L"Misc.CPUMicrocodeRevision";
  local_488.DataPtr = L"Misc.CPUMicrocodeRevision";
  local_488.Size = 0x19;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<unsigned_int>(param_1,&local_488,&NCached::Session.CPUMicrocodeRevision);
  local_498.Size = 0x14;
  local_498.DataPtr = L"Misc.PrimaryGPUBrand";
  local_488.DataPtr = L"Misc.PrimaryGPUBrand";
  local_488.Size = 0x14;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<wchar_t_[64]>(param_1,&local_488,&NCached::Session.PrimaryGPUBrand);
  local_498.Size = 0x13;
  local_498.DataPtr = L"Misc.OSVersionMajor";
  local_488.DataPtr = L"Misc.OSVersionMajor";
  local_488.Size = 0x13;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<wchar_t_[64]>(param_1,&local_488,&NCached::Session.OsVersion);
  local_498.Size = 0x13;
  local_498.DataPtr = L"Misc.OSVersionMinor";
  local_488.DataPtr = L"Misc.OSVersionMinor";
  local_488.Size = 0x13;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<wchar_t_[64]>(param_1,&local_488,&NCached::Session.OsSubVersion);
  local_498.Size = 0x16;
  local_498.DataPtr = L"Misc.AnticheatProvider";
  local_488.DataPtr = L"Misc.AnticheatProvider";
  local_488.Size = 0x16;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<wchar_t_[64]>(param_1,&local_488,&NCached::Session.AnticheatProvider);
  if (NCached::Session.bIsStuck != false) {
    local_498.Size = 0xc;
    local_498.DataPtr = L"Misc.IsStuck";
    local_488.DataPtr = L"Misc.IsStuck";
    local_488.Size = 0xc;
    local_488._12_4_ = local_498._12_4_;
    AddCrashPropertyInternal<bool>(param_1,&local_488,&NCached::Session.bIsStuck);
    local_498.Size = 0x12;
    local_498.DataPtr = L"Misc.StuckThreadId";
    local_488.DataPtr = L"Misc.StuckThreadId";
    local_488.Size = 0x12;
    local_488._12_4_ = local_498._12_4_;
    AddCrashPropertyInternal<unsigned_int>(param_1,&local_488,&NCached::Session.StuckThreadId);
  }
  pFVar5 = FWindowsPlatformMemory::GetConstants();
  local_498.Size = 0x19;
  local_478[0] = (FScriptContainerElement *)pFVar5->TotalPhysical;
  local_498.DataPtr = L"MemoryStats.TotalPhysical";
  local_488.DataPtr = L"MemoryStats.TotalPhysical";
  local_488.Size = 0x19;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<unsigned___int64>(param_1,&local_488,(ulong64 *)local_478);
  local_478[0] = (FScriptContainerElement *)pFVar5->TotalVirtual;
  local_498.DataPtr = L"MemoryStats.TotalVirtual";
  local_498.Size = 0x18;
  local_488.DataPtr = L"MemoryStats.TotalVirtual";
  local_488.Size = 0x18;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<unsigned___int64>(param_1,&local_488,(ulong64 *)local_478);
  local_478[0] = (FScriptContainerElement *)pFVar5->PageSize;
  local_498.Size = 0x14;
  local_498.DataPtr = L"MemoryStats.PageSize";
  local_488.DataPtr = L"MemoryStats.PageSize";
  local_488.Size = 0x14;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<unsigned___int64>(param_1,&local_488,(ulong64 *)local_478);
  local_498.Size = 0x1b;
  local_498.DataPtr = L"MemoryStats.TotalPhysicalGB";
  local_488.DataPtr = L"MemoryStats.TotalPhysicalGB";
  local_488.Size = 0x1b;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<unsigned_int>(param_1,&local_488,&pFVar5->TotalPhysicalGB);
  local_478[0] = (FScriptContainerElement *)NCached::Session.MemoryStats._padding_;
  local_498.Size = 0x1d;
  local_498.DataPtr = L"MemoryStats.AvailablePhysical";
  local_488.DataPtr = L"MemoryStats.AvailablePhysical";
  local_488.Size = 0x1d;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<unsigned___int64>(param_1,&local_488,(ulong64 *)local_478);
  local_478[0] = (FScriptContainerElement *)NCached::Session.MemoryStats._padding_;
  local_498.Size = 0x1c;
  local_498.DataPtr = L"MemoryStats.AvailableVirtual";
  local_488.DataPtr = L"MemoryStats.AvailableVirtual";
  local_488.Size = 0x1c;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<unsigned___int64>(param_1,&local_488,(ulong64 *)local_478);
  local_478[0] = (FScriptContainerElement *)NCached::Session.MemoryStats._padding_;
  local_498.Size = 0x18;
  local_498.DataPtr = L"MemoryStats.UsedPhysical";
  local_488.DataPtr = L"MemoryStats.UsedPhysical";
  local_488.Size = 0x18;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<unsigned___int64>(param_1,&local_488,(ulong64 *)local_478);
  local_478[0] = (FScriptContainerElement *)NCached::Session.MemoryStats._padding_;
  local_498.DataPtr = L"MemoryStats.PeakUsedPhysical";
  local_498.Size = 0x1c;
  local_488.DataPtr = L"MemoryStats.PeakUsedPhysical";
  local_488.Size = 0x1c;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<unsigned___int64>(param_1,&local_488,(ulong64 *)local_478);
  local_478[0] = (FScriptContainerElement *)NCached::Session.MemoryStats._padding_;
  local_498.Size = 0x17;
  local_498.DataPtr = L"MemoryStats.UsedVirtual";
  local_488.DataPtr = L"MemoryStats.UsedVirtual";
  local_488.Size = 0x17;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<unsigned___int64>(param_1,&local_488,(ulong64 *)local_478);
  local_478[0] = (FScriptContainerElement *)NCached::Session.MemoryStats._padding_;
  local_498.Size = 0x1b;
  local_498.DataPtr = L"MemoryStats.PeakUsedVirtual";
  local_488.DataPtr = L"MemoryStats.PeakUsedVirtual";
  local_488.Size = 0x1b;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<unsigned___int64>(param_1,&local_488,(ulong64 *)local_478);
  local_478[0] = (FScriptContainerElement *)
                 CONCAT44(local_478[0]._4_4_,(uint)NCached::Session.bIsOOM);
  local_498.Size = 0x12;
  local_498.DataPtr = L"MemoryStats.bIsOOM";
  local_488.DataPtr = L"MemoryStats.bIsOOM";
  local_488.Size = 0x12;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<int>(param_1,&local_488,(int *)local_478);
  local_498.Size = 0x1d;
  local_498.DataPtr = L"MemoryStats.OOMAllocationSize";
  local_488.DataPtr = L"MemoryStats.OOMAllocationSize";
  local_488.Size = 0x1d;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<unsigned___int64>(param_1,&local_488,&NCached::Session.OOMAllocationSize)
  ;
  local_498.Size = 0x22;
  local_498.DataPtr = L"MemoryStats.OOMAllocationAlignment";
  local_488.DataPtr = L"MemoryStats.OOMAllocationAlignment";
  local_488.Size = 0x22;
  local_488._12_4_ = local_498._12_4_;
  AddCrashPropertyInternal<int>(param_1,&local_488,&NCached::Session.OOMAllocationAlignment);
  if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data.AllocatorInstance.Data);
  }
  return;
}

// SerializeTempCrashContextToFile @ 14165bb20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FGenericCrashContext::SerializeTempCrashContextToFile(void)

{
  ulonglong uVar1;
  code *pcVar2;
  byte bVar3;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar4
  ;
  bool bVar5;
  FXmlEscapedString<512> *pFVar6;
  FString *pFVar7;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar8;
  IFileManager *pIVar9;
  longlong lVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  wchar_t *pwVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  ForAnyElementType FVar22;
  undefined1 auStackY_1798 [32];
  undefined1 local_1758 [8];
  FString local_1750;
  undefined1 local_1740 [8];
  FString local_1738;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1728;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_1718;
  uint uStack_1710;
  uint uStack_170c;
  undefined8 local_1708;
  undefined4 uStack_1700;
  uint uStack_16fc;
  uint local_16f8;
  undefined4 uStack_16f4;
  int iStack_16f0;
  undefined4 uStack_16ec;
  int local_16e8;
  int local_16e4;
  int local_16e0;
  TStringView<wchar_t> local_16d8;
  FString local_16c8;
  FString local_16b8;
  FString local_16a8;
  FString local_1698;
  FString local_1688;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_1678;
  int iStack_1670;
  uint uStack_166c;
  undefined8 local_1668;
  undefined4 uStack_1660;
  uint uStack_165c;
  int local_1658;
  uint uStack_1654;
  int iStack_1650;
  undefined4 uStack_164c;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_1648;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1640;
  undefined8 uStack_1620;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_1618;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1610;
  undefined8 uStack_15f0;
  FScriptContainerElement *local_15e8;
  int iStack_15e0;
  undefined4 uStack_15dc;
  FScriptContainerElement *local_15d8;
  int iStack_15d0;
  undefined4 uStack_15cc;
  FScriptContainerElement *local_15c8;
  int iStack_15c0;
  undefined4 uStack_15bc;
  FScriptContainerElement *local_15b8;
  uint uStack_15b0;
  undefined4 uStack_15ac;
  FScriptContainerElement *local_15a8;
  uint uStack_15a0;
  undefined4 uStack_159c;
  FScriptContainerElement *local_1598;
  uint uStack_1590;
  undefined4 uStack_158c;
  wchar_t *local_1588;
  undefined4 uStack_1580;
  undefined4 uStack_157c;
  FString local_1578;
  TStringView<wchar_t> local_1568;
  FString local_1558;
  TStringView<wchar_t> local_1548;
  TStringView<wchar_t> local_1538;
  TStringView<wchar_t> local_1528;
  TStringView<wchar_t> local_1518;
  TStringView<wchar_t> local_1508 [2];
  undefined4 local_14dc;
  FXmlEscapedString<512> local_14d8;
  FXmlEscapedString<512> local_10b8;
  FXmlEscapedString<512> local_c98;
  FXmlEscapedString<512> local_878;
  FXmlEscapedString<512> local_458;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1798;
  if (OutOfProcessCrashReporterPid == 0) {
    return;
  }
  local_1750.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1750.Data.ArrayNum = 0;
  local_1750.Data.ArrayMax = 0;
  ::FString::Reserve(&local_1750,0x8000);
  ::FString::AppendChars(&local_1750,L"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n",0x28);
  ::FString::AppendfImpl(&local_1750,L"<%s>\r\n");
  SerializeSessionContext(&local_1750);
  pwVar16 = L"true";
  pwVar12 = L"true";
  if (NCached::UserSettings.bNoDialog == false) {
    pwVar12 = L"false";
  }
  ::FString::FString(&local_16c8,pwVar12);
  local_15b8 = local_16c8.Data.AllocatorInstance.Data;
  uVar18 = 0;
  uStack_15b0 = local_16c8.Data.ArrayNum - 1;
  if (local_16c8.Data.ArrayNum == 0) {
    uStack_15b0 = uVar18;
  }
  local_1538._12_4_ = uStack_15ac;
  local_1538.Size = uStack_15b0;
  local_1538.DataPtr = (wchar_t *)local_16c8.Data.AllocatorInstance.Data;
  pFVar6 = FXmlEscapedString<512>::FXmlEscapedString<512>(&local_14d8,&local_1538);
  if (*(ulonglong *)&pFVar6->field_0x10 < *(longlong *)&pFVar6->field_0x8 + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)pFVar6,1);
  }
  **(undefined2 **)&pFVar6->field_0x8 = 0;
  ::FString::AppendfImpl(&local_1750,L"<%.*s>%s</%.*s>\r\n");
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_14d8);
  if (local_16c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_16c8.Data.AllocatorInstance.Data);
  }
  pwVar12 = L"true";
  if (NCached::UserSettings.bSendUnattendedBugReports == false) {
    pwVar12 = L"false";
  }
  ::FString::FString(&local_16b8,pwVar12);
  local_15a8 = local_16b8.Data.AllocatorInstance.Data;
  uStack_15a0 = local_16b8.Data.ArrayNum - 1;
  if (local_16b8.Data.ArrayNum == 0) {
    uStack_15a0 = uVar18;
  }
  local_1528._12_4_ = uStack_159c;
  local_1528.Size = uStack_15a0;
  local_1528.DataPtr = (wchar_t *)local_16b8.Data.AllocatorInstance.Data;
  pFVar6 = FXmlEscapedString<512>::FXmlEscapedString<512>(&local_10b8,&local_1528);
  if (*(ulonglong *)&pFVar6->field_0x10 < *(longlong *)&pFVar6->field_0x8 + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)pFVar6,1);
  }
  **(undefined2 **)&pFVar6->field_0x8 = 0;
  ::FString::AppendfImpl(&local_1750,L"<%.*s>%s</%.*s>\r\n");
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_10b8);
  if (local_16b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_16b8.Data.AllocatorInstance.Data);
  }
  if (NCached::UserSettings.bSendUsageData == false) {
    pwVar16 = L"false";
  }
  ::FString::FString(&local_16a8,pwVar16);
  local_1598 = local_16a8.Data.AllocatorInstance.Data;
  uVar17 = 0;
  uStack_1590 = local_16a8.Data.ArrayNum - 1;
  if (local_16a8.Data.ArrayNum == 0) {
    uStack_1590 = uVar17;
  }
  local_1518._12_4_ = uStack_158c;
  local_1518.Size = uStack_1590;
  local_1518.DataPtr = (wchar_t *)local_16a8.Data.AllocatorInstance.Data;
  pFVar6 = FXmlEscapedString<512>::FXmlEscapedString<512>(&local_c98,&local_1518);
  if (*(ulonglong *)&pFVar6->field_0x10 < *(longlong *)&pFVar6->field_0x8 + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)pFVar6,1);
  }
  **(undefined2 **)&pFVar6->field_0x8 = 0;
  ::FString::AppendfImpl(&local_1750,L"<%.*s>%s</%.*s>\r\n");
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_c98);
  if (local_16a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_16a8.Data.AllocatorInstance.Data);
  }
  pFVar7 = FGenericPlatformOutputDevices::GetAbsoluteLogFilename(&local_1578);
  uStack_1580 = 0xb;
  local_1588 = L"LogFilePath";
  local_1508[0]._12_4_ = uStack_157c;
  local_1508[0].Size = 0xb;
  local_1508[0].DataPtr = L"LogFilePath";
  AddCrashPropertyInternal<FString>(&local_1750,local_1508,pFVar7);
  if (local_1578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1578.Data.AllocatorInstance.Data);
  }
  ::FString::AppendfImpl(&local_1750,L"<%s>\r\n");
  uVar21 = NCached::EngineData._40_4_;
  uStack_170c = 1;
  uStack_16fc = uVar18;
  if (uVar21 != 0) {
    puVar20 = (uint *)&NCached::EngineData.field_0x10;
    if (NCached::EngineData._32_8_ != 0) {
      puVar20 = (uint *)NCached::EngineData._32_8_;
    }
    uStack_170c = *puVar20;
    uVar18 = 0;
    uVar17 = 0;
    while (uStack_170c == 0) {
      lVar10 = (longlong)(int)uVar17;
      uVar18 = uVar18 + 0x20;
      uVar17 = uVar17 + 1;
      uStack_170c = 1;
      uStack_16fc = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
      goto LAB_14165bf50;
      uStack_170c = puVar20[lVar10 + 1];
    }
    uStack_170c = -uStack_170c & uStack_170c;
    uVar1 = (ulonglong)uStack_170c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_16e8 = (int)lVar10;
    uStack_16fc = (uVar18 - 1) + local_16e8;
    if ((int)uVar21 < (int)uStack_16fc) {
      uStack_16fc = uVar21;
    }
  }
LAB_14165bf50:
  uStack_16f4 = local_14dc;
  iStack_16f0 = NCached::EngineData._8_4_ - NCached::EngineData._52_4_;
  uVar15 = uVar21 & 0xffffffe0;
  local_1708 = 0x154b76aa0;
  local_1718 = &NCached::EngineData;
  bVar3 = NCached::EngineData._40_1_;
  TStack_1640._padding_ = CONCAT44(uStack_170c,uVar17);
  uStack_1700 = 0xffffffff;
  TStack_1640.CurrentBitIndex = uStack_16fc;
  TStack_1640.UnvisitedBitMask = 0xffffffff;
  local_1648 = &NCached::EngineData;
  iVar13 = (int)uVar21 >> 5;
  TStack_1640._28_4_ = local_14dc;
  TStack_1640.BaseBitIndex = uVar18;
  uStack_1620 = CONCAT44(uStack_16ec,iStack_16f0);
  TStack_1640.Array = (TBitArray<FDefaultBitArrayAllocator> *)&NCached::EngineData.field_0x10;
  uVar19 = uVar21;
  uStack_1710 = uVar17;
  local_16f8 = uVar18;
  if ((int)uVar21 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar19 = NCached::EngineData._40_4_;
  }
  if (uVar21 != uVar19) {
    lVar10 = 0x154b76aa0;
    if (NCached::EngineData._32_8_ != 0) {
      lVar10 = NCached::EngineData._32_8_;
    }
    uVar18 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar10 + (longlong)iVar13 * 4);
    while (uVar18 == 0) {
      lVar11 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar21 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_14165c070;
      uVar18 = *(uint *)(lVar10 + 4 + lVar11 * 4);
    }
    uVar1 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_16e4 = (int)lVar10;
    uVar21 = (uVar15 - 1) + local_16e4;
    if ((int)uVar19 < (int)uVar21) {
      uVar21 = uVar19;
    }
  }
LAB_14165c070:
  do {
    pTVar4 = local_1648;
    if (*(int *)&local_1648->field_0x8 - *(int *)&local_1648->field_0x34 != (int)uStack_1620) {
      local_1758[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1758);
    }
    lVar10 = (longlong)TStack_1640.CurrentBitIndex;
    if (((TStack_1640.CurrentBitIndex == uVar21) &&
        (TStack_1640.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&NCached::EngineData.field_0x10)) &&
       (pTVar4 == &NCached::EngineData)) break;
    lVar11 = *(longlong *)pTVar4;
    if (*(int *)(lVar11 + 0x18 + lVar10 * 0x28) == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = *(wchar_t **)(lVar11 + 0x10 + lVar10 * 0x28);
    }
    if (*(int *)(lVar11 + 8 + lVar10 * 0x28) == 0) {
      pwVar16 = L"";
LAB_14165c0f1:
      wcslen(pwVar16);
    }
    else {
      pwVar16 = *(wchar_t **)(lVar11 + lVar10 * 0x28);
      if (pwVar16 != (wchar_t *)0x0) goto LAB_14165c0f1;
    }
    ::FString::FString(&local_1698,pwVar12);
    local_15e8 = local_1698.Data.AllocatorInstance.Data;
    iStack_15e0 = local_1698.Data.ArrayNum + -1;
    if (local_1698.Data.ArrayNum == 0) {
      iStack_15e0 = 0;
    }
    local_16d8._12_4_ = uStack_15dc;
    local_16d8.Size = iStack_15e0;
    local_16d8.DataPtr = (wchar_t *)local_1698.Data.AllocatorInstance.Data;
    pFVar6 = FXmlEscapedString<512>::FXmlEscapedString<512>(&local_878,&local_16d8);
    if (*(ulonglong *)&pFVar6->field_0x10 < *(longlong *)&pFVar6->field_0x8 + 2U) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)pFVar6,1);
    }
    **(undefined2 **)&pFVar6->field_0x8 = 0;
    ::FString::AppendfImpl(&local_1750,L"<%.*s>%s</%.*s>\r\n");
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)&local_878);
    if (local_1698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1698.Data.AllocatorInstance.Data);
    }
    TStack_1640.UnvisitedBitMask = TStack_1640.UnvisitedBitMask & ~TStack_1640._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1640);
  } while( true );
  ::FString::AppendfImpl(&local_1750,L"</%s>\r\n");
  ::FString::AppendfImpl(&local_1750,L"<%s>\r\n");
  iStack_1670 = 0;
  iVar13 = 1;
  local_1658 = 0;
  uVar18 = NCached::GameData._40_4_;
  uStack_166c = 1;
  uStack_165c = 0;
  if (uVar18 != 0) {
    puVar20 = (uint *)&NCached::GameData.field_0x10;
    if (NCached::GameData._32_8_ != 0) {
      puVar20 = (uint *)NCached::GameData._32_8_;
    }
    uStack_166c = *puVar20;
    local_1658 = 0;
    while (uStack_166c == 0) {
      lVar10 = (longlong)iStack_1670;
      local_1658 = local_1658 + 0x20;
      iStack_1670 = iStack_1670 + 1;
      uStack_166c = 1;
      uStack_165c = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1670)
      goto LAB_14165c280;
      uStack_166c = puVar20[lVar10 + 1];
    }
    uStack_166c = -uStack_166c & uStack_166c;
    uVar1 = (ulonglong)uStack_166c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_16e0 = (int)lVar10;
    uStack_165c = local_1658 + -1 + local_16e0;
    if ((int)uVar18 < (int)uStack_165c) {
      uStack_165c = uVar18;
    }
  }
LAB_14165c280:
  uStack_1654 = uStack_16fc;
  iStack_1650 = NCached::GameData._8_4_ - NCached::GameData._52_4_;
  local_1668 = 0x154b76af0;
  local_1678 = &NCached::GameData;
  uVar17 = uVar18 & 0xffffffe0;
  uStack_1660 = 0xffffffff;
  bVar3 = NCached::GameData._40_1_;
  TStack_1610.CurrentBitIndex = uStack_165c;
  TStack_1610.UnvisitedBitMask = 0xffffffff;
  TStack_1610._padding_ = CONCAT44(uStack_166c,iStack_1670);
  local_1618 = &NCached::GameData;
  iVar14 = (int)uVar18 >> 5;
  TStack_1610._28_4_ = uStack_16fc;
  TStack_1610.BaseBitIndex = local_1658;
  uStack_15f0 = CONCAT44(uStack_164c,iStack_1650);
  TStack_1610.Array = (TBitArray<FDefaultBitArrayAllocator> *)&NCached::GameData.field_0x10;
  uVar21 = uVar18;
  if ((int)uVar18 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar21 = NCached::GameData._40_4_;
  }
  if (uVar18 != uVar21) {
    lVar10 = 0x154b76af0;
    if (NCached::GameData._32_8_ != 0) {
      lVar10 = NCached::GameData._32_8_;
    }
    uVar18 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar10 + (longlong)iVar14 * 4);
    while (uVar18 == 0) {
      lVar11 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uVar18 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14165c390;
      uVar18 = *(uint *)(lVar10 + 4 + lVar11 * 4);
    }
    uVar1 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar18 = (uVar17 - 1) + (int)lVar10;
    if ((int)uVar21 < (int)uVar18) {
      uVar18 = uVar21;
    }
  }
LAB_14165c390:
  do {
    pTVar4 = local_1618;
    if (*(int *)&local_1618->field_0x8 - *(int *)&local_1618->field_0x34 != (int)uStack_15f0) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1740);
    }
    lVar10 = (longlong)TStack_1610.CurrentBitIndex;
    if (((TStack_1610.CurrentBitIndex == uVar18) &&
        (TStack_1610.Array == (TBitArray<FDefaultBitArrayAllocator> *)&NCached::GameData.field_0x10)
        ) && (pTVar4 == &NCached::GameData)) {
      ::FString::AppendfImpl(&local_1750,L"</%s>\r\n");
      ::FString::AppendfImpl(&local_1750,L"</%s>\r\n");
      ::FString::PrintfImpl(&local_1738,L"UECrashContext-%llu.xml");
      pwVar12 = FWindowsPlatformProcess::UserTempDir();
      iVar14 = local_1738.Data.ArrayNum;
      if (local_1738.Data.ArrayNum == 0) {
        iVar14 = 1;
      }
      pTVar8 = &::FString::FString(&local_1558,pwVar12)->Data;
      if ((pTVar8->ArrayNum != 0) || (iVar14 == 0)) {
        iVar13 = 0;
      }
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_1728,pTVar8,iVar13 + iVar14);
      if (local_1558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1558.Data.AllocatorInstance.Data);
      }
      iVar13 = local_1738.Data.ArrayNum + -1;
      if (local_1738.Data.ArrayNum == 0) {
        iVar13 = 0;
      }
      ::FString::PathAppend
                ((FString *)&local_1728,(wchar_t *)local_1738.Data.AllocatorInstance.Data,iVar13);
      if (local_1738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1738.Data.AllocatorInstance.Data);
      }
      pIVar9 = IFileManager::Get();
      local_15c8 = local_1750.Data.AllocatorInstance.Data;
      FVar22.Data = (FScriptContainerElement *)L"";
      if (local_1728.ArrayNum != 0) {
        FVar22.Data = local_1728.AllocatorInstance.Data;
      }
      iStack_15c0 = local_1750.Data.ArrayNum + -1;
      if (local_1750.Data.ArrayNum == 0) {
        iStack_15c0 = 0;
      }
      local_1548._12_4_ = uStack_15bc;
      local_1548.Size = iStack_15c0;
      local_1548.DataPtr = (wchar_t *)local_1750.Data.AllocatorInstance.Data;
      FFileHelper::SaveStringToFile(&local_1548,(wchar_t *)FVar22.Data,AutoDetect,pIVar9,0);
      if (local_1728.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1728.AllocatorInstance.Data);
      }
      if (local_1750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1750.Data.AllocatorInstance.Data);
      }
      return;
    }
    lVar11 = *(longlong *)pTVar4;
    if (*(int *)(lVar11 + 0x18 + lVar10 * 0x28) == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = *(wchar_t **)(lVar11 + 0x10 + lVar10 * 0x28);
    }
    if (*(int *)(lVar11 + 8 + lVar10 * 0x28) == 0) {
      pwVar16 = L"";
LAB_14165c41b:
      wcslen(pwVar16);
    }
    else {
      pwVar16 = *(wchar_t **)(lVar11 + lVar10 * 0x28);
      if (pwVar16 != (wchar_t *)0x0) goto LAB_14165c41b;
    }
    ::FString::FString(&local_1688,pwVar12);
    local_15d8 = local_1688.Data.AllocatorInstance.Data;
    iStack_15d0 = local_1688.Data.ArrayNum + -1;
    if (local_1688.Data.ArrayNum == 0) {
      iStack_15d0 = 0;
    }
    local_1568._12_4_ = uStack_15cc;
    local_1568.Size = iStack_15d0;
    local_1568.DataPtr = (wchar_t *)local_1688.Data.AllocatorInstance.Data;
    pFVar6 = FXmlEscapedString<512>::FXmlEscapedString<512>(&local_458,&local_1568);
    if (*(ulonglong *)&pFVar6->field_0x10 < *(longlong *)&pFVar6->field_0x8 + 2U) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)pFVar6,1);
    }
    **(undefined2 **)&pFVar6->field_0x8 = 0;
    ::FString::AppendfImpl(&local_1750,L"<%.*s>%s</%.*s>\r\n");
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)&local_458);
    if (local_1688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1688.Data.AllocatorInstance.Data);
    }
    TStack_1610.UnvisitedBitMask = TStack_1610.UnvisitedBitMask & ~TStack_1610._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1610);
  } while( true );
}

// SerializeUserSettings @ 14165c690

void __cdecl FGenericCrashContext::SerializeUserSettings(FString *param_1)

{
  FString *pFVar1;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  local_28.Size = 8;
  local_28.DataPtr = L"NoDialog";
  AddCrashPropertyInternal<bool>(param_1,&local_28,&NCached::UserSettings.bNoDialog);
  local_28.Size = 0x18;
  local_28.DataPtr = L"SendUnattendedBugReports";
  AddCrashPropertyInternal<bool>(param_1,&local_28,&NCached::UserSettings.bSendUnattendedBugReports)
  ;
  local_28.Size = 0xd;
  local_28.DataPtr = L"SendUsageData";
  AddCrashPropertyInternal<bool>(param_1,&local_28,&NCached::UserSettings.bSendUsageData);
  pFVar1 = FGenericPlatformOutputDevices::GetAbsoluteLogFilename(&local_18);
  local_28.Size = 0xb;
  local_28.DataPtr = L"LogFilePath";
  AddCrashPropertyInternal<FString>(param_1,&local_28,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetAnticheatProvider @ 14165cd20

void __cdecl FGenericCrashContext::SetAnticheatProvider(FString *param_1)

{
  wchar_t *_Source;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.AnticheatProvider,_Source,0x3f);
  NCached::Session.AnticheatProvider[0x3f] = L'\0';
  SerializeTempCrashContextToFile();
  return;
}

// SetCrashTrigger @ 14165cea0

void __cdecl FGenericCrashContext::SetCrashTrigger(ECrashTrigger param_1)

{
  NCached::Session.CrashTrigger = param_1;
  return;
}

// SetDeploymentName @ 14165cf70

void __cdecl FGenericCrashContext::SetDeploymentName(FString *param_1)

{
  wchar_t *_Source;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.DeploymentName,_Source,0x3f);
  NCached::Session.DeploymentName[0x3f] = L'\0';
  return;
}

// SetEngineData @ 14165cfc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FGenericCrashContext::SetEngineData(FString *param_1,FString *param_2)

{
  uint uVar1;
  int iVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  int local_res10 [2];
  FString *local_res18 [2];
  FLogScopedCategoryAndVerbosityOverride local_38;
  
  iVar2 = (param_2->Data).ArrayNum;
  pwVar4 = L"";
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar5 = 0;
  }
  iVar2 = 0;
  if (iVar5 == 0) {
    if (6 < (byte)LogCrashContext._0_1_) {
      FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
                (&local_38,(FName)LogCrashContext._4_8_,All);
      pFVar3 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
               ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                       *)&NCached::EngineData,param_1);
      if ((pFVar3 != (FString *)0x0) && (6 < (byte)LogCrashContext._0_1_)) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogCrashContext);
      }
      FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogCrashContext,All);
      FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_38);
    }
    if (NCached::EngineData._8_4_ != NCached::EngineData._52_4_) {
      iVar5 = (param_1->Data).ArrayNum;
      if (iVar5 != 0) {
        pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        iVar2 = iVar5 + -1;
      }
      uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,pwVar4);
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::RemoveImpl<FString>
                ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)&NCached::EngineData,uVar1,param_1);
    }
    goto LAB_14165d1ec;
  }
  iVar5 = (param_1->Data).ArrayNum;
  if (iVar5 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar2 = iVar5 + -1;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,pwVar4);
  iVar2 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&NCached::EngineData,uVar1,param_1);
  if ((iVar2 == -1) || (lVar6 = NCached::EngineData._0_8_ + (longlong)iVar2 * 0x28, lVar6 == 0)) {
    local_res18[0] = param_1;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&NCached::EngineData,(uint)local_res10,
               (TKeyInitializer<FString_const_&> *)(ulonglong)uVar1,(bool *)local_res18);
    lVar6 = NCached::EngineData._0_8_ + (longlong)local_res10[0] * 0x28;
  }
  if (6 < (byte)LogCrashContext._0_1_) {
    FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
              (&local_38,(FName)LogCrashContext._4_8_,All);
    iVar2 = *(int *)(lVar6 + 0x18);
    iVar5 = (param_2->Data).ArrayNum;
    if (iVar2 == iVar5) {
      if (1 < iVar2) {
        iVar2 = StricmpImpl<wchar_t,wchar_t>
                          (*(wchar_t **)(lVar6 + 0x10),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar7 = iVar2 == 0;
        goto LAB_14165d187;
      }
    }
    else {
      bVar7 = iVar2 + iVar5 == 1;
LAB_14165d187:
      if ((!bVar7) && (6 < (byte)LogCrashContext._0_1_)) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogCrashContext);
      }
    }
    FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogCrashContext,All);
    FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_38);
  }
  ::FString::operator=((FString *)(lVar6 + 0x10),param_2);
LAB_14165d1ec:
  TMulticastDelegate<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>::
  Broadcast(&OnEngineDataSet,param_1,param_2);
  return;
}

// SetEngineExit @ 14165d210

void __cdecl FGenericCrashContext::SetEngineExit(bool param_1)

{
  NCached::Session.bIsExitRequested = GIsRequestingExit;
  return;
}

// SetEpicAccountId @ 14165d260

void __cdecl FGenericCrashContext::SetEpicAccountId(FString *param_1)

{
  wchar_t *_Source;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.EpicAccountId,_Source,0x3f);
  NCached::Session.EpicAccountId[0x3f] = L'\0';
  return;
}

// SetGPUBreadcrumbs @ 14165d360

void __cdecl FGenericCrashContext::SetGPUBreadcrumbs(FGPUBreadcrumbCrashData *param_1)

{
  ushort uVar1;
  ushort uVar2;
  wchar_t *pwVar3;
  ushort *puVar4;
  ushort *puVar5;
  wchar_t *pwVar6;
  
  if (NCached::GPUBreadcrumbs.bIsSet) {
    puVar4 = (ushort *)&u_RHI;
    pwVar6 = L"";
    pwVar3 = L"";
    if (NCached::GPUBreadcrumbs.TypedValue.SourceName.Data.ArrayNum != 0) {
      pwVar3 = (wchar_t *)NCached::GPUBreadcrumbs.TypedValue.SourceName.Data.AllocatorInstance.Data;
    }
    puVar5 = (ushort *)&u_RHI;
    do {
      while( true ) {
        uVar1 = *(ushort *)
                 ((FScriptContainerElement *)((longlong)pwVar3 + -0x15063f1c8) + (longlong)puVar5);
        uVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        if (uVar1 != uVar2) break;
        if (uVar1 == 0) {
LAB_14165d3f9:
          if ((param_1->SourceName).Data.ArrayNum != 0) {
            pwVar6 = (wchar_t *)(param_1->SourceName).Data.AllocatorInstance.Data;
          }
          goto LAB_14165d410;
        }
      }
      if (((uVar2 | uVar1) & 0xff80) != 0) {
        if (uVar1 == uVar2) goto LAB_14165d3f9;
        break;
      }
    } while (""[uVar1] == ""[uVar2]);
LAB_14165d450:
    if (NCached::GPUBreadcrumbs.TypedValue.Version.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(NCached::GPUBreadcrumbs.TypedValue.Version.Data.AllocatorInstance.Data);
    }
    if (NCached::GPUBreadcrumbs.TypedValue.SourceName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(NCached::GPUBreadcrumbs.TypedValue.SourceName.Data.AllocatorInstance.Data);
    }
    NCached::GPUBreadcrumbs.TypedValue.Queues._72_4_ = 0;
    if (NCached::GPUBreadcrumbs.TypedValue.Queues._64_8_ != 0) {
      FMemory::Free((void *)NCached::GPUBreadcrumbs.TypedValue.Queues._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&NCached::GPUBreadcrumbs);
  }
  TSet<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>,TDefaultMapHashableKeyFuncs<FString,FGPUBreadcrumbCrashData::FQueueData,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>,TDefaultMapHashableKeyFuncs<FString,FGPUBreadcrumbCrashData::FQueueData,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>,TDefaultMapHashableKeyFuncs<FString,FGPUBreadcrumbCrashData::FQueueData,0>,FDefaultSetAllocator>
              *)&NCached::GPUBreadcrumbs,
             (TSet<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>,TDefaultMapHashableKeyFuncs<FString,FGPUBreadcrumbCrashData::FQueueData,0>,FDefaultSetAllocator>
              *)param_1);
  NCached::GPUBreadcrumbs.TypedValue.SourceName.Data.AllocatorInstance.Data =
       (param_1->SourceName).Data.AllocatorInstance.Data;
  (param_1->SourceName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  NCached::GPUBreadcrumbs.TypedValue.SourceName.Data.ArrayNum = (param_1->SourceName).Data.ArrayNum;
  NCached::GPUBreadcrumbs.TypedValue.SourceName.Data.ArrayMax = (param_1->SourceName).Data.ArrayMax;
  (param_1->SourceName).Data.ArrayNum = 0;
  (param_1->SourceName).Data.ArrayMax = 0;
  NCached::GPUBreadcrumbs.TypedValue.Version.Data.AllocatorInstance.Data =
       (param_1->Version).Data.AllocatorInstance.Data;
  (param_1->Version).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  NCached::GPUBreadcrumbs.TypedValue.Version.Data.ArrayNum = (param_1->Version).Data.ArrayNum;
  NCached::GPUBreadcrumbs.TypedValue.Version.Data.ArrayMax = (param_1->Version).Data.ArrayMax;
  (param_1->Version).Data.ArrayNum = 0;
  (param_1->Version).Data.ArrayMax = 0;
  NCached::GPUBreadcrumbs.bIsSet = true;
  return;
LAB_14165d410:
  uVar1 = *(ushort *)
           ((FScriptContainerElement *)((longlong)pwVar6 + -0x15063f1c8) + (longlong)puVar4);
  uVar2 = *puVar4;
  puVar4 = puVar4 + 1;
  if (uVar1 == uVar2) {
    if (uVar1 == 0) goto LAB_14165d450;
    goto LAB_14165d410;
  }
  if (((uVar2 | uVar1) & 0xff80) != 0) {
    if (uVar1 != uVar2) {
      return;
    }
    goto LAB_14165d450;
  }
  if (""[uVar1] != ""[uVar2]) {
    return;
  }
  goto LAB_14165d410;
}

// SetGameData @ 14165d530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FGenericCrashContext::SetGameData(FString *param_1,FString *param_2)

{
  uint uVar1;
  int iVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  int local_res10 [2];
  FString *local_res18 [2];
  FLogScopedCategoryAndVerbosityOverride local_38;
  
  iVar2 = (param_2->Data).ArrayNum;
  pwVar4 = L"";
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar5 = 0;
  }
  iVar2 = 0;
  if (iVar5 == 0) {
    if (6 < (byte)LogCrashContext._0_1_) {
      FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
                (&local_38,(FName)LogCrashContext._4_8_,All);
      pFVar3 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
               ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                       *)&NCached::GameData,param_1);
      if ((pFVar3 != (FString *)0x0) && (6 < (byte)LogCrashContext._0_1_)) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogCrashContext);
      }
      FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogCrashContext,All);
      FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_38);
    }
    if (NCached::GameData._8_4_ != NCached::GameData._52_4_) {
      iVar5 = (param_1->Data).ArrayNum;
      if (iVar5 != 0) {
        pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        iVar2 = iVar5 + -1;
      }
      uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,pwVar4);
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::RemoveImpl<FString>
                ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)&NCached::GameData,uVar1,param_1);
    }
    goto LAB_14165d75c;
  }
  iVar5 = (param_1->Data).ArrayNum;
  if (iVar5 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar2 = iVar5 + -1;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,pwVar4);
  iVar2 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&NCached::GameData,uVar1,param_1);
  if ((iVar2 == -1) || (lVar6 = NCached::GameData._0_8_ + (longlong)iVar2 * 0x28, lVar6 == 0)) {
    local_res18[0] = param_1;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&NCached::GameData,(uint)local_res10,
               (TKeyInitializer<FString_const_&> *)(ulonglong)uVar1,(bool *)local_res18);
    lVar6 = NCached::GameData._0_8_ + (longlong)local_res10[0] * 0x28;
  }
  if (6 < (byte)LogCrashContext._0_1_) {
    FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
              (&local_38,(FName)LogCrashContext._4_8_,All);
    iVar2 = *(int *)(lVar6 + 0x18);
    iVar5 = (param_2->Data).ArrayNum;
    if (iVar2 == iVar5) {
      if (1 < iVar2) {
        iVar2 = StricmpImpl<wchar_t,wchar_t>
                          (*(wchar_t **)(lVar6 + 0x10),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar7 = iVar2 == 0;
        goto LAB_14165d6f7;
      }
    }
    else {
      bVar7 = iVar2 + iVar5 == 1;
LAB_14165d6f7:
      if ((!bVar7) && (6 < (byte)LogCrashContext._0_1_)) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogCrashContext);
      }
    }
    FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogCrashContext,All);
    FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_38);
  }
  ::FString::operator=((FString *)(lVar6 + 0x10),param_2);
LAB_14165d75c:
  TMulticastDelegate<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>::
  Broadcast(&OnGameDataSet,param_1,param_2);
  return;
}

// SetMemoryStats @ 14165dab0

void __cdecl FGenericCrashContext::SetMemoryStats(FPlatformMemoryStats *param_1)

{
  NCached::Session.MemoryStats._padding_ = param_1->_padding_;
  NCached::Session.MemoryStats._padding_ = param_1->_padding_;
  NCached::Session.bIsOOM = FGenericPlatformMemory::bIsOOM;
  NCached::Session.MemoryStats._padding_ = param_1->_padding_;
  NCached::Session.MemoryStats._padding_ = param_1->_padding_;
  NCached::Session.MemoryStats._padding_ = param_1->_padding_;
  NCached::Session.MemoryStats._padding_ = param_1->_padding_;
  NCached::Session.MemoryStats._padding_ = param_1->_padding_;
  NCached::Session.MemoryStats._padding_ = param_1->_padding_;
  NCached::Session.MemoryStats._padding_ = param_1->_padding_;
  NCached::Session.MemoryStats._padding_ = param_1->_padding_;
  NCached::Session.MemoryStats._padding_ = param_1->_padding_;
  NCached::Session.MemoryStats._padding_ = param_1->_padding_;
  NCached::Session.MemoryStats._padding_ = param_1->_padding_;
  NCached::Session.MemoryStats._padding_ = param_1->_padding_;
  NCached::Session.MemoryStats._padding_ = param_1->_padding_;
  NCached::Session.MemoryStats.WindowsSpecificMemoryStat = param_1->WindowsSpecificMemoryStat;
  NCached::Session.MemoryStats.MemoryPressureStatus = param_1->MemoryPressureStatus;
  NCached::Session.MemoryStats._129_7_ = *(undefined7 *)&param_1->field_0x81;
  NCached::Session.OOMAllocationSize = FGenericPlatformMemory::OOMAllocationSize;
  NCached::Session.OOMAllocationAlignment = FGenericPlatformMemory::OOMAllocationAlignment;
  SerializeTempCrashContextToFile();
  return;
}

// SetNumMinidumpFramesToIgnore @ 14165e130

void __thiscall
FGenericCrashContext::SetNumMinidumpFramesToIgnore(FGenericCrashContext *this,int param_1)

{
  this->NumMinidumpFramesToIgnore = param_1;
  return;
}

// SetOutOfProcessCrashReporterExitCode @ 14165e530

void __cdecl FGenericCrashContext::SetOutOfProcessCrashReporterExitCode(int param_1)

{
  LOCK();
  OutOfProcessCrashReporterExitCode = (longlong)param_1 | 0x100000000;
  UNLOCK();
  return;
}

// SetPortableCallStack @ 14165e600

void __thiscall
FGenericCrashContext::SetPortableCallStack(FGenericCrashContext *this,ulong64 *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014165e607. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))();
  return;
}

// UnescapeXMLString @ 1416660b0

FString * __cdecl
FGenericCrashContext::UnescapeXMLString(FString *__return_storage_ptr__,FString *param_1)

{
  FString *pFVar1;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar1 = ::FString::Replace(param_1,&local_18,L"&amp;",L"&",IgnoreCase);
  pFVar1 = ::FString::Replace(pFVar1,&local_28,L"&quot;",L"\"",IgnoreCase);
  pFVar1 = ::FString::Replace(pFVar1,&local_38,L"&apos;",L"\'",IgnoreCase);
  pFVar1 = ::FString::Replace(pFVar1,&local_48,L"&lt;",L"<",IgnoreCase);
  ::FString::Replace(pFVar1,__return_storage_ptr__,L"&gt;",L">",IgnoreCase);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// UpdateLocalizedStrings @ 141668ea0

void __cdecl FGenericCrashContext::UpdateLocalizedStrings(void)

{
  bool bVar1;
  FString *pFVar2;
  wchar_t *_Source;
  FText local_18;
  
  FText::FText(&local_18);
  bVar1 = FConfigCacheIni::GetText
                    (GConfig,L"CrashContextProperties",L"CrashReportClientRichText",&local_18,
                     &GEngineIni);
  if (bVar1) {
    pFVar2 = FText::ToString(&local_18);
    if ((pFVar2->Data).ArrayNum == 0) {
      _Source = L"";
    }
    else {
      _Source = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    wcsncpy(NCached::Session.CrashReportClientRichText,_Source,0x1ff);
    NCached::Session.CrashReportClientRichText[0x1ff] = L'\0';
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// CleanupPlatformSpecificFiles @ 141aa1be0

void __cdecl FGenericCrashContext::CleanupPlatformSpecificFiles(void)

{
  bool bVar1;
  FString *pFVar2;
  IFileManager *pIVar3;
  ForAnyElementType FVar4;
  FString local_28;
  FString local_18;
  
  bVar1 = FCommandLine::IsInitialized();
  if (bVar1) {
    pFVar2 = FPaths::ProjectLogDir(&local_18);
    ::FString::ConcatFC(&local_28,pFVar2,L"CrashVideo.avi");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    pIVar3 = IFileManager::Get();
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar4.Data = local_28.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar3 + 0x38))(pIVar3,FVar4.Data,0,0,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// IsInitalized @ 141ab2f00

bool __cdecl FGenericCrashContext::IsInitalized(void)

{
  return bIsInitialized;
}

