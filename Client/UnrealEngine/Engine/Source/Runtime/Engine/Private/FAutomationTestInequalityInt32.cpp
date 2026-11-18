// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487e30f0

EAutomationTestFlags __thiscall
FAutomationTestInequalityInt32::GetTestFlags(FAutomationTestInequalityInt32 *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1487e3100

bool __thiscall FAutomationTestInequalityInt32::IsStressTest(FAutomationTestInequalityInt32 *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487e3110

uint __thiscall
FAutomationTestInequalityInt32::GetRequiredDeviceNum(FAutomationTestInequalityInt32 *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487e3120

FString * __thiscall
FAutomationTestInequalityInt32::GetTestSourceFileName
          (FAutomationTestInequalityInt32 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487e3150

int __thiscall
FAutomationTestInequalityInt32::GetTestSourceFileLine(FAutomationTestInequalityInt32 *this)

{
  return 0x403;
}

// GetTests @ 1487e3160

/* WARNING: Removing unreachable block (ram,0x0001487e324d) */
/* WARNING: Removing unreachable block (ram,0x0001487e3318) */

void __thiscall
FAutomationTestInequalityInt32::GetTests
          (FAutomationTestInequalityInt32 *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"TestFramework.Validation.TestInequalityInt32");
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

// RunTest @ 1487e3380

bool __thiscall
FAutomationTestInequalityInt32::RunTest(FAutomationTestInequalityInt32 *this,FString *param_1)

{
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Identity equal",0x2a,0x2a);
  FAutomationTestBase::TestLessEqual((FAutomationTestBase *)this,L"Identity LE",0x2a,0x2a);
  FAutomationTestBase::TestLessEqual((FAutomationTestBase *)this,L"Less LE",-0x800,0x2a);
  FAutomationTestBase::TestLessThan((FAutomationTestBase *)this,L"Min LE",-0x80000000,0x2a);
  FAutomationTestBase::TestLessThan((FAutomationTestBase *)this,L"Less than",-0x800,0x2a);
  FAutomationTestBase::TestLessThan((FAutomationTestBase *)this,L"Min less than",-0x80000000,0x2a);
  FAutomationTestBase::TestGreaterEqual((FAutomationTestBase *)this,L"Identity GE",0x2a,0x2a);
  FAutomationTestBase::TestGreaterEqual((FAutomationTestBase *)this,L"Less GE",0x800,0x2a);
  FAutomationTestBase::TestGreaterEqual((FAutomationTestBase *)this,L"Max GE",0x7fffffff,0x2a);
  FAutomationTestBase::TestGreaterThan((FAutomationTestBase *)this,L"Greater than",0x800,0x2a);
  FAutomationTestBase::TestGreaterThan
            ((FAutomationTestBase *)this,L"Max greater than",0x7fffffff,0x2a);
  return true;
}

// GetBeautifiedTestName @ 1487e34c0

FString * __thiscall
FAutomationTestInequalityInt32::GetBeautifiedTestName
          (FAutomationTestInequalityInt32 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"TestFramework.Validation.TestInequalityInt32");
  return __return_storage_ptr__;
}

