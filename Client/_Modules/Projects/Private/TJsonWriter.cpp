// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 9

// WriteArrayStart<wchar_t_const_*_&> @ 141e0bcf0

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_*_&>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t **param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined2 local_res8 [4];
  undefined2 local_res18 [4];
  undefined4 local_18 [4];
  
  iVar6 = (this->Stack).ArrayNum;
  uVar7 = iVar6 - 1;
  uVar5 = 0;
  if ((int)uVar7 < iVar6) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xad,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  WriteIdentifier<wchar_t>(this,*param_1);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  local_res18[0] = 0x5b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,2);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar2 = (this->Stack).AllocatorInstance.Data;
  local_18[0] = 5;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Stack).ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Stack).AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar6 + 1;
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_18[0];
  this->PreviousTokenWritten = SquareOpen;
  return;
}

// WriteArrayStart<wchar_t_const_(&)[16]> @ 141e0beb0

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[16]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [16])

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined2 local_res8 [4];
  undefined2 local_res18 [4];
  undefined4 local_18 [4];
  
  iVar6 = (this->Stack).ArrayNum;
  uVar7 = iVar6 - 1;
  uVar5 = 0;
  if ((int)uVar7 < iVar6) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xad,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  WriteIdentifier<wchar_t>(this,*param_1);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  local_res18[0] = 0x5b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,2);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar2 = (this->Stack).AllocatorInstance.Data;
  local_18[0] = 5;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Stack).ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Stack).AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar6 + 1;
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_18[0];
  this->PreviousTokenWritten = SquareOpen;
  return;
}

// WriteArrayStart<wchar_t_const_(&)[26]> @ 141e0c070

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[26]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [26])

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined2 local_res8 [4];
  undefined2 local_res18 [4];
  undefined4 local_18 [4];
  
  iVar6 = (this->Stack).ArrayNum;
  uVar7 = iVar6 - 1;
  uVar5 = 0;
  if ((int)uVar7 < iVar6) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xad,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  WriteIdentifier<wchar_t>(this,*param_1);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  local_res18[0] = 0x5b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,2);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar2 = (this->Stack).AllocatorInstance.Data;
  local_18[0] = 5;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Stack).ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Stack).AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar6 + 1;
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_18[0];
  this->PreviousTokenWritten = SquareOpen;
  return;
}

// WriteArrayStart<wchar_t_const_(&)[28]> @ 141e0c230

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[28]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [28])

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined2 local_res8 [4];
  undefined2 local_res18 [4];
  undefined4 local_18 [4];
  
  iVar6 = (this->Stack).ArrayNum;
  uVar7 = iVar6 - 1;
  uVar5 = 0;
  if ((int)uVar7 < iVar6) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xad,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  WriteIdentifier<wchar_t>(this,*param_1);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  local_res18[0] = 0x5b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,2);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar2 = (this->Stack).AllocatorInstance.Data;
  local_18[0] = 5;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Stack).ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Stack).AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar6 + 1;
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_18[0];
  this->PreviousTokenWritten = SquareOpen;
  return;
}

// WriteIdentifier<wchar_t> @ 141e0c3f0

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t *param_1)

{
  EJsonToken EVar1;
  FArchive *pFVar2;
  code *pcVar3;
  size_t sVar4;
  ulonglong uVar5;
  undefined2 local_res8 [4];
  wchar_t *local_28;
  undefined4 uStack_20;
  
  EVar1 = this->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,L"\r\n",4);
  pFVar2 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar5 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res8[0] = 9;
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res8,2);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  pcVar3 = *(code **)(this->_padding_ + 0x28);
  uStack_20 = 0;
  local_28 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_1);
    uStack_20 = (undefined4)sVar4;
  }
  (*pcVar3)(this,&local_28);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  this->PreviousTokenWritten = Identifier;
  return;
}

// WriteRawJSONValueImpl<wchar_t> @ 141e0c520

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteRawJSONValueImpl<wchar_t>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,TStringView<wchar_t> *param_1
          ,TStringView<wchar_t> *param_2)

