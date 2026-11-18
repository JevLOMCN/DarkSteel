// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487dcde0

EAutomationTestFlags __thiscall
FAutomationTestNearlyEqualDoublePositive::GetTestFlags
          (FAutomationTestNearlyEqualDoublePositive *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1487dcdf0

bool __thiscall
FAutomationTestNearlyEqualDoublePositive::IsStressTest
          (FAutomationTestNearlyEqualDoublePositive *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487dce00

uint __thiscall
FAutomationTestNearlyEqualDoublePositive::GetRequiredDeviceNum
          (FAutomationTestNearlyEqualDoublePositive *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487dce10

FString * __thiscall
FAutomationTestNearlyEqualDoublePositive::GetTestSourceFileName
          (FAutomationTestNearlyEqualDoublePositive *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487dce40

int __thiscall
FAutomationTestNearlyEqualDoublePositive::GetTestSourceFileLine
          (FAutomationTestNearlyEqualDoublePositive *this)

{
  return 0x30c;
}

// GetTests @ 1487dce50

/* WARNING: Removing unreachable block (ram,0x0001487dcf3d) */
/* WARNING: Removing unreachable block (ram,0x0001487dd008) */

void __thiscall
FAutomationTestNearlyEqualDoublePositive::GetTests
          (FAutomationTestNearlyEqualDoublePositive *this,
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
  
  ::FString::FString(&local_18,"TestFramework.Validation.TestNearlyEqualDoublePositive");
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

// RunTest @ 1487dd030

bool __thiscall
FAutomationTestNearlyEqualDoublePositive::RunTest
          (FAutomationTestNearlyEqualDoublePositive *this,FString *param_1)

{
  float fVar1;
  double dVar2;
  ForAnyElementType FVar3;
  wchar_t *pwVar4;
  FString local_48 [4];
  
  ::FString::FString(local_48,L"The same double values with null tolerance");
  pwVar4 = L"";
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_48[0].Data.ArrayNum != 0) {
    FVar3.Data = local_48[0].Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,0.0,0.0,0.0);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_48,L"The same double values with positive tolerance");
  dVar2 = __real_3f1a36e2e0000000;
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_48[0].Data.ArrayNum != 0) {
    FVar3.Data = local_48[0].Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,0.0,0.0,__real_3f1a36e2e0000000);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_48,
                     L"Mutation of base double value with the same positive difference and tolerance (edge case)"
                    );
  fVar1 = __real_38d1b717;
  FAutomationNearlyEqualTest::RunDoubleMutationTest
            ((FAutomationNearlyEqualTest *)this,local_48,0.0,dVar2,__real_38d1b717);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_48,
                     L"Mutation of base double value with negative difference and positive tolerance that are equal after being placed in Abs"
                    );
  FAutomationNearlyEqualTest::RunDoubleMutationTest
            ((FAutomationNearlyEqualTest *)this,local_48,0.0,__real_bf1a36e2e0000000,fVar1);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_48,
                     L"Mutation of base double value with positive half difference and positive tolerance"
                    );
  FAutomationNearlyEqualTest::RunDoubleMutationTest
            ((FAutomationNearlyEqualTest *)this,local_48,0.0,__real_3f0a36e2e0000000,fVar1);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_48,
                     L"Mutation of base double value with negative half difference and positive tolerance"
                    );
  FAutomationNearlyEqualTest::RunDoubleMutationTest
            ((FAutomationNearlyEqualTest *)this,local_48,0.0,__real_bf0a36e2e0000000,fVar1);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  if (FAutomationNearlyEqualTest::TestFailMessage.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)FAutomationNearlyEqualTest::TestFailMessage.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar4,*(int *)&this->field_0x80,0);
  return true;
}

// GetBeautifiedTestName @ 1487dd230

FString * __thiscall
FAutomationTestNearlyEqualDoublePositive::GetBeautifiedTestName
          (FAutomationTestNearlyEqualDoublePositive *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"TestFramework.Validation.TestNearlyEqualDoublePositive"
                    );
  return __return_storage_ptr__;
}

