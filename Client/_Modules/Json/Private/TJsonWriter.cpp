// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 132

// WriteArrayStart<TStringView<wchar_t>_&> @ 141db7590

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteArrayStart<TStringView<wchar_t>_&>
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  int *piVar1;
  EJsonToken EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined4 local_48 [4];
  wchar_t *local_38;
  undefined8 uStack_30;
  
  iVar9 = (this->Stack).ArrayNum;
  uVar10 = iVar9 - 1;
  uVar8 = 0;
  if ((int)uVar10 < iVar9) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xad,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar2 = this->PreviousTokenWritten;
  pwVar5 = param_1->DataPtr;
  uVar6 = *(undefined8 *)&param_1->Size;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    this->PreviousTokenWritten = Comma;
  }
  local_38 = pwVar5;
  uStack_30 = uVar6;
  (**(code **)(this->_padding_ + 0x28))(this,&local_38);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,1);
  this->PreviousTokenWritten = Identifier;
  local_res18[0] = 0x5b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,1);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar3 = (this->Stack).AllocatorInstance.Data;
  local_48[0] = 5;
  if ((pFVar3 <= (FScriptContainerElement *)local_48) &&
     ((FScriptContainerElement *)local_48 < pFVar3 + (longlong)(this->Stack).ArrayMax * 4)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar9 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Stack).AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar9 + 1;
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_48[0];
  this->PreviousTokenWritten = SquareOpen;
  return;
}

// WriteArrayStart<TStringView<wchar_t>_&> @ 141db77a0

void __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteArrayStart<TStringView<wchar_t>_&>
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,TStringView<wchar_t> *param_1
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_28 [4];
  TStringView<wchar_t> local_18;
  
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
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteIdentifier<wchar_t>(this,&local_18);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  local_res10[0] = 0x5b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,1);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar2 = (this->Stack).AllocatorInstance.Data;
  local_28[0] = 5;
  if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Stack).ArrayMax * 4)) {
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
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_28[0];
  this->PreviousTokenWritten = SquareOpen;
  return;
}

// WriteArrayStart<TStringView<wchar_t>_&> @ 141db7960

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart<TStringView<wchar_t>_&>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  int *piVar1;
  EJsonToken EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined2 local_res18 [8];
  undefined4 local_48 [4];
  wchar_t *local_38;
  undefined8 uStack_30;
  
  iVar9 = (this->Stack).ArrayNum;
  uVar10 = iVar9 - 1;
  uVar8 = 0;
  if ((int)uVar10 < iVar9) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xad,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar2 = this->PreviousTokenWritten;
  pwVar5 = param_1->DataPtr;
  uVar6 = *(undefined8 *)&param_1->Size;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  local_38 = pwVar5;
  uStack_30 = uVar6;
  (**(code **)(this->_padding_ + 0x28))(this,&local_38);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,2);
  this->PreviousTokenWritten = Identifier;
  local_res18[0] = 0x5b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,2);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar3 = (this->Stack).AllocatorInstance.Data;
  local_48[0] = 5;
  if ((pFVar3 <= (FScriptContainerElement *)local_48) &&
     ((FScriptContainerElement *)local_48 < pFVar3 + (longlong)(this->Stack).ArrayMax * 4)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar9 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Stack).AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar9 + 1;
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_48[0];
  this->PreviousTokenWritten = SquareOpen;
  return;
}

// WriteArrayStart<TStringView<wchar_t>_&> @ 141db7b80

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<TStringView<wchar_t>_&>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,TStringView<wchar_t> *param_1
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined4 local_28 [4];
  TStringView<wchar_t> local_18;
  
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
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteIdentifier<wchar_t>(this,&local_18);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  local_res10[0] = 0x5b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,2);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar2 = (this->Stack).AllocatorInstance.Data;
  local_28[0] = 5;
  if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Stack).ArrayMax * 4)) {
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
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_28[0];
  this->PreviousTokenWritten = SquareOpen;
  return;
}

// WriteArrayStart<FString_&> @ 141db7d50

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart<FString_&>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,FString *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined2 local_res8 [4];
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
  WriteIdentifier(this,param_1);
  local_res8[0] = 0x5b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
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

// WriteArrayStart<FString_&> @ 141db7ee0

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<FString_&>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,FString *param_1)

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
  WriteIdentifier(this,param_1);
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

// WriteEscapedString<char> @ 141db80a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteEscapedString<char>
          (TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *this,TStringView<char> *param_1)

{
  ushort uVar1;
  uchar *puVar2;
  FArchive *pFVar3;
  code *pcVar4;
  bool bVar5;
  char *pcVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ForElementType<char> FVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_678 [32];
  uint local_658;
  int local_650;
  TStringView<char> *local_648;
  TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *local_640;
  char *local_638;
  uint uStack_630;
  undefined4 uStack_62c;
  char *local_628;
  int iStack_620;
  undefined4 uStack_61c;
  TStringBuilderBase<char> local_618;
  uchar local_5f8 [8];
  char local_5f0 [8];
  FScriptContainerElement local_5e8 [128];
  ForAnyElementType local_568;
  FScriptContainerElement *local_560;
  int local_558;
  FScriptContainerElement local_548 [128];
  ForAnyElementType local_4c8;
  FScriptContainerElement *local_4c0;
  int local_4b8;
  undefined1 local_4a8 [128];
  void *local_428;
  undefined1 *local_420;
  undefined4 local_418;
  undefined1 local_408 [128];
  void *local_388;
  undefined1 *local_380;
  undefined4 local_378;
  ForElementType<char> local_368;
  ForElementType<char> local_2e0;
  int local_2d8;
  undefined1 local_2c8 [128];
  void *local_248;
  undefined1 *local_240;
  undefined4 local_238;
  undefined1 local_228 [128];
  void *local_1a8;
  undefined1 *local_1a0;
  undefined4 local_198;
  undefined1 local_188 [128];
  void *local_108;
  undefined1 *local_100;
  undefined4 local_f8;
  undefined1 local_e8 [128];
  void *local_68;
  undefined1 *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_678;
  iVar10 = param_1->Size;
  local_640 = this;
  local_648 = param_1;
  do {
    if (iVar10 == 0) {
      return;
    }
    uVar16 = 0;
    uVar9 = 0;
    uVar12 = uVar16;
    if (0 < iVar10) {
      do {
        uVar9 = (uint)uVar16;
        if (0x7ff < (int)uVar9) break;
        if ((((int)uVar9 < 0) || (iVar10 <= (int)uVar9)) &&
           (local_658 = uVar9, local_650 = iVar10,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        switch(param_1->DataPtr[uVar12]) {
        case '\b':
        case '\t':
        case '\n':
        case '\f':
        case '\r':
        case '\"':
        case '\\':
          goto switchD_141db816b_caseD_8;
        }
        if (param_1->DataPtr[uVar12] < ' ') break;
        iVar10 = param_1->Size;
        uVar9 = uVar9 + 1;
        uVar16 = (ulonglong)uVar9;
        uVar12 = uVar12 + 1;
      } while ((int)uVar9 < iVar10);
    }
switchD_141db816b_caseD_8:
    puVar2 = (uchar *)param_1->DataPtr;
    uVar14 = param_1->Size;
    if ((int)uVar9 < param_1->Size) {
      uVar14 = uVar9;
    }
    uVar11 = 0;
    if (0 < (int)uVar14) {
      uVar11 = uVar14;
    }
    if (uVar11 != 0) {
      pFVar3 = this->Stream;
      local_568.Data = (FScriptContainerElement *)0x0;
      if (puVar2 == (uchar *)0x0) {
        local_560 = (FScriptContainerElement *)0x0;
        local_558 = 0;
      }
      else {
        iVar10 = 0;
        if ((0 < (int)uVar11) && (iVar10 = 0, puVar2[(longlong)(int)uVar11 + -1] == '\0')) {
          iVar10 = 1;
          uVar11 = uVar11 - 1;
        }
        local_558 = UE::Core::Private::GetConvertedLength((char *)0x0,puVar2,uVar11);
        uVar17 = local_558 + iVar10;
        uVar14 = uVar17;
        if (uVar17 < 0x81) {
          if (local_568.Data != (FScriptContainerElement *)0x0) {
            uVar14 = 0;
            goto LAB_141db81ef;
          }
        }
        else {
LAB_141db81ef:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_568,0,uVar14,1);
        }
        local_560 = local_5e8;
        if (local_568.Data != (FScriptContainerElement *)0x0) {
          local_560 = local_568.Data;
        }
        pcVar6 = UE::Core::Private::Convert((char *)local_560,uVar17,puVar2,iVar10 + uVar11);
        this = local_640;
        if ((pcVar6 == (char *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), this = local_640, bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_560,(longlong)local_558);
      if (local_568.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_568.Data);
      }
    }
    uVar14 = local_648->Size;
    uVar11 = uVar14;
    if ((int)(uVar14 - uVar9) < (int)uVar14) {
      uVar11 = uVar14 - uVar9;
    }
    uVar12 = 0;
    uVar9 = 0;
    uStack_630 = uVar9;
    if (0 < (int)uVar11) {
      uStack_630 = uVar11;
    }
    local_638 = local_648->DataPtr + ((longlong)(int)uVar14 - (longlong)(int)uStack_630);
    local_648->DataPtr = local_638;
    *(ulonglong *)&local_648->Size = CONCAT44(uStack_62c,uStack_630);
    iVar10 = local_648->Size;
    param_1 = local_648;
    uVar16 = uVar12;
    if (0 < iVar10) {
      do {
        lVar13 = 0;
        uVar9 = (uint)uVar12;
        if ((((int)uVar9 < 0) || (iVar10 <= (int)uVar9)) &&
           (local_658 = uVar9, local_650 = iVar10,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        switch(param_1->DataPtr[uVar16]) {
        case '\b':
          pFVar3 = this->Stream;
          local_240 = local_2c8;
          bVar5 = false;
          local_248 = (void *)0x0;
          local_238 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u__b + lVar8 * 2);
            local_2c8[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u__b + lVar13 * 2)) {
                local_2c8[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_240,2);
          if (local_248 != (void *)0x0) {
            FMemory::Free(local_248);
          }
          break;
        case '\t':
          pFVar3 = this->Stream;
          local_368.SecondaryData = (ForElementType<char>)0x0;
          local_2d8 = 2;
          TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<char>::
          ResizeAllocation(&local_368,0,2,1);
          FVar15 = (ForElementType<char>)&local_368;
          if (local_368.SecondaryData != (ForElementType<char>)0x0) {
            FVar15 = local_368.SecondaryData;
          }
          bVar5 = false;
          lVar8 = lVar13;
          local_2e0 = FVar15;
          do {
            uVar1 = *(ushort *)(&u__t + lVar8 * 2);
            *(char *)(lVar8 + (longlong)FVar15) = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u__t + lVar13 * 2)) {
                *(undefined1 *)(lVar13 + (longlong)FVar15) = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          if ((FVar15 == (ForElementType<char>)0xfffffffffffffffe) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_2e0,(longlong)local_2d8);
          if (local_368.SecondaryData != (ForElementType<char>)0x0) {
            FMemory::Free((void *)local_368.SecondaryData);
          }
          break;
        case '\n':
          pFVar3 = this->Stream;
          local_380 = local_408;
          bVar5 = false;
          local_388 = (void *)0x0;
          local_378 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u__n + lVar8 * 2);
            local_408[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u__n + lVar13 * 2)) {
                local_408[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_380,2);
          if (local_388 != (void *)0x0) {
            FMemory::Free(local_388);
          }
          break;
        default:
          if ('\x1f' < param_1->DataPtr[uVar16]) goto LAB_141db89c5;
          local_618.Base = (char *)local_5f8;
          local_618.bIsDynamic = false;
          local_618.bIsExternal = false;
          local_618.CurPos = (char *)local_5f8;
          local_618.End = local_5f0;
          TStringBuilderBase<char>::AppendfImpl(&local_618,"\\u%04x");
          pcVar6 = local_618.Base;
          pFVar3 = this->Stream;
          iVar10 = (int)local_618.CurPos - (int)local_618.Base;
          local_4c8.Data = (FScriptContainerElement *)0x0;
          if ((uchar *)local_618.Base == (uchar *)0x0) {
            local_4c0 = (FScriptContainerElement *)0x0;
            local_4b8 = 0;
          }
          else {
            if ((0 < iVar10) && (local_618.Base[(longlong)iVar10 + -1] == '\0')) {
              lVar13 = 1;
              iVar10 = iVar10 + -1;
            }
            local_4b8 = UE::Core::Private::GetConvertedLength
                                  ((char *)0x0,(uchar *)local_618.Base,iVar10);
            uVar11 = local_4b8 + (int)lVar13;
            uVar14 = uVar11;
            if (uVar11 < 0x81) {
              if (local_4c8.Data != (FScriptContainerElement *)0x0) {
                uVar14 = 0;
                goto LAB_141db88f6;
              }
            }
            else {
LAB_141db88f6:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_4c8,0,uVar14,1);
            }
            local_4c0 = local_548;
            if (local_4c8.Data != (FScriptContainerElement *)0x0) {
              local_4c0 = local_4c8.Data;
            }
            pcVar6 = UE::Core::Private::Convert
                               ((char *)local_4c0,uVar11,(uchar *)pcVar6,(int)lVar13 + iVar10);
            param_1 = local_648;
            if ((pcVar6 == (char *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                   ,0x25,L""), param_1 = local_648, bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_4c0,(longlong)local_4b8);
          if (local_4c8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4c8.Data);
          }
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_618);
          this = local_640;
          break;
        case '\f':
          pFVar3 = this->Stream;
          local_1a0 = local_228;
          bVar5 = false;
          local_1a8 = (void *)0x0;
          local_198 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u__f + lVar8 * 2);
            local_228[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u__f + lVar13 * 2)) {
                local_228[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_1a0,2);
          if (local_1a8 != (void *)0x0) {
            FMemory::Free(local_1a8);
          }
          break;
        case '\r':
          pFVar3 = this->Stream;
          local_100 = local_188;
          bVar5 = false;
          local_108 = (void *)0x0;
          local_f8 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u__r + lVar8 * 2);
            local_188[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u__r + lVar13 * 2)) {
                local_188[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_100,2);
          if (local_108 != (void *)0x0) {
            FMemory::Free(local_108);
          }
          break;
        case '\"':
          pFVar3 = this->Stream;
          local_60 = local_e8;
          bVar5 = false;
          local_68 = (void *)0x0;
          local_58 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u___ + lVar8 * 2);
            local_e8[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u___ + lVar13 * 2)) {
                local_e8[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_60,2);
          if (local_68 != (void *)0x0) {
            FMemory::Free(local_68);
          }
          break;
        case '\\':
          pFVar3 = this->Stream;
          local_420 = local_4a8;
          bVar5 = false;
          local_428 = (void *)0x0;
          local_418 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u___ + lVar8 * 2);
            local_4a8[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u___ + lVar13 * 2)) {
                local_4a8[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_420,2);
          if (local_428 != (void *)0x0) {
            FMemory::Free(local_428);
          }
        }
        iVar10 = param_1->Size;
        uVar9 = uVar9 + 1;
        uVar12 = (ulonglong)uVar9;
        uVar16 = uVar16 + 1;
      } while ((int)uVar9 < iVar10);
    }
LAB_141db89c5:
    iVar10 = param_1->Size;
    iVar7 = iVar10;
    if ((int)(iVar10 - uVar9) < iVar10) {
      iVar7 = iVar10 - uVar9;
    }
    iStack_620 = 0;
    if (0 < iVar7) {
      iStack_620 = iVar7;
    }
    local_628 = param_1->DataPtr + ((longlong)iVar10 - (longlong)iStack_620);
    param_1->DataPtr = local_628;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_61c,iStack_620);
    iVar10 = param_1->Size;
  } while( true );
}

// WriteEscapedString<char> @ 141db8b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteEscapedString<char>
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,TStringView<char> *param_1
          )

{
  char *pcVar1;
  FArchive *pFVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  uchar *puVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  code *pcVar13;
  uint uVar14;
  undefined1 auStack_528 [32];
  int local_508;
  int local_500;
  char *local_4f8;
  int iStack_4f0;
  undefined4 uStack_4ec;
  char *local_4e8;
  int iStack_4e0;
  undefined4 uStack_4dc;
  TStringBuilderBase<char> local_4d8;
  char local_4b8 [8];
  char local_4b0 [8];
  FScriptContainerElement local_4a8 [128];
  ForAnyElementType local_428;
  FScriptContainerElement *local_420;
  uint local_418;
  FScriptContainerElement local_408 [128];
  ForAnyElementType local_388;
  FScriptContainerElement *local_380;
  uint local_378;
  FScriptContainerElement local_368 [128];
  ForAnyElementType local_2e8;
  FScriptContainerElement *local_2e0;
  uint local_2d8;
  FScriptContainerElement local_2c8 [128];
  ForAnyElementType local_248;
  FScriptContainerElement *local_240;
  uint local_238;
  FScriptContainerElement local_228 [128];
  ForAnyElementType local_1a8;
  FScriptContainerElement *local_1a0;
  uint local_198;
  FScriptContainerElement local_188 [128];
  ForAnyElementType local_108;
  FScriptContainerElement *local_100;
  uint local_f8;
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  uint local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_528;
  iVar6 = param_1->Size;
  do {
    if (iVar6 == 0) {
      return;
    }
    iVar11 = 0;
    lVar12 = 0;
    if (0 < iVar6) {
      do {
        if (0x7ff < iVar11) break;
        if (((iVar11 < 0) || (iVar6 <= iVar11)) &&
           (local_508 = iVar11, local_500 = iVar6,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar3)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        switch(param_1->DataPtr[lVar12]) {
        case '\b':
        case '\t':
        case '\n':
        case '\f':
        case '\r':
        case '\"':
        case '\\':
          goto switchD_141db8bf4_caseD_8;
        }
        if (param_1->DataPtr[lVar12] < ' ') break;
        iVar6 = param_1->Size;
        iVar11 = iVar11 + 1;
        lVar12 = lVar12 + 1;
      } while (iVar11 < iVar6);
    }
switchD_141db8bf4_caseD_8:
    iVar6 = param_1->Size;
    pcVar1 = param_1->DataPtr;
    iVar4 = iVar6;
    if (iVar11 < iVar6) {
      iVar4 = iVar11;
    }
    iVar10 = 0;
    if (0 < iVar4) {
      iVar10 = iVar4;
    }
    if (iVar10 != 0) {
      pFVar2 = this->Stream;
      if (pcVar1 == (char *)0x0) {
        pcVar9 = (char *)0x0;
        iVar10 = 0;
        pcVar13 = *(code **)(*(longlong *)pFVar2 + 0x188);
      }
      else {
        if ((0 < iVar10) && (pcVar1[(longlong)iVar10 + -1] == '\0')) {
          iVar10 = iVar10 + -1;
        }
        pcVar13 = *(code **)(*(longlong *)pFVar2 + 0x188);
        pcVar9 = pcVar1;
        if (iVar10 == -1) {
          sVar7 = strlen(pcVar1);
          iVar10 = (int)sVar7;
        }
      }
      (*pcVar13)(pFVar2,pcVar9,(longlong)iVar10);
    }
    iVar4 = iVar6;
    if (iVar6 - iVar11 < iVar6) {
      iVar4 = iVar6 - iVar11;
    }
    iStack_4f0 = 0;
    if (0 < iVar4) {
      iStack_4f0 = iVar4;
    }
    iVar11 = 0;
    local_4f8 = pcVar1 + ((longlong)iVar6 - (longlong)iStack_4f0);
    lVar12 = 0;
    param_1->DataPtr = local_4f8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_4ec,iStack_4f0);
    iVar6 = param_1->Size;
    if (0 < iVar6) {
      do {
        if (((iVar11 < 0) || (iVar6 <= iVar11)) &&
           (local_508 = iVar11, local_500 = iVar6,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar3)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        switch(param_1->DataPtr[lVar12]) {
        case '\b':
          pFVar2 = this->Stream;
          local_248.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\b",2);
          uVar14 = uVar5;
          local_238 = uVar5;
          if (uVar5 < 0x81) {
            if (local_248.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141db900f;
            }
          }
          else {
LAB_141db900f:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_248,0,uVar14,1);
          }
          local_240 = local_2c8;
          if (local_248.Data != (FScriptContainerElement *)0x0) {
            local_240 = local_248.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_240,uVar5,L"\\b",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_240,(longlong)(int)local_238);
          if (local_248.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data);
          }
          break;
        case '\t':
          pFVar2 = this->Stream;
          local_2e8.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\t",2);
          uVar14 = uVar5;
          local_2d8 = uVar5;
          if (uVar5 < 0x81) {
            if (local_2e8.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141db8f26;
            }
          }
          else {
LAB_141db8f26:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_2e8,0,uVar14,1);
          }
          local_2e0 = local_368;
          if (local_2e8.Data != (FScriptContainerElement *)0x0) {
            local_2e0 = local_2e8.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_2e0,uVar5,L"\\t",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_2e0,(longlong)(int)local_2d8);
          if (local_2e8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e8.Data);
          }
          break;
        case '\n':
          pFVar2 = this->Stream;
          local_388.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\n",2);
          uVar14 = uVar5;
          local_378 = uVar5;
          if (uVar5 < 0x81) {
            if (local_388.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141db8e40;
            }
          }
          else {
LAB_141db8e40:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_388,0,uVar14,1);
          }
          local_380 = local_408;
          if (local_388.Data != (FScriptContainerElement *)0x0) {
            local_380 = local_388.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_380,uVar5,L"\\n",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_380,(longlong)(int)local_378);
          if (local_388.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_388.Data);
          }
          break;
        default:
          if ('\x1f' < param_1->DataPtr[lVar12]) goto LAB_141db9429;
          local_4d8.Base = local_4b8;
          local_4d8.bIsDynamic = false;
          local_4d8.bIsExternal = false;
          local_4d8.CurPos = local_4b8;
          local_4d8.End = local_4b0;
          TStringBuilderBase<char>::AppendfImpl(&local_4d8,"\\u%04x");
          pcVar1 = local_4d8.Base;
          iVar6 = (int)local_4d8.CurPos - (int)local_4d8.Base;
          pFVar2 = this->Stream;
          if (local_4d8.Base == (char *)0x0) {
            iVar6 = 0;
            pcVar13 = *(code **)(*(longlong *)pFVar2 + 0x188);
          }
          else {
            if ((0 < iVar6) && (local_4d8.Base[(longlong)iVar6 + -1] == '\0')) {
              iVar6 = iVar6 + -1;
            }
            pcVar13 = *(code **)(*(longlong *)pFVar2 + 0x188);
            if (iVar6 == -1) {
              sVar7 = strlen(local_4d8.Base);
              iVar6 = (int)sVar7;
            }
          }
          (*pcVar13)(pFVar2,pcVar1,(longlong)iVar6);
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_4d8);
          break;
        case '\f':
          pFVar2 = this->Stream;
          local_1a8.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\f",2);
          uVar14 = uVar5;
          local_198 = uVar5;
          if (uVar5 < 0x81) {
            if (local_1a8.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141db90f8;
            }
          }
          else {
LAB_141db90f8:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_1a8,0,uVar14,1);
          }
          local_1a0 = local_228;
          if (local_1a8.Data != (FScriptContainerElement *)0x0) {
            local_1a0 = local_1a8.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_1a0,uVar5,L"\\f",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_1a0,(longlong)(int)local_198);
          if (local_1a8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data);
          }
          break;
        case '\r':
          pFVar2 = this->Stream;
          local_108.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\r",2);
          uVar14 = uVar5;
          local_f8 = uVar5;
          if (uVar5 < 0x81) {
            if (local_108.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141db91e1;
            }
          }
          else {
LAB_141db91e1:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_108,0,uVar14,1);
          }
          local_100 = local_188;
          if (local_108.Data != (FScriptContainerElement *)0x0) {
            local_100 = local_108.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_100,uVar5,L"\\r",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_100,(longlong)(int)local_f8);
          if (local_108.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data);
          }
          break;
        case '\"':
          pFVar2 = this->Stream;
          local_68.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\\"",2);
          uVar14 = uVar5;
          local_58 = uVar5;
          if (uVar5 < 0x81) {
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141db92ca;
            }
          }
          else {
LAB_141db92ca:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_68,0,uVar14,1);
          }
          local_60 = local_e8;
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            local_60 = local_68.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_60,uVar5,L"\\\"",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_60,(longlong)(int)local_58);
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data);
          }
          break;
        case '\\':
          pFVar2 = this->Stream;
          local_428.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\\\",2);
          uVar14 = uVar5;
          local_418 = uVar5;
          if (uVar5 < 0x81) {
            if (local_428.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141db8d6c;
            }
          }
          else {
LAB_141db8d6c:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_428,0,uVar14,1);
          }
          local_420 = local_4a8;
          if (local_428.Data != (FScriptContainerElement *)0x0) {
            local_420 = local_428.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_420,uVar5,L"\\\\",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_420,(longlong)(int)local_418);
          if (local_428.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_428.Data);
          }
        }
        iVar6 = param_1->Size;
        iVar11 = iVar11 + 1;
        lVar12 = lVar12 + 1;
      } while (iVar11 < iVar6);
    }
LAB_141db9429:
    iVar6 = param_1->Size;
    iVar4 = iVar6;
    if (iVar6 - iVar11 < iVar6) {
      iVar4 = iVar6 - iVar11;
    }
    iStack_4e0 = 0;
    if (0 < iVar4) {
      iStack_4e0 = iVar4;
    }
    local_4e8 = param_1->DataPtr + ((longlong)iVar6 - (longlong)iStack_4e0);
    param_1->DataPtr = local_4e8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_4dc,iStack_4e0);
    iVar6 = param_1->Size;
  } while( true );
}

// WriteEscapedString<char> @ 141db95a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char>
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,TStringView<char> *param_1)

