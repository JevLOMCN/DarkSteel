// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fce790

EAutomationTestFlags __thiscall
FPCGCreatePointsGridTest_NegativeValuesGrid::GetTestFlags
          (FPCGCreatePointsGridTest_NegativeValuesGrid *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fce7a0

bool __thiscall
FPCGCreatePointsGridTest_NegativeValuesGrid::IsStressTest
          (FPCGCreatePointsGridTest_NegativeValuesGrid *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fce7b0

uint __thiscall
FPCGCreatePointsGridTest_NegativeValuesGrid::GetRequiredDeviceNum
          (FPCGCreatePointsGridTest_NegativeValuesGrid *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fce7c0

FString * __thiscall
FPCGCreatePointsGridTest_NegativeValuesGrid::GetTestSourceFileName
          (FPCGCreatePointsGridTest_NegativeValuesGrid *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGCreatePointsGridTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fce7f0

int __thiscall
FPCGCreatePointsGridTest_NegativeValuesGrid::GetTestSourceFileLine
          (FPCGCreatePointsGridTest_NegativeValuesGrid *this)

{
  return 0x109;
}

// GetTests @ 149fce800

/* WARNING: Removing unreachable block (ram,0x000149fce8ed) */
/* WARNING: Removing unreachable block (ram,0x000149fce9b8) */

void __thiscall
FPCGCreatePointsGridTest_NegativeValuesGrid::GetTests
          (FPCGCreatePointsGridTest_NegativeValuesGrid *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.CreatePointsGrid.NegativeValuesGrid");
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

// RunTest @ 149fce9e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGCreatePointsGridTest_NegativeValuesGrid::RunTest
          (FPCGCreatePointsGridTest_NegativeValuesGrid *this,FString *param_1)

{
  int iVar1;
  bool bVar2;
  FString *pFVar3;
  ForAnyElementType FVar4;
  undefined8 *local_res18 [2];
  FString local_48;
  undefined8 local_38;
  TVector<double>_u_0 local_28;
  
  pFVar3 = ::FString::FString(&local_48,L"must not be less than 0");
  FAutomationTestBase::AddExpectedError((FAutomationTestBase *)this,pFVar3,Contains,1,true);
  local_48.Data.AllocatorInstance.Data = ___xmm_40590000000000004059000000000000;
  local_48.Data.ArrayNum = _UNK_1512468d8;
  local_48.Data.ArrayMax = _UNK_1512468dc;
  local_38 = __real_4059000000000000;
  local_28._s_0.Z = __real_bff0000000000000;
  local_28._s_0.X = ___xmm_bff0000000000000bff0000000000000;
  local_28._s_0.Y = _UNK_15076c718;
  CreatePointsGridCommonTests::GenerateTestDataAndRunGrid
            ((EPCGPointPosition)local_res18,(TVector<double> *)0x0,(TVector<double> *)&local_28._s_0
            );
  iVar1 = *(int *)(local_res18[0] + 8);
  ::FString::FString(&local_48,"Output count");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar4.Data = local_48.Data.AllocatorInstance.Data;
  }
  bVar2 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar4.Data,iVar1,0);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_res18[0] != (undefined8 *)0x0) {
    (**(code **)*local_res18[0])(local_res18[0],1);
  }
  return bVar2;
}

// GetBeautifiedTestName @ 149fceaf0

FString * __thiscall
FPCGCreatePointsGridTest_NegativeValuesGrid::GetBeautifiedTestName
          (FPCGCreatePointsGridTest_NegativeValuesGrid *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.CreatePointsGrid.NegativeValuesGrid");
  return __return_storage_ptr__;
}

