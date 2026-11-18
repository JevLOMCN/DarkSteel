// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487dc410

EAutomationTestFlags __thiscall
FAutomationTestNearlyEqualFloatPositive::GetTestFlags(FAutomationTestNearlyEqualFloatPositive *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1487dc420

bool __thiscall
FAutomationTestNearlyEqualFloatPositive::IsStressTest(FAutomationTestNearlyEqualFloatPositive *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487dc430

uint __thiscall
FAutomationTestNearlyEqualFloatPositive::GetRequiredDeviceNum
          (FAutomationTestNearlyEqualFloatPositive *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487dc440

FString * __thiscall
FAutomationTestNearlyEqualFloatPositive::GetTestSourceFileName
          (FAutomationTestNearlyEqualFloatPositive *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487dc470

int __thiscall
FAutomationTestNearlyEqualFloatPositive::GetTestSourceFileLine
          (FAutomationTestNearlyEqualFloatPositive *this)

{
  return 0x2da;
}

// GetTests @ 1487dc480

/* WARNING: Removing unreachable block (ram,0x0001487dc56d) */
/* WARNING: Removing unreachable block (ram,0x0001487dc638) */

void __thiscall
FAutomationTestNearlyEqualFloatPositive::GetTests
          (FAutomationTestNearlyEqualFloatPositive *this,
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
  
  ::FString::FString(&local_18,"TestFramework.Validation.TestNearlyEqualFloatPositive");
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

// RunTest @ 1487dc660

bool __thiscall
FAutomationTestNearlyEqualFloatPositive::RunTest
          (FAutomationTestNearlyEqualFloatPositive *this,FString *param_1)

{
  int iVar1;
  float fVar2;
  ForAnyElementType FVar3;
  wchar_t *pwVar4;
  FString local_38 [3];
  
  ::FString::FString(local_38,L"The same float values with null tolerance");
  pwVar4 = L"";
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar3.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,0.0,0.0,0.0);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_38,L"The same float values with positive tolerance");
  fVar2 = __real_38d1b717;
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar3.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,0.0,0.0,__real_38d1b717);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_38,
                     L"Mutation of base float value with the same positive difference and tolerance (edge case)"
                    );
  FAutomationNearlyEqualTest::RunFloatMutationTest
            ((FAutomationNearlyEqualTest *)this,local_38,0.0,fVar2,fVar2);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_38,
                     L"Mutation of base float value with negative difference and positive tolerance that are equal after being placed in Abs"
                    );
  FAutomationNearlyEqualTest::RunFloatMutationTest
            ((FAutomationNearlyEqualTest *)this,local_38,0.0,__real_b8d1b717,fVar2);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_38,
                     L"Mutation of base float value with positive half difference and positive tolerance"
                    );
  FAutomationNearlyEqualTest::RunFloatMutationTest
            ((FAutomationNearlyEqualTest *)this,local_38,0.0,__real_3851b717,fVar2);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_38,
                     L"Mutation of base float value with negative half difference and positive tolerance"
                    );
  FAutomationNearlyEqualTest::RunFloatMutationTest
            ((FAutomationNearlyEqualTest *)this,local_38,0.0,__real_b851b717,fVar2);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  iVar1 = *(int *)&this->field_0x80;
  FAutomationTestExecutionInfo::RemoveAllEvents
            ((FAutomationTestExecutionInfo *)&this->field_0x30,Error);
  if (FAutomationNearlyEqualTest::TestFailMessage.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)FAutomationNearlyEqualTest::TestFailMessage.Data.AllocatorInstance;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar4,iVar1,0);
  return true;
}

// GetBeautifiedTestName @ 1487dc860

FString * __thiscall
FAutomationTestNearlyEqualFloatPositive::GetBeautifiedTestName
          (FAutomationTestNearlyEqualFloatPositive *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"TestFramework.Validation.TestNearlyEqualFloatPositive")
  ;
  return __return_storage_ptr__;
}

