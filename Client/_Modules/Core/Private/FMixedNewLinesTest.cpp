// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1419b2b30

EAutomationTestFlags __thiscall FMixedNewLinesTest::GetTestFlags(FMixedNewLinesTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 1419b2b40

bool __thiscall FMixedNewLinesTest::IsStressTest(FMixedNewLinesTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1419b2b50

uint __thiscall FMixedNewLinesTest::GetRequiredDeviceNum(FMixedNewLinesTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1419b2b60

FString * __thiscall
FMixedNewLinesTest::GetTestSourceFileName(FMixedNewLinesTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\Csv\\CsvParserTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1419b2b90

int __thiscall FMixedNewLinesTest::GetTestSourceFileLine(FMixedNewLinesTest *this)

{
  return 0x6c;
}

// GetTests @ 1419b2ba0

/* WARNING: Removing unreachable block (ram,0x0001419b2c8d) */
/* WARNING: Removing unreachable block (ram,0x0001419b2d58) */

void __thiscall
FMixedNewLinesTest::GetTests
          (FMixedNewLinesTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.CSV Parser.Mixed Newlines");
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

// RunTest @ 1419b2d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FMixedNewLinesTest::RunTest(FMixedNewLinesTest *this,FString *param_1)

{
  ulonglong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FString *pFVar6;
  int iVar7;
  uint uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  FCsvParser local_f8;
  FString local_c8;
  FString local_b8;
  FString local_a8 [4];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  ulonglong local_28 [2];
  
  puVar9 = local_28;
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_128;
  pFVar6 = ::FString::FString(&local_b8,"1\r2\n3\r\n4\n\n5\r\r6\r\n\r\n7\n\r8");
  uVar8 = 0;
  local_f8.SourceString.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.SourceString.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_f8.SourceString.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  local_f8.Rows.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Rows.ArrayNum = 0;
  local_f8.Rows.ArrayMax = 0;
  if (1 < local_f8.SourceString.Data.ArrayNum) {
    FCsvParser::ParseRows(&local_f8);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_a8,"1");
  ::FString::FString(local_a8 + 1,"2");
  ::FString::FString(local_a8 + 2,"3");
  ::FString::FString(local_a8 + 3,"4");
  ::FString::FString(&local_68,"5");
  ::FString::FString(&local_58,"6");
  ::FString::FString(&local_48,"7");
  ::FString::FString(&local_38,"8");
  lVar10 = 8;
  if (local_f8.Rows.ArrayNum == 8) {
    iVar7 = 8;
    while( true ) {
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_100 = (longlong)iVar7;
        local_108 = (longlong)(int)uVar8;
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
      bVar3 = CsvParser_Tests::CheckRow<1>
                        ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
                         (local_f8.Rows.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10),
                         (FString (*) [1])(local_a8 + (int)uVar8),uVar8,(FAutomationTestBase *)this)
      ;
      if (!bVar3) goto LAB_1419b2ed1;
      uVar8 = uVar8 + 1;
      if (7 < uVar8) break;
      iVar7 = local_f8.Rows.ArrayNum;
    }
    bVar3 = true;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              (&local_c8,
               L"Parser generated wrong number of rows. Expected %d, but parsed result has %d.");
    (*pcVar2)(this,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
LAB_1419b2ed1:
    bVar3 = false;
  }
  do {
    puVar1 = puVar9 + -2;
    puVar9 = puVar9 + -2;
    lVar10 = lVar10 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar10 != 0);
  DestructItems<TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
             local_f8.Rows.AllocatorInstance.Data,local_f8.Rows.ArrayNum);
  if ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)local_f8.Rows.AllocatorInstance.Data !=
      (TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_f8.Rows.AllocatorInstance.Data);
  }
  if (local_f8.SourceString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.SourceString.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetBeautifiedTestName @ 1419b2fe0

FString * __thiscall
FMixedNewLinesTest::GetBeautifiedTestName(FMixedNewLinesTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.CSV Parser.Mixed Newlines");
  return __return_storage_ptr__;
}

