// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1419b20d0

EAutomationTestFlags __thiscall FQuotedStringTest::GetTestFlags(FQuotedStringTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 1419b20e0

bool __thiscall FQuotedStringTest::IsStressTest(FQuotedStringTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1419b20f0

uint __thiscall FQuotedStringTest::GetRequiredDeviceNum(FQuotedStringTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1419b2100

FString * __thiscall
FQuotedStringTest::GetTestSourceFileName(FQuotedStringTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\Csv\\CsvParserTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1419b2130

int __thiscall FQuotedStringTest::GetTestSourceFileLine(FQuotedStringTest *this)

{
  return 0x48;
}

// GetTests @ 1419b2140

/* WARNING: Removing unreachable block (ram,0x0001419b222d) */
/* WARNING: Removing unreachable block (ram,0x0001419b22f8) */

void __thiscall
FQuotedStringTest::GetTests
          (FQuotedStringTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.CSV Parser.Quoted String");
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

// RunTest @ 1419b2320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FQuotedStringTest::RunTest(FQuotedStringTest *this,FString *param_1)

{
  ulonglong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong *puVar10;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  FString local_c8;
  FCsvParser local_b8;
  FString local_88;
  FString local_78 [4];
  FString local_38;
  FString local_28;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_f8;
  ::FString::FString(&local_c8,
                     "\"Quoted with nested \"\"quotes\"\", and \"\"commas\"\"\" \"unquoted due to \"whitespace\" , second \" unquoted\n\"Quoted\nString,With\nNewlines\",\"\"\n1,\"2\"\n"
                    );
  uVar9 = 0;
  local_b8.SourceString.Data.ArrayNum = local_c8.Data.ArrayNum;
  local_b8.SourceString.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
  local_b8.SourceString.Data.ArrayMax = local_c8.Data.ArrayMax;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Rows.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Rows.ArrayNum = 0;
  local_b8.Rows.ArrayMax = 0;
  if (1 < local_b8.SourceString.Data.ArrayNum) {
    FCsvParser::ParseRows(&local_b8);
  }
  ::FString::FString(local_78,
                     "Quoted with nested \"quotes\", and \"commas\" \"unquoted due to \"whitespace\" "
                    );
  ::FString::FString(local_78 + 1," second \" unquoted");
  ::FString::FString(local_78 + 2,"Quoted\nString,With\nNewlines");
  ::FString::FString(local_78 + 3,"");
  ::FString::FString(&local_38,"1");
  ::FString::FString(&local_28,"2");
  if (local_b8.Rows.ArrayNum == 3) {
    iVar6 = 3;
    uVar7 = uVar9;
    while( true ) {
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_d0 = (longlong)iVar6;
        local_d8 = (longlong)(int)uVar7;
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
      bVar3 = CsvParser_Tests::CheckRow<2>
                        ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
                         (local_b8.Rows.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10),
                         (FString (*) [2])(local_78 + (longlong)(int)uVar7 * 2),uVar7,
                         (FAutomationTestBase *)this);
      if (!bVar3) goto LAB_1419b24bf;
      uVar7 = uVar7 + 1;
      if (2 < uVar7) break;
      iVar6 = local_b8.Rows.ArrayNum;
    }
    uVar9 = 1;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              (&local_88,
               L"Parser generated wrong number of rows. Expected %d, but parsed result has %d.");
    (*pcVar2)(this,&local_88,0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
LAB_1419b24bf:
  puVar10 = local_18;
  lVar8 = 6;
  do {
    puVar1 = puVar10 + -2;
    puVar10 = puVar10 + -2;
    lVar8 = lVar8 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar8 != 0);
  DestructItems<TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
             local_b8.Rows.AllocatorInstance.Data,local_b8.Rows.ArrayNum);
  if ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)local_b8.Rows.AllocatorInstance.Data !=
      (TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_b8.Rows.AllocatorInstance.Data);
  }
  if (local_b8.SourceString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.SourceString.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return SUB41(uVar9,0);
}

// GetBeautifiedTestName @ 1419b2550

FString * __thiscall
FQuotedStringTest::GetBeautifiedTestName(FQuotedStringTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.CSV Parser.Quoted String");
  return __return_storage_ptr__;
}

