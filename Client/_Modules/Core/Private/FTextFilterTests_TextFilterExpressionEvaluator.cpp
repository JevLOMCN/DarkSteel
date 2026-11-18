// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 141900c30

EAutomationTestFlags __thiscall
FTextFilterTests_TextFilterExpressionEvaluator::GetTestFlags
          (FTextFilterTests_TextFilterExpressionEvaluator *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141900c40

bool __thiscall
FTextFilterTests_TextFilterExpressionEvaluator::IsStressTest
          (FTextFilterTests_TextFilterExpressionEvaluator *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141900c50

uint __thiscall
FTextFilterTests_TextFilterExpressionEvaluator::GetRequiredDeviceNum
          (FTextFilterTests_TextFilterExpressionEvaluator *this)

{
  return 1;
}

// GetTestSourceFileName @ 141900c60

FString * __thiscall
FTextFilterTests_TextFilterExpressionEvaluator::GetTestSourceFileName
          (FTextFilterTests_TextFilterExpressionEvaluator *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\TextFilterTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141900c90

int __thiscall
FTextFilterTests_TextFilterExpressionEvaluator::GetTestSourceFileLine
          (FTextFilterTests_TextFilterExpressionEvaluator *this)

{
  return 0xe1;
}

// GetTests @ 141900ca0

/* WARNING: Removing unreachable block (ram,0x000141900d8d) */
/* WARNING: Removing unreachable block (ram,0x000141900e58) */

void __thiscall
FTextFilterTests_TextFilterExpressionEvaluator::GetTests
          (FTextFilterTests_TextFilterExpressionEvaluator *this,
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
  
  ::FString::FString(&local_18,"System.Core.Text.TextFilterExpressionEvaluator");
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

// RunTest @ 141900e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FTextFilterTests_TextFilterExpressionEvaluator::RunTest
          (FTextFilterTests_TextFilterExpressionEvaluator *this,FString *param_1)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  undefined1 auStack_448 [32];
  FTestFilterExpression local_428;
  FTextFilterExpressionEvaluator *local_410;
  undefined1 local_408 [88];
  void *local_3b0;
  undefined4 local_3a8;
  FTextFilterExpressionEvaluator local_398;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_448;
  TextFilterTests::FTestFilterItem::FTestFilterItem((FTestFilterItem *)local_408);
  FTextFilterExpressionEvaluator::FTextFilterExpressionEvaluator(&local_398,BasicString);
  local_428.TestItem = (FTestFilterItem *)local_408;
  local_410 = &local_398;
  local_428._padding_ =
       (longlong)&___7FTestFilterExpression_TextFilterExpressionEvaluator_TextFilterTests__6B_;
  local_428.Test = (FAutomationTestBase *)this;
  bVar1 = TextFilterTests::TestAllCommonFilterExpressions((ITestFilterExpression *)&local_428);
  if (*(code **)(local_428._padding_ + 8) ==
      TextFilterTests::FTestFilterExpression::TestFilterExpression) {
    bVar2 = TextFilterTests::FTestFilterExpression::TestFilterExpression
                      (&local_428,L"Funky<String>",true);
  }
  else {
    bVar2 = (**(code **)(local_428._padding_ + 8))();
  }
  local_428._padding_ = (longlong)&___7ITestFilterExpression_TextFilterTests__6B_;
  FTextFilterExpressionEvaluator::~FTextFilterExpressionEvaluator(&local_398);
  FTextFilterExpressionEvaluator::FTextFilterExpressionEvaluator(&local_398,Complex);
  local_428.TestItem = (FTestFilterItem *)local_408;
  local_410 = &local_398;
  local_428._padding_ =
       (longlong)&___7FTestFilterExpression_TextFilterExpressionEvaluator_TextFilterTests__6B_;
  local_428.Test = (FAutomationTestBase *)this;
  bVar3 = TextFilterTests::TestAllComplexFilterExpressions((ITestFilterExpression *)&local_428);
  local_428._padding_ = (longlong)&___7ITestFilterExpression_TextFilterTests__6B_;
  FTextFilterExpressionEvaluator::~FTextFilterExpressionEvaluator(&local_398);
  local_3a8 = 0;
  if (local_3b0 != (void *)0x0) {
    FMemory::Free(local_3b0);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_408 + 0x18));
  DestructItems<FString,int>((FString *)local_408._8_8_,local_408._16_4_);
  if ((FScriptContainerElement *)local_408._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_408._8_8_);
  }
  return (bool)(bVar3 & bVar2 & bVar1);
}

// GetBeautifiedTestName @ 141901000

FString * __thiscall
FTextFilterTests_TextFilterExpressionEvaluator::GetBeautifiedTestName
          (FTextFilterTests_TextFilterExpressionEvaluator *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Text.TextFilterExpressionEvaluator");
  return __return_storage_ptr__;
}

