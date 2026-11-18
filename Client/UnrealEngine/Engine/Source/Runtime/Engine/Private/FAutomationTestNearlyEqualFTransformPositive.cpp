// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487dfc50

EAutomationTestFlags __thiscall
FAutomationTestNearlyEqualFTransformPositive::GetTestFlags
          (FAutomationTestNearlyEqualFTransformPositive *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1487dfc60

bool __thiscall
FAutomationTestNearlyEqualFTransformPositive::IsStressTest
          (FAutomationTestNearlyEqualFTransformPositive *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487dfc70

uint __thiscall
FAutomationTestNearlyEqualFTransformPositive::GetRequiredDeviceNum
          (FAutomationTestNearlyEqualFTransformPositive *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487dfc80

FString * __thiscall
FAutomationTestNearlyEqualFTransformPositive::GetTestSourceFileName
          (FAutomationTestNearlyEqualFTransformPositive *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487dfcb0

int __thiscall
FAutomationTestNearlyEqualFTransformPositive::GetTestSourceFileLine
          (FAutomationTestNearlyEqualFTransformPositive *this)

{
  return 0x397;
}

// GetTests @ 1487dfcc0

/* WARNING: Removing unreachable block (ram,0x0001487dfdad) */
/* WARNING: Removing unreachable block (ram,0x0001487dfe78) */

void __thiscall
FAutomationTestNearlyEqualFTransformPositive::GetTests
          (FAutomationTestNearlyEqualFTransformPositive *this,
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
  
  ::FString::FString(&local_18,"TestFramework.Validation.TestNearlyEqualFTransformPositive");
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

// RunTest @ 1487dfee0

bool __thiscall
FAutomationTestNearlyEqualFTransformPositive::RunTest
          (FAutomationTestNearlyEqualFTransformPositive *this,FString *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double adVar5 [2];
  double adVar6 [2];
  double adVar7 [2];
  double adVar8 [2];
  float fVar9;
  TTransform<double> *pTVar10;
  __m128d _Var11;
  __m128d _Var12;
  __m128d _Var13;
  __m128d _Var14;
  ForAnyElementType FVar15;
  wchar_t *pwVar16;
  FString local_198;
  double local_188 [2];
  double local_178 [2];
  TTransform<double> local_168;
  TTransform<double> local_108 [2];
  
  _Var14.m128d_f64 = FAutomationNearlyEqualTest::ActualFTransformValue.Translation.ZW.m128d_f64;
  _Var13.m128d_f64 = FAutomationNearlyEqualTest::ActualFTransformValue.Translation.XY.m128d_f64;
  _Var12.m128d_f64 = FAutomationNearlyEqualTest::ActualFTransformValue.Rotation.ZW.m128d_f64;
  _Var11.m128d_f64 = FAutomationNearlyEqualTest::ActualFTransformValue.Rotation.XY.m128d_f64;
  local_188 = FAutomationNearlyEqualTest::ActualFTransformValue.Scale3D.XY.m128d_f64;
  adVar5 = *&(FAutomationNearlyEqualTest::ExpectedFTransformValue->Rotation).XY.m128d_f64;
  adVar6 = *&(FAutomationNearlyEqualTest::ExpectedFTransformValue->Rotation).ZW.m128d_f64;
  adVar7 = *&(FAutomationNearlyEqualTest::ExpectedFTransformValue->Translation).XY.m128d_f64;
  adVar8 = *&(FAutomationNearlyEqualTest::ExpectedFTransformValue->Translation).ZW.m128d_f64;
  dVar1 = (FAutomationNearlyEqualTest::ExpectedFTransformValue->Scale3D).XY.m128d_f64[0];
  dVar2 = (FAutomationNearlyEqualTest::ExpectedFTransformValue->Scale3D).XY.m128d_f64[1];
  dVar3 = (FAutomationNearlyEqualTest::ExpectedFTransformValue->Scale3D).ZW.m128d_f64[0];
  dVar4 = (FAutomationNearlyEqualTest::ExpectedFTransformValue->Scale3D).ZW.m128d_f64[1];
  local_178 = FAutomationNearlyEqualTest::ActualFTransformValue.Scale3D.ZW.m128d_f64;
  ::FString::FString(&local_198,L"The same FTransform values with null tolerance");
  pwVar16 = L"";
  local_108[0].Scale3D.XY.m128d_f64[0] = local_188[0];
  local_108[0].Scale3D.XY.m128d_f64[1] = local_188[1];
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_198.Data.ArrayNum != 0) {
    FVar15.Data = local_198.Data.AllocatorInstance.Data;
  }
  local_108[0].Rotation.XY.m128d_f64 = _Var11.m128d_f64;
  local_108[0].Rotation.ZW.m128d_f64 = _Var12.m128d_f64;
  local_108[0].Translation.XY.m128d_f64 = _Var13.m128d_f64;
  local_108[0].Translation.ZW.m128d_f64 = _Var14.m128d_f64;
  local_108[0].Scale3D.ZW.m128d_f64[0] = local_178[0];
  local_108[0].Scale3D.ZW.m128d_f64[1] = local_178[1];
  local_168.Rotation.XY.m128d_f64 = adVar5;
  local_168.Rotation.ZW.m128d_f64 = adVar6;
  local_168.Translation.XY.m128d_f64 = adVar7;
  local_168.Translation.ZW.m128d_f64 = adVar8;
  local_168.Scale3D.XY.m128d_f64[0] = dVar1;
  local_168.Scale3D.XY.m128d_f64[1] = dVar2;
  local_168.Scale3D.ZW.m128d_f64[0] = dVar3;
  local_168.Scale3D.ZW.m128d_f64[1] = dVar4;
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,local_108,&local_168,0.0);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  _Var14.m128d_f64 = FAutomationNearlyEqualTest::ActualFTransformValue.Translation.ZW.m128d_f64;
  _Var13.m128d_f64 = FAutomationNearlyEqualTest::ActualFTransformValue.Translation.XY.m128d_f64;
  _Var12.m128d_f64 = FAutomationNearlyEqualTest::ActualFTransformValue.Rotation.ZW.m128d_f64;
  _Var11.m128d_f64 = FAutomationNearlyEqualTest::ActualFTransformValue.Rotation.XY.m128d_f64;
  adVar5 = *&(FAutomationNearlyEqualTest::ExpectedFTransformValue->Rotation).XY.m128d_f64;
  adVar6 = *&(FAutomationNearlyEqualTest::ExpectedFTransformValue->Rotation).ZW.m128d_f64;
  adVar7 = *&(FAutomationNearlyEqualTest::ExpectedFTransformValue->Translation).XY.m128d_f64;
  adVar8 = *&(FAutomationNearlyEqualTest::ExpectedFTransformValue->Translation).ZW.m128d_f64;
  dVar1 = (FAutomationNearlyEqualTest::ExpectedFTransformValue->Scale3D).XY.m128d_f64[0];
  dVar2 = (FAutomationNearlyEqualTest::ExpectedFTransformValue->Scale3D).XY.m128d_f64[1];
  dVar3 = (FAutomationNearlyEqualTest::ExpectedFTransformValue->Scale3D).ZW.m128d_f64[0];
  dVar4 = (FAutomationNearlyEqualTest::ExpectedFTransformValue->Scale3D).ZW.m128d_f64[1];
  local_178[0] = FAutomationNearlyEqualTest::ActualFTransformValue.Scale3D.XY.m128d_f64[0];
  local_178[1] = FAutomationNearlyEqualTest::ActualFTransformValue.Scale3D.XY.m128d_f64[1];
  local_188[0] = FAutomationNearlyEqualTest::ActualFTransformValue.Scale3D.ZW.m128d_f64[0];
  local_188[1] = FAutomationNearlyEqualTest::ActualFTransformValue.Scale3D.ZW.m128d_f64[1];
  ::FString::FString(&local_198,L"The same FTransform values with positive tolerance");
  fVar9 = __real_38d1b717;
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_198.Data.ArrayNum != 0) {
    FVar15.Data = local_198.Data.AllocatorInstance.Data;
  }
  local_168.Scale3D.XY.m128d_f64[0] = local_178[0];
  local_168.Scale3D.XY.m128d_f64[1] = local_178[1];
  local_168.Scale3D.ZW.m128d_f64[0] = local_188[0];
  local_168.Scale3D.ZW.m128d_f64[1] = local_188[1];
  local_168.Rotation.XY.m128d_f64 = _Var11.m128d_f64;
  local_168.Rotation.ZW.m128d_f64 = _Var12.m128d_f64;
  local_168.Translation.XY.m128d_f64 = _Var13.m128d_f64;
  local_168.Translation.ZW.m128d_f64 = _Var14.m128d_f64;
  local_108[0].Rotation.XY.m128d_f64 = adVar5;
  local_108[0].Rotation.ZW.m128d_f64 = adVar6;
  local_108[0].Translation.XY.m128d_f64 = adVar7;
  local_108[0].Translation.ZW.m128d_f64 = adVar8;
  local_108[0].Scale3D.XY.m128d_f64[0] = dVar1;
  local_108[0].Scale3D.XY.m128d_f64[1] = dVar2;
  local_108[0].Scale3D.ZW.m128d_f64[0] = dVar3;
  local_108[0].Scale3D.ZW.m128d_f64[1] = dVar4;
  FAutomationTestBase::TestNearlyEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,&local_168,local_108,__real_38d1b717
            );
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  pTVar10 = FAutomationNearlyEqualTest::BaseFTransformValue;
  ::FString::FString(&local_198,
                     L"Mutation of base FTransform value with the same positive difference and tolerance (edge case)"
                    );
  FAutomationNearlyEqualTest::RunFTransformMutationTest
            ((FAutomationNearlyEqualTest *)this,&local_198,pTVar10,__real_3f1a36e2e0000000,fVar9);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  pTVar10 = FAutomationNearlyEqualTest::BaseFTransformValue;
  ::FString::FString(&local_198,
                     L"Mutation of base FTransform value with negative difference and positive tolerance that are equal after being placed in Abs"
                    );
  FAutomationNearlyEqualTest::RunFTransformMutationTest
            ((FAutomationNearlyEqualTest *)this,&local_198,pTVar10,__real_bf1a36e2e0000000,fVar9);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  pTVar10 = FAutomationNearlyEqualTest::BaseFTransformValue;
  ::FString::FString(&local_198,
                     L"Mutation of base FTransform value with positive half difference and positive tolerance"
                    );
  FAutomationNearlyEqualTest::RunFTransformMutationTest
            ((FAutomationNearlyEqualTest *)this,&local_198,pTVar10,__real_3f0a36e2e0000000,fVar9);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  pTVar10 = FAutomationNearlyEqualTest::BaseFTransformValue;
  ::FString::FString(&local_198,
                     L"Mutation of base FTransform value with negative half difference and positive tolerance"
                    );
  FAutomationNearlyEqualTest::RunFTransformMutationTest
            ((FAutomationNearlyEqualTest *)this,&local_198,pTVar10,__real_bf0a36e2e0000000,fVar9);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (FAutomationNearlyEqualTest::TestFailMessage.Data.ArrayNum != 0) {
    pwVar16 = (wchar_t *)FAutomationNearlyEqualTest::TestFailMessage.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar16,*(int *)&this->field_0x80,0);
  return true;
}

// GetBeautifiedTestName @ 1487e0330

FString * __thiscall
FAutomationTestNearlyEqualFTransformPositive::GetBeautifiedTestName
          (FAutomationTestNearlyEqualFTransformPositive *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "TestFramework.Validation.TestNearlyEqualFTransformPositive");
  return __return_storage_ptr__;
}

