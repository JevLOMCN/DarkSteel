// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1417867a0

EAutomationTestFlags __thiscall
FBasicMathExpressionEvaluatorInvalidExpressionTest::GetTestFlags
          (FBasicMathExpressionEvaluatorInvalidExpressionTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1417867b0

bool __thiscall
FBasicMathExpressionEvaluatorInvalidExpressionTest::IsStressTest
          (FBasicMathExpressionEvaluatorInvalidExpressionTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1417867c0

uint __thiscall
FBasicMathExpressionEvaluatorInvalidExpressionTest::GetRequiredDeviceNum
          (FBasicMathExpressionEvaluatorInvalidExpressionTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1417867d0

FString * __thiscall
FBasicMathExpressionEvaluatorInvalidExpressionTest::GetTestSourceFileName
          (FBasicMathExpressionEvaluatorInvalidExpressionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\BasicMathExpressionEvaluator.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141786800

int __thiscall
FBasicMathExpressionEvaluatorInvalidExpressionTest::GetTestSourceFileLine
          (FBasicMathExpressionEvaluatorInvalidExpressionTest *this)

{
  return 0x17a;
}

// GetTests @ 141786810

/* WARNING: Removing unreachable block (ram,0x0001417868fd) */
/* WARNING: Removing unreachable block (ram,0x0001417869c8) */

void __thiscall
FBasicMathExpressionEvaluatorInvalidExpressionTest::GetTests
          (FBasicMathExpressionEvaluatorInvalidExpressionTest *this,
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
  
  ::FString::FString(&local_18,"System.Core.Math.Evaluate.Invalid Expressions");
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

// RunTest @ 1417869f0

bool __thiscall
FBasicMathExpressionEvaluatorInvalidExpressionTest::RunTest
          (FBasicMathExpressionEvaluatorInvalidExpressionTest *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = TestInvalidExpression((FAutomationTestBase *)this,L"gobbledegook");
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"The invalid math expression, \'gobbledegook\', did not report an error.",bVar1);
  bVar1 = TestInvalidExpression((FAutomationTestBase *)this,L"50**10");
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"The invalid math expression, \'50**10\', did not report an error.",bVar1);
  bVar1 = TestInvalidExpression((FAutomationTestBase *)this,L"*1");
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"The invalid math expression, \'*1\', did not report an error.",bVar1);
  bVar1 = TestInvalidExpression((FAutomationTestBase *)this,L"+");
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"The invalid math expression, \'+\', did not report an error.",bVar1);
  bVar1 = TestInvalidExpression((FAutomationTestBase *)this,L"+");
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"The invalid math expression, \'{+}\', did not report an error.",bVar1);
  return true;
}

// GetBeautifiedTestName @ 141786ab0

FString * __thiscall
FBasicMathExpressionEvaluatorInvalidExpressionTest::GetBeautifiedTestName
          (FBasicMathExpressionEvaluatorInvalidExpressionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Math.Evaluate.Invalid Expressions");
  return __return_storage_ptr__;
}

