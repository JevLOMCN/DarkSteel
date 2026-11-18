// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 141785b50

EAutomationTestFlags __thiscall
FBasicMathExpressionEvaluatorTest::GetTestFlags(FBasicMathExpressionEvaluatorTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141785b60

bool __thiscall
FBasicMathExpressionEvaluatorTest::IsStressTest(FBasicMathExpressionEvaluatorTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141785b70

uint __thiscall
FBasicMathExpressionEvaluatorTest::GetRequiredDeviceNum(FBasicMathExpressionEvaluatorTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141785b80

FString * __thiscall
FBasicMathExpressionEvaluatorTest::GetTestSourceFileName
          (FBasicMathExpressionEvaluatorTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\BasicMathExpressionEvaluator.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141785bb0

int __thiscall
FBasicMathExpressionEvaluatorTest::GetTestSourceFileLine(FBasicMathExpressionEvaluatorTest *this)

{
  return 0x149;
}

// GetTests @ 141785bc0

/* WARNING: Removing unreachable block (ram,0x000141785cad) */
/* WARNING: Removing unreachable block (ram,0x000141785d78) */

void __thiscall
FBasicMathExpressionEvaluatorTest::GetTests
          (FBasicMathExpressionEvaluatorTest *this,
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
  
  ::FString::FString(&local_18,"System.Core.Math.Evaluate.Valid Expressions");
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

// RunTest @ 141785da0

bool __thiscall
FBasicMathExpressionEvaluatorTest::RunTest(FBasicMathExpressionEvaluatorTest *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = TestExpression((FAutomationTestBase *)this,L"+1",__real_3ff0000000000000);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Valid expression, \'+1\', evaluated incorrectly.",bVar1);
  bVar1 = TestExpression((FAutomationTestBase *)this,L"-20",__real_c034000000000000);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Valid expression, \'-20\', evaluated incorrectly.",bVar1)
  ;
  bVar1 = TestExpression((FAutomationTestBase *)this,L"-+-2",__real_4000000000000000);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Valid expression, \'-+-2\', evaluated incorrectly.",bVar1
            );
  bVar1 = TestExpression((FAutomationTestBase *)this,L"1 + 2",__real_4008000000000000);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Valid expression, \'1 + 2\', evaluated incorrectly.",
             bVar1);
  bVar1 = TestExpression((FAutomationTestBase *)this,L"1+2*3",__real_401c000000000000);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Valid expression, \'1+2*3\', evaluated incorrectly.",
             bVar1);
  bVar1 = TestExpression((FAutomationTestBase *)this,L"1+2*3*4+1",__real_403a000000000000);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Valid expression, \'1+2*3*4+1\', evaluated incorrectly.",
             bVar1);
  bVar1 = TestExpression((FAutomationTestBase *)this,L"1*2+3",__real_4014000000000000);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Valid expression, \'1*2+3\', evaluated incorrectly.",
             bVar1);
  bVar1 = TestExpression((FAutomationTestBase *)this,L"1+2*3*4+1",__real_403a000000000000);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Valid expression, \'1+2*3*4+1\', evaluated incorrectly.",
             bVar1);
  bVar1 = TestExpression((FAutomationTestBase *)this,L"8-4+3",__real_401c000000000000);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Valid expression, \'8-4+3\', evaluated incorrectly.",
             bVar1);
  bVar1 = TestExpression((FAutomationTestBase *)this,L"2^2",__real_4010000000000000);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Valid expression, \'2^2\', evaluated incorrectly.",bVar1)
  ;
  bVar1 = TestExpression((FAutomationTestBase *)this,L"2^(2*3)",__real_4050000000000000);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Valid expression, \'2^(2*3)\', evaluated incorrectly.",
             bVar1);
  bVar1 = TestExpression((FAutomationTestBase *)this,L"2^2*3",__real_4028000000000000);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Valid expression, \'2^2*3\', evaluated incorrectly.",
             bVar1);
  bVar1 = TestExpression((FAutomationTestBase *)this,L"sqrt(4)",__real_4000000000000000);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Valid expression, \'sqrt(4)\', evaluated incorrectly.",
             bVar1);
  bVar1 = TestExpression((FAutomationTestBase *)this,L"4*sqrt(4)+10",__real_4032000000000000);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"Valid expression, \'4*sqrt(4)+10\', evaluated incorrectly.",bVar1);
  bVar1 = TestExpression((FAutomationTestBase *)this,L"8%6",__real_4000000000000000);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Valid expression, \'8%6\', evaluated incorrectly.",bVar1)
  ;
  bVar1 = TestExpression((FAutomationTestBase *)this,L"100-20-10-10",__real_404e000000000000);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"Valid expression, \'100-20-10-10\', evaluated incorrectly.",bVar1);
  bVar1 = TestExpression((FAutomationTestBase *)this,L"100-(20-10)-10",__real_4054000000000000);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"Valid expression, \'100-(20-10)-10\', evaluated incorrectly.",bVar1);
  bVar1 = TestExpression((FAutomationTestBase *)this,L"100/2/5",__real_4024000000000000);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Valid expression, \'100/2/5\', evaluated incorrectly.",
             bVar1);
  return true;
}

// GetBeautifiedTestName @ 1417860b0

FString * __thiscall
FBasicMathExpressionEvaluatorTest::GetBeautifiedTestName
          (FBasicMathExpressionEvaluatorTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Math.Evaluate.Valid Expressions");
  return __return_storage_ptr__;
}