{
  char *pcVar1;
  FArchive *pFVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  uchar *puVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  code *pcVar13;
  uint uVar14;
  undefined1 auStack_528 [32];
  int local_508;
  int local_500;
  char *local_4f8;
  int iStack_4f0;
  undefined4 uStack_4ec;
  char *local_4e8;
  int iStack_4e0;
  undefined4 uStack_4dc;
  TStringBuilderBase<char> local_4d8;
  char local_4b8 [8];
  char local_4b0 [8];
  FScriptContainerElement local_4a8 [128];
  ForAnyElementType local_428;
  FScriptContainerElement *local_420;
  uint local_418;
  FScriptContainerElement local_408 [128];
  ForAnyElementType local_388;
  FScriptContainerElement *local_380;
  uint local_378;
  FScriptContainerElement local_368 [128];
  ForAnyElementType local_2e8;
  FScriptContainerElement *local_2e0;
  uint local_2d8;
  FScriptContainerElement local_2c8 [128];
  ForAnyElementType local_248;
  FScriptContainerElement *local_240;
  uint local_238;
  FScriptContainerElement local_228 [128];
  ForAnyElementType local_1a8;
  FScriptContainerElement *local_1a0;
  uint local_198;
  FScriptContainerElement local_188 [128];
  ForAnyElementType local_108;
  FScriptContainerElement *local_100;
  uint local_f8;
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  uint local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_528;
  iVar6 = param_1->Size;
  do {
    if (iVar6 == 0) {
      return;
    }
    iVar11 = 0;
    lVar12 = 0;
    if (0 < iVar6) {
      do {
        if (0x7ff < iVar11) break;
        if (((iVar11 < 0) || (iVar6 <= iVar11)) &&
           (local_508 = iVar11, local_500 = iVar6,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar3)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        switch(param_1->DataPtr[lVar12]) {
        case '\b':
        case '\t':
        case '\n':
        case '\f':
        case '\r':
        case '\"':
        case '\\':
          goto switchD_141db9664_caseD_8;
        }
        if (param_1->DataPtr[lVar12] < ' ') break;
        iVar6 = param_1->Size;
        iVar11 = iVar11 + 1;
        lVar12 = lVar12 + 1;
      } while (iVar11 < iVar6);
    }
switchD_141db9664_caseD_8:
    iVar6 = param_1->Size;
    pcVar1 = param_1->DataPtr;
    iVar4 = iVar6;
    if (iVar11 < iVar6) {
      iVar4 = iVar11;
    }
    iVar10 = 0;
    if (0 < iVar4) {
      iVar10 = iVar4;
    }
    if (iVar10 != 0) {
      pFVar2 = this->Stream;
      if (pcVar1 == (char *)0x0) {
        pcVar9 = (char *)0x0;
        iVar10 = 0;
        pcVar13 = *(code **)(*(longlong *)pFVar2 + 0x188);
      }
      else {
        if ((0 < iVar10) && (pcVar1[(longlong)iVar10 + -1] == '\0')) {
          iVar10 = iVar10 + -1;
        }
        pcVar13 = *(code **)(*(longlong *)pFVar2 + 0x188);
        pcVar9 = pcVar1;
        if (iVar10 == -1) {
          sVar7 = strlen(pcVar1);
          iVar10 = (int)sVar7;
        }
      }
      (*pcVar13)(pFVar2,pcVar9,(longlong)iVar10);
    }
    iVar4 = iVar6;
    if (iVar6 - iVar11 < iVar6) {
      iVar4 = iVar6 - iVar11;
    }
    iStack_4f0 = 0;
    if (0 < iVar4) {
      iStack_4f0 = iVar4;
    }
    iVar11 = 0;
    local_4f8 = pcVar1 + ((longlong)iVar6 - (longlong)iStack_4f0);
    lVar12 = 0;
    param_1->DataPtr = local_4f8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_4ec,iStack_4f0);
    iVar6 = param_1->Size;
    if (0 < iVar6) {
      do {
        if (((iVar11 < 0) || (iVar6 <= iVar11)) &&
           (local_508 = iVar11, local_500 = iVar6,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar3)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        switch(param_1->DataPtr[lVar12]) {
        case '\b':
          pFVar2 = this->Stream;
          local_248.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\b",2);
          uVar14 = uVar5;
          local_238 = uVar5;
          if (uVar5 < 0x81) {
            if (local_248.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141db9a7f;
            }
          }
          else {
LAB_141db9a7f:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_248,0,uVar14,1);
          }
          local_240 = local_2c8;
          if (local_248.Data != (FScriptContainerElement *)0x0) {
            local_240 = local_248.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_240,uVar5,L"\\b",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_240,(longlong)(int)local_238);
          if (local_248.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data);
          }
          break;
        case '\t':
          pFVar2 = this->Stream;
          local_2e8.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\t",2);
          uVar14 = uVar5;
          local_2d8 = uVar5;
          if (uVar5 < 0x81) {
            if (local_2e8.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141db9996;
            }
          }
          else {
LAB_141db9996:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_2e8,0,uVar14,1);
          }
          local_2e0 = local_368;
          if (local_2e8.Data != (FScriptContainerElement *)0x0) {
            local_2e0 = local_2e8.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_2e0,uVar5,L"\\t",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_2e0,(longlong)(int)local_2d8);
          if (local_2e8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e8.Data);
          }
          break;
        case '\n':
          pFVar2 = this->Stream;
          local_388.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\n",2);
          uVar14 = uVar5;
          local_378 = uVar5;
          if (uVar5 < 0x81) {
            if (local_388.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141db98b0;
            }
          }
          else {
LAB_141db98b0:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_388,0,uVar14,1);
          }
          local_380 = local_408;
          if (local_388.Data != (FScriptContainerElement *)0x0) {
            local_380 = local_388.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_380,uVar5,L"\\n",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_380,(longlong)(int)local_378);
          if (local_388.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_388.Data);
          }
          break;
        default:
          if ('\x1f' < param_1->DataPtr[lVar12]) goto LAB_141db9e99;
          local_4d8.Base = local_4b8;
          local_4d8.bIsDynamic = false;
          local_4d8.bIsExternal = false;
          local_4d8.CurPos = local_4b8;
          local_4d8.End = local_4b0;
          TStringBuilderBase<char>::AppendfImpl(&local_4d8,"\\u%04x");
          pcVar1 = local_4d8.Base;
          iVar6 = (int)local_4d8.CurPos - (int)local_4d8.Base;
          pFVar2 = this->Stream;
          if (local_4d8.Base == (char *)0x0) {
            iVar6 = 0;
            pcVar13 = *(code **)(*(longlong *)pFVar2 + 0x188);
          }
          else {
            if ((0 < iVar6) && (local_4d8.Base[(longlong)iVar6 + -1] == '\0')) {
              iVar6 = iVar6 + -1;
            }
            pcVar13 = *(code **)(*(longlong *)pFVar2 + 0x188);
            if (iVar6 == -1) {
              sVar7 = strlen(local_4d8.Base);
              iVar6 = (int)sVar7;
            }
          }
          (*pcVar13)(pFVar2,pcVar1,(longlong)iVar6);
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_4d8);
          break;
        case '\f':
          pFVar2 = this->Stream;
          local_1a8.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\f",2);
          uVar14 = uVar5;
          local_198 = uVar5;
          if (uVar5 < 0x81) {
            if (local_1a8.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141db9b68;
            }
          }
          else {
LAB_141db9b68:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_1a8,0,uVar14,1);
          }
          local_1a0 = local_228;
          if (local_1a8.Data != (FScriptContainerElement *)0x0) {
            local_1a0 = local_1a8.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_1a0,uVar5,L"\\f",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_1a0,(longlong)(int)local_198);
          if (local_1a8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data);
          }
          break;
        case '\r':
          pFVar2 = this->Stream;
          local_108.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\r",2);
          uVar14 = uVar5;
          local_f8 = uVar5;
          if (uVar5 < 0x81) {
            if (local_108.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141db9c51;
            }
          }
          else {
LAB_141db9c51:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_108,0,uVar14,1);
          }
          local_100 = local_188;
          if (local_108.Data != (FScriptContainerElement *)0x0) {
            local_100 = local_108.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_100,uVar5,L"\\r",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_100,(longlong)(int)local_f8);
          if (local_108.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data);
          }
          break;
        case '\"':
          pFVar2 = this->Stream;
          local_68.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\\"",2);
          uVar14 = uVar5;
          local_58 = uVar5;
          if (uVar5 < 0x81) {
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141db9d3a;
            }
          }
          else {
LAB_141db9d3a:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_68,0,uVar14,1);
          }
          local_60 = local_e8;
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            local_60 = local_68.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_60,uVar5,L"\\\"",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_60,(longlong)(int)local_58);
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data);
          }
          break;
        case '\\':
          pFVar2 = this->Stream;
          local_428.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\\\",2);
          uVar14 = uVar5;
          local_418 = uVar5;
          if (uVar5 < 0x81) {
            if (local_428.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141db97dc;
            }
          }
          else {
LAB_141db97dc:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_428,0,uVar14,1);
          }
          local_420 = local_4a8;
          if (local_428.Data != (FScriptContainerElement *)0x0) {
            local_420 = local_428.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_420,uVar5,L"\\\\",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_420,(longlong)(int)local_418);
          if (local_428.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_428.Data);
          }
        }
        iVar6 = param_1->Size;
        iVar11 = iVar11 + 1;
        lVar12 = lVar12 + 1;
      } while (iVar11 < iVar6);
    }
LAB_141db9e99:
    iVar6 = param_1->Size;
    iVar4 = iVar6;
    if (iVar6 - iVar11 < iVar6) {
      iVar4 = iVar6 - iVar11;
    }
    iStack_4e0 = 0;
    if (0 < iVar4) {
      iStack_4e0 = iVar4;
    }
    local_4e8 = param_1->DataPtr + ((longlong)iVar6 - (longlong)iStack_4e0);
    param_1->DataPtr = local_4e8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_4dc,iStack_4e0);
    iVar6 = param_1->Size;
  } while( true );
}

// WriteEscapedString<char> @ 141dba010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteEscapedString<char>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,TStringView<char> *param_1
          )

{
  uchar *puVar1;
  FArchive *pFVar2;
  code *pcVar3;
  char *pcVar4;
  bool bVar5;
  wchar_t *pwVar6;
  uint uVar7;
  int iVar8;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_318 [32];
  uint local_2f8;
  int local_2f0;
  TStringView<char> *local_2e8;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *local_2e0;
  char *local_2d8;
  uint uStack_2d0;
  undefined4 uStack_2cc;
  char *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  TStringBuilderBase<char> local_2b8;
  uchar local_298 [8];
  char local_290 [8];
  FScriptContainerElement local_288 [256];
  ForAnyElementType local_188;
  FScriptContainerElement *local_180;
  int local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  ulonglong uVar9;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_318;
  iVar8 = param_1->Size;
  local_2e0 = this;
  local_2e8 = param_1;
  do {
    if (iVar8 == 0) {
      return;
    }
    uVar9 = 0;
    uVar7 = 0;
    uVar12 = uVar9;
    if (0 < iVar8) {
      do {
        uVar7 = (uint)uVar9;
        if (0x7ff < (int)uVar7) break;
        if ((((int)uVar7 < 0) || (iVar8 <= (int)uVar7)) &&
           (local_2f8 = uVar7, local_2f0 = iVar8,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        switch(param_1->DataPtr[uVar12]) {
        case '\b':
        case '\t':
        case '\n':
        case '\f':
        case '\r':
        case '\"':
        case '\\':
          goto switchD_141dba0db_caseD_8;
        }
        if (param_1->DataPtr[uVar12] < ' ') break;
        iVar8 = param_1->Size;
        uVar7 = uVar7 + 1;
        uVar9 = (ulonglong)uVar7;
        uVar12 = uVar12 + 1;
      } while ((int)uVar7 < iVar8);
    }
switchD_141dba0db_caseD_8:
    puVar1 = (uchar *)param_1->DataPtr;
    uVar13 = param_1->Size;
    if ((int)uVar7 < param_1->Size) {
      uVar13 = uVar7;
    }
    uVar11 = 0;
    if (0 < (int)uVar13) {
      uVar11 = uVar13;
    }
    if (uVar11 != 0) {
      pFVar2 = this->Stream;
      local_188.Data = (FScriptContainerElement *)0x0;
      if (puVar1 == (uchar *)0x0) {
        local_180 = (FScriptContainerElement *)0x0;
        local_178 = 0;
      }
      else {
        iVar8 = 0;
        if ((0 < (int)uVar11) && (iVar8 = 0, puVar1[(longlong)(int)uVar11 + -1] == '\0')) {
          iVar8 = 1;
          uVar11 = uVar11 - 1;
        }
        local_178 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar1,uVar11);
        uVar14 = local_178 + iVar8;
        uVar13 = uVar14;
        if (uVar14 < 0x81) {
          if (local_188.Data != (FScriptContainerElement *)0x0) {
            uVar13 = 0;
            goto LAB_141dba168;
          }
        }
        else {
LAB_141dba168:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_188,0,uVar13,2);
        }
        local_180 = local_288;
        if (local_188.Data != (FScriptContainerElement *)0x0) {
          local_180 = local_188.Data;
        }
        pwVar6 = UE::Core::Private::Convert((wchar_t *)local_180,uVar14,puVar1,iVar8 + uVar11);
        this = local_2e0;
        if ((pwVar6 == (wchar_t *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), this = local_2e0, bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_180,(longlong)local_178 * 2);
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data);
      }
    }
    uVar13 = local_2e8->Size;
    uVar11 = uVar13;
    if ((int)(uVar13 - uVar7) < (int)uVar13) {
      uVar11 = uVar13 - uVar7;
    }
    uVar12 = 0;
    uVar7 = 0;
    uStack_2d0 = uVar7;
    if (0 < (int)uVar11) {
      uStack_2d0 = uVar11;
    }
    local_2d8 = local_2e8->DataPtr + ((longlong)(int)uVar13 - (longlong)(int)uStack_2d0);
    local_2e8->DataPtr = local_2d8;
    *(ulonglong *)&local_2e8->Size = CONCAT44(uStack_2cc,uStack_2d0);
    iVar8 = local_2e8->Size;
    param_1 = local_2e8;
    uVar9 = uVar12;
    if (0 < iVar8) {
      do {
        uVar7 = (uint)uVar9;
        if ((((int)uVar7 < 0) || (iVar8 <= (int)uVar7)) &&
           (local_2f8 = uVar7, local_2f0 = iVar8,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        switch(param_1->DataPtr[uVar12]) {
        case '\b':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__b,4);
          break;
        case '\t':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__t,4);
          break;
        case '\n':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__n,4);
          break;
        default:
          if ('\x1f' < param_1->DataPtr[uVar12]) goto LAB_141dba525;
          local_2b8.Base = (char *)local_298;
          local_2b8.bIsDynamic = false;
          local_2b8.bIsExternal = false;
          local_2b8.CurPos = (char *)local_298;
          local_2b8.End = local_290;
          TStringBuilderBase<char>::AppendfImpl(&local_2b8,"\\u%04x");
          pcVar4 = local_2b8.Base;
          pFVar2 = this->Stream;
          iVar8 = (int)local_2b8.CurPos - (int)local_2b8.Base;
          local_68.Data = (FScriptContainerElement *)0x0;
          iVar10 = 0;
          if ((uchar *)local_2b8.Base == (uchar *)0x0) {
            local_60 = (FScriptContainerElement *)0x0;
            local_58 = 0;
          }
          else {
            if ((0 < iVar8) && (local_2b8.Base[(longlong)iVar8 + -1] == '\0')) {
              iVar10 = 1;
              iVar8 = iVar8 + -1;
            }
            local_58 = UE::Core::Private::GetConvertedLength
                                 ((wchar_t *)0x0,(uchar *)local_2b8.Base,iVar8);
            uVar13 = local_58 + iVar10;
            uVar11 = uVar13;
            if (uVar13 < 0x81) {
              if (local_68.Data != (FScriptContainerElement *)0x0) {
                uVar11 = 0;
                goto LAB_141dba44f;
              }
            }
            else {
LAB_141dba44f:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_68,0,uVar11,2);
            }
            local_60 = local_168;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              local_60 = local_68.Data;
            }
            pwVar6 = UE::Core::Private::Convert
                               ((wchar_t *)local_60,uVar13,(uchar *)pcVar4,iVar10 + iVar8);
            param_1 = local_2e8;
            if ((pwVar6 == (wchar_t *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                   ,0x25,L""), param_1 = local_2e8, bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_60,(longlong)local_58 * 2);
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data);
          }
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_2b8);
          this = local_2e0;
          break;
        case '\f':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__f,4);
          break;
        case '\r':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__r,4);
          break;
        case '\"':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u___,4);
          break;
        case '\\':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u___,4);
        }
        iVar8 = param_1->Size;
        uVar7 = uVar7 + 1;
        uVar9 = (ulonglong)uVar7;
        uVar12 = uVar12 + 1;
      } while ((int)uVar7 < iVar8);
    }
LAB_141dba525:
    iVar8 = param_1->Size;
    iVar10 = iVar8;
    if ((int)(iVar8 - uVar7) < iVar8) {
      iVar10 = iVar8 - uVar7;
    }
    iStack_2c0 = 0;
    if (0 < iVar10) {
      iStack_2c0 = iVar10;
    }
    local_2c8 = param_1->DataPtr + ((longlong)iVar8 - (longlong)iStack_2c0);
    param_1->DataPtr = local_2c8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_2bc,iStack_2c0);
    iVar8 = param_1->Size;
  } while( true );
}

// WriteEscapedString<char> @ 141dba690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteEscapedString<char>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,TStringView<char> *param_1)

{
  uchar *puVar1;
  FArchive *pFVar2;
  code *pcVar3;
  char *pcVar4;
  bool bVar5;
  wchar_t *pwVar6;
  uint uVar7;
  int iVar8;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_318 [32];
  uint local_2f8;
  int local_2f0;
  TStringView<char> *local_2e8;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *local_2e0;
  char *local_2d8;
  uint uStack_2d0;
  undefined4 uStack_2cc;
  char *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  TStringBuilderBase<char> local_2b8;
  uchar local_298 [8];
  char local_290 [8];
  FScriptContainerElement local_288 [256];
  ForAnyElementType local_188;
  FScriptContainerElement *local_180;
  int local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  ulonglong uVar9;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_318;
  iVar8 = param_1->Size;
  local_2e0 = this;
  local_2e8 = param_1;
  do {
    if (iVar8 == 0) {
      return;
    }
    uVar9 = 0;
    uVar7 = 0;
    uVar12 = uVar9;
    if (0 < iVar8) {
      do {
        uVar7 = (uint)uVar9;
        if (0x7ff < (int)uVar7) break;
        if ((((int)uVar7 < 0) || (iVar8 <= (int)uVar7)) &&
           (local_2f8 = uVar7, local_2f0 = iVar8,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        switch(param_1->DataPtr[uVar12]) {
        case '\b':
        case '\t':
        case '\n':
        case '\f':
        case '\r':
        case '\"':
        case '\\':
          goto switchD_141dba75b_caseD_8;
        }
        if (param_1->DataPtr[uVar12] < ' ') break;
        iVar8 = param_1->Size;
        uVar7 = uVar7 + 1;
        uVar9 = (ulonglong)uVar7;
        uVar12 = uVar12 + 1;
      } while ((int)uVar7 < iVar8);
    }
switchD_141dba75b_caseD_8:
    puVar1 = (uchar *)param_1->DataPtr;
    uVar13 = param_1->Size;
    if ((int)uVar7 < param_1->Size) {
      uVar13 = uVar7;
    }
    uVar11 = 0;
    if (0 < (int)uVar13) {
      uVar11 = uVar13;
    }
    if (uVar11 != 0) {
      pFVar2 = this->Stream;
      local_188.Data = (FScriptContainerElement *)0x0;
      if (puVar1 == (uchar *)0x0) {
        local_180 = (FScriptContainerElement *)0x0;
        local_178 = 0;
      }
      else {
        iVar8 = 0;
        if ((0 < (int)uVar11) && (iVar8 = 0, puVar1[(longlong)(int)uVar11 + -1] == '\0')) {
          iVar8 = 1;
          uVar11 = uVar11 - 1;
        }
        local_178 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar1,uVar11);
        uVar14 = local_178 + iVar8;
        uVar13 = uVar14;
        if (uVar14 < 0x81) {
          if (local_188.Data != (FScriptContainerElement *)0x0) {
            uVar13 = 0;
            goto LAB_141dba7e8;
          }
        }
        else {
LAB_141dba7e8:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_188,0,uVar13,2);
        }
        local_180 = local_288;
        if (local_188.Data != (FScriptContainerElement *)0x0) {
          local_180 = local_188.Data;
        }
        pwVar6 = UE::Core::Private::Convert((wchar_t *)local_180,uVar14,puVar1,iVar8 + uVar11);
        this = local_2e0;
        if ((pwVar6 == (wchar_t *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), this = local_2e0, bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_180,(longlong)local_178 * 2);
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data);
      }
    }
    uVar13 = local_2e8->Size;
    uVar11 = uVar13;
    if ((int)(uVar13 - uVar7) < (int)uVar13) {
      uVar11 = uVar13 - uVar7;
    }
    uVar12 = 0;
    uVar7 = 0;
    uStack_2d0 = uVar7;
    if (0 < (int)uVar11) {
      uStack_2d0 = uVar11;
    }
    local_2d8 = local_2e8->DataPtr + ((longlong)(int)uVar13 - (longlong)(int)uStack_2d0);
    local_2e8->DataPtr = local_2d8;
    *(ulonglong *)&local_2e8->Size = CONCAT44(uStack_2cc,uStack_2d0);
    iVar8 = local_2e8->Size;
    param_1 = local_2e8;
    uVar9 = uVar12;
    if (0 < iVar8) {
      do {
        uVar7 = (uint)uVar9;
        if ((((int)uVar7 < 0) || (iVar8 <= (int)uVar7)) &&
           (local_2f8 = uVar7, local_2f0 = iVar8,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        switch(param_1->DataPtr[uVar12]) {
        case '\b':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__b,4);
          break;
        case '\t':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__t,4);
          break;
        case '\n':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__n,4);
          break;
        default:
          if ('\x1f' < param_1->DataPtr[uVar12]) goto LAB_141dbaba5;
          local_2b8.Base = (char *)local_298;
          local_2b8.bIsDynamic = false;
          local_2b8.bIsExternal = false;
          local_2b8.CurPos = (char *)local_298;
          local_2b8.End = local_290;
          TStringBuilderBase<char>::AppendfImpl(&local_2b8,"\\u%04x");
          pcVar4 = local_2b8.Base;
          pFVar2 = this->Stream;
          iVar8 = (int)local_2b8.CurPos - (int)local_2b8.Base;
          local_68.Data = (FScriptContainerElement *)0x0;
          iVar10 = 0;
          if ((uchar *)local_2b8.Base == (uchar *)0x0) {
            local_60 = (FScriptContainerElement *)0x0;
            local_58 = 0;
          }
          else {
            if ((0 < iVar8) && (local_2b8.Base[(longlong)iVar8 + -1] == '\0')) {
              iVar10 = 1;
              iVar8 = iVar8 + -1;
            }
            local_58 = UE::Core::Private::GetConvertedLength
                                 ((wchar_t *)0x0,(uchar *)local_2b8.Base,iVar8);
            uVar13 = local_58 + iVar10;
            uVar11 = uVar13;
            if (uVar13 < 0x81) {
              if (local_68.Data != (FScriptContainerElement *)0x0) {
                uVar11 = 0;
                goto LAB_141dbaacf;
              }
            }
            else {
LAB_141dbaacf:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_68,0,uVar11,2);
            }
            local_60 = local_168;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              local_60 = local_68.Data;
            }
            pwVar6 = UE::Core::Private::Convert
                               ((wchar_t *)local_60,uVar13,(uchar *)pcVar4,iVar10 + iVar8);
            param_1 = local_2e8;
            if ((pwVar6 == (wchar_t *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                   ,0x25,L""), param_1 = local_2e8, bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_60,(longlong)local_58 * 2);
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data);
          }
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_2b8);
          this = local_2e0;
          break;
        case '\f':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__f,4);
          break;
        case '\r':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__r,4);
          break;
        case '\"':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u___,4);
          break;
        case '\\':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u___,4);
        }
        iVar8 = param_1->Size;
        uVar7 = uVar7 + 1;
        uVar9 = (ulonglong)uVar7;
        uVar12 = uVar12 + 1;
      } while ((int)uVar7 < iVar8);
    }
LAB_141dbaba5:
    iVar8 = param_1->Size;
    iVar10 = iVar8;
    if ((int)(iVar8 - uVar7) < iVar8) {
      iVar10 = iVar8 - uVar7;
    }
    iStack_2c0 = 0;
    if (0 < iVar10) {
      iStack_2c0 = iVar10;
    }
    local_2c8 = param_1->DataPtr + ((longlong)iVar8 - (longlong)iStack_2c0);
    param_1->DataPtr = local_2c8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_2bc,iStack_2c0);
    iVar8 = param_1->Size;
  } while( true );
}

// WriteEscapedString<char8_t> @ 141dbad10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteEscapedString<char8_t>
          (TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *this,TStringView<char8_t> *param_1)

{
  ushort uVar1;
  uchar *puVar2;
  FArchive *pFVar3;
  code *pcVar4;
  bool bVar5;
  char *pcVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ForElementType<char> FVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_678 [32];
  uint local_658;
  int local_650;
  TStringView<char8_t> *local_648;
  TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *local_640;
  uchar *local_638;
  int iStack_630;
  undefined4 uStack_62c;
  uchar *local_628;
  int iStack_620;
  undefined4 uStack_61c;
  TStringBuilderBase<char> local_618;
  uchar local_5f8 [8];
  char local_5f0 [8];
  FScriptContainerElement local_5e8 [128];
  ForAnyElementType local_568;
  FScriptContainerElement *local_560;
  int local_558;
  FScriptContainerElement local_548 [128];
  ForAnyElementType local_4c8;
  FScriptContainerElement *local_4c0;
  int local_4b8;
  undefined1 local_4a8 [128];
  void *local_428;
  undefined1 *local_420;
  undefined4 local_418;
  undefined1 local_408 [128];
  void *local_388;
  undefined1 *local_380;
  undefined4 local_378;
  undefined1 local_368 [128];
  void *local_2e8;
  undefined1 *local_2e0;
  undefined4 local_2d8;
  undefined1 local_2c8 [128];
  void *local_248;
  undefined1 *local_240;
  undefined4 local_238;
  undefined1 local_228 [128];
  void *local_1a8;
  undefined1 *local_1a0;
  undefined4 local_198;
  undefined1 local_188 [128];
  void *local_108;
  undefined1 *local_100;
  undefined4 local_f8;
  ForElementType<char> local_e8;
  ForElementType<char> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_678;
  iVar10 = param_1->Size;
  local_640 = this;
  local_648 = param_1;
  do {
    if (iVar10 == 0) {
      return;
    }
    uVar16 = 0;
    uVar9 = 0;
    uVar12 = uVar16;
    if (0 < iVar10) {
      do {
        uVar9 = (uint)uVar16;
        if (0x7ff < (int)uVar9) break;
        if ((((int)uVar9 < 0) || (iVar10 <= (int)uVar9)) &&
           (local_658 = uVar9, local_650 = iVar10,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        switch(param_1->DataPtr[uVar12]) {
        case '\b':
        case '\t':
        case '\n':
        case '\f':
        case '\r':
        case '\"':
        case '\\':
          goto switchD_141dbadd9_caseD_8;
        }
        if (0x5e < (byte)(param_1->DataPtr[uVar12] - 0x20)) break;
        iVar10 = param_1->Size;
        uVar9 = uVar9 + 1;
        uVar16 = (ulonglong)uVar9;
        uVar12 = uVar12 + 1;
      } while ((int)uVar9 < iVar10);
    }
switchD_141dbadd9_caseD_8:
    puVar2 = param_1->DataPtr;
    uVar14 = param_1->Size;
    if ((int)uVar9 < param_1->Size) {
      uVar14 = uVar9;
    }
    uVar11 = 0;
    if (0 < (int)uVar14) {
      uVar11 = uVar14;
    }
    if (uVar11 != 0) {
      pFVar3 = this->Stream;
      local_568.Data = (FScriptContainerElement *)0x0;
      if (puVar2 == (uchar *)0x0) {
        local_560 = (FScriptContainerElement *)0x0;
        local_558 = 0;
      }
      else {
        iVar10 = 0;
        if ((0 < (int)uVar11) && (iVar10 = 0, puVar2[(longlong)(int)uVar11 + -1] == '\0')) {
          iVar10 = 1;
          uVar11 = uVar11 - 1;
        }
        local_558 = UE::Core::Private::GetConvertedLength((char *)0x0,puVar2,uVar11);
        uVar17 = local_558 + iVar10;
        uVar14 = uVar17;
        if (uVar17 < 0x81) {
          if (local_568.Data != (FScriptContainerElement *)0x0) {
            uVar14 = 0;
            goto LAB_141dbae60;
          }
        }
        else {
LAB_141dbae60:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_568,0,uVar14,1);
        }
        local_560 = local_5e8;
        if (local_568.Data != (FScriptContainerElement *)0x0) {
          local_560 = local_568.Data;
        }
        pcVar6 = UE::Core::Private::Convert((char *)local_560,uVar17,puVar2,iVar10 + uVar11);
        this = local_640;
        if ((pcVar6 == (char *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), this = local_640, bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_560,(longlong)local_558);
      if (local_568.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_568.Data);
      }
    }
    iVar10 = local_648->Size;
    iVar7 = iVar10;
    if ((int)(iVar10 - uVar9) < iVar10) {
      iVar7 = iVar10 - uVar9;
    }
    uVar12 = 0;
    uVar9 = 0;
    iStack_630 = 0;
    if (0 < iVar7) {
      iStack_630 = iVar7;
    }
    local_638 = local_648->DataPtr + ((longlong)iVar10 - (longlong)iStack_630);
    local_648->DataPtr = local_638;
    *(ulonglong *)&local_648->Size = CONCAT44(uStack_62c,iStack_630);
    iVar10 = local_648->Size;
    param_1 = local_648;
    uVar16 = uVar12;
    if (0 < iVar10) {
      do {
        lVar13 = 0;
        uVar9 = (uint)uVar12;
        if ((((int)uVar9 < 0) || (iVar10 <= (int)uVar9)) &&
           (local_658 = uVar9, local_650 = iVar10,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        switch(param_1->DataPtr[uVar16]) {
        case '\b':
          pFVar3 = this->Stream;
          local_240 = local_2c8;
          bVar5 = false;
          local_248 = (void *)0x0;
          local_238 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u__b + lVar8 * 2);
            local_2c8[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u__b + lVar13 * 2)) {
                local_2c8[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_240,2);
          if (local_248 != (void *)0x0) {
            FMemory::Free(local_248);
          }
          break;
        case '\t':
          pFVar3 = this->Stream;
          local_2e0 = local_368;
          bVar5 = false;
          local_2e8 = (void *)0x0;
          local_2d8 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u__t + lVar8 * 2);
            local_368[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u__t + lVar13 * 2)) {
                local_368[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_2e0,2);
          if (local_2e8 != (void *)0x0) {
            FMemory::Free(local_2e8);
          }
          break;
        case '\n':
          pFVar3 = this->Stream;
          local_380 = local_408;
          bVar5 = false;
          local_388 = (void *)0x0;
          local_378 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u__n + lVar8 * 2);
            local_408[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u__n + lVar13 * 2)) {
                local_408[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_380,2);
          if (local_388 != (void *)0x0) {
            FMemory::Free(local_388);
          }
          break;
        default:
          if ((byte)(param_1->DataPtr[uVar16] - 0x20) < 0x5f) goto LAB_141dbb634;
          local_618.Base = (char *)local_5f8;
          local_618.bIsDynamic = false;
          local_618.bIsExternal = false;
          local_618.CurPos = (char *)local_5f8;
          local_618.End = local_5f0;
          TStringBuilderBase<char>::AppendfImpl(&local_618,"\\u%04x");
          pcVar6 = local_618.Base;
          pFVar3 = this->Stream;
          iVar10 = (int)local_618.CurPos - (int)local_618.Base;
          local_4c8.Data = (FScriptContainerElement *)0x0;
          if ((uchar *)local_618.Base == (uchar *)0x0) {
            local_4c0 = (FScriptContainerElement *)0x0;
            local_4b8 = 0;
          }
          else {
            if ((0 < iVar10) && (local_618.Base[(longlong)iVar10 + -1] == '\0')) {
              lVar13 = 1;
              iVar10 = iVar10 + -1;
            }
            local_4b8 = UE::Core::Private::GetConvertedLength
                                  ((char *)0x0,(uchar *)local_618.Base,iVar10);
            uVar11 = local_4b8 + (int)lVar13;
            uVar14 = uVar11;
            if (uVar11 < 0x81) {
              if (local_4c8.Data != (FScriptContainerElement *)0x0) {
                uVar14 = 0;
                goto LAB_141dbb565;
              }
            }
            else {
LAB_141dbb565:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_4c8,0,uVar14,1);
            }
            local_4c0 = local_548;
            if (local_4c8.Data != (FScriptContainerElement *)0x0) {
              local_4c0 = local_4c8.Data;
            }
            pcVar6 = UE::Core::Private::Convert
                               ((char *)local_4c0,uVar11,(uchar *)pcVar6,(int)lVar13 + iVar10);
            param_1 = local_648;
            if ((pcVar6 == (char *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                   ,0x25,L""), param_1 = local_648, bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_4c0,(longlong)local_4b8);
          if (local_4c8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4c8.Data);
          }
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_618);
          this = local_640;
          break;
        case '\f':
          pFVar3 = this->Stream;
          local_1a0 = local_228;
          bVar5 = false;
          local_1a8 = (void *)0x0;
          local_198 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u__f + lVar8 * 2);
            local_228[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u__f + lVar13 * 2)) {
                local_228[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_1a0,2);
          if (local_1a8 != (void *)0x0) {
            FMemory::Free(local_1a8);
          }
          break;
        case '\r':
          pFVar3 = this->Stream;
          local_100 = local_188;
          bVar5 = false;
          local_108 = (void *)0x0;
          local_f8 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u__r + lVar8 * 2);
            local_188[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u__r + lVar13 * 2)) {
                local_188[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_100,2);
          if (local_108 != (void *)0x0) {
            FMemory::Free(local_108);
          }
          break;
        case '\"':
          pFVar3 = this->Stream;
          local_e8.SecondaryData = (ForElementType<char>)0x0;
          local_58 = 2;
          TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<char>::
          ResizeAllocation(&local_e8,0,2,1);
          FVar15 = (ForElementType<char>)&local_e8;
          if (local_e8.SecondaryData != (ForElementType<char>)0x0) {
            FVar15 = local_e8.SecondaryData;
          }
          bVar5 = false;
          lVar8 = lVar13;
          local_60 = FVar15;
          do {
            uVar1 = *(ushort *)(&u___ + lVar8 * 2);
            *(char *)(lVar8 + (longlong)FVar15) = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u___ + lVar13 * 2)) {
                *(undefined1 *)(lVar13 + (longlong)FVar15) = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          if ((FVar15 == (ForElementType<char>)0xfffffffffffffffe) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_60,(longlong)local_58);
          if (local_e8.SecondaryData != (ForElementType<char>)0x0) {
            FMemory::Free((void *)local_e8.SecondaryData);
          }
          break;
        case '\\':
          pFVar3 = this->Stream;
          local_420 = local_4a8;
          bVar5 = false;
          local_428 = (void *)0x0;
          local_418 = 2;
          lVar8 = lVar13;
          do {
            uVar1 = *(ushort *)(&u___ + lVar8 * 2);
            local_4a8[lVar8] = (char)uVar1;
            lVar8 = lVar8 + 1;
            bVar5 = (bool)(bVar5 | 0x7f < uVar1);
          } while (lVar8 < 2);
          if (bVar5) {
            do {
              if (0x7f < *(ushort *)(&u___ + lVar13 * 2)) {
                local_4a8[lVar13] = 0x3f;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < 2);
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_420,2);
          if (local_428 != (void *)0x0) {
            FMemory::Free(local_428);
          }
        }
        iVar10 = param_1->Size;
        uVar9 = uVar9 + 1;
        uVar12 = (ulonglong)uVar9;
        uVar16 = uVar16 + 1;
      } while ((int)uVar9 < iVar10);
    }
LAB_141dbb634:
    iVar10 = param_1->Size;
    iVar7 = iVar10;
    if ((int)(iVar10 - uVar9) < iVar10) {
      iVar7 = iVar10 - uVar9;
    }
    iStack_620 = 0;
    if (0 < iVar7) {
      iStack_620 = iVar7;
    }
    local_628 = param_1->DataPtr + ((longlong)iVar10 - (longlong)iStack_620);
    param_1->DataPtr = local_628;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_61c,iStack_620);
    iVar10 = param_1->Size;
  } while( true );
}

