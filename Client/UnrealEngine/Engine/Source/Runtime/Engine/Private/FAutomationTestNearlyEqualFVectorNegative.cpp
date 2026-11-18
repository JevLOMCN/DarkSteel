// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487def80

EAutomationTestFlags __thiscall
FAutomationTestNearlyEqualFVectorNegative::GetTestFlags
          (FAutomationTestNearlyEqualFVectorNegative *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1487def90

bool __thiscall
FAutomationTestNearlyEqualFVectorNegative::IsStressTest
          (FAutomationTestNearlyEqualFVectorNegative *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487defa0

uint __thiscall
FAutomationTestNearlyEqualFVectorNegative::GetRequiredDeviceNum
          (FAutomationTestNearlyEqualFVectorNegative *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487defb0

FString * __thiscall
FAutomationTestNearlyEqualFVectorNegative::GetTestSourceFileName
          (FAutomationTestNearlyEqualFVectorNegative *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487defe0

int __thiscall
FAutomationTestNearlyEqualFVectorNegative::GetTestSourceFileLine
          (FAutomationTestNearlyEqualFVectorNegative *this)

{
  return 0x357;
}

// GetTests @ 1487deff0

/* WARNING: Removing unreachable block (ram,0x0001487df0dd) */
/* WARNING: Removing unreachable block (ram,0x0001487df1a8) */

void __thiscall
FAutomationTestNearlyEqualFVectorNegative::GetTests
          (FAutomationTestNearlyEqualFVectorNegative *this,
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
  
  ::FString::FString(&local_18,"TestFramework.Validation.TestNearlyEqualFVectorNegative");
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

// RunTest @ 1487df1d0

bool __thiscall
FAutomationTestNearlyEqualFVectorNegative::RunTest
          (FAutomationTestNearlyEqualFVectorNegative *this,FString *param_1)

{
  int iVar1;
  float fVar2;
  TVector<double> *pTVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  FString local_28 [2];
  
  pTVar3 = FAutomationNearlyEqualTest::BaseFVectorValue;
  ::FString::FString(local_28,
                     L"Mutation of base FVector value with positive difference that is greater than positive tolerance"
                    );
  fVar2 = __real_38d1b717;
  iVar4 = FAutomationNearlyEqualTest::RunFVectorMutationTest
                    ((FAutomationNearlyEqualTest *)this,local_28,pTVar3,__real_3fb9a02758b80000,
                     __real_38d1b717);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  pTVar3 = FAutomationNearlyEqualTest::BaseFVectorValue;
  ::FString::FString(local_28,
                     L"Mutation of base FVector value with negative difference which absolute value is greater than positive tolerance"
                    );
  iVar5 = FAutomationNearlyEqualTest::RunFVectorMutationTest
                    ((FAutomationNearlyEqualTest *)this,local_28,pTVar3,__real_bfb9a02758b80000,
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

// GetBeautifiedTestName @ 1487df2d0

FString * __thiscall
FAutomationTestNearlyEqualFVectorNegative::GetBeautifiedTestName
          (FAutomationTestNearlyEqualFVectorNegative *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "TestFramework.Validation.TestNearlyEqualFVectorNegative");
  return __return_storage_ptr__;
}

