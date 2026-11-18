// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487df890

EAutomationTestFlags __thiscall
FAutomationTestNearlyEqualFRotatorNegative::GetTestFlags
          (FAutomationTestNearlyEqualFRotatorNegative *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1487df8a0

bool __thiscall
FAutomationTestNearlyEqualFRotatorNegative::IsStressTest
          (FAutomationTestNearlyEqualFRotatorNegative *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487df8b0

uint __thiscall
FAutomationTestNearlyEqualFRotatorNegative::GetRequiredDeviceNum
          (FAutomationTestNearlyEqualFRotatorNegative *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487df8c0

FString * __thiscall
FAutomationTestNearlyEqualFRotatorNegative::GetTestSourceFileName
          (FAutomationTestNearlyEqualFRotatorNegative *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487df8f0

int __thiscall
FAutomationTestNearlyEqualFRotatorNegative::GetTestSourceFileLine
          (FAutomationTestNearlyEqualFRotatorNegative *this)

{
  return 900;
}

// GetTests @ 1487df900

/* WARNING: Removing unreachable block (ram,0x0001487df9ed) */
/* WARNING: Removing unreachable block (ram,0x0001487dfab8) */

void __thiscall
FAutomationTestNearlyEqualFRotatorNegative::GetTests
          (FAutomationTestNearlyEqualFRotatorNegative *this,
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
  
  ::FString::FString(&local_18,"TestFramework.Validation.TestNearlyEqualFRotatorNegative");
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

// RunTest @ 1487dfae0

bool __thiscall
FAutomationTestNearlyEqualFRotatorNegative::RunTest
          (FAutomationTestNearlyEqualFRotatorNegative *this,FString *param_1)

{
  int iVar1;
  float fVar2;
  TRotator<double> *pTVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  FString local_28 [2];
  
  pTVar3 = FAutomationNearlyEqualTest::BaseFRotatorValue;
  ::FString::FString(local_28,
                     L"Mutation of base FRotator value with positive difference that is greater than positive tolerance"
                    );
  fVar2 = __real_38d1b717;
  iVar4 = FAutomationNearlyEqualTest::RunFRotatorMutationTest
                    ((FAutomationNearlyEqualTest *)this,local_28,pTVar3,__real_3ff00068db8b8000,
                     __real_38d1b717);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  pTVar3 = FAutomationNearlyEqualTest::BaseFRotatorValue;
  ::FString::FString(local_28,
                     L"Mutation of base FRotator value with negative difference which absolute value is greater than positive tolerance"
                    );
  iVar5 = FAutomationNearlyEqualTest::RunFRotatorMutationTest
                    ((FAutomationNearlyEqualTest *)this,local_28,pTVar3,__real_bff00068db8b8000,
                     fVar2);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  iVar1 = *(int *)&this->field_0x80;
  FAutomationTestExecutionInfo::RemoveAllEvents
            ((FAutomationTestExecutionInfo *)&this->field_0x30,Error);
  pwVar6 = L"";
  if (FAutomationNearlyEqualTest::TestFailMessage.Data.ArrayNum != 0) {
    pwVar6 = (wchar_t *)FAutomationNearlyEqualTest::TestFailMessage.Data.AllocatorInstance;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar6,iVar1,iVar4 + iVar5);
  return true;
}

// GetBeautifiedTestName @ 1487dfbe0

FString * __thiscall
FAutomationTestNearlyEqualFRotatorNegative::GetBeautifiedTestName
          (FAutomationTestNearlyEqualFRotatorNegative *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "TestFramework.Validation.TestNearlyEqualFRotatorNegative");
  return __return_storage_ptr__;
}