// WriteEscapedString<char8_t> @ 141dbb7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteEscapedString<char8_t>
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<char8_t> *param_1)

{
  FArchive *pFVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  uchar *puVar8;
  uchar *puVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  code *pcVar13;
  uint uVar14;
  undefined1 auStack_528 [32];
  int local_508;
  int local_500;
  uchar *local_4f8;
  int iStack_4f0;
  undefined4 uStack_4ec;
  uchar *local_4e8;
  int iStack_4e0;
  undefined4 uStack_4dc;
  TStringBuilderBase<char> local_4d8;
  char local_4b8 [8];
  char local_4b0 [8];
  FScriptContainerElement local_4a8 [128];
  ForAnyElementType local_428;
  FScriptContainerElement *local_420;
  uint local_418;
  FScriptContainerElement local_408 [128];
  ForAnyElementType local_388;
  FScriptContainerElement *local_380;
  uint local_378;
  FScriptContainerElement local_368 [128];
  ForAnyElementType local_2e8;
  FScriptContainerElement *local_2e0;
  uint local_2d8;
  FScriptContainerElement local_2c8 [128];
  ForAnyElementType local_248;
  FScriptContainerElement *local_240;
  uint local_238;
  FScriptContainerElement local_228 [128];
  ForAnyElementType local_1a8;
  FScriptContainerElement *local_1a0;
  uint local_198;
  FScriptContainerElement local_188 [128];
  ForAnyElementType local_108;
  FScriptContainerElement *local_100;
  uint local_f8;
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  uint local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_528;
  iVar6 = param_1->Size;
  do {
    if (iVar6 == 0) {
      return;
    }
    iVar11 = 0;
    lVar12 = 0;
    if (0 < iVar6) {
      do {
        if (0x7ff < iVar11) break;
        if (((iVar11 < 0) || (iVar6 <= iVar11)) &&
           (local_508 = iVar11, local_500 = iVar6,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar3)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        switch(param_1->DataPtr[lVar12]) {
        case '\b':
        case '\t':
        case '\n':
        case '\f':
        case '\r':
        case '\"':
        case '\\':
          goto switchD_141dbb862_caseD_8;
        }
        if (param_1->DataPtr[lVar12] < 0x20) break;
        iVar6 = param_1->Size;
        iVar11 = iVar11 + 1;
        lVar12 = lVar12 + 1;
      } while (iVar11 < iVar6);
    }
switchD_141dbb862_caseD_8:
    iVar6 = param_1->Size;
    puVar8 = param_1->DataPtr;
    iVar4 = iVar6;
    if (iVar11 < iVar6) {
      iVar4 = iVar11;
    }
    iVar10 = 0;
    if (0 < iVar4) {
      iVar10 = iVar4;
    }
    if (iVar10 != 0) {
      pFVar1 = this->Stream;
      if (puVar8 == (uchar *)0x0) {
        puVar9 = (uchar *)0x0;
        iVar10 = 0;
        pcVar13 = *(code **)(*(longlong *)pFVar1 + 0x188);
      }
      else {
        if ((0 < iVar10) && (puVar8[(longlong)iVar10 + -1] == '\0')) {
          iVar10 = iVar10 + -1;
        }
        pcVar13 = *(code **)(*(longlong *)pFVar1 + 0x188);
        puVar9 = puVar8;
        if (iVar10 == -1) {
          sVar7 = strlen((char *)puVar8);
          iVar10 = (int)sVar7;
        }
      }
      (*pcVar13)(pFVar1,puVar9,(longlong)iVar10);
    }
    iVar4 = iVar6;
    if (iVar6 - iVar11 < iVar6) {
      iVar4 = iVar6 - iVar11;
    }
    iStack_4f0 = 0;
    if (0 < iVar4) {
      iStack_4f0 = iVar4;
    }
    iVar11 = 0;
    local_4f8 = puVar8 + ((longlong)iVar6 - (longlong)iStack_4f0);
    lVar12 = 0;
    param_1->DataPtr = local_4f8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_4ec,iStack_4f0);
    iVar6 = param_1->Size;
    if (0 < iVar6) {
      do {
        if (((iVar11 < 0) || (iVar6 <= iVar11)) &&
           (local_508 = iVar11, local_500 = iVar6,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar3)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        switch(param_1->DataPtr[lVar12]) {
        case '\b':
          pFVar1 = this->Stream;
          local_248.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\b",2);
          uVar14 = uVar5;
          local_238 = uVar5;
          if (uVar5 < 0x81) {
            if (local_248.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141dbbc7b;
            }
          }
          else {
LAB_141dbbc7b:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_248,0,uVar14,1);
          }
          local_240 = local_2c8;
          if (local_248.Data != (FScriptContainerElement *)0x0) {
            local_240 = local_248.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_240,uVar5,L"\\b",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_240,(longlong)(int)local_238);
          if (local_248.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data);
          }
          break;
        case '\t':
          pFVar1 = this->Stream;
          local_2e8.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\t",2);
          uVar14 = uVar5;
          local_2d8 = uVar5;
          if (uVar5 < 0x81) {
            if (local_2e8.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141dbbb92;
            }
          }
          else {
LAB_141dbbb92:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_2e8,0,uVar14,1);
          }
          local_2e0 = local_368;
          if (local_2e8.Data != (FScriptContainerElement *)0x0) {
            local_2e0 = local_2e8.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_2e0,uVar5,L"\\t",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_2e0,(longlong)(int)local_2d8);
          if (local_2e8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e8.Data);
          }
          break;
        case '\n':
          pFVar1 = this->Stream;
          local_388.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\n",2);
          uVar14 = uVar5;
          local_378 = uVar5;
          if (uVar5 < 0x81) {
            if (local_388.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141dbbaac;
            }
          }
          else {
LAB_141dbbaac:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_388,0,uVar14,1);
          }
          local_380 = local_408;
          if (local_388.Data != (FScriptContainerElement *)0x0) {
            local_380 = local_388.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_380,uVar5,L"\\n",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_380,(longlong)(int)local_378);
          if (local_388.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_388.Data);
          }
          break;
        default:
          if (0x1f < param_1->DataPtr[lVar12]) goto LAB_141dbc096;
          local_4d8.Base = local_4b8;
          local_4d8.bIsDynamic = false;
          local_4d8.bIsExternal = false;
          local_4d8.CurPos = local_4b8;
          local_4d8.End = local_4b0;
          TStringBuilderBase<char>::AppendfImpl(&local_4d8,"\\u%04x");
          pcVar2 = local_4d8.Base;
          iVar6 = (int)local_4d8.CurPos - (int)local_4d8.Base;
          pFVar1 = this->Stream;
          if (local_4d8.Base == (char *)0x0) {
            iVar6 = 0;
            pcVar13 = *(code **)(*(longlong *)pFVar1 + 0x188);
          }
          else {
            if ((0 < iVar6) && (local_4d8.Base[(longlong)iVar6 + -1] == '\0')) {
              iVar6 = iVar6 + -1;
            }
            pcVar13 = *(code **)(*(longlong *)pFVar1 + 0x188);
            if (iVar6 == -1) {
              sVar7 = strlen(local_4d8.Base);
              iVar6 = (int)sVar7;
            }
          }
          (*pcVar13)(pFVar1,pcVar2,(longlong)iVar6);
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_4d8);
          break;
        case '\f':
          pFVar1 = this->Stream;
          local_1a8.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\f",2);
          uVar14 = uVar5;
          local_198 = uVar5;
          if (uVar5 < 0x81) {
            if (local_1a8.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141dbbd64;
            }
          }
          else {
LAB_141dbbd64:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_1a8,0,uVar14,1);
          }
          local_1a0 = local_228;
          if (local_1a8.Data != (FScriptContainerElement *)0x0) {
            local_1a0 = local_1a8.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_1a0,uVar5,L"\\f",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_1a0,(longlong)(int)local_198);
          if (local_1a8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data);
          }
          break;
        case '\r':
          pFVar1 = this->Stream;
          local_108.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\r",2);
          uVar14 = uVar5;
          local_f8 = uVar5;
          if (uVar5 < 0x81) {
            if (local_108.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141dbbe4d;
            }
          }
          else {
LAB_141dbbe4d:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_108,0,uVar14,1);
          }
          local_100 = local_188;
          if (local_108.Data != (FScriptContainerElement *)0x0) {
            local_100 = local_108.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_100,uVar5,L"\\r",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_100,(longlong)(int)local_f8);
          if (local_108.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data);
          }
          break;
        case '\"':
          pFVar1 = this->Stream;
          local_68.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\\"",2);
          uVar14 = uVar5;
          local_58 = uVar5;
          if (uVar5 < 0x81) {
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141dbbf36;
            }
          }
          else {
LAB_141dbbf36:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_68,0,uVar14,1);
          }
          local_60 = local_e8;
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            local_60 = local_68.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_60,uVar5,L"\\\"",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_60,(longlong)(int)local_58);
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data);
          }
          break;
        case '\\':
          pFVar1 = this->Stream;
          local_428.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\\\",2);
          uVar14 = uVar5;
          local_418 = uVar5;
          if (uVar5 < 0x81) {
            if (local_428.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141dbb9d8;
            }
          }
          else {
LAB_141dbb9d8:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_428,0,uVar14,1);
          }
          local_420 = local_4a8;
          if (local_428.Data != (FScriptContainerElement *)0x0) {
            local_420 = local_428.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_420,uVar5,L"\\\\",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_420,(longlong)(int)local_418);
          if (local_428.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_428.Data);
          }
        }
        iVar6 = param_1->Size;
        iVar11 = iVar11 + 1;
        lVar12 = lVar12 + 1;
      } while (iVar11 < iVar6);
    }
LAB_141dbc096:
    iVar6 = param_1->Size;
    iVar4 = iVar6;
    if (iVar6 - iVar11 < iVar6) {
      iVar4 = iVar6 - iVar11;
    }
    iStack_4e0 = 0;
    if (0 < iVar4) {
      iStack_4e0 = iVar4;
    }
    local_4e8 = param_1->DataPtr + ((longlong)iVar6 - (longlong)iStack_4e0);
    param_1->DataPtr = local_4e8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_4dc,iStack_4e0);
    iVar6 = param_1->Size;
  } while( true );
}

// WriteEscapedString<char8_t> @ 141dbc200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char8_t>
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,TStringView<char8_t> *param_1
          )

{
  FArchive *pFVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  uchar *puVar8;
  uchar *puVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  code *pcVar13;
  uint uVar14;
  undefined1 auStack_528 [32];
  int local_508;
  int local_500;
  uchar *local_4f8;
  int iStack_4f0;
  undefined4 uStack_4ec;
  uchar *local_4e8;
  int iStack_4e0;
  undefined4 uStack_4dc;
  TStringBuilderBase<char> local_4d8;
  char local_4b8 [8];
  char local_4b0 [8];
  FScriptContainerElement local_4a8 [128];
  ForAnyElementType local_428;
  FScriptContainerElement *local_420;
  uint local_418;
  FScriptContainerElement local_408 [128];
  ForAnyElementType local_388;
  FScriptContainerElement *local_380;
  uint local_378;
  FScriptContainerElement local_368 [128];
  ForAnyElementType local_2e8;
  FScriptContainerElement *local_2e0;
  uint local_2d8;
  FScriptContainerElement local_2c8 [128];
  ForAnyElementType local_248;
  FScriptContainerElement *local_240;
  uint local_238;
  FScriptContainerElement local_228 [128];
  ForAnyElementType local_1a8;
  FScriptContainerElement *local_1a0;
  uint local_198;
  FScriptContainerElement local_188 [128];
  ForAnyElementType local_108;
  FScriptContainerElement *local_100;
  uint local_f8;
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  uint local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_528;
  iVar6 = param_1->Size;
  do {
    if (iVar6 == 0) {
      return;
    }
    iVar11 = 0;
    lVar12 = 0;
    if (0 < iVar6) {
      do {
        if (0x7ff < iVar11) break;
        if (((iVar11 < 0) || (iVar6 <= iVar11)) &&
           (local_508 = iVar11, local_500 = iVar6,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar3)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        switch(param_1->DataPtr[lVar12]) {
        case '\b':
        case '\t':
        case '\n':
        case '\f':
        case '\r':
        case '\"':
        case '\\':
          goto switchD_141dbc2c2_caseD_8;
        }
        if (param_1->DataPtr[lVar12] < 0x20) break;
        iVar6 = param_1->Size;
        iVar11 = iVar11 + 1;
        lVar12 = lVar12 + 1;
      } while (iVar11 < iVar6);
    }
switchD_141dbc2c2_caseD_8:
    iVar6 = param_1->Size;
    puVar8 = param_1->DataPtr;
    iVar4 = iVar6;
    if (iVar11 < iVar6) {
      iVar4 = iVar11;
    }
    iVar10 = 0;
    if (0 < iVar4) {
      iVar10 = iVar4;
    }
    if (iVar10 != 0) {
      pFVar1 = this->Stream;
      if (puVar8 == (uchar *)0x0) {
        puVar9 = (uchar *)0x0;
        iVar10 = 0;
        pcVar13 = *(code **)(*(longlong *)pFVar1 + 0x188);
      }
      else {
        if ((0 < iVar10) && (puVar8[(longlong)iVar10 + -1] == '\0')) {
          iVar10 = iVar10 + -1;
        }
        pcVar13 = *(code **)(*(longlong *)pFVar1 + 0x188);
        puVar9 = puVar8;
        if (iVar10 == -1) {
          sVar7 = strlen((char *)puVar8);
          iVar10 = (int)sVar7;
        }
      }
      (*pcVar13)(pFVar1,puVar9,(longlong)iVar10);
    }
    iVar4 = iVar6;
    if (iVar6 - iVar11 < iVar6) {
      iVar4 = iVar6 - iVar11;
    }
    iStack_4f0 = 0;
    if (0 < iVar4) {
      iStack_4f0 = iVar4;
    }
    iVar11 = 0;
    local_4f8 = puVar8 + ((longlong)iVar6 - (longlong)iStack_4f0);
    lVar12 = 0;
    param_1->DataPtr = local_4f8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_4ec,iStack_4f0);
    iVar6 = param_1->Size;
    if (0 < iVar6) {
      do {
        if (((iVar11 < 0) || (iVar6 <= iVar11)) &&
           (local_508 = iVar11, local_500 = iVar6,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar3)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        switch(param_1->DataPtr[lVar12]) {
        case '\b':
          pFVar1 = this->Stream;
          local_248.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\b",2);
          uVar14 = uVar5;
          local_238 = uVar5;
          if (uVar5 < 0x81) {
            if (local_248.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141dbc6db;
            }
          }
          else {
LAB_141dbc6db:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_248,0,uVar14,1);
          }
          local_240 = local_2c8;
          if (local_248.Data != (FScriptContainerElement *)0x0) {
            local_240 = local_248.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_240,uVar5,L"\\b",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_240,(longlong)(int)local_238);
          if (local_248.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data);
          }
          break;
        case '\t':
          pFVar1 = this->Stream;
          local_2e8.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\t",2);
          uVar14 = uVar5;
          local_2d8 = uVar5;
          if (uVar5 < 0x81) {
            if (local_2e8.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141dbc5f2;
            }
          }
          else {
LAB_141dbc5f2:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_2e8,0,uVar14,1);
          }
          local_2e0 = local_368;
          if (local_2e8.Data != (FScriptContainerElement *)0x0) {
            local_2e0 = local_2e8.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_2e0,uVar5,L"\\t",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_2e0,(longlong)(int)local_2d8);
          if (local_2e8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e8.Data);
          }
          break;
        case '\n':
          pFVar1 = this->Stream;
          local_388.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\n",2);
          uVar14 = uVar5;
          local_378 = uVar5;
          if (uVar5 < 0x81) {
            if (local_388.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141dbc50c;
            }
          }
          else {
LAB_141dbc50c:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_388,0,uVar14,1);
          }
          local_380 = local_408;
          if (local_388.Data != (FScriptContainerElement *)0x0) {
            local_380 = local_388.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_380,uVar5,L"\\n",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_380,(longlong)(int)local_378);
          if (local_388.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_388.Data);
          }
          break;
        default:
          if (0x1f < param_1->DataPtr[lVar12]) goto LAB_141dbcaf6;
          local_4d8.Base = local_4b8;
          local_4d8.bIsDynamic = false;
          local_4d8.bIsExternal = false;
          local_4d8.CurPos = local_4b8;
          local_4d8.End = local_4b0;
          TStringBuilderBase<char>::AppendfImpl(&local_4d8,"\\u%04x");
          pcVar2 = local_4d8.Base;
          iVar6 = (int)local_4d8.CurPos - (int)local_4d8.Base;
          pFVar1 = this->Stream;
          if (local_4d8.Base == (char *)0x0) {
            iVar6 = 0;
            pcVar13 = *(code **)(*(longlong *)pFVar1 + 0x188);
          }
          else {
            if ((0 < iVar6) && (local_4d8.Base[(longlong)iVar6 + -1] == '\0')) {
              iVar6 = iVar6 + -1;
            }
            pcVar13 = *(code **)(*(longlong *)pFVar1 + 0x188);
            if (iVar6 == -1) {
              sVar7 = strlen(local_4d8.Base);
              iVar6 = (int)sVar7;
            }
          }
          (*pcVar13)(pFVar1,pcVar2,(longlong)iVar6);
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_4d8);
          break;
        case '\f':
          pFVar1 = this->Stream;
          local_1a8.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\f",2);
          uVar14 = uVar5;
          local_198 = uVar5;
          if (uVar5 < 0x81) {
            if (local_1a8.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141dbc7c4;
            }
          }
          else {
LAB_141dbc7c4:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_1a8,0,uVar14,1);
          }
          local_1a0 = local_228;
          if (local_1a8.Data != (FScriptContainerElement *)0x0) {
            local_1a0 = local_1a8.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_1a0,uVar5,L"\\f",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_1a0,(longlong)(int)local_198);
          if (local_1a8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data);
          }
          break;
        case '\r':
          pFVar1 = this->Stream;
          local_108.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\r",2);
          uVar14 = uVar5;
          local_f8 = uVar5;
          if (uVar5 < 0x81) {
            if (local_108.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141dbc8ad;
            }
          }
          else {
LAB_141dbc8ad:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_108,0,uVar14,1);
          }
          local_100 = local_188;
          if (local_108.Data != (FScriptContainerElement *)0x0) {
            local_100 = local_108.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_100,uVar5,L"\\r",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_100,(longlong)(int)local_f8);
          if (local_108.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data);
          }
          break;
        case '\"':
          pFVar1 = this->Stream;
          local_68.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\\"",2);
          uVar14 = uVar5;
          local_58 = uVar5;
          if (uVar5 < 0x81) {
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141dbc996;
            }
          }
          else {
LAB_141dbc996:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_68,0,uVar14,1);
          }
          local_60 = local_e8;
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            local_60 = local_68.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_60,uVar5,L"\\\"",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_60,(longlong)(int)local_58);
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data);
          }
          break;
        case '\\':
          pFVar1 = this->Stream;
          local_428.Data = (FScriptContainerElement *)0x0;
          uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\\\",2);
          uVar14 = uVar5;
          local_418 = uVar5;
          if (uVar5 < 0x81) {
            if (local_428.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_141dbc438;
            }
          }
          else {
LAB_141dbc438:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_428,0,uVar14,1);
          }
          local_420 = local_4a8;
          if (local_428.Data != (FScriptContainerElement *)0x0) {
            local_420 = local_428.Data;
          }
          puVar8 = UE::Core::Private::Convert((uchar *)local_420,uVar5,L"\\\\",2);
          if ((puVar8 == (uchar *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar3)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_420,(longlong)(int)local_418);
          if (local_428.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_428.Data);
          }
        }
        iVar6 = param_1->Size;
        iVar11 = iVar11 + 1;
        lVar12 = lVar12 + 1;
      } while (iVar11 < iVar6);
    }
LAB_141dbcaf6:
    iVar6 = param_1->Size;
    iVar4 = iVar6;
    if (iVar6 - iVar11 < iVar6) {
      iVar4 = iVar6 - iVar11;
    }
    iStack_4e0 = 0;
    if (0 < iVar4) {
      iStack_4e0 = iVar4;
    }
    local_4e8 = param_1->DataPtr + ((longlong)iVar6 - (longlong)iStack_4e0);
    param_1->DataPtr = local_4e8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_4dc,iStack_4e0);
    iVar6 = param_1->Size;
  } while( true );
}

// WriteEscapedString<char8_t> @ 141dbcc60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteEscapedString<char8_t>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<char8_t> *param_1)

