// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1419b3740

EAutomationTestFlags __thiscall FEndOfStringTest::GetTestFlags(FEndOfStringTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 1419b3750

bool __thiscall FEndOfStringTest::IsStressTest(FEndOfStringTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1419b3760

uint __thiscall FEndOfStringTest::GetRequiredDeviceNum(FEndOfStringTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1419b3770

FString * __thiscall
FEndOfStringTest::GetTestSourceFileName(FEndOfStringTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\Csv\\CsvParserTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1419b37a0

int __thiscall FEndOfStringTest::GetTestSourceFileLine(FEndOfStringTest *this)

{
  return 0x88;
}

// GetTests @ 1419b37b0

/* WARNING: Removing unreachable block (ram,0x0001419b389d) */
/* WARNING: Removing unreachable block (ram,0x0001419b3968) */

void __thiscall
FEndOfStringTest::GetTests
          (FEndOfStringTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.CSV Parser.End of String");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
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
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
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
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 1419b3990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001419b40c5) */
/* WARNING: Removing unreachable block (ram,0x0001419b3f9c) */
/* WARNING: Removing unreachable block (ram,0x0001419b402f) */
/* WARNING: Removing unreachable block (ram,0x0001419b4150) */

bool __thiscall FEndOfStringTest::RunTest(FEndOfStringTest *this,FString *param_1)

{
  ulonglong *puVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  longlong lVar8;
  FString *pFVar9;
  byte bVar10;
  byte bVar11;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  undefined8 local_280;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FCsvParser local_238;
  FCsvParser local_208;
  FCsvParser local_1d8;
  FCsvParser local_1a8;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_2a8;
  ::FString::FString(&local_278,L",,,");
  local_238.SourceString.Data.ArrayNum = local_278.Data.ArrayNum;
  local_238.SourceString.Data.AllocatorInstance.Data = local_278.Data.AllocatorInstance.Data;
  local_238.SourceString.Data.ArrayMax = local_278.Data.ArrayMax;
  local_278.Data.ArrayNum = 0;
  local_278.Data.ArrayMax = 0;
  local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.Rows.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.Rows.ArrayNum = 0;
  local_238.Rows.ArrayMax = 0;
  if (1 < local_238.SourceString.Data.ArrayNum) {
    FCsvParser::ParseRows(&local_238);
  }
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_138,"");
  ::FString::FString(&local_128,"");
  ::FString::FString(&local_118,"");
  ::FString::FString(&local_108,"");
  if (local_238.Rows.ArrayNum == 1) {
    local_280 = 1;
    local_288 = 0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    bVar4 = CsvParser_Tests::CheckRow<4>
                      ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
                       local_238.Rows.AllocatorInstance.Data,(FString (*) [4])&local_138,0,
                       (FAutomationTestBase *)this);
    if (!bVar4) goto LAB_1419b3abf;
    bVar11 = 1;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              (&local_178,
               L"Parser generated wrong number of rows. Expected %d, but parsed result has %d.");
    (*pcVar2)(this,&local_178,0);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
LAB_1419b3abf:
    bVar11 = 0;
  }
  lVar8 = 4;
  pFVar9 = &local_f8;
  lVar6 = 4;
  do {
    pFVar3 = pFVar9[-1].Data.AllocatorInstance.Data;
    pFVar9 = pFVar9 + -1;
    lVar6 = lVar6 + -1;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  } while (lVar6 != 0);
  DestructItems<TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
             local_238.Rows.AllocatorInstance.Data,local_238.Rows.ArrayNum);
  if ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)local_238.Rows.AllocatorInstance.Data
      != (TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_238.Rows.AllocatorInstance.Data);
  }
  if (local_238.SourceString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.SourceString.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_268,L"\"\",\"\",\"\",\"\"");
  local_208.SourceString.Data.ArrayNum = local_268.Data.ArrayNum;
  local_208.SourceString.Data.AllocatorInstance.Data = local_268.Data.AllocatorInstance.Data;
  local_208.SourceString.Data.ArrayMax = local_268.Data.ArrayMax;
  local_268.Data.ArrayNum = 0;
  local_268.Data.ArrayMax = 0;
  local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.Rows.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.Rows.ArrayNum = 0;
  local_208.Rows.ArrayMax = 0;
  if (1 < local_208.SourceString.Data.ArrayNum) {
    FCsvParser::ParseRows(&local_208);
  }
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f8,"");
  ::FString::FString(&local_e8,"");
  ::FString::FString(&local_d8,"");
  ::FString::FString(&local_c8,"");
  if (local_208.Rows.ArrayNum == 1) {
    local_280 = 1;
    local_288 = 0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    bVar4 = CsvParser_Tests::CheckRow<4>
                      ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
                       local_208.Rows.AllocatorInstance.Data,(FString (*) [4])&local_f8,0,
                       (FAutomationTestBase *)this);
    if (!bVar4) goto LAB_1419b3c03;
    bVar10 = 1;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              (&local_168,
               L"Parser generated wrong number of rows. Expected %d, but parsed result has %d.");
    (*pcVar2)(this,&local_168,0);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
