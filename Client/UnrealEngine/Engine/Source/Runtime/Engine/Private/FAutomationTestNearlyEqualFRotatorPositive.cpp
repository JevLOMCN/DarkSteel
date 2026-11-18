// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487df340

EAutomationTestFlags __thiscall
FAutomationTestNearlyEqualFRotatorPositive::GetTestFlags
          (FAutomationTestNearlyEqualFRotatorPositive *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1487df350

bool __thiscall
FAutomationTestNearlyEqualFRotatorPositive::IsStressTest
          (FAutomationTestNearlyEqualFRotatorPositive *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487df360

uint __thiscall
FAutomationTestNearlyEqualFRotatorPositive::GetRequiredDeviceNum
          (FAutomationTestNearlyEqualFRotatorPositive *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487df370

FString * __thiscall
FAutomationTestNearlyEqualFRotatorPositive::GetTestSourceFileName
          (FAutomationTestNearlyEqualFRotatorPositive *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487df3a0

int __thiscall
FAutomationTestNearlyEqualFRotatorPositive::GetTestSourceFileLine
          (FAutomationTestNearlyEqualFRotatorPositive *this)

{
  return 0x36a;
}

// GetTests @ 1487df3b0

/* WARNING: Removing unreachable block (ram,0x0001487df49d) */
/* WARNING: Removing unreachable block (ram,0x0001487df568) */

void __thiscall
FAutomationTestNearlyEqualFRotatorPositive::GetTests
          (FAutomationTestNearlyEqualFRotatorPositive *this,
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
  
  ::FString::FString(&local_18,"TestFramework.Validation.TestNearlyEqualFRotatorPositive");
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

// RunTest @ 1487df590

bool __thiscall
FAutomationTestNearlyEqualFRotatorPositive::RunTest
          (FAutomationTestNearlyEqualFRotatorPositive *this,FString *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  TRotator<double> *pTVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  FString local_98;
  TRotator<double> local_88;
  TRotator<double> local_68 [4];
  
  dVar8 = FAutomationNearlyEqualTest::ActualFRotatorValue.Roll;
  dVar7 = FAutomationNearlyEqualTest::ActualFRotatorValue.Yaw;
  dVar6 = FAutomationNearlyEqualTest::ActualFRotatorValue.Pitch;
  dVar2 = FAutomationNearlyEqualTest::ExpectedFRotatorValue->Pitch;
  dVar3 = FAutomationNearlyEqualTest::ExpectedFRotatorValue->Yaw;
  dVar1 = FAutomationNearlyEqualTest::ExpectedFRotatorValue->Roll;
  ::FString::FString(&local_98,L"The same FRotator values with null tolerance");
  pwVar10 = L"";
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_98.Data.ArrayNum != 0) {
    FVar9.Data = local_98.Data.AllocatorInstance.Data;
  }
  local_68[0].Pitch = dVar6;
  local_68[0].Yaw = dVar7;
  local_68[0].Roll = dVar8;
  local_88.Pitch = dVar2;
  local_88.Yaw = dVar3;
  local_88.Roll = dVar1;
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,local_68,&local_88,0.0);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  dVar8 = FAutomationNearlyEqualTest::ActualFRotatorValue.Roll;
  dVar7 = FAutomationNearlyEqualTest::ActualFRotatorValue.Yaw;
  dVar6 = FAutomationNearlyEqualTest::ActualFRotatorValue.Pitch;
  dVar2 = FAutomationNearlyEqualTest::ExpectedFRotatorValue->Pitch;
  dVar3 = FAutomationNearlyEqualTest::ExpectedFRotatorValue->Yaw;
  dVar1 = FAutomationNearlyEqualTest::ExpectedFRotatorValue->Roll;
  ::FString::FString(&local_98,L"The same FRotator values with positive tolerance");
  fVar4 = __real_38d1b717;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_98.Data.ArrayNum != 0) {
    FVar9.Data = local_98.Data.AllocatorInstance.Data;
  }
  local_88.Pitch = dVar6;
  local_88.Yaw = dVar7;
  local_88.Roll = dVar8;
  local_68[0].Pitch = dVar2;
  local_68[0].Yaw = dVar3;
  local_68[0].Roll = dVar1;
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,&local_88,local_68,__real_38d1b717);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pTVar5 = FAutomationNearlyEqualTest::BaseFRotatorValue;
  ::FString::FString(&local_98,
                     L"Mutation of base FRotator value with the same positive difference and tolerance (edge case)"
                    );
  FAutomationNearlyEqualTest::RunFRotatorMutationTest
            ((FAutomationNearlyEqualTest *)this,&local_98,pTVar5,__real_3f1a36e2e0000000,fVar4);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pTVar5 = FAutomationNearlyEqualTest::BaseFRotatorValue;
  ::FString::FString(&local_98,
                     L"Mutation of base FRotator value with negative difference and positive tolerance that are equal after being placed in Abs"
                    );
  FAutomationNearlyEqualTest::RunFRotatorMutationTest
            ((FAutomationNearlyEqualTest *)this,&local_98,pTVar5,__real_bf1a36e2e0000000,fVar4);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pTVar5 = FAutomationNearlyEqualTest::BaseFRotatorValue;
  ::FString::FString(&local_98,
                     L"Mutation of base FRotator value with positive half difference and positive tolerance"
                    );
  FAutomationNearlyEqualTest::RunFRotatorMutationTest
            ((FAutomationNearlyEqualTest *)this,&local_98,pTVar5,__real_3f0a36e2e0000000,fVar4);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pTVar5 = FAutomationNearlyEqualTest::BaseFRotatorValue;
  ::FString::FString(&local_98,
                     L"Mutation of base FRotator value with negative half difference and positive tolerance"
                    );
  FAutomationNearlyEqualTest::RunFRotatorMutationTest
            ((FAutomationNearlyEqualTest *)this,&local_98,pTVar5,__real_bf0a36e2e0000000,fVar4);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (FAutomationNearlyEqualTest::TestFailMessage.Data.ArrayNum != 0) {
    pwVar10 = (wchar_t *)FAutomationNearlyEqualTest::TestFailMessage.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar10,*(int *)&this->field_0x80,0);
  return true;
}

// GetBeautifiedTestName @ 1487df820

FString * __thiscall
FAutomationTestNearlyEqualFRotatorPositive::GetBeautifiedTestName
          (FAutomationTestNearlyEqualFRotatorPositive *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "TestFramework.Validation.TestNearlyEqualFRotatorPositive");
  return __return_storage_ptr__;
}