{
  uchar *puVar1;
  FArchive *pFVar2;
  code *pcVar3;
  char *pcVar4;
  bool bVar5;
  wchar_t *pwVar6;
  uint uVar7;
  int iVar8;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_318 [32];
  uint local_2f8;
  int local_2f0;
  TStringView<char8_t> *local_2e8;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *local_2e0;
  uchar *local_2d8;
  uint uStack_2d0;
  undefined4 uStack_2cc;
  uchar *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  TStringBuilderBase<char> local_2b8;
  uchar local_298 [8];
  char local_290 [8];
  FScriptContainerElement local_288 [256];
  ForAnyElementType local_188;
  FScriptContainerElement *local_180;
  int local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  ulonglong uVar9;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_318;
  iVar8 = param_1->Size;
  local_2e0 = this;
  local_2e8 = param_1;
  do {
    if (iVar8 == 0) {
      return;
    }
    uVar9 = 0;
    uVar7 = 0;
    uVar12 = uVar9;
    if (0 < iVar8) {
      do {
        uVar7 = (uint)uVar9;
        if (0x7ff < (int)uVar7) break;
        if ((((int)uVar7 < 0) || (iVar8 <= (int)uVar7)) &&
           (local_2f8 = uVar7, local_2f0 = iVar8,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        switch(param_1->DataPtr[uVar12]) {
        case '\b':
        case '\t':
        case '\n':
        case '\f':
        case '\r':
        case '\"':
        case '\\':
          goto switchD_141dbcd29_caseD_8;
        }
        if (param_1->DataPtr[uVar12] < 0x20) break;
        iVar8 = param_1->Size;
        uVar7 = uVar7 + 1;
        uVar9 = (ulonglong)uVar7;
        uVar12 = uVar12 + 1;
      } while ((int)uVar7 < iVar8);
    }
switchD_141dbcd29_caseD_8:
    puVar1 = param_1->DataPtr;
    uVar13 = param_1->Size;
    if ((int)uVar7 < param_1->Size) {
      uVar13 = uVar7;
    }
    uVar11 = 0;
    if (0 < (int)uVar13) {
      uVar11 = uVar13;
    }
    if (uVar11 != 0) {
      pFVar2 = this->Stream;
      local_188.Data = (FScriptContainerElement *)0x0;
      if (puVar1 == (uchar *)0x0) {
        local_180 = (FScriptContainerElement *)0x0;
        local_178 = 0;
      }
      else {
        iVar8 = 0;
        if ((0 < (int)uVar11) && (iVar8 = 0, puVar1[(longlong)(int)uVar11 + -1] == '\0')) {
          iVar8 = 1;
          uVar11 = uVar11 - 1;
        }
        local_178 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar1,uVar11);
        uVar14 = local_178 + iVar8;
        uVar13 = uVar14;
        if (uVar14 < 0x81) {
          if (local_188.Data != (FScriptContainerElement *)0x0) {
            uVar13 = 0;
            goto LAB_141dbcdb6;
          }
        }
        else {
LAB_141dbcdb6:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_188,0,uVar13,2);
        }
        local_180 = local_288;
        if (local_188.Data != (FScriptContainerElement *)0x0) {
          local_180 = local_188.Data;
        }
        pwVar6 = UE::Core::Private::Convert((wchar_t *)local_180,uVar14,puVar1,iVar8 + uVar11);
        this = local_2e0;
        if ((pwVar6 == (wchar_t *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), this = local_2e0, bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_180,(longlong)local_178 * 2);
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data);
      }
    }
    uVar13 = local_2e8->Size;
    uVar11 = uVar13;
    if ((int)(uVar13 - uVar7) < (int)uVar13) {
      uVar11 = uVar13 - uVar7;
    }
    uVar12 = 0;
    uVar7 = 0;
    uStack_2d0 = uVar7;
    if (0 < (int)uVar11) {
      uStack_2d0 = uVar11;
    }
    local_2d8 = local_2e8->DataPtr + ((longlong)(int)uVar13 - (longlong)(int)uStack_2d0);
    local_2e8->DataPtr = local_2d8;
    *(ulonglong *)&local_2e8->Size = CONCAT44(uStack_2cc,uStack_2d0);
    iVar8 = local_2e8->Size;
    param_1 = local_2e8;
    uVar9 = uVar12;
    if (0 < iVar8) {
      do {
        uVar7 = (uint)uVar9;
        if ((((int)uVar7 < 0) || (iVar8 <= (int)uVar7)) &&
           (local_2f8 = uVar7, local_2f0 = iVar8,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        switch(param_1->DataPtr[uVar12]) {
        case '\b':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__b,4);
          break;
        case '\t':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__t,4);
          break;
        case '\n':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__n,4);
          break;
        default:
          if (0x1f < param_1->DataPtr[uVar12]) goto LAB_141dbd172;
          local_2b8.Base = (char *)local_298;
          local_2b8.bIsDynamic = false;
          local_2b8.bIsExternal = false;
          local_2b8.CurPos = (char *)local_298;
          local_2b8.End = local_290;
          TStringBuilderBase<char>::AppendfImpl(&local_2b8,"\\u%04x");
          pcVar4 = local_2b8.Base;
          pFVar2 = this->Stream;
          iVar8 = (int)local_2b8.CurPos - (int)local_2b8.Base;
          local_68.Data = (FScriptContainerElement *)0x0;
          iVar10 = 0;
          if ((uchar *)local_2b8.Base == (uchar *)0x0) {
            local_60 = (FScriptContainerElement *)0x0;
            local_58 = 0;
          }
          else {
            if ((0 < iVar8) && (local_2b8.Base[(longlong)iVar8 + -1] == '\0')) {
              iVar10 = 1;
              iVar8 = iVar8 + -1;
            }
            local_58 = UE::Core::Private::GetConvertedLength
                                 ((wchar_t *)0x0,(uchar *)local_2b8.Base,iVar8);
            uVar13 = local_58 + iVar10;
            uVar11 = uVar13;
            if (uVar13 < 0x81) {
              if (local_68.Data != (FScriptContainerElement *)0x0) {
                uVar11 = 0;
                goto LAB_141dbd09c;
              }
            }
            else {
LAB_141dbd09c:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_68,0,uVar11,2);
            }
            local_60 = local_168;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              local_60 = local_68.Data;
            }
            pwVar6 = UE::Core::Private::Convert
                               ((wchar_t *)local_60,uVar13,(uchar *)pcVar4,iVar10 + iVar8);
            param_1 = local_2e8;
            if ((pwVar6 == (wchar_t *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                   ,0x25,L""), param_1 = local_2e8, bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_60,(longlong)local_58 * 2);
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data);
          }
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_2b8);
          this = local_2e0;
          break;
        case '\f':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__f,4);
          break;
        case '\r':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__r,4);
          break;
        case '\"':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u___,4);
          break;
        case '\\':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u___,4);
        }
        iVar8 = param_1->Size;
        uVar7 = uVar7 + 1;
        uVar9 = (ulonglong)uVar7;
        uVar12 = uVar12 + 1;
      } while ((int)uVar7 < iVar8);
    }
LAB_141dbd172:
    iVar8 = param_1->Size;
    iVar10 = iVar8;
    if ((int)(iVar8 - uVar7) < iVar8) {
      iVar10 = iVar8 - uVar7;
    }
    iStack_2c0 = 0;
    if (0 < iVar10) {
      iStack_2c0 = iVar10;
    }
    local_2c8 = param_1->DataPtr + ((longlong)iVar8 - (longlong)iStack_2c0);
    param_1->DataPtr = local_2c8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_2bc,iStack_2c0);
    iVar8 = param_1->Size;
  } while( true );
}

// WriteEscapedString<char8_t> @ 141dbd2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteEscapedString<char8_t>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,TStringView<char8_t> *param_1
          )

{
  uchar *puVar1;
  FArchive *pFVar2;
  code *pcVar3;
  char *pcVar4;
  bool bVar5;
  wchar_t *pwVar6;
  uint uVar7;
  int iVar8;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_318 [32];
  uint local_2f8;
  int local_2f0;
  TStringView<char8_t> *local_2e8;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *local_2e0;
  uchar *local_2d8;
  uint uStack_2d0;
  undefined4 uStack_2cc;
  uchar *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  TStringBuilderBase<char> local_2b8;
  uchar local_298 [8];
  char local_290 [8];
  FScriptContainerElement local_288 [256];
  ForAnyElementType local_188;
  FScriptContainerElement *local_180;
  int local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  ulonglong uVar9;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_318;
  iVar8 = param_1->Size;
  local_2e0 = this;
  local_2e8 = param_1;
  do {
    if (iVar8 == 0) {
      return;
    }
    uVar9 = 0;
    uVar7 = 0;
    uVar12 = uVar9;
    if (0 < iVar8) {
      do {
        uVar7 = (uint)uVar9;
        if (0x7ff < (int)uVar7) break;
        if ((((int)uVar7 < 0) || (iVar8 <= (int)uVar7)) &&
           (local_2f8 = uVar7, local_2f0 = iVar8,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        switch(param_1->DataPtr[uVar12]) {
        case '\b':
        case '\t':
        case '\n':
        case '\f':
        case '\r':
        case '\"':
        case '\\':
          goto switchD_141dbd3a9_caseD_8;
        }
        if (param_1->DataPtr[uVar12] < 0x20) break;
        iVar8 = param_1->Size;
        uVar7 = uVar7 + 1;
        uVar9 = (ulonglong)uVar7;
        uVar12 = uVar12 + 1;
      } while ((int)uVar7 < iVar8);
    }
switchD_141dbd3a9_caseD_8:
    puVar1 = param_1->DataPtr;
    uVar13 = param_1->Size;
    if ((int)uVar7 < param_1->Size) {
      uVar13 = uVar7;
    }
    uVar11 = 0;
    if (0 < (int)uVar13) {
      uVar11 = uVar13;
    }
    if (uVar11 != 0) {
      pFVar2 = this->Stream;
      local_188.Data = (FScriptContainerElement *)0x0;
      if (puVar1 == (uchar *)0x0) {
        local_180 = (FScriptContainerElement *)0x0;
        local_178 = 0;
      }
      else {
        iVar8 = 0;
        if ((0 < (int)uVar11) && (iVar8 = 0, puVar1[(longlong)(int)uVar11 + -1] == '\0')) {
          iVar8 = 1;
          uVar11 = uVar11 - 1;
        }
        local_178 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar1,uVar11);
        uVar14 = local_178 + iVar8;
        uVar13 = uVar14;
        if (uVar14 < 0x81) {
          if (local_188.Data != (FScriptContainerElement *)0x0) {
            uVar13 = 0;
            goto LAB_141dbd436;
          }
        }
        else {
LAB_141dbd436:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_188,0,uVar13,2);
        }
        local_180 = local_288;
        if (local_188.Data != (FScriptContainerElement *)0x0) {
          local_180 = local_188.Data;
        }
        pwVar6 = UE::Core::Private::Convert((wchar_t *)local_180,uVar14,puVar1,iVar8 + uVar11);
        this = local_2e0;
        if ((pwVar6 == (wchar_t *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), this = local_2e0, bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_180,(longlong)local_178 * 2);
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data);
      }
    }
    uVar13 = local_2e8->Size;
    uVar11 = uVar13;
    if ((int)(uVar13 - uVar7) < (int)uVar13) {
      uVar11 = uVar13 - uVar7;
    }
    uVar12 = 0;
    uVar7 = 0;
    uStack_2d0 = uVar7;
    if (0 < (int)uVar11) {
      uStack_2d0 = uVar11;
    }
    local_2d8 = local_2e8->DataPtr + ((longlong)(int)uVar13 - (longlong)(int)uStack_2d0);
    local_2e8->DataPtr = local_2d8;
    *(ulonglong *)&local_2e8->Size = CONCAT44(uStack_2cc,uStack_2d0);
    iVar8 = local_2e8->Size;
    param_1 = local_2e8;
    uVar9 = uVar12;
    if (0 < iVar8) {
      do {
        uVar7 = (uint)uVar9;
        if ((((int)uVar7 < 0) || (iVar8 <= (int)uVar7)) &&
           (local_2f8 = uVar7, local_2f0 = iVar8,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        switch(param_1->DataPtr[uVar12]) {
        case '\b':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__b,4);
          break;
        case '\t':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__t,4);
          break;
        case '\n':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__n,4);
          break;
        default:
          if (0x1f < param_1->DataPtr[uVar12]) goto LAB_141dbd7f2;
          local_2b8.Base = (char *)local_298;
          local_2b8.bIsDynamic = false;
          local_2b8.bIsExternal = false;
          local_2b8.CurPos = (char *)local_298;
          local_2b8.End = local_290;
          TStringBuilderBase<char>::AppendfImpl(&local_2b8,"\\u%04x");
          pcVar4 = local_2b8.Base;
          pFVar2 = this->Stream;
          iVar8 = (int)local_2b8.CurPos - (int)local_2b8.Base;
          local_68.Data = (FScriptContainerElement *)0x0;
          iVar10 = 0;
          if ((uchar *)local_2b8.Base == (uchar *)0x0) {
            local_60 = (FScriptContainerElement *)0x0;
            local_58 = 0;
          }
          else {
            if ((0 < iVar8) && (local_2b8.Base[(longlong)iVar8 + -1] == '\0')) {
              iVar10 = 1;
              iVar8 = iVar8 + -1;
            }
            local_58 = UE::Core::Private::GetConvertedLength
                                 ((wchar_t *)0x0,(uchar *)local_2b8.Base,iVar8);
            uVar13 = local_58 + iVar10;
            uVar11 = uVar13;
            if (uVar13 < 0x81) {
              if (local_68.Data != (FScriptContainerElement *)0x0) {
                uVar11 = 0;
                goto LAB_141dbd71c;
              }
            }
            else {
LAB_141dbd71c:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_68,0,uVar11,2);
            }
            local_60 = local_168;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              local_60 = local_68.Data;
            }
            pwVar6 = UE::Core::Private::Convert
                               ((wchar_t *)local_60,uVar13,(uchar *)pcVar4,iVar10 + iVar8);
            param_1 = local_2e8;
            if ((pwVar6 == (wchar_t *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                   ,0x25,L""), param_1 = local_2e8, bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_60,(longlong)local_58 * 2);
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data);
          }
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_2b8);
          this = local_2e0;
          break;
        case '\f':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__f,4);
          break;
        case '\r':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__r,4);
          break;
        case '\"':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u___,4);
          break;
        case '\\':
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u___,4);
        }
        iVar8 = param_1->Size;
        uVar7 = uVar7 + 1;
        uVar9 = (ulonglong)uVar7;
        uVar12 = uVar12 + 1;
      } while ((int)uVar7 < iVar8);
    }
LAB_141dbd7f2:
    iVar8 = param_1->Size;
    iVar10 = iVar8;
    if ((int)(iVar8 - uVar7) < iVar8) {
      iVar10 = iVar8 - uVar7;
    }
    iStack_2c0 = 0;
    if (0 < iVar10) {
      iStack_2c0 = iVar10;
    }
    local_2c8 = param_1->DataPtr + ((longlong)iVar8 - (longlong)iStack_2c0);
    param_1->DataPtr = local_2c8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_2bc,iStack_2c0);
    iVar8 = param_1->Size;
  } while( true );
}

// WriteEscapedString<wchar_t> @ 141dbd960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteEscapedString<wchar_t>
          (TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *this,TStringView<wchar_t> *param_1)

{
  short sVar1;
  wchar_t wVar2;
  ushort uVar3;
  wchar_t *pwVar4;
  FArchive *pFVar5;
  code *pcVar6;
  bool bVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ForElementType<char> FVar19;
  longlong lVar20;
  uint uVar21;
  undefined1 auStack_678 [32];
  uint local_658;
  int local_650;
  TStringView<wchar_t> *local_648;
  TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *local_640;
  wchar_t *local_638;
  int iStack_630;
  undefined4 uStack_62c;
  wchar_t *local_628;
  int iStack_620;
  undefined4 uStack_61c;
  TStringBuilderBase<char> local_618;
  uchar local_5f8 [8];
  char local_5f0 [8];
  FScriptContainerElement local_5e8 [128];
  ForAnyElementType local_568;
  FScriptContainerElement *local_560;
  int local_558;
  FScriptContainerElement local_548 [128];
  ForAnyElementType local_4c8;
  FScriptContainerElement *local_4c0;
  uint local_4b8;
  undefined1 local_4a8 [128];
  void *local_428;
  undefined1 *local_420;
  undefined4 local_418;
  undefined1 local_408 [128];
  void *local_388;
  undefined1 *local_380;
  undefined4 local_378;
  undefined1 local_368 [128];
  void *local_2e8;
  undefined1 *local_2e0;
  undefined4 local_2d8;
  undefined1 local_2c8 [128];
  void *local_248;
  undefined1 *local_240;
  undefined4 local_238;
  undefined1 local_228 [128];
  void *local_1a8;
  undefined1 *local_1a0;
  undefined4 local_198;
  ForElementType<char> local_188;
  ForElementType<char> local_100;
  int local_f8;
  ForElementType<char> local_e8;
  ForElementType<char> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_678;
  iVar15 = param_1->Size;
  local_640 = this;
  local_648 = param_1;
  do {
    if (iVar15 == 0) {
      return;
    }
    uVar11 = 0;
    uVar14 = 0;
    uVar17 = uVar11;
    if (0 < iVar15) {
      do {
        uVar14 = (uint)uVar11;
        if (0x7ff < (int)uVar14) break;
        if ((((int)uVar14 < 0) || (iVar15 <= (int)uVar14)) &&
           (local_658 = uVar14, local_650 = iVar15,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        sVar1 = *(short *)(uVar17 + (longlong)param_1->DataPtr);
        switch(sVar1) {
        case 8:
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0x22:
        case 0x5c:
          goto switchD_141dbda29_caseD_8;
        }
        if (0x5e < (ushort)(sVar1 - 0x20U)) break;
        iVar15 = param_1->Size;
        uVar14 = uVar14 + 1;
        uVar11 = (ulonglong)uVar14;
        uVar17 = uVar17 + 2;
      } while ((int)uVar14 < iVar15);
    }
switchD_141dbda29_caseD_8:
    pwVar4 = param_1->DataPtr;
    uVar16 = param_1->Size;
    if ((int)uVar14 < param_1->Size) {
      uVar16 = uVar14;
    }
    uVar17 = 0;
    uVar21 = 0;
    uVar9 = 0;
    if (0 < (int)uVar16) {
      uVar9 = uVar16;
    }
    if (uVar9 != 0) {
      pFVar5 = this->Stream;
      local_4c8.Data = (FScriptContainerElement *)0x0;
      if (pwVar4 == (wchar_t *)0x0) {
        local_4c0 = (FScriptContainerElement *)0x0;
        local_4b8 = 0;
      }
      else {
        uVar16 = uVar21;
        if ((0 < (int)uVar9) && (uVar16 = 0, pwVar4[(longlong)(int)uVar9 + -1] == L'\0')) {
          uVar16 = 1;
          uVar9 = uVar9 - 1;
        }
        uVar16 = uVar16 + uVar9;
        local_4b8 = uVar9;
        if (0x80 < uVar16) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_4c8,0,uVar16,1);
        }
        lVar20 = (longlong)(int)uVar16;
        FVar13.Data = local_548;
        if (local_4c8.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_4c8.Data;
        }
        bVar7 = false;
        uVar11 = uVar17;
        local_4c0 = FVar13.Data;
        if (0 < (int)uVar16) {
          do {
            wVar2 = pwVar4[uVar11];
            FVar13.Data[uVar11] = SUB21(wVar2,0);
            uVar11 = uVar11 + 1;
            bVar7 = (bool)(bVar7 | 0x7f < (ushort)wVar2);
          } while ((longlong)uVar11 < lVar20);
          uVar11 = uVar17;
          if (bVar7) {
            do {
              if (0x7f < (ushort)pwVar4[uVar11]) {
                FVar13.Data[uVar11] = (FScriptContainerElement)0x3f;
              }
              uVar11 = uVar11 + 1;
            } while ((longlong)uVar11 < lVar20);
          }
        }
        param_1 = local_648;
        if ((FVar13.Data + lVar20 == (FScriptContainerElement *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), param_1 = local_648, bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_4c0,(longlong)(int)local_4b8);
      this = local_640;
      if (local_4c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4c8.Data);
        this = local_640;
      }
    }
    iVar15 = param_1->Size;
    iVar10 = iVar15;
    if ((int)(iVar15 - uVar14) < iVar15) {
      iVar10 = iVar15 - uVar14;
    }
    lVar20 = 0;
    iStack_630 = 0;
    if (0 < iVar10) {
      iStack_630 = iVar10;
    }
    local_638 = param_1->DataPtr + ((longlong)iVar15 - (longlong)iStack_630);
    param_1->DataPtr = local_638;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_62c,iStack_630);
    iVar15 = param_1->Size;
    if (0 < iVar15) {
      do {
        lVar18 = 0;
        uVar21 = (uint)uVar17;
        if ((((int)uVar21 < 0) || (iVar15 <= (int)uVar21)) &&
           (local_658 = uVar21, local_650 = iVar15,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        switch(param_1->DataPtr[lVar20]) {
        case L'\b':
          pFVar5 = this->Stream;
          local_240 = local_2c8;
          bVar7 = false;
          local_248 = (void *)0x0;
          local_238 = 2;
          lVar12 = lVar18;
          do {
            uVar3 = *(ushort *)(&u__b + lVar12 * 2);
            local_2c8[lVar12] = (char)uVar3;
            lVar12 = lVar12 + 1;
            bVar7 = (bool)(bVar7 | 0x7f < uVar3);
          } while (lVar12 < 2);
          if (bVar7) {
            do {
              if (0x7f < *(ushort *)(&u__b + lVar18 * 2)) {
                local_2c8[lVar18] = 0x3f;
              }
              lVar18 = lVar18 + 1;
            } while (lVar18 < 2);
          }
          (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_240,2);
          if (local_248 != (void *)0x0) {
            FMemory::Free(local_248);
          }
          break;
        case L'\t':
          pFVar5 = this->Stream;
          local_2e0 = local_368;
          bVar7 = false;
          local_2e8 = (void *)0x0;
          local_2d8 = 2;
          lVar12 = lVar18;
          do {
            uVar3 = *(ushort *)(&u__t + lVar12 * 2);
            local_368[lVar12] = (char)uVar3;
            lVar12 = lVar12 + 1;
            bVar7 = (bool)(bVar7 | 0x7f < uVar3);
          } while (lVar12 < 2);
          if (bVar7) {
            do {
              if (0x7f < *(ushort *)(&u__t + lVar18 * 2)) {
                local_368[lVar18] = 0x3f;
              }
              lVar18 = lVar18 + 1;
            } while (lVar18 < 2);
          }
          (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_2e0,2);
          if (local_2e8 != (void *)0x0) {
            FMemory::Free(local_2e8);
          }
          break;
        case L'\n':
          pFVar5 = this->Stream;
          local_380 = local_408;
          bVar7 = false;
          local_388 = (void *)0x0;
          local_378 = 2;
          lVar12 = lVar18;
          do {
            uVar3 = *(ushort *)(&u__n + lVar12 * 2);
            local_408[lVar12] = (char)uVar3;
            lVar12 = lVar12 + 1;
            bVar7 = (bool)(bVar7 | 0x7f < uVar3);
          } while (lVar12 < 2);
          if (bVar7) {
            do {
              if (0x7f < *(ushort *)(&u__n + lVar18 * 2)) {
                local_408[lVar18] = 0x3f;
              }
              lVar18 = lVar18 + 1;
            } while (lVar18 < 2);
          }
          (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_380,2);
          if (local_388 != (void *)0x0) {
            FMemory::Free(local_388);
          }
          break;
        default:
          if ((ushort)(param_1->DataPtr[lVar20] + L'￠') < 0x5f) goto LAB_141dbe2f5;
          local_618.Base = (char *)local_5f8;
          local_618.bIsDynamic = false;
          local_618.bIsExternal = false;
          local_618.CurPos = (char *)local_5f8;
          local_618.End = local_5f0;
          TStringBuilderBase<char>::AppendfImpl(&local_618,"\\u%04x");
          pcVar8 = local_618.Base;
          pFVar5 = this->Stream;
          iVar15 = (int)local_618.CurPos - (int)local_618.Base;
          local_568.Data = (FScriptContainerElement *)0x0;
          if ((uchar *)local_618.Base == (uchar *)0x0) {
            local_560 = (FScriptContainerElement *)0x0;
            local_558 = 0;
          }
          else {
            if ((0 < iVar15) && (local_618.Base[(longlong)iVar15 + -1] == '\0')) {
              lVar18 = 1;
              iVar15 = iVar15 + -1;
            }
            local_558 = UE::Core::Private::GetConvertedLength
                                  ((char *)0x0,(uchar *)local_618.Base,iVar15);
            uVar16 = local_558 + (int)lVar18;
            uVar14 = uVar16;
            if (uVar16 < 0x81) {
              if (local_568.Data != (FScriptContainerElement *)0x0) {
                uVar14 = 0;
                goto LAB_141dbe23e;
              }
            }
            else {
LAB_141dbe23e:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_568,0,uVar14,1);
            }
            local_560 = local_5e8;
            if (local_568.Data != (FScriptContainerElement *)0x0) {
              local_560 = local_568.Data;
            }
            pcVar8 = UE::Core::Private::Convert
                               ((char *)local_560,uVar16,(uchar *)pcVar8,(int)lVar18 + iVar15);
            param_1 = local_648;
            if ((pcVar8 == (char *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                   ,0x25,L""), param_1 = local_648, bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_560,(longlong)local_558);
          if (local_568.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_568.Data);
          }
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_618);
          this = local_640;
          break;
        case L'\f':
          pFVar5 = this->Stream;
          local_1a0 = local_228;
          bVar7 = false;
          local_1a8 = (void *)0x0;
          local_198 = 2;
          lVar12 = lVar18;
          do {
            uVar3 = *(ushort *)(&u__f + lVar12 * 2);
            local_228[lVar12] = (char)uVar3;
            lVar12 = lVar12 + 1;
            bVar7 = (bool)(bVar7 | 0x7f < uVar3);
          } while (lVar12 < 2);
          if (bVar7) {
            do {
              if (0x7f < *(ushort *)(&u__f + lVar18 * 2)) {
                local_228[lVar18] = 0x3f;
              }
              lVar18 = lVar18 + 1;
            } while (lVar18 < 2);
          }
          (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_1a0,2);
          if (local_1a8 != (void *)0x0) {
            FMemory::Free(local_1a8);
          }
          break;
        case L'\r':
          pFVar5 = this->Stream;
          local_188.SecondaryData = (ForElementType<char>)0x0;
          local_f8 = 2;
          TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<char>::
          ResizeAllocation(&local_188,0,2,1);
          FVar19 = (ForElementType<char>)&local_188;
          if (local_188.SecondaryData != (ForElementType<char>)0x0) {
            FVar19 = local_188.SecondaryData;
          }
          bVar7 = false;
          lVar12 = lVar18;
          local_100 = FVar19;
          do {
            uVar3 = *(ushort *)(&u__r + lVar12 * 2);
            *(char *)(lVar12 + (longlong)FVar19) = (char)uVar3;
            lVar12 = lVar12 + 1;
            bVar7 = (bool)(bVar7 | 0x7f < uVar3);
          } while (lVar12 < 2);
          if (bVar7) {
            do {
              if (0x7f < *(ushort *)(&u__r + lVar18 * 2)) {
                *(undefined1 *)(lVar18 + (longlong)FVar19) = 0x3f;
              }
              lVar18 = lVar18 + 1;
            } while (lVar18 < 2);
          }
          if ((FVar19 == (ForElementType<char>)0xfffffffffffffffe) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_100,(longlong)local_f8);
          if (local_188.SecondaryData != (ForElementType<char>)0x0) {
            FMemory::Free((void *)local_188.SecondaryData);
          }
          break;
        case L'\"':
          pFVar5 = this->Stream;
          local_e8.SecondaryData = (ForElementType<char>)0x0;
          local_58 = 2;
          TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<char>::
          ResizeAllocation(&local_e8,0,2,1);
          FVar19 = (ForElementType<char>)&local_e8;
          if (local_e8.SecondaryData != (ForElementType<char>)0x0) {
            FVar19 = local_e8.SecondaryData;
          }
          bVar7 = false;
          lVar12 = lVar18;
          local_60 = FVar19;
          do {
            uVar3 = *(ushort *)(&u___ + lVar12 * 2);
            *(char *)(lVar12 + (longlong)FVar19) = (char)uVar3;
            lVar12 = lVar12 + 1;
            bVar7 = (bool)(bVar7 | 0x7f < uVar3);
          } while (lVar12 < 2);
          if (bVar7) {
            do {
              if (0x7f < *(ushort *)(&u___ + lVar18 * 2)) {
                *(undefined1 *)(lVar18 + (longlong)FVar19) = 0x3f;
              }
              lVar18 = lVar18 + 1;
            } while (lVar18 < 2);
          }
          if ((FVar19 == (ForElementType<char>)0xfffffffffffffffe) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_60,(longlong)local_58);
          if (local_e8.SecondaryData != (ForElementType<char>)0x0) {
            FMemory::Free((void *)local_e8.SecondaryData);
          }
          break;
        case L'\\':
          pFVar5 = this->Stream;
          local_420 = local_4a8;
          bVar7 = false;
          local_428 = (void *)0x0;
          local_418 = 2;
          lVar12 = lVar18;
          do {
            uVar3 = *(ushort *)(&u___ + lVar12 * 2);
            local_4a8[lVar12] = (char)uVar3;
            lVar12 = lVar12 + 1;
            bVar7 = (bool)(bVar7 | 0x7f < uVar3);
          } while (lVar12 < 2);
          if (bVar7) {
            do {
              if (0x7f < *(ushort *)(&u___ + lVar18 * 2)) {
                local_4a8[lVar18] = 0x3f;
              }
              lVar18 = lVar18 + 1;
            } while (lVar18 < 2);
          }
          (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_420,2);
          if (local_428 != (void *)0x0) {
            FMemory::Free(local_428);
          }
        }
        iVar15 = param_1->Size;
        uVar21 = uVar21 + 1;
        uVar17 = (ulonglong)uVar21;
        lVar20 = lVar20 + 1;
      } while ((int)uVar21 < iVar15);
    }
LAB_141dbe2f5:
    iVar15 = param_1->Size;
    iVar10 = iVar15;
    if ((int)(iVar15 - uVar21) < iVar15) {
      iVar10 = iVar15 - uVar21;
    }
    iStack_620 = 0;
    if (0 < iVar10) {
      iStack_620 = iVar10;
    }
    local_628 = param_1->DataPtr + ((longlong)iVar15 - (longlong)iStack_620);
    param_1->DataPtr = local_628;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_61c,iStack_620);
    iVar15 = param_1->Size;
  } while( true );
}

