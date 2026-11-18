// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487de970

EAutomationTestFlags __thiscall
FAutomationTestNearlyEqualFVectorPositive::GetTestFlags
          (FAutomationTestNearlyEqualFVectorPositive *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1487de980

bool __thiscall
FAutomationTestNearlyEqualFVectorPositive::IsStressTest
          (FAutomationTestNearlyEqualFVectorPositive *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487de990

uint __thiscall
FAutomationTestNearlyEqualFVectorPositive::GetRequiredDeviceNum
          (FAutomationTestNearlyEqualFVectorPositive *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487de9a0

FString * __thiscall
FAutomationTestNearlyEqualFVectorPositive::GetTestSourceFileName
          (FAutomationTestNearlyEqualFVectorPositive *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487de9d0

int __thiscall
FAutomationTestNearlyEqualFVectorPositive::GetTestSourceFileLine
          (FAutomationTestNearlyEqualFVectorPositive *this)

{
  return 0x33d;
}

// GetTests @ 1487de9e0

/* WARNING: Removing unreachable block (ram,0x0001487deacd) */
/* WARNING: Removing unreachable block (ram,0x0001487deb98) */

void __thiscall
FAutomationTestNearlyEqualFVectorPositive::GetTests
          (FAutomationTestNearlyEqualFVectorPositive *this,
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
  
  ::FString::FString(&local_18,"TestFramework.Validation.TestNearlyEqualFVectorPositive");
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

// RunTest @ 1487debc0

bool __thiscall
FAutomationTestNearlyEqualFVectorPositive::RunTest
          (FAutomationTestNearlyEqualFVectorPositive *this,FString *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  TVector<double> *pTVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  FString local_98;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68 [4];
  
  uVar8 = FAutomationNearlyEqualTest::ActualFVectorValue.field0_0x0._s_0.Z;
  uVar7 = FAutomationNearlyEqualTest::ActualFVectorValue.field0_0x0._s_0.Y;
  uVar6 = FAutomationNearlyEqualTest::ActualFVectorValue.field0_0x0._s_0.X;
  dVar2 = (FAutomationNearlyEqualTest::ExpectedFVectorValue->field0_0x0)._s_0.X;
  dVar3 = (FAutomationNearlyEqualTest::ExpectedFVectorValue->field0_0x0)._s_0.Y;
  dVar1 = (FAutomationNearlyEqualTest::ExpectedFVectorValue->field0_0x0)._s_0.Z;
  ::FString::FString(&local_98,L"The same FVector values with null tolerance");
  pwVar10 = L"";
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_98.Data.ArrayNum != 0) {
    FVar9.Data = local_98.Data.AllocatorInstance.Data;
  }
  local_68[0]._s_0.X = uVar6;
  local_68[0]._s_0.Y = uVar7;
  local_68[0]._s_0.Z = uVar8;
  local_88._s_0.X = dVar2;
  local_88._s_0.Y = dVar3;
  local_88._s_0.Z = dVar1;
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,(TVector<double> *)&local_68[0]._s_0,
             (TVector<double> *)&local_88._s_0,0.0);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  uVar8 = FAutomationNearlyEqualTest::ActualFVectorValue.field0_0x0._s_0.Z;
  uVar7 = FAutomationNearlyEqualTest::ActualFVectorValue.field0_0x0._s_0.Y;
  uVar6 = FAutomationNearlyEqualTest::ActualFVectorValue.field0_0x0._s_0.X;
  dVar2 = (FAutomationNearlyEqualTest::ExpectedFVectorValue->field0_0x0)._s_0.X;
  dVar3 = (FAutomationNearlyEqualTest::ExpectedFVectorValue->field0_0x0)._s_0.Y;
  dVar1 = (FAutomationNearlyEqualTest::ExpectedFVectorValue->field0_0x0)._s_0.Z;
  ::FString::FString(&local_98,L"The same FVector values with positive tolerance");
  fVar4 = __real_38d1b717;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_98.Data.ArrayNum != 0) {
    FVar9.Data = local_98.Data.AllocatorInstance.Data;
  }
  local_88._s_0.X = (double)uVar6;
  local_88._s_0.Y = (double)uVar7;
  local_88._s_0.Z = (double)uVar8;
  local_68[0]._0_8_ = dVar2;
  local_68[0]._8_8_ = dVar3;
  local_68[0]._16_8_ = dVar1;
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,(TVector<double> *)&local_88._s_0,
             (TVector<double> *)&local_68[0]._s_0,__real_38d1b717);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pTVar5 = FAutomationNearlyEqualTest::BaseFVectorValue;
  ::FString::FString(&local_98,
                     L"Mutation of base FVector value with the same positive difference and tolerance (edge case)"
                    );
  FAutomationNearlyEqualTest::RunFVectorMutationTest
            ((FAutomationNearlyEqualTest *)this,&local_98,pTVar5,__real_3f1a36e2e0000000,fVar4);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pTVar5 = FAutomationNearlyEqualTest::BaseFVectorValue;
  ::FString::FString(&local_98,
                     L"Mutation of base FVector value with negative difference and positive tolerance that are equal after being placed in Abs"
                    );
  FAutomationNearlyEqualTest::RunFVectorMutationTest
            ((FAutomationNearlyEqualTest *)this,&local_98,pTVar5,__real_bf1a36e2e0000000,fVar4);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pTVar5 = FAutomationNearlyEqualTest::BaseFVectorValue;
  ::FString::FString(&local_98,
                     L"Mutation of base FVector value with positive half difference and positive tolerance"
                    );
  FAutomationNearlyEqualTest::RunFVectorMutationTest
            ((FAutomationNearlyEqualTest *)this,&local_98,pTVar5,__real_3f0a36e2e0000000,fVar4);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pTVar5 = FAutomationNearlyEqualTest::BaseFVectorValue;
  ::FString::FString(&local_98,
                     L"Mutation of base FVector value with negative half difference and positive tolerance"
                    );
  FAutomationNearlyEqualTest::RunFVectorMutationTest
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

// GetBeautifiedTestName @ 1487dee50

FString * __thiscall
FAutomationTestNearlyEqualFVectorPositive::GetBeautifiedTestName
          (FAutomationTestNearlyEqualFVectorPositive *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "TestFramework.Validation.TestNearlyEqualFVectorPositive");
  return __return_storage_ptr__;
}

