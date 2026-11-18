// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: JsonUtilities
// Functions: 56

// WriteArrayStart<wchar_t_const_(&)[17]> @ 1446200a0

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[17]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [17])

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

// WriteArrayStart<wchar_t_const_(&)[22]> @ 144620260

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[22]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [22])

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

// WriteArrayStart<wchar_t_const_(&)[27]> @ 144620420

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[27]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [27])

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

// WriteArrayStart<wchar_t_const_(&)[12]> @ 1446205e0

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[12]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [12])

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

// WriteArrayStart<wchar_t_const_(&)[15]> @ 1446207a0

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[15]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [15])

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

// WriteObjectStart<wchar_t_const_*_&> @ 144620960

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_*_&>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t **param_1)

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteObjectStart<wchar_t_const_(&)[6]> @ 144620b60

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[6]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [6])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteObjectStart<wchar_t_const_(&)[7]> @ 144620d60

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[7]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [7])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteObjectStart<wchar_t_const_(&)[8]> @ 144620f60

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[8]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [8])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteObjectStart<wchar_t_const_(&)[10]> @ 144621160

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[10]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [10])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteObjectStart<wchar_t_const_(&)[18]> @ 144621360

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[18]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [18])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteObjectStart<wchar_t_const_(&)[19]> @ 144621560

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[19]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [19])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteObjectStart<wchar_t_const_(&)[24]> @ 144621760

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[24]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [24])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteObjectStart<wchar_t_const_(&)[11]> @ 144621960

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[11]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [11])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteObjectStart<wchar_t_const_(&)[12]> @ 144621b60

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[12]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [12])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteObjectStart<wchar_t_const_(&)[13]> @ 144621d60

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[13]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [13])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteObjectStart<wchar_t_const_(&)[14]> @ 144621f60

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[14]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [14])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteObjectStart<wchar_t_const_(&)[15]> @ 144622160

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_(&)[15]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [15])

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
  WriteIdentifier<wchar_t>(this,*param_1);
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

// WriteObjectStart<FString_const_&> @ 144622360

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<FString_const_&>
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

// WriteObjectStart<FString> @ 144622560

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<FString>
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

