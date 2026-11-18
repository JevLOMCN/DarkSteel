// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 30

// WriteArrayStart<wchar_t_const_(&)[10]> @ 1431b69e0

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[10]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [10])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteArrayStart<wchar_t_const_(&)[17]> @ 1431b6b70

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[17]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [17])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteArrayStart<wchar_t_const_(&)[12]> @ 1431b6d00

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[12]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [12])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteArrayStart<wchar_t_const_(&)[15]> @ 1431b6e90

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[15]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [15])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteIdentifier<wchar_t> @ 1431b7020

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t *param_1)

{
  EJsonToken EVar1;
  code *pcVar2;
  size_t sVar3;
  undefined2 local_res8 [4];
  wchar_t *local_18;
  undefined4 uStack_10;
  
  EVar1 = this->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  pcVar2 = *(code **)(this->_padding_ + 0x28);
  uStack_10 = 0;
  local_18 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_1);
    uStack_10 = (undefined4)sVar3;
  }
  (*pcVar2)(this,&local_18);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  this->PreviousTokenWritten = Identifier;
  return;
}

// WriteObjectStart<wchar_t_const_(&)[18]> @ 1431b70f0

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[18]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [18])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteObjectStart<wchar_t_const_(&)[13]> @ 1431b7280

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[13]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [13])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteObjectStart<wchar_t_const_(&)[14]> @ 1431b7410

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[14]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [14])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteValue<FString_&,wchar_t_const_(&)[11]> @ 1431b7690

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
WriteValue<FString_&,wchar_t_const_(&)[11]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [11],
          FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_28;
  undefined4 uStack_24;
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
  WriteIdentifier<wchar_t>(this,*param_1);
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_10 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_10 = 0;
  }
  local_28 = SUB84(pFVar2,0);
  uStack_24 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_18 = local_28;
  uStack_14 = uStack_24;
  (**(code **)(this->_padding_ + 0x28))(this,&local_18);
  this->PreviousTokenWritten = String;
  return;
}

// WriteValue<FString_&,wchar_t_const_(&)[14]> @ 1431b77a0

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
WriteValue<FString_&,wchar_t_const_(&)[14]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [14],
          FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_28;
  undefined4 uStack_24;
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
  WriteIdentifier<wchar_t>(this,*param_1);
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_10 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_10 = 0;
  }
  local_28 = SUB84(pFVar2,0);
  uStack_24 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_18 = local_28;
  uStack_14 = uStack_24;
  (**(code **)(this->_padding_ + 0x28))(this,&local_18);
  this->PreviousTokenWritten = String;
  return;
}

// WriteValue @ 1431feda0

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValue
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,FString *param_1)

{
  int iVar1;
  EJsonToken EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  EJsonToken *pEVar7;
  undefined2 local_res8 [4];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  
  iVar1 = (this->Stack).ArrayNum;
  if (0 < iVar1) {
    uVar6 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar6 = ~(iVar1 - 1U) >> 0x1f;
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
    if (((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4)
          != 5) && (this->PreviousTokenWritten != Identifier)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteValueWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0xfa,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pEVar7 = &this->PreviousTokenWritten;
  EVar2 = *pEVar7;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    *pEVar7 = Comma;
  }
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iStack_10 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_10 = 0;
  }
  local_28 = SUB84(pFVar3,0);
  uStack_24 = (undefined4)((ulonglong)pFVar3 >> 0x20);
  local_18 = local_28;
  uStack_14 = uStack_24;
  (**(code **)(this->_padding_ + 0x28))(this,&local_18);
  *pEVar7 = String;
  return;
}

// WriteArrayStart<wchar_t_const_(&)[19]> @ 14321e120

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[19]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [19])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteArrayStart<wchar_t_const_(&)[24]> @ 14321e2b0

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[24]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [24])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteArrayStart<wchar_t_const_(&)[13]> @ 14321e440

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[13]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [13])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteArrayStart<wchar_t_const_(&)[14]> @ 14321e5d0

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[14]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [14])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteIdentifier<char> @ 14321e760

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier<char>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,char *param_1)

{
  EJsonToken EVar1;
  code *pcVar2;
  size_t sVar3;
  undefined2 local_res8 [4];
  char *local_18;
  undefined4 uStack_10;
  
  EVar1 = this->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  uStack_10 = 0;
  local_18 = param_1;
  if (param_1 != (char *)0x0) {
    sVar3 = strlen(param_1);
    uStack_10 = (undefined4)sVar3;
  }
  (*pcVar2)(this,&local_18);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  this->PreviousTokenWritten = Identifier;
  return;
}

