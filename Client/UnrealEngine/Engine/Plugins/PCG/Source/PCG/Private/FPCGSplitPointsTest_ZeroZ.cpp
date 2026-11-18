// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 14a012b70

EAutomationTestFlags __thiscall
FPCGSplitPointsTest_ZeroZ::GetTestFlags(FPCGSplitPointsTest_ZeroZ *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a012b80

bool __thiscall FPCGSplitPointsTest_ZeroZ::IsStressTest(FPCGSplitPointsTest_ZeroZ *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a012b90

uint __thiscall FPCGSplitPointsTest_ZeroZ::GetRequiredDeviceNum(FPCGSplitPointsTest_ZeroZ *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a012ba0

FString * __thiscall
FPCGSplitPointsTest_ZeroZ::GetTestSourceFileName
          (FPCGSplitPointsTest_ZeroZ *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGSplitPointsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a012bd0

int __thiscall FPCGSplitPointsTest_ZeroZ::GetTestSourceFileLine(FPCGSplitPointsTest_ZeroZ *this)

{
  return 0x9d;
}

// GetTests @ 14a012be0

/* WARNING: Removing unreachable block (ram,0x00014a012ccd) */
/* WARNING: Removing unreachable block (ram,0x00014a012d98) */

void __thiscall
FPCGSplitPointsTest_ZeroZ::GetTests
          (FPCGSplitPointsTest_ZeroZ *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.SplitPoints.ZeroZ");
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

// RunTest @ 14a012dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FPCGSplitPointsTest_ZeroZ::RunTest(FPCGSplitPointsTest_ZeroZ *this,FString *param_1)

{
  bool bVar1;
  FTestParameters local_78;
  
  local_78.SplitAxis = Z;
  local_78.SplitPosition = 0.0;
  local_78.ExpectedABoundsMax.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_78.ExpectedABoundsMax.field0_0x0._s_0.Y = _UNK_150689688;
  local_78.ExpectedBBoundsMax.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_78.ExpectedBBoundsMax.field0_0x0._s_0.Y = _UNK_150689688;
  local_78.ExpectedBBoundsMax.field0_0x0._s_0.Z = __real_3ff0000000000000;
  local_78.ExpectedABoundsMin.field0_0x0._s_0.X = __real_bff0000000000000;
  local_78.ExpectedABoundsMin.field0_0x0._s_0.Y = ___xmm_bff0000000000000bff0000000000000;
  local_78.ExpectedABoundsMin.field0_0x0._s_0.Z = _UNK_15076c718;
  local_78.ExpectedABoundsMax.field0_0x0._s_0.Z = ___xmm_bff0000000000000bff0000000000000;
  local_78.ExpectedBBoundsMin.field0_0x0._s_0.X = _UNK_15076c718;
  local_78.ExpectedBBoundsMin.field0_0x0._s_0.Y = ___xmm_bff0000000000000bff0000000000000;
  local_78.ExpectedBBoundsMin.field0_0x0._s_0.Z = _UNK_15076c718;
  bVar1 = FPCGSplitPointTestBase::GenerateTestDataRunAndValidate
                    ((FPCGSplitPointTestBase *)this,&local_78);
  return bVar1;
}

// GetBeautifiedTestName @ 14a012e50

FString * __thiscall
FPCGSplitPointsTest_ZeroZ::GetBeautifiedTestName
          (FPCGSplitPointsTest_ZeroZ *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.SplitPoints.ZeroZ");
  return __return_storage_ptr__;
}