// WriteValue<TArray<FString,TSizedDefaultAllocator<32>_>_&,wchar_t_const_(&)[9]> @ 144623090

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
WriteValue<TArray<FString,TSizedDefaultAllocator<32>_>_&,wchar_t_const_(&)[9]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [9],
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  undefined2 local_res8 [4];
  
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  EVar5 = WriteValueOnly<FString>(this,param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteValue<wchar_t_const_(&)[9]> @ 144623180

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<wchar_t_const_(&)[9]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [9],
          uchar param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  undefined2 local_res18 [8];
  
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
                       ,0x106,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  WriteIdentifier<wchar_t>(this,*param_1);
  local_res18[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,2);
  EVar5 = WriteValueOnly(this,(ulonglong)param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteValue<wchar_t_const_(&)[10]> @ 144623280

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<wchar_t_const_(&)[10]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [10],
          uchar param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  undefined2 local_res18 [8];
  
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
                       ,0x106,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  WriteIdentifier<wchar_t>(this,*param_1);
  local_res18[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,2);
  EVar5 = WriteValueOnly(this,(ulonglong)param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteValue<int_const_&,wchar_t_const_(&)[5]> @ 144623380

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<int_const_&,wchar_t_const_(&)[5]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [5],
          int *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  undefined2 local_res8 [4];
  
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  EVar5 = WriteValueOnly(this,*param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteValue<int_const_&,wchar_t_const_(&)[6]> @ 144623470

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<int_const_&,wchar_t_const_(&)[6]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [6],
          int *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  undefined2 local_res8 [4];
  
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  EVar5 = WriteValueOnly(this,*param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteValue<FUtf8String_const_&,wchar_t_const_(&)[14]> @ 144623560

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
WriteValue<FUtf8String_const_&,wchar_t_const_(&)[14]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [14],
          FUtf8String *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_res8 [4];
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
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
  (**(code **)(this->_padding_ + 0x18))(this,&local_18);
  this->PreviousTokenWritten = String;
  return;
}

// WriteValue<bool_const_&,wchar_t_const_(&)[8]> @ 144623690

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<bool_const_&,wchar_t_const_(&)[8]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [8],
          bool *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  undefined2 local_res8 [4];
  
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  EVar5 = WriteValueOnly(this,*param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteValue<bool_const_&,wchar_t_const_(&)[16]> @ 144623780

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
WriteValue<bool_const_&,wchar_t_const_(&)[16]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [16],
          bool *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  undefined2 local_res8 [4];
  
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  EVar5 = WriteValueOnly(this,*param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteValue<bool_const_&,wchar_t_const_(&)[17]> @ 144623870

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
WriteValue<bool_const_&,wchar_t_const_(&)[17]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [17],
          bool *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  undefined2 local_res8 [4];
  
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  EVar5 = WriteValueOnly(this,*param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteValue<bool_const_&,wchar_t_const_(&)[18]> @ 144623960

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
WriteValue<bool_const_&,wchar_t_const_(&)[18]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [18],
          bool *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  undefined2 local_res8 [4];
  
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  EVar5 = WriteValueOnly(this,*param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteValue<bool_const_&,wchar_t_const_(&)[19]> @ 144623a50

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
WriteValue<bool_const_&,wchar_t_const_(&)[19]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [19],
          bool *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  undefined2 local_res8 [4];
  
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  EVar5 = WriteValueOnly(this,*param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteValue<bool_const_&,wchar_t_const_(&)[30]> @ 144623b40

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
WriteValue<bool_const_&,wchar_t_const_(&)[30]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [30],
          bool *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  undefined2 local_res8 [4];
  
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  EVar5 = WriteValueOnly(this,*param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteValue<bool_const_&,wchar_t_const_(&)[11]> @ 144623c30

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
WriteValue<bool_const_&,wchar_t_const_(&)[11]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [11],
          bool *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  undefined2 local_res8 [4];
  
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  EVar5 = WriteValueOnly(this,*param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteValue<bool_const_&,wchar_t_const_(&)[13]> @ 144623d20

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
WriteValue<bool_const_&,wchar_t_const_(&)[13]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [13],
          bool *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  undefined2 local_res8 [4];
  
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  EVar5 = WriteValueOnly(this,*param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteValue<bool_const_&,wchar_t_const_(&)[14]> @ 144623e10

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
WriteValue<bool_const_&,wchar_t_const_(&)[14]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [14],
          bool *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  undefined2 local_res8 [4];
  
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  EVar5 = WriteValueOnly(this,*param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteValue<bool_const_&,wchar_t_const_(&)[15]> @ 144623f00

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
WriteValue<bool_const_&,wchar_t_const_(&)[15]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [15],
          bool *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  undefined2 local_res8 [4];
  
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  EVar5 = WriteValueOnly(this,*param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteValue<TArray<signed_char,TSizedDefaultAllocator<32>_>,wchar_t_const_(&)[11]> @ 144623ff0

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
WriteValue<TArray<signed_char,TSizedDefaultAllocator<32>_>,wchar_t_const_(&)[11]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [11],
          TArray<signed_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  undefined2 local_res8 [4];
  
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  EVar5 = WriteValueOnly<signed_char>(this,param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteValue<TArray<signed_char,TSizedDefaultAllocator<32>_>,wchar_t_const_(&)[14]> @ 1446240e0

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
WriteValue<TArray<signed_char,TSizedDefaultAllocator<32>_>,wchar_t_const_(&)[14]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [14],
          TArray<signed_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EJsonToken EVar5;
  uint uVar6;
  undefined2 local_res8 [4];
  
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
  EVar5 = WriteValueOnly<signed_char>(this,param_2);
  this->PreviousTokenWritten = EVar5;
  return;
}

// WriteValue<FString,wchar_t_const_(&)[4]> @ 1446241d0

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[4]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [4],
          FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_res8 [4];
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
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

// WriteValue<FString,wchar_t_const_(&)[5]> @ 144624300

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[5]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [5],
          FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_res8 [4];
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
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

// WriteValue<FString,wchar_t_const_(&)[6]> @ 144624430

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[6]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [6],
          FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_res8 [4];
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
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

// WriteValue<FString,wchar_t_const_(&)[10]> @ 144624560

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[10]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [10],
          FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_res8 [4];
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
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

// WriteValue<FString,wchar_t_const_(&)[16]> @ 144624690

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[16]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [16],
          FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_res8 [4];
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
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

// WriteValue<FString,wchar_t_const_(&)[18]> @ 1446247c0

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[18]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [18],
          FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_res8 [4];
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
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

// WriteValue<FString,wchar_t_const_(&)[19]> @ 1446248f0

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[19]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [19],
          FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_res8 [4];
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
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

// WriteValue<FString,wchar_t_const_(&)[24]> @ 144624a20

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[24]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [24],
          FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_res8 [4];
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
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

// WriteValue<FString,wchar_t_const_(&)[11]> @ 144624b50

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[11]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [11],
          FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_res8 [4];
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
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

// WriteValue<FString,wchar_t_const_(&)[12]> @ 144624c80

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[12]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [12],
          FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_res8 [4];
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
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

// WriteValue<FString,wchar_t_const_(&)[13]> @ 144624db0

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[13]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [13],
          FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_res8 [4];
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
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

// WriteValue<FString,wchar_t_const_(&)[14]> @ 144624ee0

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[14]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [14],
          FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_res8 [4];
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
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

// WriteValue<FString,wchar_t_const_(&)[15]> @ 144625010

void __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<FString,wchar_t_const_(&)[15]>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t (*param_1) [15],
          FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_res8 [4];
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
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
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

// WriteValueOnly<signed_char> @ 144625140

EJsonToken __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly<signed_char>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TArray<signed_char,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FArchive *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  EJsonToken EVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined2 local_res8 [4];
  TArray<signed_char,TSizedDefaultAllocator<32>_> *local_res10;
  undefined2 local_res18 [4];
  
  local_res10 = param_1;
  WriteArrayStart(this);
  iVar9 = param_1->ArrayNum;
  uVar8 = 0;
  if (0 < iVar9) {
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar9) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar6 = (*pcVar3)();
        return EVar6;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      bVar4 = CanWriteValueWithoutIdentifier(this);
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CanWriteValueWithoutIdentifier()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                             ,0xde,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar6 = (*pcVar3)();
        return EVar6;
      }
      EVar6 = this->PreviousTokenWritten;
      if ((EVar6 != CurlyOpen) && ((Identifier < EVar6 || ((0x1013U >> (EVar6 & 0x1f) & 1) == 0))))
      {
        local_res8[0] = 0x2c;
        (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
        this->PreviousTokenWritten = Comma;
      }
      (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,L"\r\n",4);
      pFVar2 = this->Stream;
      if (0 < this->IndentLevel) {
        uVar7 = (ulonglong)(uint)this->IndentLevel;
        do {
          local_res18[0] = 9;
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res18,2);
          uVar7 = uVar7 - 1;
          param_1 = local_res10;
        } while (uVar7 != 0);
      }
      EVar6 = WriteValueOnly(this,(int)(char)pFVar1[lVar10]);
      this->PreviousTokenWritten = EVar6;
      uVar8 = uVar8 + 1;
      iVar9 = param_1->ArrayNum;
      lVar10 = lVar10 + 1;
    } while ((int)uVar8 < iVar9);
  }
  WriteArrayEnd(this);
  return this->PreviousTokenWritten;
}

// WriteValueOnly<FString> @ 144625300

EJsonToken __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly<FString>
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FArchive *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  EJsonToken EVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined2 local_res8 [4];
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res10;
  undefined2 local_res18 [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  
  local_res10 = param_1;
  WriteArrayStart(this);
  iVar10 = param_1->ArrayNum;
  uVar9 = 0;
  if (0 < iVar10) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < iVar10) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      bVar5 = CanWriteValueWithoutIdentifier(this);
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CanWriteValueWithoutIdentifier()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                             ,0xfa,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      EVar7 = this->PreviousTokenWritten;
      if ((EVar7 != CurlyOpen) && ((Identifier < EVar7 || ((0x1013U >> (EVar7 & 0x1f) & 1) == 0))))
      {
        local_res8[0] = 0x2c;
        (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
        this->PreviousTokenWritten = Comma;
      }
      (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,L"\r\n",4);
      pFVar2 = this->Stream;
      if (0 < this->IndentLevel) {
        uVar8 = (ulonglong)(uint)this->IndentLevel;
        do {
          local_res18[0] = 9;
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res18,2);
          uVar8 = uVar8 - 1;
          param_1 = local_res10;
        } while (uVar8 != 0);
      }
      uVar3 = *(undefined8 *)(pFVar1 + lVar11);
      iVar10 = *(int *)(pFVar1 + lVar11 + 8);
      iStack_40 = iVar10 + -1;
      if (iVar10 == 0) {
        iStack_40 = 0;
      }
      local_58 = (undefined4)uVar3;
      uStack_54 = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_48 = local_58;
      uStack_44 = uStack_54;
      (**(code **)(this->_padding_ + 0x28))(this,&local_48);
      this->PreviousTokenWritten = String;
      uVar9 = uVar9 + 1;
      iVar10 = param_1->ArrayNum;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar9 < iVar10);
  }
  WriteArrayEnd(this);
  return this->PreviousTokenWritten;
}

// WriteValueOnly @ 144638690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EJsonToken __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,int param_1)

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

// WriteValueOnly @ 144638790

EJsonToken __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,wchar_t *param_1)

{
  code *pcVar1;
  size_t sVar2;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  uStack_10 = 0;
  local_18 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    uStack_10 = (undefined4)sVar2;
  }
  (*pcVar1)(this,&local_18);
  return String;
}

// WriteValueOnly @ 1446387f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EJsonToken __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,ulong64 param_1)

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
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_78,L"%llu");
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