// WriteObjectStart<wchar_t_const_(&)[10]> @ 14321e830

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[10]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [10])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteObjectStart<char_const_(&)[24]> @ 14321e9c0

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<char_const_(&)[24]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,char (*param_1) [24])

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
  WriteIdentifier<char>(this,*param_1);
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

// WriteObjectStart<wchar_t_const_(&)[24]> @ 14321eb50

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[24]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [24])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteObjectStart<char_const_(&)[27]> @ 14321ece0

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<char_const_(&)[27]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,char (*param_1) [27])

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
  WriteIdentifier<char>(this,*param_1);
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

// WriteObjectStart<wchar_t_const_(&)[27]> @ 14321ee70

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[27]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [27])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteObjectStart<wchar_t_const_(&)[31]> @ 14321f000

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[31]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [31])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteValue<__int64_&,wchar_t_const_(&)[10]> @ 14321f190

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
WriteValue<__int64_&,wchar_t_const_(&)[10]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [10],
          long64 *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  
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
  WriteIdentifier<wchar_t>(this,*param_1);
  EVar5 = WriteValueOnly(this,*param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteValue<__int64_&,wchar_t_const_(&)[13]> @ 14321f260

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
WriteValue<__int64_&,wchar_t_const_(&)[13]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [13],
          long64 *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  
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
  WriteIdentifier<wchar_t>(this,*param_1);
  EVar5 = WriteValueOnly(this,*param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteValue<FString_const_&,wchar_t_const_(&)[8]> @ 14321f330

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
WriteValue<FString_const_&,wchar_t_const_(&)[8]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [8],
          FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_28;
  undefined4 uStack_24;
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
  WriteIdentifier<wchar_t>(this,*param_1);
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_10 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_10 = 0;
  }
  local_28 = SUB84(pFVar2,0);
  uStack_24 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_18 = local_28;
  uStack_14 = uStack_24;
  (**(code **)(this->_padding_ + 0x28))(this,&local_18);
  this->PreviousTokenWritten = String;
  return;
}

// WriteValue<FString_const_&,wchar_t_const_(&)[14]> @ 14321f440

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
WriteValue<FString_const_&,wchar_t_const_(&)[14]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [14],
          FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_28;
  undefined4 uStack_24;
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
  WriteIdentifier<wchar_t>(this,*param_1);
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_10 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_10 = 0;
  }
  local_28 = SUB84(pFVar2,0);
  uStack_24 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_18 = local_28;
  uStack_14 = uStack_24;
  (**(code **)(this->_padding_ + 0x28))(this,&local_18);
  this->PreviousTokenWritten = String;
  return;
}

// WriteValue<__int64_const_&,FString_const_&> @ 14321f550

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
WriteValue<__int64_const_&,FString_const_&>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,FString *param_1,
          long64 *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  EJsonToken EVar6;
  uint uVar7;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  
  iVar1 = (this->Stack).ArrayNum;
  uVar7 = iVar1 - 1;
  uVar5 = 0;
  if ((int)uVar7 < iVar1) {
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
                       ,0x110,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar6 = this->PreviousTokenWritten;
  if ((EVar6 != CurlyOpen) && ((Identifier < EVar6 || ((0x1013U >> (EVar6 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iStack_20 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_20 = 0;
  }
  local_38 = SUB84(pFVar2,0);
  uStack_34 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_28 = local_38;
  uStack_24 = uStack_34;
  (**(code **)(this->_padding_ + 0x28))(this,&local_28);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res10,2);
  this->PreviousTokenWritten = Identifier;
  EVar6 = WriteValueOnly(this,*param_2);
  this->PreviousTokenWritten = EVar6;
  return;
}

// WriteValue<int,wchar_t_const_(&)[6]> @ 14321f6b0

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValue<int,wchar_t_const_(&)[6]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [6],
          int *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  
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
  WriteIdentifier<wchar_t>(this,*param_1);
  EVar5 = WriteValueOnly(this,(longlong)*param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteCommaIfNeeded @ 14326e680

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteCommaIfNeeded
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this)

{
  EJsonToken EVar1;
  undefined2 local_res8 [16];
  
  EVar1 = this->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    this->PreviousTokenWritten = Comma;
  }
  return;
}

// WriteArrayStart<wchar_t_const_(&)[18]> @ 14327d890

void __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[18]>
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [18])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

