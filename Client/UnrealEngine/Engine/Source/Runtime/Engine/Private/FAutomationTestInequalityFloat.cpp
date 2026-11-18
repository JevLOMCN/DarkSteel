// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487e3eb0

EAutomationTestFlags __thiscall
FAutomationTestInequalityFloat::GetTestFlags(FAutomationTestInequalityFloat *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1487e3ec0

bool __thiscall FAutomationTestInequalityFloat::IsStressTest(FAutomationTestInequalityFloat *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487e3ed0

uint __thiscall
FAutomationTestInequalityFloat::GetRequiredDeviceNum(FAutomationTestInequalityFloat *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487e3ee0

FString * __thiscall
FAutomationTestInequalityFloat::GetTestSourceFileName
          (FAutomationTestInequalityFloat *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487e3f10

int __thiscall
FAutomationTestInequalityFloat::GetTestSourceFileLine(FAutomationTestInequalityFloat *this)

{
  return 0x45f;
}

// GetTests @ 1487e3f60

/* WARNING: Removing unreachable block (ram,0x0001487e404d) */
/* WARNING: Removing unreachable block (ram,0x0001487e4118) */

void __thiscall
FAutomationTestInequalityFloat::GetTests
          (FAutomationTestInequalityFloat *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"TestFramework.Validation.TestInequalityFloat");
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

// RunTest @ 1487e4140

bool __thiscall
FAutomationTestInequalityFloat::RunTest(FAutomationTestInequalityFloat *this,FString *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = __real_42280000;
  fVar2 = __real_38d1b717;
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,L"Identity equal",__real_42280000,__real_42280000,
             __real_38d1b717);
  fVar3 = __real_3f800000;
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,L"Identity equal low tolerance",fVar6,fVar6,__real_3f800000
            );
  fVar1 = __real_322bcc77;
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,L"Identity equal high tolerance",fVar6,fVar6,
             __real_322bcc77);
  fVar5 = __real_42280018;
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,L"Nearby positive equal",__real_42280018,fVar6,fVar2);
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,L"Nearby positive equal low tolerance",fVar5,fVar6,fVar3);
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,L"Nearby positive equal high tolerance",fVar6,fVar6,fVar1);
  fVar4 = __real_4227ffe8;
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,L"Nearby negative equal",__real_4227ffe8,fVar6,fVar2);
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,L"Nearby negative equal low tolerance",fVar4,fVar6,fVar3);
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,L"Nearby negative equal high tolerance",fVar6,fVar6,fVar1);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Identity equal (forwards to TestNearlyEqual)",fVar6,fVar6
             ,fVar2);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"Identity equal low tolerance (forwards to TestNearlyEqual)",fVar6,fVar6,fVar3);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"Identity equal high tolerance (forwards to TestNearlyEqual)",fVar6,fVar6,fVar1);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Nearby positive equal (forwards to TestNearlyEqual)",
             fVar5,fVar6,fVar2);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"Nearby positive equal low tolerance (forwards to TestNearlyEqual)",fVar5,fVar6,fVar3)
  ;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"Nearby positive equal high tolerance (forwards to TestNearlyEqual)",fVar6,fVar6,fVar1
            );
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Nearby negative equal (forwards to TestNearlyEqual)",
             fVar4,fVar6,fVar2);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"Nearby negative equal low tolerance (forwards to TestNearlyEqual)",fVar4,fVar6,fVar3)
  ;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"Nearby negative equal high tolerance (forwards to TestNearlyEqual)",fVar6,fVar6,fVar1
            );
  FAutomationTestBase::TestNotEqual((FAutomationTestBase *)this,L"Zero unequal",0.0,fVar6,fVar2);
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"Positive unequal",__real_45000000,fVar6,fVar2);
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"Nearby positive unequal due to high tolerance",fVar5,
             fVar6,fVar1);
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"Negative unequal",__real_c5000000,fVar6,fVar2);
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"Nearby negative unequal due to high tolerance",fVar5,
             fVar6,fVar1);
  fVar5 = __real_7f7fffff;
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"Max unequal",__real_7f7fffff,fVar6,fVar2);
  fVar4 = __real_00800000;
  FAutomationTestBase::TestNotEqual
            ((FAutomationTestBase *)this,L"Min unequal",__real_00800000,fVar6,fVar2);
  FAutomationTestBase::TestLessEqual((FAutomationTestBase *)this,L"Identity LE",fVar6,fVar6,fVar2);
  FAutomationTestBase::TestLessEqual
            ((FAutomationTestBase *)this,L"Identity LE low tolerance",fVar6,fVar6,fVar3);
  FAutomationTestBase::TestLessEqual
            ((FAutomationTestBase *)this,L"Identity LE high tolerance",fVar6,fVar6,fVar1);
  FAutomationTestBase::TestLessEqual
            ((FAutomationTestBase *)this,L"Less LE",__real_c5000000,fVar6,fVar2);
  FAutomationTestBase::TestLessThan((FAutomationTestBase *)this,L"Min LE",fVar4,fVar6,fVar2);
  FAutomationTestBase::TestLessThan
            ((FAutomationTestBase *)this,L"Less than",__real_c5000000,fVar6,fVar2);
  FAutomationTestBase::TestLessThan((FAutomationTestBase *)this,L"Min less than",fVar4,fVar6,fVar2);
  FAutomationTestBase::TestGreaterEqual
            ((FAutomationTestBase *)this,L"Identity GE",fVar6,fVar6,fVar2);
  FAutomationTestBase::TestGreaterEqual
            ((FAutomationTestBase *)this,L"Identity GE low tolerance",fVar6,fVar6,fVar3);
  FAutomationTestBase::TestGreaterEqual
            ((FAutomationTestBase *)this,L"Identity GE high tolerance",fVar6,fVar6,fVar1);
  FAutomationTestBase::TestGreaterEqual
            ((FAutomationTestBase *)this,L"Less GE",__real_45000000,fVar6,fVar2);
  FAutomationTestBase::TestGreaterEqual((FAutomationTestBase *)this,L"Max GE",fVar5,fVar6,fVar2);
  FAutomationTestBase::TestGreaterThan
            ((FAutomationTestBase *)this,L"Greater than",__real_45000000,fVar6,fVar2);
  FAutomationTestBase::TestGreaterThan
            ((FAutomationTestBase *)this,L"Max greater than",fVar5,fVar6,fVar2);
  return true;
}

// GetBeautifiedTestName @ 1487e4690

FString * __thiscall
FAutomationTestInequalityFloat::GetBeautifiedTestName
          (FAutomationTestInequalityFloat *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"TestFramework.Validation.TestInequalityFloat");
  return __return_storage_ptr__;
}