// WriteEscapedString<wchar_t> @ 141dbe460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteEscapedString<wchar_t>
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  ushort uVar1;
  wchar_t *pwVar2;
  FArchive *pFVar3;
  char *pcVar4;
  bool bVar5;
  int iVar6;
  uchar *puVar7;
  size_t sVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  code *pcVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_5c8 [32];
  int local_5a8;
  int local_5a0;
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *local_598;
  wchar_t *local_590;
  int iStack_588;
  undefined4 uStack_584;
  wchar_t *local_580;
  int iStack_578;
  undefined4 uStack_574;
  TStringBuilderBase<char> local_570;
  char local_550 [8];
  FScriptContainerElement local_548 [128];
  ForAnyElementType local_4c8;
  FScriptContainerElement *local_4c0;
  int local_4b8;
  FScriptContainerElement local_4a8 [128];
  ForAnyElementType local_428;
  FScriptContainerElement *local_420;
  uint local_418;
  FScriptContainerElement local_408 [128];
  ForAnyElementType local_388;
  FScriptContainerElement *local_380;
  uint local_378;
  FScriptContainerElement local_368 [128];
  ForAnyElementType local_2e8;
  FScriptContainerElement *local_2e0;
  uint local_2d8;
  FScriptContainerElement local_2c8 [128];
  ForAnyElementType local_248;
  FScriptContainerElement *local_240;
  uint local_238;
  FScriptContainerElement local_228 [128];
  ForAnyElementType local_1a8;
  FScriptContainerElement *local_1a0;
  uint local_198;
  FScriptContainerElement local_188 [128];
  ForAnyElementType local_108;
  FScriptContainerElement *local_100;
  uint local_f8;
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  uint local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_5c8;
  iVar6 = param_1->Size;
  local_598 = this;
  do {
    if (iVar6 == 0) {
      return;
    }
    iVar9 = 0;
    if (0 < iVar6) {
      lVar11 = 0;
      do {
        if (0x7ff < iVar9) break;
        if (((iVar9 < 0) || (iVar6 <= iVar9)) &&
           (local_5a8 = iVar9, local_5a0 = iVar6,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar1 = *(ushort *)(lVar11 + (longlong)param_1->DataPtr);
        switch(uVar1) {
        case 8:
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0x22:
        case 0x5c:
          goto switchD_141dbe53b_caseD_8;
        }
        if (uVar1 < 0x20) break;
        iVar6 = param_1->Size;
        iVar9 = iVar9 + 1;
        lVar11 = lVar11 + 2;
      } while (iVar9 < iVar6);
    }
switchD_141dbe53b_caseD_8:
    pwVar2 = param_1->DataPtr;
    iVar6 = param_1->Size;
    if (iVar9 < param_1->Size) {
      iVar6 = iVar9;
    }
    iVar10 = 0;
    if (0 < iVar6) {
      iVar10 = iVar6;
    }
    if (iVar10 != 0) {
      pFVar3 = this->Stream;
      local_4c8.Data = (FScriptContainerElement *)0x0;
      if (pwVar2 == (wchar_t *)0x0) {
        local_4c0 = (FScriptContainerElement *)0x0;
        local_4b8 = 0;
      }
      else {
        iVar6 = 0;
        if ((0 < iVar10) && (pwVar2[(longlong)iVar10 + -1] == L'\0')) {
          iVar6 = 1;
          iVar10 = iVar10 + -1;
        }
        local_4b8 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar2,iVar10);
        uVar14 = local_4b8 + iVar6;
        uVar13 = uVar14;
        if (uVar14 < 0x81) {
          if (local_4c8.Data != (FScriptContainerElement *)0x0) {
            uVar13 = 0;
            goto LAB_141dbe5ca;
          }
        }
        else {
LAB_141dbe5ca:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_4c8,0,uVar13,1);
        }
        local_4c0 = local_548;
        if (local_4c8.Data != (FScriptContainerElement *)0x0) {
          local_4c0 = local_4c8.Data;
        }
        puVar7 = UE::Core::Private::Convert((uchar *)local_4c0,uVar14,pwVar2,iVar6 + iVar10);
        if ((puVar7 == (uchar *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), bVar5)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_4c0,(longlong)local_4b8);
      this = local_598;
      if (local_4c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4c8.Data);
        this = local_598;
      }
    }
    iVar6 = param_1->Size;
    iVar10 = iVar6;
    if (iVar6 - iVar9 < iVar6) {
      iVar10 = iVar6 - iVar9;
    }
    iStack_588 = 0;
    if (0 < iVar10) {
      iStack_588 = iVar10;
    }
    iVar9 = 0;
    lVar11 = 0;
    local_590 = param_1->DataPtr + ((longlong)iVar6 - (longlong)iStack_588);
    param_1->DataPtr = local_590;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_584,iStack_588);
    iVar6 = param_1->Size;
    if (0 < iVar6) {
      do {
        if (((iVar9 < 0) || (iVar6 <= iVar9)) &&
           (local_5a8 = iVar9, local_5a0 = iVar6,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        switch(param_1->DataPtr[lVar11]) {
        case L'\b':
          pFVar3 = this->Stream;
          local_248.Data = (FScriptContainerElement *)0x0;
          uVar14 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\b",2);
          uVar13 = uVar14;
          local_238 = uVar14;
          if (uVar14 < 0x81) {
            if (local_248.Data != (FScriptContainerElement *)0x0) {
              uVar13 = 0;
              goto LAB_141dbea1e;
            }
          }
          else {
LAB_141dbea1e:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_248,0,uVar13,1);
          }
          local_240 = local_2c8;
          if (local_248.Data != (FScriptContainerElement *)0x0) {
            local_240 = local_248.Data;
          }
          puVar7 = UE::Core::Private::Convert((uchar *)local_240,uVar14,L"\\b",2);
          if ((puVar7 == (uchar *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar5)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_240,(longlong)(int)local_238);
          if (local_248.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data);
          }
          break;
        case L'\t':
          pFVar3 = this->Stream;
          local_2e8.Data = (FScriptContainerElement *)0x0;
          uVar14 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\t",2);
          uVar13 = uVar14;
          local_2d8 = uVar14;
          if (uVar14 < 0x81) {
            if (local_2e8.Data != (FScriptContainerElement *)0x0) {
              uVar13 = 0;
              goto LAB_141dbe934;
            }
          }
          else {
LAB_141dbe934:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_2e8,0,uVar13,1);
          }
          local_2e0 = local_368;
          if (local_2e8.Data != (FScriptContainerElement *)0x0) {
            local_2e0 = local_2e8.Data;
          }
          puVar7 = UE::Core::Private::Convert((uchar *)local_2e0,uVar14,L"\\t",2);
          if ((puVar7 == (uchar *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar5)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_2e0,(longlong)(int)local_2d8);
          if (local_2e8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e8.Data);
          }
          break;
        case L'\n':
          pFVar3 = this->Stream;
          local_388.Data = (FScriptContainerElement *)0x0;
          uVar14 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\n",2);
          uVar13 = uVar14;
          local_378 = uVar14;
          if (uVar14 < 0x81) {
            if (local_388.Data != (FScriptContainerElement *)0x0) {
              uVar13 = 0;
              goto LAB_141dbe84a;
            }
          }
          else {
LAB_141dbe84a:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_388,0,uVar13,1);
          }
          local_380 = local_408;
          if (local_388.Data != (FScriptContainerElement *)0x0) {
            local_380 = local_388.Data;
          }
          puVar7 = UE::Core::Private::Convert((uchar *)local_380,uVar14,L"\\n",2);
          if ((puVar7 == (uchar *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar5)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_380,(longlong)(int)local_378);
          if (local_388.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_388.Data);
          }
          break;
        default:
          if (0x1f < (ushort)param_1->DataPtr[lVar11]) goto LAB_141dbee34;
          local_570.Base = local_550;
          local_570.bIsDynamic = false;
          local_570.bIsExternal = false;
          local_570.CurPos = local_550;
          local_570.End = (char *)local_548;
          TStringBuilderBase<char>::AppendfImpl(&local_570,"\\u%04x");
          pcVar4 = local_570.Base;
          iVar6 = (int)local_570.CurPos - (int)local_570.Base;
          pFVar3 = this->Stream;
          if (local_570.Base == (char *)0x0) {
            iVar6 = 0;
            pcVar12 = *(code **)(*(longlong *)pFVar3 + 0x188);
          }
          else {
            if ((0 < iVar6) && (local_570.Base[(longlong)iVar6 + -1] == '\0')) {
              iVar6 = iVar6 + -1;
            }
            pcVar12 = *(code **)(*(longlong *)pFVar3 + 0x188);
            if (iVar6 == -1) {
              sVar8 = strlen(local_570.Base);
              iVar6 = (int)sVar8;
            }
          }
          (*pcVar12)(pFVar3,pcVar4,(longlong)iVar6);
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_570);
          break;
        case L'\f':
          pFVar3 = this->Stream;
          local_1a8.Data = (FScriptContainerElement *)0x0;
          uVar14 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\f",2);
          uVar13 = uVar14;
          local_198 = uVar14;
          if (uVar14 < 0x81) {
            if (local_1a8.Data != (FScriptContainerElement *)0x0) {
              uVar13 = 0;
              goto LAB_141dbeb08;
            }
          }
          else {
LAB_141dbeb08:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_1a8,0,uVar13,1);
          }
          local_1a0 = local_228;
          if (local_1a8.Data != (FScriptContainerElement *)0x0) {
            local_1a0 = local_1a8.Data;
          }
          puVar7 = UE::Core::Private::Convert((uchar *)local_1a0,uVar14,L"\\f",2);
          if ((puVar7 == (uchar *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar5)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_1a0,(longlong)(int)local_198);
          if (local_1a8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data);
          }
          break;
        case L'\r':
          pFVar3 = this->Stream;
          local_108.Data = (FScriptContainerElement *)0x0;
          uVar14 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\r",2);
          uVar13 = uVar14;
          local_f8 = uVar14;
          if (uVar14 < 0x81) {
            if (local_108.Data != (FScriptContainerElement *)0x0) {
              uVar13 = 0;
              goto LAB_141dbebf2;
            }
          }
          else {
LAB_141dbebf2:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_108,0,uVar13,1);
          }
          local_100 = local_188;
          if (local_108.Data != (FScriptContainerElement *)0x0) {
            local_100 = local_108.Data;
          }
          puVar7 = UE::Core::Private::Convert((uchar *)local_100,uVar14,L"\\r",2);
          if ((puVar7 == (uchar *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar5)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_100,(longlong)(int)local_f8);
          if (local_108.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data);
          }
          break;
        case L'\"':
          pFVar3 = this->Stream;
          local_68.Data = (FScriptContainerElement *)0x0;
          uVar14 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\\"",2);
          uVar13 = uVar14;
          local_58 = uVar14;
          if (uVar14 < 0x81) {
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              uVar13 = 0;
              goto LAB_141dbecdc;
            }
          }
          else {
LAB_141dbecdc:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_68,0,uVar13,1);
          }
          local_60 = local_e8;
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            local_60 = local_68.Data;
          }
          puVar7 = UE::Core::Private::Convert((uchar *)local_60,uVar14,L"\\\"",2);
          if ((puVar7 == (uchar *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar5)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_60,(longlong)(int)local_58);
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data);
          }
          break;
        case L'\\':
          pFVar3 = this->Stream;
          local_428.Data = (FScriptContainerElement *)0x0;
          uVar14 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\\\",2);
          uVar13 = uVar14;
          local_418 = uVar14;
          if (uVar14 < 0x81) {
            if (local_428.Data != (FScriptContainerElement *)0x0) {
              uVar13 = 0;
              goto LAB_141dbe763;
            }
          }
          else {
LAB_141dbe763:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_428,0,uVar13,1);
          }
          local_420 = local_4a8;
          if (local_428.Data != (FScriptContainerElement *)0x0) {
            local_420 = local_428.Data;
          }
          puVar7 = UE::Core::Private::Convert((uchar *)local_420,uVar14,L"\\\\",2);
          if ((puVar7 == (uchar *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar5)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_420,(longlong)(int)local_418);
          if (local_428.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_428.Data);
          }
        }
        iVar6 = param_1->Size;
        iVar9 = iVar9 + 1;
        lVar11 = lVar11 + 1;
      } while (iVar9 < iVar6);
    }
LAB_141dbee34:
    iVar6 = param_1->Size;
    iVar10 = iVar6;
    if (iVar6 - iVar9 < iVar6) {
      iVar10 = iVar6 - iVar9;
    }
    iStack_578 = 0;
    if (0 < iVar10) {
      iStack_578 = iVar10;
    }
    local_580 = param_1->DataPtr + ((longlong)iVar6 - (longlong)iStack_578);
    param_1->DataPtr = local_580;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_574,iStack_578);
    iVar6 = param_1->Size;
  } while( true );
}

// WriteEscapedString<wchar_t> @ 141dbefb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<wchar_t>
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,TStringView<wchar_t> *param_1
          )

{
  ushort uVar1;
  wchar_t *pwVar2;
  FArchive *pFVar3;
  char *pcVar4;
  bool bVar5;
  int iVar6;
  uchar *puVar7;
  size_t sVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  code *pcVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_5c8 [32];
  int local_5a8;
  int local_5a0;
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *local_598;
  wchar_t *local_590;
  int iStack_588;
  undefined4 uStack_584;
  wchar_t *local_580;
  int iStack_578;
  undefined4 uStack_574;
  TStringBuilderBase<char> local_570;
  char local_550 [8];
  FScriptContainerElement local_548 [128];
  ForAnyElementType local_4c8;
  FScriptContainerElement *local_4c0;
  int local_4b8;
  FScriptContainerElement local_4a8 [128];
  ForAnyElementType local_428;
  FScriptContainerElement *local_420;
  uint local_418;
  FScriptContainerElement local_408 [128];
  ForAnyElementType local_388;
  FScriptContainerElement *local_380;
  uint local_378;
  FScriptContainerElement local_368 [128];
  ForAnyElementType local_2e8;
  FScriptContainerElement *local_2e0;
  uint local_2d8;
  FScriptContainerElement local_2c8 [128];
  ForAnyElementType local_248;
  FScriptContainerElement *local_240;
  uint local_238;
  FScriptContainerElement local_228 [128];
  ForAnyElementType local_1a8;
  FScriptContainerElement *local_1a0;
  uint local_198;
  FScriptContainerElement local_188 [128];
  ForAnyElementType local_108;
  FScriptContainerElement *local_100;
  uint local_f8;
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  uint local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_5c8;
  iVar6 = param_1->Size;
  local_598 = this;
  do {
    if (iVar6 == 0) {
      return;
    }
    iVar9 = 0;
    if (0 < iVar6) {
      lVar11 = 0;
      do {
        if (0x7ff < iVar9) break;
        if (((iVar9 < 0) || (iVar6 <= iVar9)) &&
           (local_5a8 = iVar9, local_5a0 = iVar6,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar1 = *(ushort *)(lVar11 + (longlong)param_1->DataPtr);
        switch(uVar1) {
        case 8:
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0x22:
        case 0x5c:
          goto switchD_141dbf08b_caseD_8;
        }
        if (uVar1 < 0x20) break;
        iVar6 = param_1->Size;
        iVar9 = iVar9 + 1;
        lVar11 = lVar11 + 2;
      } while (iVar9 < iVar6);
    }
switchD_141dbf08b_caseD_8:
    pwVar2 = param_1->DataPtr;
    iVar6 = param_1->Size;
    if (iVar9 < param_1->Size) {
      iVar6 = iVar9;
    }
    iVar10 = 0;
    if (0 < iVar6) {
      iVar10 = iVar6;
    }
    if (iVar10 != 0) {
      pFVar3 = this->Stream;
      local_4c8.Data = (FScriptContainerElement *)0x0;
      if (pwVar2 == (wchar_t *)0x0) {
        local_4c0 = (FScriptContainerElement *)0x0;
        local_4b8 = 0;
      }
      else {
        iVar6 = 0;
        if ((0 < iVar10) && (pwVar2[(longlong)iVar10 + -1] == L'\0')) {
          iVar6 = 1;
          iVar10 = iVar10 + -1;
        }
        local_4b8 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar2,iVar10);
        uVar14 = local_4b8 + iVar6;
        uVar13 = uVar14;
        if (uVar14 < 0x81) {
          if (local_4c8.Data != (FScriptContainerElement *)0x0) {
            uVar13 = 0;
            goto LAB_141dbf11a;
          }
        }
        else {
LAB_141dbf11a:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_4c8,0,uVar13,1);
        }
        local_4c0 = local_548;
        if (local_4c8.Data != (FScriptContainerElement *)0x0) {
          local_4c0 = local_4c8.Data;
        }
        puVar7 = UE::Core::Private::Convert((uchar *)local_4c0,uVar14,pwVar2,iVar6 + iVar10);
        if ((puVar7 == (uchar *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), bVar5)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_4c0,(longlong)local_4b8);
      this = local_598;
      if (local_4c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4c8.Data);
        this = local_598;
      }
    }
    iVar6 = param_1->Size;
    iVar10 = iVar6;
    if (iVar6 - iVar9 < iVar6) {
      iVar10 = iVar6 - iVar9;
    }
    iStack_588 = 0;
    if (0 < iVar10) {
      iStack_588 = iVar10;
    }
    iVar9 = 0;
    lVar11 = 0;
    local_590 = param_1->DataPtr + ((longlong)iVar6 - (longlong)iStack_588);
    param_1->DataPtr = local_590;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_584,iStack_588);
    iVar6 = param_1->Size;
    if (0 < iVar6) {
      do {
        if (((iVar9 < 0) || (iVar6 <= iVar9)) &&
           (local_5a8 = iVar9, local_5a0 = iVar6,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        switch(param_1->DataPtr[lVar11]) {
        case L'\b':
          pFVar3 = this->Stream;
          local_248.Data = (FScriptContainerElement *)0x0;
          uVar14 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\b",2);
          uVar13 = uVar14;
          local_238 = uVar14;
          if (uVar14 < 0x81) {
            if (local_248.Data != (FScriptContainerElement *)0x0) {
              uVar13 = 0;
              goto LAB_141dbf56e;
            }
          }
          else {
LAB_141dbf56e:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_248,0,uVar13,1);
          }
          local_240 = local_2c8;
          if (local_248.Data != (FScriptContainerElement *)0x0) {
            local_240 = local_248.Data;
          }
          puVar7 = UE::Core::Private::Convert((uchar *)local_240,uVar14,L"\\b",2);
          if ((puVar7 == (uchar *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar5)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_240,(longlong)(int)local_238);
          if (local_248.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data);
          }
          break;
        case L'\t':
          pFVar3 = this->Stream;
          local_2e8.Data = (FScriptContainerElement *)0x0;
          uVar14 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\t",2);
          uVar13 = uVar14;
          local_2d8 = uVar14;
          if (uVar14 < 0x81) {
            if (local_2e8.Data != (FScriptContainerElement *)0x0) {
              uVar13 = 0;
              goto LAB_141dbf484;
            }
          }
          else {
LAB_141dbf484:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_2e8,0,uVar13,1);
          }
          local_2e0 = local_368;
          if (local_2e8.Data != (FScriptContainerElement *)0x0) {
            local_2e0 = local_2e8.Data;
          }
          puVar7 = UE::Core::Private::Convert((uchar *)local_2e0,uVar14,L"\\t",2);
          if ((puVar7 == (uchar *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar5)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_2e0,(longlong)(int)local_2d8);
          if (local_2e8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e8.Data);
          }
          break;
        case L'\n':
          pFVar3 = this->Stream;
          local_388.Data = (FScriptContainerElement *)0x0;
          uVar14 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\n",2);
          uVar13 = uVar14;
          local_378 = uVar14;
          if (uVar14 < 0x81) {
            if (local_388.Data != (FScriptContainerElement *)0x0) {
              uVar13 = 0;
              goto LAB_141dbf39a;
            }
          }
          else {
LAB_141dbf39a:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_388,0,uVar13,1);
          }
          local_380 = local_408;
          if (local_388.Data != (FScriptContainerElement *)0x0) {
            local_380 = local_388.Data;
          }
          puVar7 = UE::Core::Private::Convert((uchar *)local_380,uVar14,L"\\n",2);
          if ((puVar7 == (uchar *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar5)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_380,(longlong)(int)local_378);
          if (local_388.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_388.Data);
          }
          break;
        default:
          if (0x1f < (ushort)param_1->DataPtr[lVar11]) goto LAB_141dbf984;
          local_570.Base = local_550;
          local_570.bIsDynamic = false;
          local_570.bIsExternal = false;
          local_570.CurPos = local_550;
          local_570.End = (char *)local_548;
          TStringBuilderBase<char>::AppendfImpl(&local_570,"\\u%04x");
          pcVar4 = local_570.Base;
          iVar6 = (int)local_570.CurPos - (int)local_570.Base;
          pFVar3 = this->Stream;
          if (local_570.Base == (char *)0x0) {
            iVar6 = 0;
            pcVar12 = *(code **)(*(longlong *)pFVar3 + 0x188);
          }
          else {
            if ((0 < iVar6) && (local_570.Base[(longlong)iVar6 + -1] == '\0')) {
              iVar6 = iVar6 + -1;
            }
            pcVar12 = *(code **)(*(longlong *)pFVar3 + 0x188);
            if (iVar6 == -1) {
              sVar8 = strlen(local_570.Base);
              iVar6 = (int)sVar8;
            }
          }
          (*pcVar12)(pFVar3,pcVar4,(longlong)iVar6);
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_570);
          break;
        case L'\f':
          pFVar3 = this->Stream;
          local_1a8.Data = (FScriptContainerElement *)0x0;
          uVar14 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\f",2);
          uVar13 = uVar14;
          local_198 = uVar14;
          if (uVar14 < 0x81) {
            if (local_1a8.Data != (FScriptContainerElement *)0x0) {
              uVar13 = 0;
              goto LAB_141dbf658;
            }
          }
          else {
LAB_141dbf658:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_1a8,0,uVar13,1);
          }
          local_1a0 = local_228;
          if (local_1a8.Data != (FScriptContainerElement *)0x0) {
            local_1a0 = local_1a8.Data;
          }
          puVar7 = UE::Core::Private::Convert((uchar *)local_1a0,uVar14,L"\\f",2);
          if ((puVar7 == (uchar *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar5)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_1a0,(longlong)(int)local_198);
          if (local_1a8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data);
          }
          break;
        case L'\r':
          pFVar3 = this->Stream;
          local_108.Data = (FScriptContainerElement *)0x0;
          uVar14 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\r",2);
          uVar13 = uVar14;
          local_f8 = uVar14;
          if (uVar14 < 0x81) {
            if (local_108.Data != (FScriptContainerElement *)0x0) {
              uVar13 = 0;
              goto LAB_141dbf742;
            }
          }
          else {
LAB_141dbf742:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_108,0,uVar13,1);
          }
          local_100 = local_188;
          if (local_108.Data != (FScriptContainerElement *)0x0) {
            local_100 = local_108.Data;
          }
          puVar7 = UE::Core::Private::Convert((uchar *)local_100,uVar14,L"\\r",2);
          if ((puVar7 == (uchar *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar5)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_100,(longlong)(int)local_f8);
          if (local_108.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data);
          }
          break;
        case L'\"':
          pFVar3 = this->Stream;
          local_68.Data = (FScriptContainerElement *)0x0;
          uVar14 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\\"",2);
          uVar13 = uVar14;
          local_58 = uVar14;
          if (uVar14 < 0x81) {
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              uVar13 = 0;
              goto LAB_141dbf82c;
            }
          }
          else {
LAB_141dbf82c:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_68,0,uVar13,1);
          }
          local_60 = local_e8;
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            local_60 = local_68.Data;
          }
          puVar7 = UE::Core::Private::Convert((uchar *)local_60,uVar14,L"\\\"",2);
          if ((puVar7 == (uchar *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar5)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_60,(longlong)(int)local_58);
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data);
          }
          break;
        case L'\\':
          pFVar3 = this->Stream;
          local_428.Data = (FScriptContainerElement *)0x0;
          uVar14 = UE::Core::Private::GetConvertedLength((uchar *)0x0,L"\\\\",2);
          uVar13 = uVar14;
          local_418 = uVar14;
          if (uVar14 < 0x81) {
            if (local_428.Data != (FScriptContainerElement *)0x0) {
              uVar13 = 0;
              goto LAB_141dbf2b3;
            }
          }
          else {
LAB_141dbf2b3:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_428,0,uVar13,1);
          }
          local_420 = local_4a8;
          if (local_428.Data != (FScriptContainerElement *)0x0) {
            local_420 = local_428.Data;
          }
          puVar7 = UE::Core::Private::Convert((uchar *)local_420,uVar14,L"\\\\",2);
          if ((puVar7 == (uchar *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar5)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_420,(longlong)(int)local_418);
          if (local_428.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_428.Data);
          }
        }
        iVar6 = param_1->Size;
        iVar9 = iVar9 + 1;
        lVar11 = lVar11 + 1;
      } while (iVar9 < iVar6);
    }
LAB_141dbf984:
    iVar6 = param_1->Size;
    iVar10 = iVar6;
    if (iVar6 - iVar9 < iVar6) {
      iVar10 = iVar6 - iVar9;
    }
    iStack_578 = 0;
    if (0 < iVar10) {
      iStack_578 = iVar10;
    }
    local_580 = param_1->DataPtr + ((longlong)iVar6 - (longlong)iStack_578);
    param_1->DataPtr = local_580;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_574,iStack_578);
    iVar6 = param_1->Size;
  } while( true );
}

