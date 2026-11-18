// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 14189bdd0

EAutomationTestFlags __thiscall FCStringGetVarArgsTest::GetTestFlags(FCStringGetVarArgsTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14189bde0

bool __thiscall FCStringGetVarArgsTest::IsStressTest(FCStringGetVarArgsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14189bdf0

uint __thiscall FCStringGetVarArgsTest::GetRequiredDeviceNum(FCStringGetVarArgsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14189be00

FString * __thiscall
FCStringGetVarArgsTest::GetTestSourceFileName
          (FCStringGetVarArgsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\CStringTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14189be30

int __thiscall FCStringGetVarArgsTest::GetTestSourceFileLine(FCStringGetVarArgsTest *this)

{
  return 0x2f;
}

// GetTests @ 14189be40

/* WARNING: Removing unreachable block (ram,0x00014189bf2d) */
/* WARNING: Removing unreachable block (ram,0x00014189bff8) */

void __thiscall
FCStringGetVarArgsTest::GetTests
          (FCStringGetVarArgsTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Misc.CString.GetVarArgs");
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

// RunTest @ 14189c020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FCStringGetVarArgsTest::RunTest(FCStringGetVarArgsTest *this,FString *param_1)

{
  FCStringGetVarArgsTestBase::DoTest
            ((FCStringGetVarArgsTestBase *)this,L"SIZE_T_FMT |18446744073709551615|",
             L"SIZE_T_FMT |%I64u|");
  FCStringGetVarArgsTestBase::DoTest
            ((FCStringGetVarArgsTestBase *)this,L"SIZE_T_x_FMT |ffffffffffffffff|",
             L"SIZE_T_x_FMT |%I64x|");
  FCStringGetVarArgsTestBase::DoTest
            ((FCStringGetVarArgsTestBase *)this,L"SIZE_T_X_FMT |FFFFFFFFFFFFFFFF|",
             L"SIZE_T_X_FMT |%I64X|");
  FCStringGetVarArgsTestBase::DoTest
            ((FCStringGetVarArgsTestBase *)this,L"SSIZE_T_FMT |-9223372036854775808|",
             L"SSIZE_T_FMT |%I64d|");
  FCStringGetVarArgsTestBase::DoTest
            ((FCStringGetVarArgsTestBase *)this,L"SSIZE_T_x_FMT |ffffffffffffffff|",
             L"SSIZE_T_x_FMT |%I64x|");
  FCStringGetVarArgsTestBase::DoTest
            ((FCStringGetVarArgsTestBase *)this,L"SSIZE_T_X_FMT |FFFFFFFFFFFFFFFF|",
             L"SSIZE_T_X_FMT |%I64X|");
  FCStringGetVarArgsTestBase::DoTest
            ((FCStringGetVarArgsTestBase *)this,L"PTRINT_FMT |-9223372036854775808|",
             L"PTRINT_FMT |%lld|");
  FCStringGetVarArgsTestBase::DoTest
            ((FCStringGetVarArgsTestBase *)this,L"PTRINT_x_FMT |ffffffffffffffff|",
             L"PTRINT_x_FMT |%llx|");
  FCStringGetVarArgsTestBase::DoTest
            ((FCStringGetVarArgsTestBase *)this,L"PTRINT_X_FMT |FFFFFFFFFFFFFFFF|",
             L"PTRINT_X_FMT |%llX|");
  FCStringGetVarArgsTestBase::DoTest
            ((FCStringGetVarArgsTestBase *)this,L"UPTRINT_FMT |18446744073709551615|",
             L"UPTRINT_FMT |%llu|");
  FCStringGetVarArgsTestBase::DoTest
            ((FCStringGetVarArgsTestBase *)this,L"UPTRINT_x_FMT |ffffffffffffffff|",
             L"UPTRINT_x_FMT |%llx|");
  FCStringGetVarArgsTestBase::DoTest
            ((FCStringGetVarArgsTestBase *)this,L"UPTRINT_X_FMT |FFFFFFFFFFFFFFFF|",
             L"UPTRINT_X_FMT |%llX|");
  FCStringGetVarArgsTestBase::DoTest
            ((FCStringGetVarArgsTestBase *)this,L"INT64_FMT |-9223372036854775808|",
             L"INT64_FMT |%lld|");
  FCStringGetVarArgsTestBase::DoTest
            ((FCStringGetVarArgsTestBase *)this,L"INT64_x_FMT |ffffffffffffffff|",
             L"INT64_x_FMT |%llx|");
  FCStringGetVarArgsTestBase::DoTest
            ((FCStringGetVarArgsTestBase *)this,L"INT64_X_FMT |FFFFFFFFFFFFFFFF|",
             L"INT64_X_FMT |%llX|");
  FCStringGetVarArgsTestBase::DoTest
            ((FCStringGetVarArgsTestBase *)this,L"UINT64_FMT |18446744073709551615|",
             L"UINT64_FMT |%llu|");
  FCStringGetVarArgsTestBase::DoTest
            ((FCStringGetVarArgsTestBase *)this,L"UINT64_x_FMT |ffffffffffffffff|",
             L"UINT64_x_FMT |%llx|");
  FCStringGetVarArgsTestBase::DoTest
            ((FCStringGetVarArgsTestBase *)this,L"UINT64_X_FMT |FFFFFFFFFFFFFFFF|",
             L"UINT64_X_FMT |%llX|");
  FCStringGetVarArgsTestBase::DoTest
            ((FCStringGetVarArgsTestBase *)this,
             L"|LEFT                |               RIGHT|     33.33|66.67     |",
             L"|%-20s|%20s|%10.2f|%-10.2f|");
  FCStringGetVarArgsTestBase::DoTest
            ((FCStringGetVarArgsTestBase *)this,L"Percents|%%%3|",L"Percents|%%%%%%%d|");
  FCStringGetVarArgsTestBase::DoTest
            ((FCStringGetVarArgsTestBase *)this,L"Integer arguments|12345|54321|123ABC|f|99|",
             L"Integer arguments|%d|%i|%X|%x|%u|");
  return true;
}

// GetBeautifiedTestName @ 14189c2e0

FString * __thiscall
FCStringGetVarArgsTest::GetBeautifiedTestName
          (FCStringGetVarArgsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Misc.CString.GetVarArgs");
  return __return_storage_ptr__;
}