{
  EJsonToken EVar1;
  FArchive *pFVar2;
  wchar_t *_Str;
  bool bVar3;
  uint uVar4;
  size_t sVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  iVar7 = (this->Stack).ArrayNum;
  uVar6 = iVar7 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar7) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
       6) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stack.Top() == EJson::Object",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0x26f,L""), bVar3)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  EVar1 = this->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,L"\r\n",4);
  pFVar2 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar9 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res10[0] = 9;
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res10,2);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  local_48 = *(undefined4 *)&param_1->DataPtr;
  uStack_44 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_40 = param_1->Size;
  uStack_3c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(this->_padding_ + 0x28))(this,&local_48);
  local_res18[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,2);
  this->PreviousTokenWritten = Identifier;
  local_res20[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res20,2);
  _Str = param_2->DataPtr;
  pFVar2 = this->Stream;
  iVar7 = (int)*(undefined8 *)&param_2->Size;
  if (_Str == (wchar_t *)0x0) {
    iVar7 = 0;
    pcVar8 = *(code **)(*(longlong *)pFVar2 + 0x188);
  }
  else {
    if ((0 < iVar7) && (_Str[(longlong)iVar7 + -1] == L'\0')) {
      iVar7 = iVar7 + -1;
    }
    pcVar8 = *(code **)(*(longlong *)pFVar2 + 0x188);
    if (iVar7 == -1) {
      sVar5 = wcslen(_Str);
      iVar7 = (int)sVar5;
    }
  }
  (*pcVar8)(pFVar2,_Str,(longlong)iVar7 * 2);
  this->PreviousTokenWritten = String;
  return;
}

// WriteValue<FString> @ 141e0c760

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,FString *param_1)

{
  EJsonToken EVar1;
  int iVar2;
  FArchive *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  
  bVar6 = CanWriteValueWithoutIdentifier(this);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xde,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar1 = this->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,L"\r\n",4);
  pFVar3 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar7 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res10[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res10,2);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  pFVar4 = (param_1->Data).AllocatorInstance.Data;
  iVar2 = (param_1->Data).ArrayNum;
  iStack_20 = iVar2 + -1;
  if (iVar2 == 0) {
    iStack_20 = 0;
  }
  local_38 = SUB84(pFVar4,0);
  uStack_34 = (undefined4)((ulonglong)pFVar4 >> 0x20);
  local_28 = local_38;
  uStack_24 = uStack_34;
  (**(code **)(this->_padding_ + 0x28))(this,&local_28);
  this->PreviousTokenWritten = String;
  return;
}

// WriteValue<enum_EProjectDescriptorVersion::Type,wchar_t_const_(&)[12]> @ 141e0c8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
WriteValue<enum_EProjectDescriptorVersion::Type,wchar_t_const_(&)[12]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [12],
          Type *param_2)

{
  FArchive *pFVar1;
  wchar_t *pwVar2;
  bool bVar3;
  uint uVar4;
  size_t sVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  undefined2 local_98 [8];
  TStringBuilderBase<wchar_t> local_88;
  wchar_t local_68 [32];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_c8;
  iVar7 = (this->Stack).ArrayNum;
  uVar6 = iVar7 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar7) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    local_a8 = (longlong)(int)uVar6;
    local_a0 = (longlong)iVar7;
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
  WriteIdentifier<wchar_t>(this,*param_1);
  local_98[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_98,2);
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

// WriteValueOnly @ 141e46fd0

EJsonToken __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,double param_1)

{
  FArchive *pFVar1;
  size_t sVar2;
  int iVar3;
  ForAnyElementType FVar4;
  code *pcVar5;
  FString local_18;
  
  pFVar1 = this->Stream;
  ::FString::PrintfImpl(&local_18,L"%.17g");
  FVar4.Data = local_18.Data.AllocatorInstance.Data;
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    FVar4.Data = (FScriptContainerElement *)0x0;
    iVar3 = 0;
    pcVar5 = *(code **)(*(longlong *)pFVar1 + 0x188);
  }
  else {
    if ((0 < iVar3) &&
       (*(short *)(local_18.Data.AllocatorInstance.Data + (longlong)iVar3 * 2 + -2) == 0)) {
      iVar3 = iVar3 + -1;
    }
    pcVar5 = *(code **)(*(longlong *)pFVar1 + 0x188);
    if (iVar3 == -1) {
      sVar2 = wcslen((wchar_t *)local_18.Data.AllocatorInstance.Data);
      iVar3 = (int)sVar2;
    }
  }
  (*pcVar5)(pFVar1,FVar4.Data,(longlong)iVar3 * 2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return Number;
}