// WriteEscapedString<wchar_t> @ 141dbfb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteEscapedString<wchar_t>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  ushort uVar1;
  uint uVar2;
  FArchive *pFVar3;
  char *pcVar4;
  bool bVar5;
  size_t sVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  code *pcVar16;
  undefined1 auStack_1f8 [32];
  uint local_1d8;
  int local_1d0;
  TStringView<wchar_t> *local_1c8;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *local_1c0;
  wchar_t *local_1b8;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  wchar_t *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  TStringBuilderBase<char> local_198;
  uchar local_178 [8];
  char local_170 [8];
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  iVar11 = param_1->Size;
  local_1c0 = this;
  local_1c8 = param_1;
  do {
    if (iVar11 == 0) {
      return;
    }
    uVar15 = 0;
    uVar10 = 0;
    uVar13 = uVar15;
    if (0 < iVar11) {
      do {
        uVar10 = (uint)uVar15;
        if (0x7ff < (int)uVar10) break;
        if ((((int)uVar10 < 0) || (iVar11 <= (int)uVar10)) &&
           (local_1d8 = uVar10, local_1d0 = iVar11,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        uVar1 = *(ushort *)(uVar13 + (longlong)param_1->DataPtr);
        switch(uVar1) {
        case 8:
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0x22:
        case 0x5c:
          goto switchD_141dbfbc9_caseD_8;
        }
        if (uVar1 < 0x20) break;
        iVar11 = param_1->Size;
        uVar10 = uVar10 + 1;
        uVar15 = (ulonglong)uVar10;
        uVar13 = uVar13 + 2;
      } while ((int)uVar10 < iVar11);
    }
switchD_141dbfbc9_caseD_8:
    uVar2 = param_1->Size;
    pwVar7 = param_1->DataPtr;
    uVar14 = uVar2;
    if ((int)uVar10 < (int)uVar2) {
      uVar14 = uVar10;
    }
    uVar9 = 0;
    if (0 < (int)uVar14) {
      uVar9 = uVar14;
    }
    if (uVar9 != 0) {
      pFVar3 = this->Stream;
      if (pwVar7 == (wchar_t *)0x0) {
        pwVar8 = (wchar_t *)0x0;
        uVar9 = 0;
        pcVar16 = *(code **)(*(longlong *)pFVar3 + 0x188);
      }
      else {
        if ((0 < (int)uVar9) && (pwVar7[(longlong)(int)uVar9 + -1] == L'\0')) {
          uVar9 = uVar9 - 1;
        }
        pcVar16 = *(code **)(*(longlong *)pFVar3 + 0x188);
        pwVar8 = pwVar7;
        if (uVar9 == 0xffffffff) {
          sVar6 = wcslen(pwVar7);
          uVar9 = (uint)sVar6;
        }
      }
      (*pcVar16)(pFVar3,pwVar8,(longlong)(int)uVar9 * 2);
      param_1 = local_1c8;
      this = local_1c0;
    }
    uVar14 = uVar2;
    if ((int)(uVar2 - uVar10) < (int)uVar2) {
      uVar14 = uVar2 - uVar10;
    }
    uStack_1b0 = 0;
    if (0 < (int)uVar14) {
      uStack_1b0 = uVar14;
    }
    local_1b8 = pwVar7 + ((longlong)(int)uVar2 - (longlong)(int)uStack_1b0);
    uVar15 = 0;
    uVar10 = 0;
    param_1->DataPtr = local_1b8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_1ac,uStack_1b0);
    iVar11 = param_1->Size;
    uVar13 = uVar15;
    if (0 < iVar11) {
      do {
        uVar10 = (uint)uVar13;
        if ((((int)uVar10 < 0) || (iVar11 <= (int)uVar10)) &&
           (local_1d8 = uVar10, local_1d0 = iVar11,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        uVar1 = *(ushort *)((longlong)param_1->DataPtr + uVar15);
        switch(uVar1) {
        case 8:
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__b,4);
          break;
        case 9:
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__t,4);
          break;
        case 10:
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__n,4);
          break;
        default:
          if (0x1f < uVar1) goto LAB_141dbff5b;
          local_198.Base = (char *)local_178;
          local_198.bIsDynamic = false;
          local_198.bIsExternal = false;
          local_198.CurPos = (char *)local_178;
          local_198.End = local_170;
          TStringBuilderBase<char>::AppendfImpl(&local_198,"\\u%04x");
          pcVar4 = local_198.Base;
          pFVar3 = this->Stream;
          iVar11 = (int)local_198.CurPos - (int)local_198.Base;
          local_68.Data = (FScriptContainerElement *)0x0;
          iVar12 = 0;
          if ((uchar *)local_198.Base == (uchar *)0x0) {
            local_60 = (FScriptContainerElement *)0x0;
            local_58 = 0;
          }
          else {
            if ((0 < iVar11) && (local_198.Base[(longlong)iVar11 + -1] == '\0')) {
              iVar12 = 1;
              iVar11 = iVar11 + -1;
            }
            local_58 = UE::Core::Private::GetConvertedLength
                                 ((wchar_t *)0x0,(uchar *)local_198.Base,iVar11);
            uVar2 = local_58 + iVar12;
            uVar14 = uVar2;
            if (uVar2 < 0x81) {
              if (local_68.Data != (FScriptContainerElement *)0x0) {
                uVar14 = 0;
                goto LAB_141dbfe87;
              }
            }
            else {
LAB_141dbfe87:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_68,0,uVar14,2);
            }
            local_60 = local_168;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              local_60 = local_68.Data;
            }
            pwVar7 = UE::Core::Private::Convert
                               ((wchar_t *)local_60,uVar2,(uchar *)pcVar4,iVar12 + iVar11);
            param_1 = local_1c8;
            if ((pwVar7 == (wchar_t *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                   ,0x25,L""), param_1 = local_1c8, bVar5)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_60,(longlong)local_58 * 2);
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data);
          }
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_198);
          this = local_1c0;
          break;
        case 0xc:
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__f,4);
          break;
        case 0xd:
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__r,4);
          break;
        case 0x22:
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u___,4);
          break;
        case 0x5c:
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u___,4);
        }
        iVar11 = param_1->Size;
        uVar10 = uVar10 + 1;
        uVar15 = uVar15 + 2;
        uVar13 = (ulonglong)uVar10;
      } while ((int)uVar10 < iVar11);
    }
LAB_141dbff5b:
    iVar11 = param_1->Size;
    iVar12 = iVar11;
    if ((int)(iVar11 - uVar10) < iVar11) {
      iVar12 = iVar11 - uVar10;
    }
    iStack_1a0 = 0;
    if (0 < iVar12) {
      iStack_1a0 = iVar12;
    }
    local_1a8 = param_1->DataPtr + ((longlong)iVar11 - (longlong)iStack_1a0);
    param_1->DataPtr = local_1a8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_19c,iStack_1a0);
    iVar11 = param_1->Size;
  } while( true );
}

// WriteEscapedString<wchar_t> @ 141dc00c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteEscapedString<wchar_t>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,TStringView<wchar_t> *param_1
          )

{
  ushort uVar1;
  uint uVar2;
  FArchive *pFVar3;
  char *pcVar4;
  bool bVar5;
  size_t sVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  code *pcVar16;
  undefined1 auStack_1f8 [32];
  uint local_1d8;
  int local_1d0;
  TStringView<wchar_t> *local_1c8;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *local_1c0;
  wchar_t *local_1b8;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  wchar_t *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  TStringBuilderBase<char> local_198;
  uchar local_178 [8];
  char local_170 [8];
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  iVar11 = param_1->Size;
  local_1c0 = this;
  local_1c8 = param_1;
  do {
    if (iVar11 == 0) {
      return;
    }
    uVar15 = 0;
    uVar10 = 0;
    uVar13 = uVar15;
    if (0 < iVar11) {
      do {
        uVar10 = (uint)uVar15;
        if (0x7ff < (int)uVar10) break;
        if ((((int)uVar10 < 0) || (iVar11 <= (int)uVar10)) &&
           (local_1d8 = uVar10, local_1d0 = iVar11,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        uVar1 = *(ushort *)(uVar13 + (longlong)param_1->DataPtr);
        switch(uVar1) {
        case 8:
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0x22:
        case 0x5c:
          goto switchD_141dc0189_caseD_8;
        }
        if (uVar1 < 0x20) break;
        iVar11 = param_1->Size;
        uVar10 = uVar10 + 1;
        uVar15 = (ulonglong)uVar10;
        uVar13 = uVar13 + 2;
      } while ((int)uVar10 < iVar11);
    }
switchD_141dc0189_caseD_8:
    uVar2 = param_1->Size;
    pwVar7 = param_1->DataPtr;
    uVar14 = uVar2;
    if ((int)uVar10 < (int)uVar2) {
      uVar14 = uVar10;
    }
    uVar9 = 0;
    if (0 < (int)uVar14) {
      uVar9 = uVar14;
    }
    if (uVar9 != 0) {
      pFVar3 = this->Stream;
      if (pwVar7 == (wchar_t *)0x0) {
        pwVar8 = (wchar_t *)0x0;
        uVar9 = 0;
        pcVar16 = *(code **)(*(longlong *)pFVar3 + 0x188);
      }
      else {
        if ((0 < (int)uVar9) && (pwVar7[(longlong)(int)uVar9 + -1] == L'\0')) {
          uVar9 = uVar9 - 1;
        }
        pcVar16 = *(code **)(*(longlong *)pFVar3 + 0x188);
        pwVar8 = pwVar7;
        if (uVar9 == 0xffffffff) {
          sVar6 = wcslen(pwVar7);
          uVar9 = (uint)sVar6;
        }
      }
      (*pcVar16)(pFVar3,pwVar8,(longlong)(int)uVar9 * 2);
      param_1 = local_1c8;
      this = local_1c0;
    }
    uVar14 = uVar2;
    if ((int)(uVar2 - uVar10) < (int)uVar2) {
      uVar14 = uVar2 - uVar10;
    }
    uStack_1b0 = 0;
    if (0 < (int)uVar14) {
      uStack_1b0 = uVar14;
    }
    local_1b8 = pwVar7 + ((longlong)(int)uVar2 - (longlong)(int)uStack_1b0);
    uVar15 = 0;
    uVar10 = 0;
    param_1->DataPtr = local_1b8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_1ac,uStack_1b0);
    iVar11 = param_1->Size;
    uVar13 = uVar15;
    if (0 < iVar11) {
      do {
        uVar10 = (uint)uVar13;
        if ((((int)uVar10 < 0) || (iVar11 <= (int)uVar10)) &&
           (local_1d8 = uVar10, local_1d0 = iVar11,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar5)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        uVar1 = *(ushort *)((longlong)param_1->DataPtr + uVar15);
        switch(uVar1) {
        case 8:
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__b,4);
          break;
        case 9:
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__t,4);
          break;
        case 10:
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__n,4);
          break;
        default:
          if (0x1f < uVar1) goto LAB_141dc051b;
          local_198.Base = (char *)local_178;
          local_198.bIsDynamic = false;
          local_198.bIsExternal = false;
          local_198.CurPos = (char *)local_178;
          local_198.End = local_170;
          TStringBuilderBase<char>::AppendfImpl(&local_198,"\\u%04x");
          pcVar4 = local_198.Base;
          pFVar3 = this->Stream;
          iVar11 = (int)local_198.CurPos - (int)local_198.Base;
          local_68.Data = (FScriptContainerElement *)0x0;
          iVar12 = 0;
          if ((uchar *)local_198.Base == (uchar *)0x0) {
            local_60 = (FScriptContainerElement *)0x0;
            local_58 = 0;
          }
          else {
            if ((0 < iVar11) && (local_198.Base[(longlong)iVar11 + -1] == '\0')) {
              iVar12 = 1;
              iVar11 = iVar11 + -1;
            }
            local_58 = UE::Core::Private::GetConvertedLength
                                 ((wchar_t *)0x0,(uchar *)local_198.Base,iVar11);
            uVar2 = local_58 + iVar12;
            uVar14 = uVar2;
            if (uVar2 < 0x81) {
              if (local_68.Data != (FScriptContainerElement *)0x0) {
                uVar14 = 0;
                goto LAB_141dc0447;
              }
            }
            else {
LAB_141dc0447:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_68,0,uVar14,2);
            }
            local_60 = local_168;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              local_60 = local_68.Data;
            }
            pwVar7 = UE::Core::Private::Convert
                               ((wchar_t *)local_60,uVar2,(uchar *)pcVar4,iVar12 + iVar11);
            param_1 = local_1c8;
            if ((pwVar7 == (wchar_t *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                   ,0x25,L""), param_1 = local_1c8, bVar5)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
          }
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_60,(longlong)local_58 * 2);
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data);
          }
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_198);
          this = local_1c0;
          break;
        case 0xc:
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__f,4);
          break;
        case 0xd:
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u__r,4);
          break;
        case 0x22:
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u___,4);
          break;
        case 0x5c:
          (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,&u___,4);
        }
        iVar11 = param_1->Size;
        uVar10 = uVar10 + 1;
        uVar15 = uVar15 + 2;
        uVar13 = (ulonglong)uVar10;
      } while ((int)uVar10 < iVar11);
    }
LAB_141dc051b:
    iVar11 = param_1->Size;
    iVar12 = iVar11;
    if ((int)(iVar11 - uVar10) < iVar11) {
      iVar12 = iVar11 - uVar10;
    }
    iStack_1a0 = 0;
    if (0 < iVar12) {
      iStack_1a0 = iVar12;
    }
    local_1a8 = param_1->DataPtr + ((longlong)iVar11 - (longlong)iStack_1a0);
    param_1->DataPtr = local_1a8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_19c,iStack_1a0);
    iVar11 = param_1->Size;
  } while( true );
}

// WriteIdentifier<wchar_t> @ 141dc0680

void __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteIdentifier<wchar_t>
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,TStringView<wchar_t> *param_1
          )

{
  EJsonToken EVar1;
  FArchive *pFVar2;
  ulonglong uVar3;
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
  TJsonPrintPolicy<char8_t>::WriteString(this->Stream,&local_18);
  pFVar2 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar3 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res8[0] = 9;
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res8,1);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(this->_padding_ + 0x28))(this,&local_18);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  this->PreviousTokenWritten = Identifier;
  return;
}

// WriteIdentifier<wchar_t> @ 141dc0790

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,TStringView<wchar_t> *param_1
          )

{
  EJsonToken EVar1;
  FArchive *pFVar2;
  ulonglong uVar3;
  undefined2 local_res8 [4];
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  EVar1 = this->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,L"\r\n",4);
  pFVar2 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar3 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res8[0] = 9;
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res8,2);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  local_28 = *(undefined4 *)&param_1->DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_20 = param_1->Size;
  uStack_1c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(this->_padding_ + 0x28))(this,&local_28);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  this->PreviousTokenWritten = Identifier;
  return;
}

// WriteObjectStart<TStringView<wchar_t>_&> @ 141dc08a0

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  int *piVar1;
  EJsonToken EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined4 local_48 [4];
  wchar_t *local_38;
  undefined8 uStack_30;
  
  iVar9 = (this->Stack).ArrayNum;
  uVar10 = iVar9 - 1;
  uVar8 = 0;
  if ((int)uVar10 < iVar9) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x81,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar2 = this->PreviousTokenWritten;
  pwVar5 = param_1->DataPtr;
  uVar6 = *(undefined8 *)&param_1->Size;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    this->PreviousTokenWritten = Comma;
  }
  local_38 = pwVar5;
  uStack_30 = uVar6;
  (**(code **)(this->_padding_ + 0x28))(this,&local_38);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,1);
  this->PreviousTokenWritten = Identifier;
  local_res18[0] = 0x7b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,1);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar3 = (this->Stack).AllocatorInstance.Data;
  local_48[0] = 6;
  if ((pFVar3 <= (FScriptContainerElement *)local_48) &&
     ((FScriptContainerElement *)local_48 < pFVar3 + (longlong)(this->Stack).ArrayMax * 4)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar9 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Stack).AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar9 + 1;
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_48[0];
  this->PreviousTokenWritten = CurlyOpen;
  return;
}

// WriteObjectStart<TStringView<wchar_t>_&> @ 141dc0ab0

void __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,TStringView<wchar_t> *param_1
          )

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
  undefined1 local_res10 [8];
  undefined4 local_58 [4];
  wchar_t *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
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
  local_38.DataPtr = param_1->DataPtr;
  local_38.Size = param_1->Size;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteIdentifier<wchar_t>(this,&local_38);
  local_48 = L"\r\n";
  uStack_40 = 2;
  local_28._12_4_ = uStack_3c;
  local_28.Size = 2;
  local_28.DataPtr = L"\r\n";
  TJsonPrintPolicy<char8_t>::WriteString(this->Stream,&local_28);
  pFVar2 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar9 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res8[0] = 9;
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res8,1);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  local_res10[0] = 0x7b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,1);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar3 = (this->Stack).AllocatorInstance.Data;
  local_58[0] = 6;
  if ((pFVar3 <= (FScriptContainerElement *)local_58) &&
     ((FScriptContainerElement *)local_58 < pFVar3 + (longlong)(this->Stack).ArrayMax * 4)) {
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
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_58[0];
  this->PreviousTokenWritten = CurlyOpen;
  return;
}

// WriteObjectStart<TStringView<wchar_t>_&> @ 141dc0cc0

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  int *piVar1;
  EJsonToken EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined2 local_res18 [8];
  undefined4 local_48 [4];
  wchar_t *local_38;
  undefined8 uStack_30;
  
  iVar9 = (this->Stack).ArrayNum;
  uVar10 = iVar9 - 1;
  uVar8 = 0;
  if ((int)uVar10 < iVar9) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x81,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar2 = this->PreviousTokenWritten;
  pwVar5 = param_1->DataPtr;
  uVar6 = *(undefined8 *)&param_1->Size;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  local_38 = pwVar5;
  uStack_30 = uVar6;
  (**(code **)(this->_padding_ + 0x28))(this,&local_38);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,2);
  this->PreviousTokenWritten = Identifier;
  local_res18[0] = 0x7b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,2);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar3 = (this->Stack).AllocatorInstance.Data;
  local_48[0] = 6;
  if ((pFVar3 <= (FScriptContainerElement *)local_48) &&
     ((FScriptContainerElement *)local_48 < pFVar3 + (longlong)(this->Stack).ArrayMax * 4)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar9 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Stack).AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar9 + 1;
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_48[0];
  this->PreviousTokenWritten = CurlyOpen;
  return;
}

// WriteObjectStart<TStringView<wchar_t>_&> @ 141dc0ee0

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,TStringView<wchar_t> *param_1
          )

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
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined4 local_38 [4];
  TStringView<wchar_t> local_28;
  
  iVar7 = (this->Stack).ArrayNum;
  uVar8 = iVar7 - 1;
  uVar6 = 0;
  if ((int)uVar8 < iVar7) {
    uVar6 = ~uVar8 >> 0x1f;
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
       6) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stack.Top() == EJson::Object",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0x81,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteIdentifier<wchar_t>(this,&local_28);
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,L"\r\n",4);
  pFVar2 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar9 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res8[0] = 9;
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res8,2);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  local_res10[0] = 0x7b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,2);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar3 = (this->Stack).AllocatorInstance.Data;
  local_38[0] = 6;
  if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)(this->Stack).ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Stack).AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar7 + 1;
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_38[0];
  this->PreviousTokenWritten = CurlyOpen;
  return;
}

// WriteObjectStart<FString_&> @ 141dc10f0

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<FString_&>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,FString *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined2 local_res8 [4];
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
                       ,0x81,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  WriteIdentifier(this,param_1);
  local_res8[0] = 0x7b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar2 = (this->Stack).AllocatorInstance.Data;
  local_18[0] = 6;
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
  this->PreviousTokenWritten = CurlyOpen;
  return;
}

// WriteObjectStart<FString_&> @ 141dc1280

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<FString_&>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,FString *param_1)

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
  undefined2 local_res8 [4];
  undefined2 local_res18 [4];
  undefined4 local_28 [4];
  
  iVar7 = (this->Stack).ArrayNum;
  uVar8 = iVar7 - 1;
  uVar6 = 0;
  if ((int)uVar8 < iVar7) {
    uVar6 = ~uVar8 >> 0x1f;
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
       6) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stack.Top() == EJson::Object",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0x81,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  WriteIdentifier(this,param_1);
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,L"\r\n",4);
  pFVar2 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar9 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res8[0] = 9;
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res8,2);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  local_res18[0] = 0x7b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,2);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar3 = (this->Stack).AllocatorInstance.Data;
  local_28[0] = 6;
  if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
      ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)(this->Stack).ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Stack).AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar7 + 1;
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_28[0];
  this->PreviousTokenWritten = CurlyOpen;
  return;
}

// WriteRawJSONValueImpl<char8_t> @ 141dc1480

void __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteRawJSONValueImpl<char8_t>
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,TStringView<char8_t> *param_1
          )

{
  EJsonToken EVar1;
  uchar *_Str;
  FArchive *pFVar2;
  bool bVar3;
  size_t sVar4;
  int iVar5;
  code *pcVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  
  bVar3 = CanWriteValueWithoutIdentifier(this);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x27a,L"");
    if (bVar3) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  EVar1 = this->PreviousTokenWritten;
  if (EVar1 != CurlyOpen) {
    if (EVar1 == SquareOpen) {
      local_res10[0] = 0x20;
      (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,1);
      goto LAB_141dc1539;
    }
    if ((EVar1 != Identifier) && (Comma < EVar1)) {
      local_res8[0] = 0x2c;
      (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
      this->PreviousTokenWritten = Comma;
    }
  }
  local_28._12_4_ = uStack_2c;
  local_28.Size = 2;
  local_28.DataPtr = L"\r\n";
  TJsonPrintPolicy<char8_t>::WriteString(this->Stream,&local_28);
  TPrettyJsonPrintPolicy<char8_t>::WriteTabs(this->Stream,this->IndentLevel);
LAB_141dc1539:
  iVar5 = (int)*(undefined8 *)&param_1->Size;
  _Str = param_1->DataPtr;
  pFVar2 = this->Stream;
  if (_Str == (uchar *)0x0) {
    iVar5 = 0;
    pcVar6 = *(code **)(*(longlong *)pFVar2 + 0x188);
  }
  else {
    if ((0 < iVar5) && (_Str[(longlong)iVar5 + -1] == '\0')) {
      iVar5 = iVar5 + -1;
    }
    pcVar6 = *(code **)(*(longlong *)pFVar2 + 0x188);
    if (iVar5 == -1) {
      sVar4 = strlen((char *)_Str);
      iVar5 = (int)sVar4;
    }
  }
  (*pcVar6)(pFVar2,_Str,(longlong)iVar5);
  this->PreviousTokenWritten = String;
  return;
}

// WriteRawJSONValueImpl<wchar_t> @ 141dc15d0

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteRawJSONValueImpl<wchar_t>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  EJsonToken EVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  FArchive *pFVar3;
  bool bVar4;
  uint uVar5;
  size_t sVar6;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  iVar8 = (this->Stack).ArrayNum;
  uVar7 = iVar8 - 1;
  uVar5 = 0;
  if ((int)uVar7 < iVar8) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x26f,L"");
    if (bVar4) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  EVar1 = this->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  local_28 = *(undefined4 *)&param_1->DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_20 = param_1->Size;
  uStack_1c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(this->_padding_ + 0x28))(this,&local_28);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,2);
  uVar2 = *(undefined8 *)&param_2->Size;
  _Str = param_2->DataPtr;
  pFVar3 = this->Stream;
  this->PreviousTokenWritten = Identifier;
  iVar8 = (int)uVar2;
  if (_Str == (wchar_t *)0x0) {
    iVar8 = 0;
    pcVar9 = *(code **)(*(longlong *)pFVar3 + 0x188);
  }
  else {
    if ((0 < iVar8) && (_Str[(longlong)iVar8 + -1] == L'\0')) {
      iVar8 = iVar8 + -1;
    }
    pcVar9 = *(code **)(*(longlong *)pFVar3 + 0x188);
    if (iVar8 == -1) {
      sVar6 = wcslen(_Str);
      iVar8 = (int)sVar6;
    }
  }
  (*pcVar9)(pFVar3,_Str,(longlong)iVar8 * 2);
  this->PreviousTokenWritten = String;
  return;
}

// WriteRawJSONValueImpl<wchar_t> @ 141dc1760

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteRawJSONValueImpl<wchar_t>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,TStringView<wchar_t> *param_1
          )

{
  EJsonToken EVar1;
  wchar_t *_Str;
  FArchive *pFVar2;
  bool bVar3;
  size_t sVar4;
  int iVar5;
  code *pcVar6;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  
  bVar3 = CanWriteValueWithoutIdentifier(this);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x27a,L"");
    if (bVar3) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  EVar1 = this->PreviousTokenWritten;
  if (EVar1 != CurlyOpen) {
    if (EVar1 == SquareOpen) {
      local_res10[0] = 0x20;
      (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,2);
      goto LAB_141dc180b;
    }
    if ((EVar1 != Identifier) && (Comma < EVar1)) {
      local_res8[0] = 0x2c;
      (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
      this->PreviousTokenWritten = Comma;
    }
  }
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,L"\r\n",4);
  TPrettyJsonPrintPolicy<wchar_t>::WriteTabs(this->Stream,this->IndentLevel);
LAB_141dc180b:
  iVar5 = (int)*(undefined8 *)&param_1->Size;
  _Str = param_1->DataPtr;
  pFVar2 = this->Stream;
  if (_Str == (wchar_t *)0x0) {
    iVar5 = 0;
    pcVar6 = *(code **)(*(longlong *)pFVar2 + 0x188);
  }
  else {
    if ((0 < iVar5) && (_Str[(longlong)iVar5 + -1] == L'\0')) {
      iVar5 = iVar5 + -1;
    }
    pcVar6 = *(code **)(*(longlong *)pFVar2 + 0x188);
    if (iVar5 == -1) {
      sVar4 = wcslen(_Str);
      iVar5 = (int)sVar4;
    }
  }
  (*pcVar6)(pFVar2,_Str,(longlong)iVar5 * 2);
  this->PreviousTokenWritten = String;
  return;
}

// WriteValue<int_&,TStringView<wchar_t>_&> @ 141dc1930

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  EJsonToken EVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  wchar_t *local_28;
  undefined8 uStack_20;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar8 = iVar1 - 1;
  uVar6 = 0;
  if ((int)uVar8 < iVar1) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar7 = this->PreviousTokenWritten;
  pwVar3 = param_1->DataPtr;
  uVar4 = *(undefined8 *)&param_1->Size;
  if ((EVar7 != CurlyOpen) && ((Identifier < EVar7 || ((0x1013U >> (EVar7 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    this->PreviousTokenWritten = Comma;
  }
  local_28 = pwVar3;
  uStack_20 = uVar4;
  (**(code **)(this->_padding_ + 0x28))(this,&local_28);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,1);
  this->PreviousTokenWritten = Identifier;
  EVar7 = WriteValueOnly(this,(longlong)*param_2);
  this->PreviousTokenWritten = EVar7;
  return;
}

// WriteValue<int_&,TStringView<wchar_t>_&> @ 141dc1a80

void __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,TStringView<wchar_t> *param_1
          ,int *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  TStringView<wchar_t> local_18;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar1) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
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
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteIdentifier<wchar_t>(this,&local_18);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  EVar5 = WriteValueOnly(this,(longlong)*param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteValue<int_&,TStringView<wchar_t>_&> @ 141dc1b80

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  EJsonToken EVar7;
  uint uVar8;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  wchar_t *local_28;
  undefined8 uStack_20;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar8 = iVar1 - 1;
  uVar6 = 0;
  if ((int)uVar8 < iVar1) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar7 = this->PreviousTokenWritten;
  pwVar3 = param_1->DataPtr;
  uVar4 = *(undefined8 *)&param_1->Size;
  if ((EVar7 != CurlyOpen) && ((Identifier < EVar7 || ((0x1013U >> (EVar7 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  local_28 = pwVar3;
  uStack_20 = uVar4;
  (**(code **)(this->_padding_ + 0x28))(this,&local_28);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,2);
  this->PreviousTokenWritten = Identifier;
  EVar7 = WriteValueOnly(this,(longlong)*param_2);
  this->PreviousTokenWritten = EVar7;
  return;
}

// WriteValue<int_&,TStringView<wchar_t>_&> @ 141dc1cd0

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,TStringView<wchar_t> *param_1
          ,int *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  undefined2 local_res8 [4];
  TStringView<wchar_t> local_18;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar1) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
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
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteIdentifier<wchar_t>(this,&local_18);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  EVar5 = WriteValueOnly(this,(longlong)*param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteValue<unsigned_int_&,TStringView<wchar_t>_&> @ 141dc1dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
WriteValue<unsigned_int_&,TStringView<wchar_t>_&>
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,uint *param_2)

{
  int iVar1;
  EJsonToken EVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  wchar_t *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  wchar_t *local_b8;
  undefined8 uStack_b0;
  TStringView<wchar_t> local_a8;
  TStringBuilderBase<wchar_t> local_98;
  wchar_t local_78 [32];
  ulonglong local_38 [4];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_108;
  iVar1 = (this->Stack).ArrayNum;
  uVar8 = iVar1 - 1;
  uVar7 = 0;
  if ((int)uVar8 < iVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    local_e8 = (longlong)(int)uVar8;
    local_e0 = (longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar2 = this->PreviousTokenWritten;
  pwVar4 = param_1->DataPtr;
  uVar5 = *(undefined8 *)&param_1->Size;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_d8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_d8,1);
    this->PreviousTokenWritten = Comma;
  }
  local_b8 = pwVar4;
  uStack_b0 = uVar5;
  (**(code **)(this->_padding_ + 0x28))(this,&local_b8);
  local_d0[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_d0,1);
  local_98.Base = local_78;
  this->PreviousTokenWritten = Identifier;
  local_98.CurPos = local_78;
  local_98.bIsDynamic = false;
  local_98.bIsExternal = false;
  local_98.End = (wchar_t *)local_38;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_98,L"%llu");
  local_c8 = local_98.Base;
  iStack_c0 = (int)((longlong)local_98.CurPos - (longlong)local_98.Base >> 1);
  local_a8._12_4_ = uStack_bc;
  local_a8.Size = iStack_c0;
  local_a8.DataPtr = local_98.Base;
  TJsonPrintPolicy<char8_t>::WriteString(this->Stream,&local_a8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_98);
  this->PreviousTokenWritten = Number;
  return;
}

// WriteValue<unsigned_int_&,TStringView<wchar_t>_&> @ 141dc1fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
WriteValue<unsigned_int_&,TStringView<wchar_t>_&>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,uint *param_2)

{
  EJsonToken EVar1;
  FArchive *pFVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  size_t sVar7;
  int iVar8;
  code *pcVar9;
  uint uVar10;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  undefined2 local_b8 [4];
  undefined2 local_b0 [4];
  wchar_t *local_a8;
  undefined8 uStack_a0;
  TStringBuilderBase<wchar_t> local_98;
  wchar_t local_78 [32];
  ulonglong local_38 [4];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_e8;
  iVar8 = (this->Stack).ArrayNum;
  uVar10 = iVar8 - 1;
  uVar6 = 0;
  if ((int)uVar10 < iVar8) {
    uVar6 = ~uVar10 >> 0x1f;
  }
  if (uVar6 == 0) {
    local_c8 = (longlong)(int)uVar10;
    local_c0 = (longlong)iVar8;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar5) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  EVar1 = this->PreviousTokenWritten;
  pwVar3 = param_1->DataPtr;
  uVar4 = *(undefined8 *)&param_1->Size;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_b8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_b8,2);
    this->PreviousTokenWritten = Comma;
  }
  local_a8 = pwVar3;
  uStack_a0 = uVar4;
  (**(code **)(this->_padding_ + 0x28))(this,&local_a8);
  local_b0[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_b0,2);
  local_98.Base = local_78;
  this->PreviousTokenWritten = Identifier;
  local_98.CurPos = local_78;
  local_98.bIsDynamic = false;
  local_98.bIsExternal = false;
  local_98.End = (wchar_t *)local_38;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_98,L"%llu");
  pwVar3 = local_98.Base;
  pFVar2 = this->Stream;
  iVar8 = (int)((longlong)local_98.CurPos - (longlong)local_98.Base >> 1);
  if (local_98.Base == (wchar_t *)0x0) {
    iVar8 = 0;
    pcVar9 = *(code **)(*(longlong *)pFVar2 + 0x188);
  }
  else {
    if (0 < iVar8) {
      if (local_98.Base[(longlong)iVar8 + -1] == L'\0') {
        iVar8 = iVar8 + -1;
      }
    }
    pcVar9 = *(code **)(*(longlong *)pFVar2 + 0x188);
    if (iVar8 == -1) {
      sVar7 = wcslen(local_98.Base);
      iVar8 = (int)sVar7;
    }
  }
  (*pcVar9)(pFVar2,pwVar3,(longlong)iVar8 * 2);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_98);
  this->PreviousTokenWritten = Number;
  return;
}