LAB_1419b3c03:
    bVar10 = 0;
  }
  bVar10 = bVar10 & bVar11;
  pFVar9 = &local_b8;
  lVar6 = 4;
  do {
    pFVar3 = pFVar9[-1].Data.AllocatorInstance.Data;
    pFVar9 = pFVar9 + -1;
    lVar6 = lVar6 + -1;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  } while (lVar6 != 0);
  DestructItems<TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
             local_208.Rows.AllocatorInstance.Data,local_208.Rows.ArrayNum);
  if ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)local_208.Rows.AllocatorInstance.Data
      != (TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_208.Rows.AllocatorInstance.Data);
  }
  if (local_208.SourceString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.SourceString.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_258,L",,,\n");
  local_1d8.SourceString.Data.ArrayNum = local_258.Data.ArrayNum;
  local_1d8.SourceString.Data.AllocatorInstance.Data = local_258.Data.AllocatorInstance.Data;
  local_1d8.SourceString.Data.ArrayMax = local_258.Data.ArrayMax;
  local_258.Data.ArrayNum = 0;
  local_258.Data.ArrayMax = 0;
  local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Rows.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Rows.ArrayNum = 0;
  local_1d8.Rows.ArrayMax = 0;
  if (1 < local_1d8.SourceString.Data.ArrayNum) {
    FCsvParser::ParseRows(&local_1d8);
  }
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_b8,"");
  ::FString::FString(&local_a8,"");
  ::FString::FString(&local_98,"");
  ::FString::FString(&local_88,"");
  if (local_1d8.Rows.ArrayNum == 1) {
    local_280 = 1;
    local_288 = 0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    bVar4 = CsvParser_Tests::CheckRow<4>
                      ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
                       local_1d8.Rows.AllocatorInstance.Data,(FString (*) [4])&local_b8,0,
                       (FAutomationTestBase *)this);
    if (!bVar4) goto LAB_1419b3d52;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              (&local_158,
               L"Parser generated wrong number of rows. Expected %d, but parsed result has %d.");
    (*pcVar2)(this,&local_158,0);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
LAB_1419b3d52:
    bVar10 = 0;
  }
  pFVar9 = &local_78;
  lVar6 = 4;
  do {
    pFVar3 = pFVar9[-1].Data.AllocatorInstance.Data;
    pFVar9 = pFVar9 + -1;
    lVar6 = lVar6 + -1;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  } while (lVar6 != 0);
  DestructItems<TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
             local_1d8.Rows.AllocatorInstance.Data,local_1d8.Rows.ArrayNum);
  if ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)local_1d8.Rows.AllocatorInstance.Data
      != (TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_1d8.Rows.AllocatorInstance.Data);
  }
  if (local_1d8.SourceString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.SourceString.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_248,L"\"\",\"\",\"\",\"\"\n");
  local_1a8.SourceString.Data.ArrayNum = local_248.Data.ArrayNum;
  local_1a8.SourceString.Data.AllocatorInstance.Data = local_248.Data.AllocatorInstance.Data;
  local_1a8.SourceString.Data.ArrayMax = local_248.Data.ArrayMax;
  local_248.Data.ArrayNum = 0;
  local_248.Data.ArrayMax = 0;
  local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.Rows.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.Rows.ArrayNum = 0;
  local_1a8.Rows.ArrayMax = 0;
  if (1 < local_1a8.SourceString.Data.ArrayNum) {
    FCsvParser::ParseRows(&local_1a8);
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_78,"");
  ::FString::FString(&local_68,"");
  ::FString::FString(&local_58,"");
  ::FString::FString(&local_48,"");
  if (local_1a8.Rows.ArrayNum == 1) {
    local_280 = 1;
    local_288 = 0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    bVar4 = CsvParser_Tests::CheckRow<4>
                      ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
                       local_1a8.Rows.AllocatorInstance.Data,(FString (*) [4])&local_78,0,
                       (FAutomationTestBase *)this);
    if (bVar4) {
      bVar11 = 1;
      goto LAB_1419b3e93;
    }
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              (&local_148,
               L"Parser generated wrong number of rows. Expected %d, but parsed result has %d.");
    (*pcVar2)(this,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  bVar11 = 0;
LAB_1419b3e93:
  puVar7 = local_38;
  do {
    puVar1 = puVar7 + -2;
    puVar7 = puVar7 + -2;
    lVar8 = lVar8 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar8 != 0);
  DestructItems<TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
             local_1a8.Rows.AllocatorInstance.Data,local_1a8.Rows.ArrayNum);
  if ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)local_1a8.Rows.AllocatorInstance.Data
      != (TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_1a8.Rows.AllocatorInstance.Data);
  }
  if (local_1a8.SourceString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.SourceString.Data.AllocatorInstance.Data);
  }
  return (bool)(bVar10 & bVar11);
}

// GetBeautifiedTestName @ 1419b4170

FString * __thiscall
FEndOfStringTest::GetBeautifiedTestName(FEndOfStringTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.CSV Parser.End of String");
  return __return_storage_ptr__;
}

