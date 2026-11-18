// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// WriteValue<int_const_&,FString_const_&> @ 1473d4120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValue<int_const_&,FString_const_&>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,FString *param_1,
          int *param_2)

{
  FArchive *pFVar1;
  wchar_t *pwVar2;
  bool bVar3;
  uint uVar4;
  size_t sVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  TStringBuilderBase<wchar_t> local_88;
  wchar_t local_68 [32];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_b8;
  iVar7 = (this->Stack).ArrayNum;
  uVar6 = iVar7 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar7) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    local_98 = (longlong)(int)uVar6;
    local_90 = (longlong)iVar7;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar3) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  WriteIdentifier(this,param_1);
  local_88.Base = local_68;
  local_88.CurPos = local_68;
  local_88.bIsDynamic = false;
  local_88.bIsExternal = false;
  local_88.End = (wchar_t *)local_28;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_88,L"%lld");
  pwVar2 = local_88.Base;
  pFVar1 = this->Stream;
  iVar7 = (int)((longlong)local_88.CurPos - (longlong)local_88.Base >> 1);
  if (local_88.Base == (wchar_t *)0x0) {
    iVar7 = 0;
    pcVar8 = *(code **)(*(longlong *)pFVar1 + 0x188);
  }
  else {
    if (0 < iVar7) {
      if (local_88.Base[(longlong)iVar7 + -1] == L'\0') {
        iVar7 = iVar7 + -1;
      }
    }
    pcVar8 = *(code **)(*(longlong *)pFVar1 + 0x188);
    if (iVar7 == -1) {
      sVar5 = wcslen(local_88.Base);
      iVar7 = (int)sVar5;
    }
  }
  (*pcVar8)(pFVar1,pwVar2,(longlong)iVar7 * 2);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_88);
  this->PreviousTokenWritten = Number;
  return;
}

// WriteValue<FString_const_&> @ 1473d42b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValue<FString_const_&>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,FString *param_1,
          uchar param_2)

{
  FArchive *pFVar1;
  wchar_t *pwVar2;
  bool bVar3;
  uint uVar4;
  size_t sVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  TStringBuilderBase<wchar_t> local_88;
  wchar_t local_68 [32];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_b8;
  iVar7 = (this->Stack).ArrayNum;
  uVar6 = iVar7 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar7) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    local_98 = (longlong)(int)uVar6;
    local_90 = (longlong)iVar7;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x106,L"");
    if (bVar3) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  WriteIdentifier(this,param_1);
  local_88.Base = local_68;
  local_88.bIsDynamic = false;
  local_88.bIsExternal = false;
  local_88.CurPos = local_68;
  local_88.End = (wchar_t *)local_28;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_88,L"%llu");
  pwVar2 = local_88.Base;
  pFVar1 = this->Stream;
  iVar7 = (int)((longlong)local_88.CurPos - (longlong)local_88.Base >> 1);
  if (local_88.Base == (wchar_t *)0x0) {
    iVar7 = 0;
    pcVar8 = *(code **)(*(longlong *)pFVar1 + 0x188);
  }
  else {
    if (0 < iVar7) {
      if (local_88.Base[(longlong)iVar7 + -1] == L'\0') {
        iVar7 = iVar7 + -1;
      }
    }
    pcVar8 = *(code **)(*(longlong *)pFVar1 + 0x188);
    if (iVar7 == -1) {
      sVar5 = wcslen(local_88.Base);
      iVar7 = (int)sVar5;
    }
  }
  (*pcVar8)(pFVar1,pwVar2,(longlong)iVar7 * 2);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_88);
  this->PreviousTokenWritten = Number;
  return;
}

// WriteObjectStart<FString> @ 147a20d50

void __thiscall
TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteObjectStart<FString>
          (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this,FString *param_1)

{
  int *piVar1;
  FArchive *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  undefined4 local_48 [4];
  wchar_t *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  
  iVar7 = (this->Stack).ArrayNum;
  uVar8 = iVar7 - 1;
  uVar6 = 0;
  if ((int)uVar8 < iVar7) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x81,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  WriteIdentifier(this,param_1);
  local_38 = L"\r\n";
  uStack_30 = 2;
  local_28._12_4_ = uStack_2c;
  local_28.Size = 2;
  local_28.DataPtr = L"\r\n";
  TJsonPrintPolicy<char>::WriteString(this->Stream,&local_28);
  pFVar2 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar9 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res8[0] = 9;
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res8,1);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  local_res18[0] = 0x7b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,1);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar3 = (this->Stack).AllocatorInstance.Data;
  local_48[0] = 6;
  if ((pFVar3 <= (FScriptContainerElement *)local_48) &&
     ((FScriptContainerElement *)local_48 < pFVar3 + (longlong)(this->Stack).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Stack).AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar7 + 1;
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_48[0];
  this->PreviousTokenWritten = CurlyOpen;
  return;
}

// WriteArrayEnd @ 147aa0280