// WriteValue<unsigned_int_&,TStringView<wchar_t>_&> @ 141dc21d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
WriteValue<unsigned_int_&,TStringView<wchar_t>_&>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,TStringView<wchar_t> *param_1
          ,uint *param_2)

{
  FArchive *pFVar1;
  wchar_t *pwVar2;
  bool bVar3;
  uint uVar4;
  size_t sVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  undefined2 local_a8 [8];
  TStringView<wchar_t> local_98;
  TStringBuilderBase<wchar_t> local_88;
  wchar_t local_68 [32];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_d8;
  iVar6 = (this->Stack).ArrayNum;
  uVar8 = iVar6 - 1;
  uVar4 = 0;
  if ((int)uVar8 < iVar6) {
    uVar4 = ~uVar8 >> 0x1f;
  }
  if (uVar4 == 0) {
    local_b8 = (longlong)(int)uVar8;
    local_b0 = (longlong)iVar6;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
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
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_98.DataPtr = param_1->DataPtr;
  local_98.Size = param_1->Size;
  local_98._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteIdentifier<wchar_t>(this,&local_98);
  local_a8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_a8,2);
  local_88.Base = local_68;
  local_88.CurPos = local_68;
  local_88.bIsDynamic = false;
  local_88.bIsExternal = false;
  local_88.End = (wchar_t *)local_28;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_88,L"%llu");
  pwVar2 = local_88.Base;
  pFVar1 = this->Stream;
  iVar6 = (int)((longlong)local_88.CurPos - (longlong)local_88.Base >> 1);
  if (local_88.Base == (wchar_t *)0x0) {
    iVar6 = 0;
    pcVar7 = *(code **)(*(longlong *)pFVar1 + 0x188);
  }
  else {
    if (0 < iVar6) {
      if (local_88.Base[(longlong)iVar6 + -1] == L'\0') {
        iVar6 = iVar6 + -1;
      }
    }
    pcVar7 = *(code **)(*(longlong *)pFVar1 + 0x188);
    if (iVar6 == -1) {
      sVar5 = wcslen(local_88.Base);
      iVar6 = (int)sVar5;
    }
  }
  (*pcVar7)(pFVar1,pwVar2,(longlong)iVar6 * 2);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_88);
  this->PreviousTokenWritten = Number;
  return;
}

// WriteValue<float_&,TStringView<wchar_t>_&> @ 141dc2390

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteValue<float_&,TStringView<wchar_t>_&>
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,float *param_2)

{
  int iVar1;
  EJsonToken EVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  wchar_t *local_28;
  undefined8 uStack_20;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar8 = iVar1 - 1;
  uVar7 = 0;
  if ((int)uVar8 < iVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar2 = this->PreviousTokenWritten;
  pwVar4 = param_1->DataPtr;
  uVar5 = *(undefined8 *)&param_1->Size;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    this->PreviousTokenWritten = Comma;
  }
  local_28 = pwVar4;
  uStack_20 = uVar5;
  (**(code **)(this->_padding_ + 0x28))(this,&local_28);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,1);
  this->PreviousTokenWritten = Identifier;
  TJsonPrintPolicy<char8_t>::WriteFloat(this->Stream,*param_2);
  this->PreviousTokenWritten = Number;
  return;
}

// WriteValue<float_&,TStringView<wchar_t>_&> @ 141dc24e0

void __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<float_&,TStringView<wchar_t>_&>
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,TStringView<wchar_t> *param_1
          ,float *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  TStringView<wchar_t> local_18;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar5 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar5 < iVar1) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
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
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteIdentifier<wchar_t>(this,&local_18);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  TJsonPrintPolicy<char8_t>::WriteFloat(this->Stream,*param_2);
  this->PreviousTokenWritten = Number;
  return;
}

// WriteValue<float_&,TStringView<wchar_t>_&> @ 141dc25e0

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValue<float_&,TStringView<wchar_t>_&>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,float *param_2)

{
  int iVar1;
  EJsonToken EVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  wchar_t *local_28;
  undefined8 uStack_20;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar8 = iVar1 - 1;
  uVar7 = 0;
  if ((int)uVar8 < iVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar2 = this->PreviousTokenWritten;
  pwVar4 = param_1->DataPtr;
  uVar5 = *(undefined8 *)&param_1->Size;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  local_28 = pwVar4;
  uStack_20 = uVar5;
  (**(code **)(this->_padding_ + 0x28))(this,&local_28);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,2);
  this->PreviousTokenWritten = Identifier;
  TJsonPrintPolicy<wchar_t>::WriteFloat(this->Stream,*param_2);
  this->PreviousTokenWritten = Number;
  return;
}

// WriteValue<float_&,TStringView<wchar_t>_&> @ 141dc2740

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<float_&,TStringView<wchar_t>_&>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,TStringView<wchar_t> *param_1
          ,float *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined2 local_res8 [4];
  TStringView<wchar_t> local_18;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar5 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar5 < iVar1) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
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
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteIdentifier<wchar_t>(this,&local_18);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  TJsonPrintPolicy<wchar_t>::WriteFloat(this->Stream,*param_2);
  this->PreviousTokenWritten = Number;
  return;
}

// WriteValue<double_&,TStringView<wchar_t>_&> @ 141dc2840

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
WriteValue<double_&,TStringView<wchar_t>_&>
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,double *param_2)

{
  int iVar1;
  EJsonToken EVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  wchar_t *local_28;
  undefined8 uStack_20;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar8 = iVar1 - 1;
  uVar7 = 0;
  if ((int)uVar8 < iVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar2 = this->PreviousTokenWritten;
  pwVar4 = param_1->DataPtr;
  uVar5 = *(undefined8 *)&param_1->Size;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    this->PreviousTokenWritten = Comma;
  }
  local_28 = pwVar4;
  uStack_20 = uVar5;
  (**(code **)(this->_padding_ + 0x28))(this,&local_28);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,1);
  this->PreviousTokenWritten = Identifier;
  TJsonPrintPolicy<char8_t>::WriteDouble(this->Stream,*param_2);
  this->PreviousTokenWritten = Number;
  return;
}

// WriteValue<double_&,TStringView<wchar_t>_&> @ 141dc2990

void __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<double_&,TStringView<wchar_t>_&>
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,TStringView<wchar_t> *param_1
          ,double *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  TStringView<wchar_t> local_18;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar5 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar5 < iVar1) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
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
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteIdentifier<wchar_t>(this,&local_18);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  TJsonPrintPolicy<char8_t>::WriteDouble(this->Stream,*param_2);
  this->PreviousTokenWritten = Number;
  return;
}

// WriteValue<double_&,TStringView<wchar_t>_&> @ 141dc2a90

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
WriteValue<double_&,TStringView<wchar_t>_&>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,double *param_2)

{
  int iVar1;
  EJsonToken EVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  wchar_t *local_28;
  undefined8 uStack_20;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar8 = iVar1 - 1;
  uVar7 = 0;
  if ((int)uVar8 < iVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar2 = this->PreviousTokenWritten;
  pwVar4 = param_1->DataPtr;
  uVar5 = *(undefined8 *)&param_1->Size;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  local_28 = pwVar4;
  uStack_20 = uVar5;
  (**(code **)(this->_padding_ + 0x28))(this,&local_28);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,2);
  this->PreviousTokenWritten = Identifier;
  TJsonPrintPolicy<wchar_t>::WriteDouble(this->Stream,*param_2);
  this->PreviousTokenWritten = Number;
  return;
}

// WriteValue<double_&,TStringView<wchar_t>_&> @ 141dc2bf0

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<double_&,TStringView<wchar_t>_&>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,TStringView<wchar_t> *param_1
          ,double *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined2 local_res8 [4];
  TStringView<wchar_t> local_18;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar5 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar5 < iVar1) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
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
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteIdentifier<wchar_t>(this,&local_18);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  TJsonPrintPolicy<wchar_t>::WriteDouble(this->Stream,*param_2);
  this->PreviousTokenWritten = Number;
  return;
}

// WriteValue<FString_&,TStringView<wchar_t>_&> @ 141dc2cf0

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
WriteValue<FString_&,TStringView<wchar_t>_&>
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,FString *param_2)

{
  int iVar1;
  EJsonToken EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  wchar_t *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar9 = iVar1 - 1;
  uVar8 = 0;
  if ((int)uVar9 < iVar1) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar2 = this->PreviousTokenWritten;
  pwVar5 = param_1->DataPtr;
  uVar6 = *(undefined8 *)&param_1->Size;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    this->PreviousTokenWritten = Comma;
  }
  local_48 = pwVar5;
  uStack_40 = uVar6;
  (**(code **)(this->_padding_ + 0x28))(this,&local_48);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,1);
  this->PreviousTokenWritten = Identifier;
  pFVar3 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_30 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_30 = 0;
  }
  local_58 = SUB84(pFVar3,0);
  uStack_54 = (undefined4)((ulonglong)pFVar3 >> 0x20);
  local_38 = local_58;
  uStack_34 = uStack_54;
  (**(code **)(this->_padding_ + 0x28))(this,&local_38);
  this->PreviousTokenWritten = String;
  return;
}

// WriteValue<FString_&,TStringView<wchar_t>_&> @ 141dc2e70

void __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<FString_&,TStringView<wchar_t>_&>
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,TStringView<wchar_t> *param_1
          ,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  TStringView<wchar_t> local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar5 = 0;
  if ((int)uVar6 < iVar1) {
    uVar5 = ~uVar6 >> 0x1f;
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
                       ,0x110,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteIdentifier<wchar_t>(this,&local_28);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_10 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_10 = 0;
  }
  local_38 = SUB84(pFVar2,0);
  uStack_34 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_18 = local_38;
  uStack_14 = uStack_34;
  (**(code **)(this->_padding_ + 0x28))(this,&local_18);
  this->PreviousTokenWritten = String;
  return;
}

// WriteValue<FString_&,TStringView<wchar_t>_&> @ 141dc2fa0

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
WriteValue<FString_&,TStringView<wchar_t>_&>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,FString *param_2)

{
  int iVar1;
  EJsonToken EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined4 local_58;
  undefined4 uStack_54;
  wchar_t *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar9 = iVar1 - 1;
  uVar8 = 0;
  if ((int)uVar9 < iVar1) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar2 = this->PreviousTokenWritten;
  pwVar5 = param_1->DataPtr;
  uVar6 = *(undefined8 *)&param_1->Size;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  local_48 = pwVar5;
  uStack_40 = uVar6;
  (**(code **)(this->_padding_ + 0x28))(this,&local_48);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,2);
  this->PreviousTokenWritten = Identifier;
  pFVar3 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_30 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_30 = 0;
  }
  local_58 = SUB84(pFVar3,0);
  uStack_54 = (undefined4)((ulonglong)pFVar3 >> 0x20);
  local_38 = local_58;
  uStack_34 = uStack_54;
  (**(code **)(this->_padding_ + 0x28))(this,&local_38);
  this->PreviousTokenWritten = String;
  return;
}

// WriteValue<FString_&,TStringView<wchar_t>_&> @ 141dc3130

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString_&,TStringView<wchar_t>_&>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,TStringView<wchar_t> *param_1
          ,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_res8 [4];
  undefined4 local_38;
  undefined4 uStack_34;
  TStringView<wchar_t> local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar5 = 0;
  if ((int)uVar6 < iVar1) {
    uVar5 = ~uVar6 >> 0x1f;
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
                       ,0x110,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteIdentifier<wchar_t>(this,&local_28);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_10 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_10 = 0;
  }
  local_38 = SUB84(pFVar2,0);
  uStack_34 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_18 = local_38;
  uStack_14 = uStack_34;
  (**(code **)(this->_padding_ + 0x28))(this,&local_18);
  this->PreviousTokenWritten = String;
  return;
}

// WriteValue<__int64_&,TStringView<wchar_t>_&> @ 141dc3260

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
WriteValue<__int64_&,TStringView<wchar_t>_&>
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,long64 *param_2)

{
  int iVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  EJsonToken EVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  wchar_t *local_28;
  undefined8 uStack_20;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar8 = iVar1 - 1;
  uVar6 = 0;
  if ((int)uVar8 < iVar1) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar7 = this->PreviousTokenWritten;
  pwVar3 = param_1->DataPtr;
  uVar4 = *(undefined8 *)&param_1->Size;
  if ((EVar7 != CurlyOpen) && ((Identifier < EVar7 || ((0x1013U >> (EVar7 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    this->PreviousTokenWritten = Comma;
  }
  local_28 = pwVar3;
  uStack_20 = uVar4;
  (**(code **)(this->_padding_ + 0x28))(this,&local_28);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,1);
  this->PreviousTokenWritten = Identifier;
  EVar7 = WriteValueOnly(this,*param_2);
  this->PreviousTokenWritten = EVar7;
  return;
}

// WriteValue<__int64_&,TStringView<wchar_t>_&> @ 141dc33b0

void __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<__int64_&,TStringView<wchar_t>_&>
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,TStringView<wchar_t> *param_1
          ,long64 *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  TStringView<wchar_t> local_18;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar1) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
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
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteIdentifier<wchar_t>(this,&local_18);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  EVar5 = WriteValueOnly(this,*param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteValue<__int64_&,TStringView<wchar_t>_&> @ 141dc34b0

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
WriteValue<__int64_&,TStringView<wchar_t>_&>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,long64 *param_2)

{
  int iVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  EJsonToken EVar7;
  uint uVar8;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  wchar_t *local_28;
  undefined8 uStack_20;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar8 = iVar1 - 1;
  uVar6 = 0;
  if ((int)uVar8 < iVar1) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar7 = this->PreviousTokenWritten;
  pwVar3 = param_1->DataPtr;
  uVar4 = *(undefined8 *)&param_1->Size;
  if ((EVar7 != CurlyOpen) && ((Identifier < EVar7 || ((0x1013U >> (EVar7 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  local_28 = pwVar3;
  uStack_20 = uVar4;
  (**(code **)(this->_padding_ + 0x28))(this,&local_28);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,2);
  this->PreviousTokenWritten = Identifier;
  EVar7 = WriteValueOnly(this,*param_2);
  this->PreviousTokenWritten = EVar7;
  return;
}

// WriteValue<__int64_&,TStringView<wchar_t>_&> @ 141dc3600

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<__int64_&,TStringView<wchar_t>_&>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,TStringView<wchar_t> *param_1
          ,long64 *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  undefined2 local_res8 [4];
  TStringView<wchar_t> local_18;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar1) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
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
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteIdentifier<wchar_t>(this,&local_18);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  EVar5 = WriteValueOnly(this,*param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteValue<bool_&,TStringView<wchar_t>_&> @ 141dc3700

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteValue<bool_&,TStringView<wchar_t>_&>
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,bool *param_2)

{
  int iVar1;
  EJsonToken EVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  wchar_t *local_58;
  undefined8 uStack_50;
  TStringView<wchar_t> local_48;
  undefined4 local_2c;
  undefined4 local_1c;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar8 = iVar1 - 1;
  uVar7 = 0;
  if ((int)uVar8 < iVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar2 = this->PreviousTokenWritten;
  pwVar4 = param_1->DataPtr;
  uVar5 = *(undefined8 *)&param_1->Size;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    this->PreviousTokenWritten = Comma;
  }
  local_58 = pwVar4;
  uStack_50 = uVar5;
  (**(code **)(this->_padding_ + 0x28))(this,&local_58);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,1);
  this->PreviousTokenWritten = Identifier;
  bVar6 = *param_2;
  if (bVar6 == false) {
    uStack_50._0_4_ = 5;
    local_58 = L"false";
    local_2c = local_1c;
  }
  else {
    uStack_50._0_4_ = 4;
    local_58 = L"true";
  }
  uStack_50._4_4_ = local_2c;
  local_48.DataPtr = local_58;
  local_48.Size = (int)uStack_50;
  local_48._12_4_ = local_2c;
  TJsonPrintPolicy<char8_t>::WriteString(this->Stream,&local_48);
  this->PreviousTokenWritten = False - (bVar6 != false);
  return;
}

// WriteValue<bool_&,TStringView<wchar_t>_&> @ 141dc38b0

void __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<bool_&,TStringView<wchar_t>_&>
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,TStringView<wchar_t> *param_1
          ,bool *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  undefined4 local_1c;
  undefined4 local_c;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar5 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar5 < iVar1) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
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
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_48.DataPtr = param_1->DataPtr;
  local_48.Size = param_1->Size;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteIdentifier<wchar_t>(this,&local_48);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  bVar3 = *param_2;
  if (bVar3 == false) {
    local_48.Size = 5;
    local_48.DataPtr = L"false";
    local_1c = local_c;
  }
  else {
    local_48.Size = 4;
    local_48.DataPtr = L"true";
  }
  local_48._12_4_ = local_1c;
  local_38.DataPtr = local_48.DataPtr;
  local_38.Size = local_48.Size;
  local_38._12_4_ = local_1c;
  TJsonPrintPolicy<char8_t>::WriteString(this->Stream,&local_38);
  this->PreviousTokenWritten = False - (bVar3 != false);
  return;
}

// WriteValue<bool_&,TStringView<wchar_t>_&> @ 141dc3a10

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValue<bool_&,TStringView<wchar_t>_&>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,bool *param_2)

{
  int iVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  EJsonToken EVar7;
  uint uVar8;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  wchar_t *local_28;
  undefined8 uStack_20;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar8 = iVar1 - 1;
  uVar6 = 0;
  if ((int)uVar8 < iVar1) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar7 = this->PreviousTokenWritten;
  pwVar3 = param_1->DataPtr;
  uVar4 = *(undefined8 *)&param_1->Size;
  if ((EVar7 != CurlyOpen) && ((Identifier < EVar7 || ((0x1013U >> (EVar7 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  local_28 = pwVar3;
  uStack_20 = uVar4;
  (**(code **)(this->_padding_ + 0x28))(this,&local_28);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,2);
  this->PreviousTokenWritten = Identifier;
  EVar7 = WriteValueOnly(this,*param_2);
  this->PreviousTokenWritten = EVar7;
  return;
}

// WriteValue<bool_&,TStringView<wchar_t>_&> @ 141dc3b60

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<bool_&,TStringView<wchar_t>_&>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,TStringView<wchar_t> *param_1
          ,bool *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  undefined2 local_res8 [4];
  TStringView<wchar_t> local_18;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar1) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
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
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteIdentifier<wchar_t>(this,&local_18);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  EVar5 = WriteValueOnly(this,*param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// ~TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> @ 141dc6090

void __thiscall
TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::
~TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>
          (TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7__TJsonWriter_DU__TCondensedJsonPrintPolicy_D____6B_;
  pFVar1 = (this->Stack).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> @ 141dc60b0

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
~TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7__TJsonWriter__QU__TCondensedJsonPrintPolicy__Q____6B_;
  pFVar1 = (this->Stack).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> @ 141dc60d0

void __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
~TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7__TJsonWriter__QU__TPrettyJsonPrintPolicy__Q____6B_;
  pFVar1 = (this->Stack).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> @ 141dc60f0

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
~TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7__TJsonWriter__WU__TCondensedJsonPrintPolicy__W____6B_;
  pFVar1 = (this->Stack).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> @ 141dc6110

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
~TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7__TJsonWriter__WU__TPrettyJsonPrintPolicy__W____6B_;
  pFVar1 = (this->Stack).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// CanWriteValueWithoutIdentifier @ 141dce0b0

bool __thiscall
TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::CanWriteValueWithoutIdentifier
          (TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  iVar1 = (this->Stack).ArrayNum;
  if (0 < iVar1) {
    uVar5 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar5 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if ((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4)
         != 5) && (this->PreviousTokenWritten != Identifier)) {
      return false;
    }
  }
  return true;
}

// CanWriteValueWithoutIdentifier @ 141dce140

bool __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::CanWriteValueWithoutIdentifier
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  iVar1 = (this->Stack).ArrayNum;
  if (0 < iVar1) {
    uVar5 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar5 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if ((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4)
         != 5) && (this->PreviousTokenWritten != Identifier)) {
      return false;
    }
  }
  return true;
}

// CanWriteValueWithoutIdentifier @ 141dce1d0

bool __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::CanWriteValueWithoutIdentifier
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  iVar1 = (this->Stack).ArrayNum;
  if (0 < iVar1) {
    uVar5 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar5 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if ((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4)
         != 5) && (this->PreviousTokenWritten != Identifier)) {
      return false;
    }
  }
  return true;
}

// CanWriteValueWithoutIdentifier @ 141dce260

bool __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::CanWriteValueWithoutIdentifier
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  iVar1 = (this->Stack).ArrayNum;
  if (0 < iVar1) {
    uVar5 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar5 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if ((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4)
         != 5) && (this->PreviousTokenWritten != Identifier)) {
      return false;
    }
  }
  return true;
}

// CanWriteValueWithoutIdentifier @ 141dce2f0

bool __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::CanWriteValueWithoutIdentifier
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  iVar1 = (this->Stack).ArrayNum;
  if (0 < iVar1) {
    uVar5 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar5 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if ((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4)
         != 5) && (this->PreviousTokenWritten != Identifier)) {
      return false;
    }
  }
  return true;
}

// Close @ 141dcea70

bool __thiscall
TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::Close
          (TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *this)

{
  if (((this->PreviousTokenWritten == None) ||
      ((this->PreviousTokenWritten - CurlyClose & 0xfffffffd) == 0)) &&
     ((this->Stack).ArrayNum == 0)) {
    return true;
  }
  return false;
}

// Close @ 141dceaa0

bool __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Close
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this)

{
  if (((this->PreviousTokenWritten == None) ||
      ((this->PreviousTokenWritten - CurlyClose & 0xfffffffd) == 0)) &&
     ((this->Stack).ArrayNum == 0)) {
    return true;
  }
  return false;
}

// Close @ 141dcead0

bool __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Close
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this)

{
  if (((this->PreviousTokenWritten == None) ||
      ((this->PreviousTokenWritten - CurlyClose & 0xfffffffd) == 0)) &&
     ((this->Stack).ArrayNum == 0)) {
    return true;
  }
  return false;
}

// Close @ 141dceb00

bool __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Close
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this)

{
  if (((this->PreviousTokenWritten == None) ||
      ((this->PreviousTokenWritten - CurlyClose & 0xfffffffd) == 0)) &&
     ((this->Stack).ArrayNum == 0)) {
    return true;
  }
  return false;
}

// Close @ 141dceb30

bool __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Close
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this)

{
  if (((this->PreviousTokenWritten == None) ||
      ((this->PreviousTokenWritten - CurlyClose & 0xfffffffd) == 0)) &&
     ((this->Stack).ArrayNum == 0)) {
    return true;
  }
  return false;
}

// WriteArrayEnd @ 141dfcf60

void __thiscall
TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteArrayEnd
          (TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *this)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Stack).ArrayNum;
  uVar6 = iVar2 - 1;
  uVar5 = 0;
  if ((int)uVar6 < iVar2) {
    uVar5 = ~uVar6 >> 0x1f;
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
      5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Array",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xb9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->IndentLevel = this->IndentLevel + -1;
  local_res8[0] = 0x5d;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  if ((this->Stack).ArrayNum < 1) {
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
  iVar2 = (this->Stack).ArrayNum;
  uVar5 = iVar2 - 1;
  _Dst = (this->Stack).AllocatorInstance.Data + (longlong)(int)uVar5 * 4;
  iVar2 = ~uVar5 + iVar2;
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

// WriteArrayEnd @ 141dfd0c0

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteArrayEnd
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Stack).ArrayNum;
  uVar6 = iVar2 - 1;
  uVar5 = 0;
  if ((int)uVar6 < iVar2) {
    uVar5 = ~uVar6 >> 0x1f;
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
      5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Array",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xb9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->IndentLevel = this->IndentLevel + -1;
  local_res8[0] = 0x5d;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  if ((this->Stack).ArrayNum < 1) {
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
  iVar2 = (this->Stack).ArrayNum;
  uVar5 = iVar2 - 1;
  _Dst = (this->Stack).AllocatorInstance.Data + (longlong)(int)uVar5 * 4;
  iVar2 = ~uVar5 + iVar2;
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

// WriteArrayEnd @ 141dfd220

void __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteArrayEnd
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this)

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
    TJsonPrintPolicy<char8_t>::WriteString(this->Stream,&local_28);
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

// WriteArrayEnd @ 141dfd3f0

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_res8 [4];
  
  iVar2 = (this->Stack).ArrayNum;
  uVar6 = iVar2 - 1;
  uVar5 = 0;
  if ((int)uVar6 < iVar2) {
    uVar5 = ~uVar6 >> 0x1f;
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
      5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Array",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xb9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->IndentLevel = this->IndentLevel + -1;
  local_res8[0] = 0x5d;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  if ((this->Stack).ArrayNum < 1) {
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
  iVar2 = (this->Stack).ArrayNum;
  uVar5 = iVar2 - 1;
  _Dst = (this->Stack).AllocatorInstance.Data + (longlong)(int)uVar5 * 4;
  iVar2 = ~uVar5 + iVar2;
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

// WriteArrayEnd @ 141dfd550

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this)

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
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  
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
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,L"\r\n",4);
    pFVar3 = this->Stream;
    if (0 < this->IndentLevel) {
      uVar8 = (ulonglong)(uint)this->IndentLevel;
      do {
        local_res8[0] = 9;
        (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res8,2);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  local_res10[0] = 0x5d;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,2);
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

// WriteArrayStart @ 141dfd720

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteArrayStart
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this)

{
  int *piVar1;
  EJsonToken EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_18 [4];
  
  bVar5 = CanWriteValueWithoutIdentifier(this);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x9b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar2 = this->PreviousTokenWritten;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    this->PreviousTokenWritten = Comma;
  }
  local_res10[0] = 0x5b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,1);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar3 = (this->Stack).AllocatorInstance.Data;
  local_18[0] = 5;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Stack).ArrayMax * 4)) {
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

// WriteArrayStart @ 141dfd880

void __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteArrayStart
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this)

{
  int *piVar1;
  EJsonToken EVar2;
  FArchive *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined4 local_48 [4];
  wchar_t *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  
  bVar6 = CanWriteValueWithoutIdentifier(this);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x9b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar2 = this->PreviousTokenWritten;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1012U >> (EVar2 & 0x1f) & 1) == 0)))) {
    if (EVar2 == None) goto LAB_141dfd980;
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    this->PreviousTokenWritten = Comma;
  }
  local_38 = L"\r\n";
  uStack_30 = 2;
  local_28._12_4_ = uStack_2c;
  local_28.Size = 2;
  local_28.DataPtr = L"\r\n";
  TJsonPrintPolicy<char8_t>::WriteString(this->Stream,&local_28);
  pFVar3 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar8 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res10[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res10,1);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
LAB_141dfd980:
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
  iVar7 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Stack).AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar7 + 1;
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_48[0];
  this->PreviousTokenWritten = SquareOpen;
  return;
}

// WriteArrayStart @ 141dfda60

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this)

