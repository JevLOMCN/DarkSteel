// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487e4790

EAutomationTestFlags __thiscall
FAutomationTestInequalityDouble::GetTestFlags(FAutomationTestInequalityDouble *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1487e47a0

bool __thiscall FAutomationTestInequalityDouble::IsStressTest(FAutomationTestInequalityDouble *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487e47b0

uint __thiscall
FAutomationTestInequalityDouble::GetRequiredDeviceNum(FAutomationTestInequalityDouble *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487e47c0

FString * __thiscall
FAutomationTestInequalityDouble::GetTestSourceFileName
          (FAutomationTestInequalityDouble *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487e47f0

int __thiscall
FAutomationTestInequalityDouble::GetTestSourceFileLine(FAutomationTestInequalityDouble *this)

{
  return 0x49d;
}

// GetTests @ 1487e4800

/* WARNING: Removing unreachable block (ram,0x0001487e48ed) */
/* WARNING: Removing unreachable block (ram,0x0001487e49b8) */

void __thiscall
FAutomationTestInequalityDouble::GetTests
          (FAutomationTestInequalityDouble *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"TestFramework.Validation.TestInequalityDouble");
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

// RunTest @ 1487e49e0

bool __thiscall
FAutomationTestInequalityDouble::RunTest(FAutomationTestInequalityDouble *this,FString *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = __real_4045000000000000;
  dVar3 = __real_3f1a36e2e0000000;
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,L"Identity equal",__real_4045000000000000,
             __real_4045000000000000,__real_3f1a36e2e0000000);
  dVar1 = __real_3ff0000000000000;
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,L"Identity equal low tolerance",dVar7,dVar7,
             __real_3ff0000000000000);
  dVar2 = __real_3e45798ee0000000;
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,L"Identity equal high tolerance",dVar7,dVar7,
             __real_3e45798ee0000000);
  dVar6 = __real_40450002f2f98600;
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,L"Nearby positive equal",__real_40450002f2f98600,dVar7,
             dVar3);
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,L"Nearby positive equal low tolerance",dVar6,dVar7,dVar1);
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,L"Nearby positive equal high tolerance",
             __real_40450000001353cd,dVar7,dVar2);
  dVar4 = __real_4044fffd0d067a00;
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,L"Nearby negative equal",__real_4044fffd0d067a00,dVar7,
             dVar3);
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,L"Nearby negative equal low tolerance",dVar4,dVar7,dVar1);
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,L"Nearby negative equal high tolerance",
             __real_4044ffffffecac33,dVar7,dVar2);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Identity equal (forwards to TestNearlyEqual)",dVar7,dVar7
             ,dVar3);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"Identity equal low tolerance (forwards to TestNearlyEqual)",dVar7,dVar7,dVar1);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"Identity equal high tolerance (forwards to TestNearlyEqual)",dVar7,dVar7,dVar2);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Nearby positive equal (forwards to TestNearlyEqual)",
             dVar6,dVar7,dVar3);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"Nearby positive equal low tolerance (forwards to TestNearlyEqual)",dVar6,dVar7,dVar1)
  ;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"Nearby positive equal high tolerance (forwards to TestNearlyEqual)",
             __real_40450000001353cd,dVar7,dVar2);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Nearby negative equal (forwards to TestNearlyEqual)",
             dVar4,dVar7,dVar3);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"Nearby negative equal low tolerance (forwards to TestNearlyEqual)",dVar4,dVar7,dVar1)
  ;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"Nearby negative equal high tolerance (forwards to TestNearlyEqual)",
             __real_4044ffffffecac33,dVar7,dVar2);
  FAutomationTestBase::TestNotEqual((FAutomationTestBase *)this,L"Zero unequal",0.0,dVar7,dVar3);
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"Positive unequal",__real_40a0000000000000,dVar7,dVar3);
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"Nearby positive unequal due to high tolerance",dVar6,
             dVar7,dVar2);
  dVar5 = __real_c0a0000000000000;
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"Negative unequal",__real_c0a0000000000000,dVar7,dVar3);
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"Nearby negative unequal due to high tolerance",dVar6,
             dVar7,dVar2);
  dVar4 = __real_7fefffffffffffff;
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"Max unequal",__real_7fefffffffffffff,dVar7,dVar3);
  dVar6 = __real_0010000000000000;
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"Min unequal",__real_0010000000000000,dVar7,dVar3);
  FAutomationTestBase::TestLessEqual((FAutomationTestBase *)this,L"Identity LE",dVar7,dVar7,dVar3);
  FAutomationTestBase::TestLessEqual
            ((FAutomationTestBase *)this,L"Identity LE low tolerance",dVar7,dVar7,dVar1);
  FAutomationTestBase::TestLessEqual
            ((FAutomationTestBase *)this,L"Identity LE high tolerance",dVar7,dVar7,dVar2);
  FAutomationTestBase::TestLessEqual((FAutomationTestBase *)this,L"Less LE",dVar5,dVar7,dVar3);
  FAutomationTestBase::TestLessThan((FAutomationTestBase *)this,L"Min LE",dVar6,dVar7,dVar3);
  FAutomationTestBase::TestLessThan((FAutomationTestBase *)this,L"Less than",dVar5,dVar7,dVar3);
  FAutomationTestBase::TestLessThan((FAutomationTestBase *)this,L"Min less than",dVar6,dVar7,dVar3);
  FAutomationTestBase::TestGreaterEqual
            ((FAutomationTestBase *)this,L"Identity GE",dVar7,dVar7,dVar3);
  FAutomationTestBase::TestGreaterEqual
            ((FAutomationTestBase *)this,L"Identity GE low tolerance",dVar7,dVar7,dVar1);
  FAutomationTestBase::TestGreaterEqual
            ((FAutomationTestBase *)this,L"Identity GE high tolerance",dVar7,dVar7,dVar2);
  FAutomationTestBase::TestGreaterEqual
            ((FAutomationTestBase *)this,L"Less GE",__real_40a0000000000000,dVar7,dVar3);
  FAutomationTestBase::TestGreaterEqual((FAutomationTestBase *)this,L"Max GE",dVar4,dVar7,dVar3);
  FAutomationTestBase::TestGreaterThan
            ((FAutomationTestBase *)this,L"Greater than",__real_40a0000000000000,dVar7,dVar3);
  FAutomationTestBase::TestGreaterThan
            ((FAutomationTestBase *)this,L"Max greater than",dVar4,dVar7,dVar3);
  return true;
}

// GetBeautifiedTestName @ 1487e4f50

FString * __thiscall
FAutomationTestInequalityDouble::GetBeautifiedTestName
          (FAutomationTestInequalityDouble *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"TestFramework.Validation.TestInequalityDouble");
  return __return_storage_ptr__;
}

