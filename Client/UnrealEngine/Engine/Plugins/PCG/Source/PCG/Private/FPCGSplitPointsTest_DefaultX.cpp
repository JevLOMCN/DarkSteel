// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 14a011ae0

EAutomationTestFlags __thiscall
FPCGSplitPointsTest_DefaultX::GetTestFlags(FPCGSplitPointsTest_DefaultX *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a011af0

bool __thiscall FPCGSplitPointsTest_DefaultX::IsStressTest(FPCGSplitPointsTest_DefaultX *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a011b00

uint __thiscall
FPCGSplitPointsTest_DefaultX::GetRequiredDeviceNum(FPCGSplitPointsTest_DefaultX *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a011b10

FString * __thiscall
FPCGSplitPointsTest_DefaultX::GetTestSourceFileName
          (FPCGSplitPointsTest_DefaultX *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGSplitPointsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a011b40

int __thiscall
FPCGSplitPointsTest_DefaultX::GetTestSourceFileLine(FPCGSplitPointsTest_DefaultX *this)

{
  return 0x4d;
}

// GetTests @ 14a011b50

/* WARNING: Removing unreachable block (ram,0x00014a011c3d) */
/* WARNING: Removing unreachable block (ram,0x00014a011d08) */

void __thiscall
FPCGSplitPointsTest_DefaultX::GetTests
          (FPCGSplitPointsTest_DefaultX *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.SplitPoints.DefaultX");
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

// RunTest @ 14a011d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGSplitPointsTest_DefaultX::RunTest(FPCGSplitPointsTest_DefaultX *this,FString *param_1)

{
  bool bVar1;
  FTestParameters local_78;
  
  local_78.SplitPosition = 0.5;
  local_78.SplitAxis = X;
  local_78.ExpectedABoundsMax.field0_0x0._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_78.ExpectedABoundsMax.field0_0x0._s_0.Y = _UNK_15061cbc8;
  local_78.ExpectedBBoundsMax.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_78.ExpectedBBoundsMax.field0_0x0._s_0.Y = _UNK_150689688;
  local_78.ExpectedABoundsMin.field0_0x0._s_0.X = __real_bff0000000000000;
  local_78.ExpectedBBoundsMax.field0_0x0._s_0.Z = __real_3ff0000000000000;
  local_78.ExpectedABoundsMin.field0_0x0._s_0.Y = ___xmm_bff0000000000000bff0000000000000;
  local_78.ExpectedABoundsMin.field0_0x0._s_0.Z = _UNK_15076c718;
  local_78.ExpectedABoundsMax.field0_0x0._s_0.Z = ___xmm_00000000000000003ff0000000000000;
  local_78.ExpectedBBoundsMin.field0_0x0._s_0.X = _UNK_150689518;
  local_78.ExpectedBBoundsMin.field0_0x0._s_0.Y = ___xmm_bff0000000000000bff0000000000000;
  local_78.ExpectedBBoundsMin.field0_0x0._s_0.Z = _UNK_15076c718;
  bVar1 = FPCGSplitPointTestBase::GenerateTestDataRunAndValidate
                    ((FPCGSplitPointTestBase *)this,&local_78);
  return bVar1;
}

// GetBeautifiedTestName @ 14a011dc0

FString * __thiscall
FPCGSplitPointsTest_DefaultX::GetBeautifiedTestName
          (FPCGSplitPointsTest_DefaultX *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.SplitPoints.DefaultX");
  return __return_storage_ptr__;
}