{
  int *piVar1;
  EJsonToken EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined4 local_18 [4];
  
  bVar5 = CanWriteValueWithoutIdentifier(this);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x9b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar2 = this->PreviousTokenWritten;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  local_res10[0] = 0x5b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,2);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar3 = (this->Stack).AllocatorInstance.Data;
  local_18[0] = 5;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Stack).ArrayMax * 4)) {
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

// WriteArrayStart @ 141dfdbc0

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this)

{
  int *piVar1;
  EJsonToken EVar2;
  FArchive *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  undefined4 local_28 [4];
  
  bVar6 = CanWriteValueWithoutIdentifier(this);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x9b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar2 = this->PreviousTokenWritten;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1012U >> (EVar2 & 0x1f) & 1) == 0)))) {
    if (EVar2 == None) goto LAB_141dfdcb5;
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,L"\r\n",4);
  pFVar3 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar8 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res10[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res10,2);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
LAB_141dfdcb5:
  local_res18[0] = 0x5b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,2);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar4 = (this->Stack).AllocatorInstance.Data;
  local_28[0] = 5;
  if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
      ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)(this->Stack).ArrayMax * 4)) &&
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
  iVar7 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Stack).AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar7 + 1;
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_28[0];
  this->PreviousTokenWritten = SquareOpen;
  return;
}

// WriteIdentifier @ 141dfe3d0

void __thiscall
TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteIdentifier
          (TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *this,FString *param_1)

{
  EJsonToken EVar1;
  int iVar2;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_18;
  int iStack_10;
  
  EVar1 = this->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    this->PreviousTokenWritten = Comma;
  }
  local_18 = (param_1->Data).AllocatorInstance.Data;
  iVar2 = (param_1->Data).ArrayNum;
  iStack_10 = iVar2 + -1;
  if (iVar2 == 0) {
    iStack_10 = 0;
  }
  (**(code **)(this->_padding_ + 0x28))(this,&local_18);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  this->PreviousTokenWritten = Identifier;
  return;
}

// WriteIdentifier @ 141dfe490

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteIdentifier
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,FString *param_1)

{
  EJsonToken EVar1;
  int iVar2;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_18;
  int iStack_10;
  
  EVar1 = this->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    this->PreviousTokenWritten = Comma;
  }
  local_18 = (param_1->Data).AllocatorInstance.Data;
  iVar2 = (param_1->Data).ArrayNum;
  iStack_10 = iVar2 + -1;
  if (iVar2 == 0) {
    iStack_10 = 0;
  }
  (**(code **)(this->_padding_ + 0x28))(this,&local_18);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  this->PreviousTokenWritten = Identifier;
  return;
}

// WriteIdentifier @ 141dfe550

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,FString *param_1)

{
  EJsonToken EVar1;
  int iVar2;
  undefined2 local_res8 [4];
  FScriptContainerElement *local_18;
  int iStack_10;
  
  EVar1 = this->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  local_18 = (param_1->Data).AllocatorInstance.Data;
  iVar2 = (param_1->Data).ArrayNum;
  iStack_10 = iVar2 + -1;
  if (iVar2 == 0) {
    iStack_10 = 0;
  }
  (**(code **)(this->_padding_ + 0x28))(this,&local_18);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  this->PreviousTokenWritten = Identifier;
  return;
}

// WriteIdentifier @ 141dfe610

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,FString *param_1)

{
  EJsonToken EVar1;
  int iVar2;
  FArchive *pFVar3;
  ulonglong uVar4;
  undefined2 local_res8 [4];
  FScriptContainerElement *local_28;
  int iStack_20;
  
  EVar1 = this->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,L"\r\n",4);
  pFVar3 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar4 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res8[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res8,2);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  local_28 = (param_1->Data).AllocatorInstance.Data;
  iVar2 = (param_1->Data).ArrayNum;
  iStack_20 = iVar2 + -1;
  if (iVar2 == 0) {
    iStack_20 = 0;
  }
  (**(code **)(this->_padding_ + 0x28))(this,&local_28);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  this->PreviousTokenWritten = Identifier;
  return;
}

// WriteObjectEnd @ 141dfef70

void __thiscall
TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteObjectEnd
          (TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *this)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Stack).ArrayNum;
  uVar6 = iVar2 - 1;
  uVar5 = 0;
  if ((int)uVar6 < iVar2) {
    uVar5 = ~uVar6 >> 0x1f;
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
                       ,0x8e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->IndentLevel = this->IndentLevel + -1;
  local_res8[0] = 0x7d;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  if ((this->Stack).ArrayNum < 1) {
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
  iVar2 = (this->Stack).ArrayNum;
  uVar5 = iVar2 - 1;
  _Dst = (this->Stack).AllocatorInstance.Data + (longlong)(int)uVar5 * 4;
  iVar2 = ~uVar5 + iVar2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + 4,(longlong)iVar2 << 2);
  }
  piVar1 = &(this->Stack).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,&(this->Stack).AllocatorInstance,(this->Stack).ArrayNum,&(this->Stack).ArrayMax);
  this->PreviousTokenWritten = CurlyClose;
  return;
}

// WriteObjectEnd @ 141dff0d0

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteObjectEnd
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Stack).ArrayNum;
  uVar6 = iVar2 - 1;
  uVar5 = 0;
  if ((int)uVar6 < iVar2) {
    uVar5 = ~uVar6 >> 0x1f;
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
                       ,0x8e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->IndentLevel = this->IndentLevel + -1;
  local_res8[0] = 0x7d;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  if ((this->Stack).ArrayNum < 1) {
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
  iVar2 = (this->Stack).ArrayNum;
  uVar5 = iVar2 - 1;
  _Dst = (this->Stack).AllocatorInstance.Data + (longlong)(int)uVar5 * 4;
  iVar2 = ~uVar5 + iVar2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + 4,(longlong)iVar2 << 2);
  }
  piVar1 = &(this->Stack).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,&(this->Stack).AllocatorInstance,(this->Stack).ArrayNum,&(this->Stack).ArrayMax);
  this->PreviousTokenWritten = CurlyClose;
  return;
}

// WriteObjectEnd @ 141dff230

void __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteObjectEnd
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this)

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
       6) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stack.Top() == EJson::Object",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0x8e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_28._12_4_ = uStack_2c;
  local_28.Size = 2;
  local_28.DataPtr = L"\r\n";
  TJsonPrintPolicy<char8_t>::WriteString(this->Stream,&local_28);
  this->IndentLevel = this->IndentLevel + -1;
  pFVar3 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar8 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res8[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res8,1);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  local_res10[0] = 0x7d;
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
  this->PreviousTokenWritten = CurlyClose;
  return;
}

// WriteObjectEnd @ 141dff400

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_res8 [4];
  
  iVar2 = (this->Stack).ArrayNum;
  uVar6 = iVar2 - 1;
  uVar5 = 0;
  if ((int)uVar6 < iVar2) {
    uVar5 = ~uVar6 >> 0x1f;
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
                       ,0x8e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->IndentLevel = this->IndentLevel + -1;
  local_res8[0] = 0x7d;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  if ((this->Stack).ArrayNum < 1) {
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
  iVar2 = (this->Stack).ArrayNum;
  uVar5 = iVar2 - 1;
  _Dst = (this->Stack).AllocatorInstance.Data + (longlong)(int)uVar5 * 4;
  iVar2 = ~uVar5 + iVar2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + 4,(longlong)iVar2 << 2);
  }
  piVar1 = &(this->Stack).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,&(this->Stack).AllocatorInstance,(this->Stack).ArrayNum,&(this->Stack).ArrayMax);
  this->PreviousTokenWritten = CurlyClose;
  return;
}

// WriteObjectEnd @ 141dff560

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this)

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
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  
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
       6) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stack.Top() == EJson::Object",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0x8e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,L"\r\n",4);
  this->IndentLevel = this->IndentLevel + -1;
  pFVar3 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar8 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res8[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res8,2);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  local_res10[0] = 0x7d;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,2);
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
  this->PreviousTokenWritten = CurlyClose;
  return;
}

// WriteObjectStart @ 141dff730

void __thiscall
TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteObjectStart
          (TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *this)

{
  int *piVar1;
  EJsonToken EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<EJson,TSizedDefaultAllocator<32>_> *pTVar8;
  EJsonToken *pEVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_18 [4];
  
  iVar7 = (this->Stack).ArrayNum;
  if (0 < iVar7) {
    uVar6 = 0;
    if ((int)(iVar7 - 1U) < iVar7) {
      uVar6 = ~(iVar7 - 1U) >> 0x1f;
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
    if ((((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4
                   ) != 5) && (this->PreviousTokenWritten != Identifier)) &&
        (this->PreviousTokenWritten != Colon)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteObjectWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x6f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pEVar9 = &this->PreviousTokenWritten;
  pTVar8 = &this->Stack;
  EVar2 = *pEVar9;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    *pEVar9 = Comma;
  }
  local_res10[0] = 0x7b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,1);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar3 = (pTVar8->AllocatorInstance).Data;
  local_18[0] = 6;
  if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Stack).ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar8->AllocatorInstance,piVar1);
    (this->Stack).ArrayNum = iVar7;
  }
  (this->Stack).ArrayNum = iVar7 + 1;
  *(undefined4 *)((pTVar8->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_18[0];
  *pEVar9 = CurlyOpen;
  return;
}

// WriteObjectStart @ 141dff910

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteObjectStart
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this)

{
  int *piVar1;
  EJsonToken EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<EJson,TSizedDefaultAllocator<32>_> *pTVar8;
  EJsonToken *pEVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_18 [4];
  
  iVar7 = (this->Stack).ArrayNum;
  if (0 < iVar7) {
    uVar6 = 0;
    if ((int)(iVar7 - 1U) < iVar7) {
      uVar6 = ~(iVar7 - 1U) >> 0x1f;
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
    if ((((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4
                   ) != 5) && (this->PreviousTokenWritten != Identifier)) &&
        (this->PreviousTokenWritten != Colon)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteObjectWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x6f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pEVar9 = &this->PreviousTokenWritten;
  pTVar8 = &this->Stack;
  EVar2 = *pEVar9;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    *pEVar9 = Comma;
  }
  local_res10[0] = 0x7b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,1);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar3 = (pTVar8->AllocatorInstance).Data;
  local_18[0] = 6;
  if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Stack).ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar8->AllocatorInstance,piVar1);
    (this->Stack).ArrayNum = iVar7;
  }
  (this->Stack).ArrayNum = iVar7 + 1;
  *(undefined4 *)((pTVar8->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_18[0];
  *pEVar9 = CurlyOpen;
  return;
}

// WriteObjectStart @ 141dffaf0

void __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteObjectStart
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this)

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
    if (EVar2 == None) goto LAB_141dffc60;
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    this->PreviousTokenWritten = Comma;
  }
  local_38 = L"\r\n";
  uStack_30 = 2;
  local_28._12_4_ = uStack_2c;
  local_28.Size = 2;
  local_28.DataPtr = L"\r\n";
  TJsonPrintPolicy<char8_t>::WriteString(this->Stream,&local_28);
  pFVar3 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar9 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res10[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res10,1);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
LAB_141dffc60:
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

// WriteObjectStart @ 141dffd40

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this)

{
  int *piVar1;
  EJsonToken EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<EJson,TSizedDefaultAllocator<32>_> *pTVar8;
  EJsonToken *pEVar9;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined4 local_18 [4];
  
  iVar7 = (this->Stack).ArrayNum;
  if (0 < iVar7) {
    uVar6 = 0;
    if ((int)(iVar7 - 1U) < iVar7) {
      uVar6 = ~(iVar7 - 1U) >> 0x1f;
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
    if ((((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4
                   ) != 5) && (this->PreviousTokenWritten != Identifier)) &&
        (this->PreviousTokenWritten != Colon)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteObjectWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x6f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pEVar9 = &this->PreviousTokenWritten;
  pTVar8 = &this->Stack;
  EVar2 = *pEVar9;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    *pEVar9 = Comma;
  }
  local_res10[0] = 0x7b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,2);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar3 = (pTVar8->AllocatorInstance).Data;
  local_18[0] = 6;
  if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Stack).ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar8->AllocatorInstance,piVar1);
    (this->Stack).ArrayNum = iVar7;
  }
  (this->Stack).ArrayNum = iVar7 + 1;
  *(undefined4 *)((pTVar8->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_18[0];
  *pEVar9 = CurlyOpen;
  return;
}

// WriteObjectStart @ 141dfff20

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this)

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
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  undefined4 local_28 [4];
  
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
    if (EVar2 == None) goto LAB_141e0008a;
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,L"\r\n",4);
  pFVar3 = this->Stream;
  if (0 < this->IndentLevel) {
    uVar9 = (ulonglong)(uint)this->IndentLevel;
    do {
      local_res10[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res10,2);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
LAB_141e0008a:
  local_res18[0] = 0x7b;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,2);
  this->IndentLevel = this->IndentLevel + 1;
  pFVar4 = (this->Stack).AllocatorInstance.Data;
  local_28[0] = 6;
  if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
      ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)(this->Stack).ArrayMax * 4)) &&
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
  *(undefined4 *)((this->Stack).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_28[0];
  this->PreviousTokenWritten = CurlyOpen;
  return;
}

// WriteRawJSONValue @ 141e00770

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteRawJSONValue
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  EJsonToken EVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 local_res8 [32];
  TStringView<wchar_t> local_28 [2];
  
  pwVar3 = param_1->DataPtr;
  uVar4._0_4_ = param_1->Size;
  uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar5 = CanWriteValueWithoutIdentifier(this);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x27a,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar1 = this->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    this->PreviousTokenWritten = Comma;
  }
  local_28[0].DataPtr = pwVar3;
  local_28[0]._8_8_ = uVar4;
  TJsonPrintPolicy<char8_t>::WriteString(this->Stream,local_28);
  this->PreviousTokenWritten = String;
  return;
}

// WriteRawJSONValue @ 141e00820

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteRawJSONValue
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  EJsonToken EVar1;
  FArchive *pFVar2;
  undefined8 uVar3;
  bool bVar4;
  size_t sVar5;
  int iVar6;
  wchar_t *_Str;
  code *pcVar7;
  undefined2 local_res8 [4];
  
  _Str = param_1->DataPtr;
  uVar3 = *(undefined8 *)&param_1->Size;
  bVar4 = CanWriteValueWithoutIdentifier(this);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x27a,L"");
    if (bVar4) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  EVar1 = this->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  pFVar2 = this->Stream;
  iVar6 = (int)uVar3;
  if (_Str == (wchar_t *)0x0) {
    iVar6 = 0;
    _Str = (wchar_t *)0x0;
    pcVar7 = *(code **)(*(longlong *)pFVar2 + 0x188);
  }
  else {
    if ((0 < iVar6) && (_Str[(longlong)iVar6 + -1] == L'\0')) {
      iVar6 = iVar6 + -1;
    }
    pcVar7 = *(code **)(*(longlong *)pFVar2 + 0x188);
    if (iVar6 == -1) {
      sVar5 = wcslen(_Str);
      iVar6 = (int)sVar5;
    }
  }
  (*pcVar7)(pFVar2,_Str,(longlong)iVar6 * 2);
  this->PreviousTokenWritten = String;
  return;
}

// WriteRawJSONValue @ 141e00940

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteRawJSONValue
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,TStringView<wchar_t> *param_1
          ,TStringView<wchar_t> *param_2)

{
  FArchive *pFVar1;
  wchar_t *_Str;
  undefined8 uVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  size_t sVar7;
  uint uVar8;
  int iVar9;
  code *pcVar10;
  undefined2 local_res8 [4];
  TStringView<wchar_t> local_38 [3];
  
  _Str = param_2->DataPtr;
  uVar2 = *(undefined8 *)&param_2->Size;
  iVar9 = (this->Stack).ArrayNum;
  pwVar3 = param_1->DataPtr;
  uVar4._0_4_ = param_1->Size;
  uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
  uVar8 = iVar9 - 1;
  uVar6 = 0;
  if ((int)uVar8 < iVar9) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x26f,L"");
    if (bVar5) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  local_38[0].DataPtr = pwVar3;
  local_38[0]._8_8_ = uVar4;
  WriteIdentifier<wchar_t>(this,local_38);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  pFVar1 = this->Stream;
  iVar9 = (int)uVar2;
  if (_Str == (wchar_t *)0x0) {
    iVar9 = 0;
    pcVar10 = *(code **)(*(longlong *)pFVar1 + 0x188);
  }
  else {
    if ((0 < iVar9) && (_Str[(longlong)iVar9 + -1] == L'\0')) {
      iVar9 = iVar9 + -1;
    }
    pcVar10 = *(code **)(*(longlong *)pFVar1 + 0x188);
    if (iVar9 == -1) {
      sVar7 = wcslen(_Str);
      iVar9 = (int)sVar7;
    }
  }
  (*pcVar10)(pFVar1,_Str,(longlong)iVar9 * 2);
  this->PreviousTokenWritten = String;
  return;
}

// WriteStringValue @ 141e01230

void __thiscall
TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteStringValue
          (TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_res8 [32];
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_res8[0] = 0x22;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  WriteEscapedString<wchar_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  return;
}

// WriteStringValue @ 141e012b0

void __thiscall
TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteStringValue
          (TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *this,FUtf8String *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_res8 [32];
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = (uchar *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_res8[0] = 0x22;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  WriteEscapedString<char8_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  return;
}

// WriteStringValue @ 141e01330

void __thiscall
TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteStringValue
          (TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *this,TStringView<char> *param_1)

{
  undefined1 local_res8 [8];
  TStringView<char> local_18;
  
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteEscapedString<char>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  return;
}

// WriteStringValue @ 141e013a0

void __thiscall
TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteStringValue
          (TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *this,TStringView<char8_t> *param_1)

{
  undefined1 local_res8 [8];
  TStringView<char8_t> local_18;
  
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteEscapedString<char8_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  return;
}

// WriteStringValue @ 141e01410

void __thiscall
TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteStringValue
          (TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *this,TStringView<wchar_t> *param_1)

{
  undefined1 local_res8 [8];
  TStringView<wchar_t> local_18;
  
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteEscapedString<wchar_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  return;
}

// WriteStringValue @ 141e01480

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteStringValue
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_res8 [32];
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_res8[0] = 0x22;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  WriteEscapedString<wchar_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  return;
}

// WriteStringValue @ 141e01500

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteStringValue
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,FUtf8String *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_res8 [32];
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = (uchar *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_res8[0] = 0x22;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  WriteEscapedString<char8_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  return;
}

// WriteStringValue @ 141e01580

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteStringValue
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,TStringView<char> *param_1
          )

{
  undefined1 local_res8 [8];
  TStringView<char> local_18;
  
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteEscapedString<char>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  return;
}

// WriteStringValue @ 141e015f0

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteStringValue
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<char8_t> *param_1)

{
  undefined1 local_res8 [8];
  TStringView<char8_t> local_18;
  
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteEscapedString<char8_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  return;
}

// WriteStringValue @ 141e01660

void __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteStringValue
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  undefined1 local_res8 [8];
  TStringView<wchar_t> local_18;
  
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteEscapedString<wchar_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  return;
}

// WriteStringValue @ 141e016d0

void __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteStringValue
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_res8 [32];
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_res8[0] = 0x22;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  WriteEscapedString<wchar_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  return;
}

// WriteStringValue @ 141e01750

void __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteStringValue
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,FUtf8String *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_res8 [32];
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = (uchar *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_res8[0] = 0x22;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  WriteEscapedString<char8_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  return;
}

// WriteStringValue @ 141e017d0

void __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteStringValue
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,TStringView<char> *param_1)

{
  undefined1 local_res8 [8];
  TStringView<char> local_18;
  
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteEscapedString<char>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  return;
}

// WriteStringValue @ 141e01840

void __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteStringValue
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,TStringView<char8_t> *param_1
          )

{
  undefined1 local_res8 [8];
  TStringView<char8_t> local_18;
  
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteEscapedString<char8_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  return;
}

// WriteStringValue @ 141e018b0

void __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteStringValue
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,TStringView<wchar_t> *param_1
          )

{
  undefined1 local_res8 [8];
  TStringView<wchar_t> local_18;
  
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteEscapedString<wchar_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
  return;
}

// WriteStringValue @ 141e01920

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 local_res8 [4];
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_res8[0] = 0x22;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  WriteEscapedString<wchar_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  return;
}

// WriteStringValue @ 141e019b0

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,FUtf8String *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 local_res8 [4];
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = (uchar *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_res8[0] = 0x22;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  WriteEscapedString<char8_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  return;
}

// WriteStringValue @ 141e01a40

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,TStringView<char> *param_1
          )

{
  undefined2 local_res8 [4];
  TStringView<char> local_18;
  
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteEscapedString<char>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  return;
}

// WriteStringValue @ 141e01ac0

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<char8_t> *param_1)

{
  undefined2 local_res8 [4];
  TStringView<char8_t> local_18;
  
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteEscapedString<char8_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  return;
}

// WriteStringValue @ 141e01b40

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  undefined2 local_res8 [4];
  TStringView<wchar_t> local_18;
  
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteEscapedString<wchar_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  return;
}

// WriteStringValue @ 141e01bc0

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteStringValue
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 local_res8 [4];
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_res8[0] = 0x22;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  WriteEscapedString<wchar_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  return;
}

// WriteStringValue @ 141e01c50

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteStringValue
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,FUtf8String *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 local_res8 [4];
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = (uchar *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_res8[0] = 0x22;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  WriteEscapedString<char8_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  return;
}

// WriteStringValue @ 141e01ce0

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteStringValue
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,TStringView<char> *param_1)

{
  undefined2 local_res8 [4];
  TStringView<char> local_18;
  
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteEscapedString<char>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  return;
}

// WriteStringValue @ 141e01d60

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteStringValue
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,TStringView<char8_t> *param_1
          )

{
  undefined2 local_res8 [4];
  TStringView<char8_t> local_18;
  
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteEscapedString<char8_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  return;
}

// WriteStringValue @ 141e01de0

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteStringValue
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,TStringView<wchar_t> *param_1
          )

{
  undefined2 local_res8 [4];
  TStringView<wchar_t> local_18;
  
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  WriteEscapedString<wchar_t>(this,&local_18);
  local_res8[0] = 0x22;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  return;
}

// WriteValueOnly @ 141e02160

EJsonToken __thiscall
TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteValueOnly
          (TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *this,double param_1)

{
  FArchive *pFVar1;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  pFVar1 = this->Stream;
  ::FString::PrintfImpl(&local_28,L"%.17g");
  local_18.Size = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  TJsonPrintPolicy<char>::WriteString(pFVar1,&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return Number;
}

// WriteValueOnly @ 141e021e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EJsonToken __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteValueOnly
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,long64 param_1)

{
  undefined1 auStack_a8 [32];
  TStringView<wchar_t> local_88;
  TStringBuilderBase<wchar_t> local_78;
  wchar_t local_58 [32];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78.Base = local_58;
  local_78.CurPos = local_58;
  local_78.End = (wchar_t *)local_18;
  local_78.bIsDynamic = false;
  local_78.bIsExternal = false;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_78,L"%lld");
  local_88.Size = (int)((longlong)local_78.CurPos - (longlong)local_78.Base >> 1);
  local_88.DataPtr = local_78.Base;
  TJsonPrintPolicy<char8_t>::WriteString(this->Stream,&local_88);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_78);
  return Number;
}

// WriteValueOnly @ 141e022a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EJsonToken __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValueOnly
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,long64 param_1)

{
  undefined1 auStack_a8 [32];
  TStringView<wchar_t> local_88;
  TStringBuilderBase<wchar_t> local_78;
  wchar_t local_58 [32];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78.Base = local_58;
  local_78.CurPos = local_58;
  local_78.End = (wchar_t *)local_18;
  local_78.bIsDynamic = false;
  local_78.bIsExternal = false;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_78,L"%lld");
  local_88.Size = (int)((longlong)local_78.CurPos - (longlong)local_78.Base >> 1);
  local_88.DataPtr = local_78.Base;
  TJsonPrintPolicy<char8_t>::WriteString(this->Stream,&local_88);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_78);
  return Number;
}

// WriteValueOnly @ 141e02360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EJsonToken __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValueOnly
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,long64 param_1)

{
  FArchive *pFVar1;
  wchar_t *pwVar2;
  size_t sVar3;
  int iVar4;
  code *pcVar5;
  undefined1 auStack_98 [32];
  TStringBuilderBase<wchar_t> local_78;
  wchar_t local_58 [32];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.Base = local_58;
  local_78.CurPos = local_58;
  local_78.End = (wchar_t *)local_18;
  local_78.bIsDynamic = false;
  local_78.bIsExternal = false;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_78,L"%lld");
  pwVar2 = local_78.Base;
  pFVar1 = this->Stream;
  iVar4 = (int)((longlong)local_78.CurPos - (longlong)local_78.Base >> 1);
  if (local_78.Base == (wchar_t *)0x0) {
    iVar4 = 0;
    pcVar5 = *(code **)(*(longlong *)pFVar1 + 0x188);
  }
  else {
    if ((0 < iVar4) && (local_78.Base[(longlong)iVar4 + -1] == L'\0')) {
      iVar4 = iVar4 + -1;
    }
    pcVar5 = *(code **)(*(longlong *)pFVar1 + 0x188);
    if (iVar4 == -1) {
      sVar3 = wcslen(local_78.Base);
      iVar4 = (int)sVar3;
    }
  }
  (*pcVar5)(pFVar1,pwVar2,(longlong)iVar4 * 2);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_78);
  return Number;
}

// WriteValueOnly @ 141e02460

EJsonToken __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValueOnly
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,bool param_1)

{
  FArchive *pFVar1;
  code *pcVar2;
  size_t sVar3;
  int iVar4;
  wchar_t *_Str;
  
  pFVar1 = this->Stream;
  if (param_1) {
    _Str = L"true";
    iVar4 = 4;
  }
  else {
    _Str = L"false";
    iVar4 = 5;
  }
  if (_Str[(longlong)iVar4 + -1] == L'\0') {
    iVar4 = iVar4 + -1;
  }
  pcVar2 = *(code **)(*(longlong *)pFVar1 + 0x188);
  if (iVar4 == -1) {
    sVar3 = wcslen(_Str);
    iVar4 = (int)sVar3;
  }
  (*pcVar2)(pFVar1,_Str,(longlong)iVar4 * 2);
  return (param_1 ^ 1) + True;
}

// WriteValueOnly @ 141e02510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EJsonToken __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,long64 param_1)

{
  FArchive *pFVar1;
  wchar_t *pwVar2;
  size_t sVar3;
  int iVar4;
  code *pcVar5;
  undefined1 auStack_98 [32];
  TStringBuilderBase<wchar_t> local_78;
  wchar_t local_58 [32];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.Base = local_58;
  local_78.CurPos = local_58;
  local_78.End = (wchar_t *)local_18;
  local_78.bIsDynamic = false;
  local_78.bIsExternal = false;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_78,L"%lld");
  pwVar2 = local_78.Base;
  pFVar1 = this->Stream;
  iVar4 = (int)((longlong)local_78.CurPos - (longlong)local_78.Base >> 1);
  if (local_78.Base == (wchar_t *)0x0) {
    iVar4 = 0;
    pcVar5 = *(code **)(*(longlong *)pFVar1 + 0x188);
  }
  else {
    if ((0 < iVar4) && (local_78.Base[(longlong)iVar4 + -1] == L'\0')) {
      iVar4 = iVar4 + -1;
    }
    pcVar5 = *(code **)(*(longlong *)pFVar1 + 0x188);
    if (iVar4 == -1) {
      sVar3 = wcslen(local_78.Base);
      iVar4 = (int)sVar3;
    }
  }
  (*pcVar5)(pFVar1,pwVar2,(longlong)iVar4 * 2);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_78);
  return Number;
}

// WriteValueOnly @ 141e02610

EJsonToken __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,bool param_1)

{
  FArchive *pFVar1;
  code *pcVar2;
  size_t sVar3;
  int iVar4;
  wchar_t *_Str;
  
  pFVar1 = this->Stream;
  if (param_1) {
    _Str = L"true";
    iVar4 = 4;
  }
  else {
    _Str = L"false";
    iVar4 = 5;
  }
  if (_Str[(longlong)iVar4 + -1] == L'\0') {
    iVar4 = iVar4 + -1;
  }
  pcVar2 = *(code **)(*(longlong *)pFVar1 + 0x188);
  if (iVar4 == -1) {
    sVar3 = wcslen(_Str);
    iVar4 = (int)sVar3;
  }
  (*pcVar2)(pFVar1,_Str,(longlong)iVar4 * 2);
  return (param_1 ^ 1) + True;
}