void __thiscall
TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteArrayEnd
          (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  int iVar2;
  FArchive *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  
  iVar2 = (this->Stack).ArrayNum;
  uVar7 = iVar2 - 1;
  uVar6 = 0;
  if ((int)uVar7 < iVar2) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
       5) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stack.Top() == EJson::Array",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0xb9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->IndentLevel = this->IndentLevel + -1;
  if (this->PreviousTokenWritten != SquareOpen) {
    local_28._12_4_ = uStack_2c;
    local_28.Size = 2;
    local_28.DataPtr = L"\r\n";
    TJsonPrintPolicy<char>::WriteString(this->Stream,&local_28);
    pFVar3 = this->Stream;
    if (0 < this->IndentLevel) {
      uVar8 = (ulonglong)(uint)this->IndentLevel;
      do {
        local_res8[0] = 9;
        (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res8,1);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  local_res10[0] = 0x5d;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,1);
  if (((this->Stack).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = (this->Stack).ArrayNum;
  uVar6 = iVar2 - 1;
  _Dst = (this->Stack).AllocatorInstance.Data + (longlong)(int)uVar6 * 4;
  iVar2 = ~uVar6 + iVar2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + 4,(longlong)iVar2 << 2);
  }
  piVar1 = &(this->Stack).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,&(this->Stack).AllocatorInstance,(this->Stack).ArrayNum,&(this->Stack).ArrayMax);
  this->PreviousTokenWritten = SquareClose;
  return;
}

// WriteArrayStart @ 147aa0450

void __thiscall
TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteArrayStart
          (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this)

{
  int *piVar1;
  EJsonToken EVar2;
  FArchive *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined4 local_48 [4];
  wchar_t *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  
  iVar8 = (this->Stack).ArrayNum;
  if (0 < iVar8) {
    uVar7 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar7 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4)
          != 5) && (this->PreviousTokenWritten != Identifier)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteValueWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x9b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  EVar2 = this->PreviousTokenWritten;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1012U >> (EVar2 & 0x1f) & 1) == 0)))) {
    if (EVar2 == None) goto LAB_147aa05b5;
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    this->PreviousTokenWritten = Comma;
  }
  local_38 = L"\r\n";
  uStack_30 = 2;
  local_28._12_4_ = uStack_2c;
  local_28.Size = 2;
  local_28.DataPtr = L"\r\n";
  TJsonPrintPolicy<char>::WriteString(this->Stream,&local_28);
  pFVar3 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar9 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res10[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res10,1);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
LAB_147aa05b5:
  local_res18[0] = 0x5b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,1);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar4 = (this->Stack).AllocatorInstance.Data;
  local_48[0] = 5;
  if (((pFVar4 <= (FScriptContainerElement *)local_48) &&
      ((FScriptContainerElement *)local_48 < pFVar4 + (longlong)(this->Stack).ArrayMax * 4)) &&
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
  iVar8 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Stack).AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar8 + 1;
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_48[0];
  this->PreviousTokenWritten = SquareOpen;
  return;
}

// WriteIdentifier @ 147aa1180

void __thiscall
TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteIdentifier
          (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this,FString *param_1)

{
  EJsonToken EVar1;
  int iVar2;
  FArchive *pFVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  TStringView<wchar_t> local_18;
  
  EVar1 = this->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    this->PreviousTokenWritten = Comma;
  }
  local_18.Size = 2;
  local_18.DataPtr = L"\r\n";
  TJsonPrintPolicy<char>::WriteString(this->Stream,&local_18);
  pFVar3 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar5 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res8[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res8,1);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar2 = (param_1->Data).ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  local_18.Size = iVar4;
  (**(code **)(this->_padding_ + 0x28))(this,&local_18);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  this->PreviousTokenWritten = Identifier;
  return;
}

// WriteObjectStart @ 147aa12b0

void __thiscall
TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteObjectStart
          (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this)

{
  int *piVar1;
  EJsonToken EVar2;
  FArchive *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined4 local_48 [4];
  wchar_t *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  
  iVar8 = (this->Stack).ArrayNum;
  if (0 < iVar8) {
    uVar7 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar7 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4
                   ) != 5) && (this->PreviousTokenWritten != Identifier)) &&
        (this->PreviousTokenWritten != Colon)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteObjectWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x6f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  EVar2 = this->PreviousTokenWritten;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1012U >> (EVar2 & 0x1f) & 1) == 0)))) {
    if (EVar2 == None) goto LAB_147aa1420;
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    this->PreviousTokenWritten = Comma;
  }
  local_38 = L"\r\n";
  uStack_30 = 2;
  local_28._12_4_ = uStack_2c;
  local_28.Size = 2;
  local_28.DataPtr = L"\r\n";
  TJsonPrintPolicy<char>::WriteString(this->Stream,&local_28);
  pFVar3 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar9 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res10[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res10,1);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
LAB_147aa1420:
  local_res18[0] = 0x7b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,1);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar4 = (this->Stack).AllocatorInstance.Data;
  local_48[0] = 6;
  if (((pFVar4 <= (FScriptContainerElement *)local_48) &&
      ((FScriptContainerElement *)local_48 < pFVar4 + (longlong)(this->Stack).ArrayMax * 4)) &&
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
  iVar8 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Stack).AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar8 + 1;
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_48[0];
  this->PreviousTokenWritten = CurlyOpen;
  return;
}

