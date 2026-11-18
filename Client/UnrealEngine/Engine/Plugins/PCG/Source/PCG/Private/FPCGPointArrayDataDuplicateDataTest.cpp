// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149f7ac60

EAutomationTestFlags __thiscall
FPCGPointArrayDataDuplicateDataTest::GetTestFlags(FPCGPointArrayDataDuplicateDataTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f7ac70

bool __thiscall
FPCGPointArrayDataDuplicateDataTest::IsStressTest(FPCGPointArrayDataDuplicateDataTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f7ac80

uint __thiscall
FPCGPointArrayDataDuplicateDataTest::GetRequiredDeviceNum(FPCGPointArrayDataDuplicateDataTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f7ac90

FString * __thiscall
FPCGPointArrayDataDuplicateDataTest::GetTestSourceFileName
          (FPCGPointArrayDataDuplicateDataTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Data\\PCGPointArrayDataTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f7acc0

int __thiscall
FPCGPointArrayDataDuplicateDataTest::GetTestSourceFileLine
          (FPCGPointArrayDataDuplicateDataTest *this)

{
  return 0x4d;
}

// GetTests @ 149f7acd0

/* WARNING: Removing unreachable block (ram,0x000149f7adbd) */
/* WARNING: Removing unreachable block (ram,0x000149f7ae88) */

void __thiscall
FPCGPointArrayDataDuplicateDataTest::GetTests
          (FPCGPointArrayDataDuplicateDataTest *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.PointArrayData.DuplicateData");
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

// RunTest @ 149f7aeb0

bool __thiscall
FPCGPointArrayDataDuplicateDataTest::RunTest
          (FPCGPointArrayDataDuplicateDataTest *this,FString *param_1)

{
  longlong lVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  UPCGPointArrayData *pUVar8;
  UPCGSpatialData *pUVar9;
  UPCGPointArrayData *pUVar10;
  undefined8 uVar11;
  ForAnyElementType FVar12;
  undefined *puVar13;
  FString local_68;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  pTVar2 = CVarPCGEnablePointArrayDataParenting.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar7 = 1;
    if (!bVar3) goto LAB_149f7aeed;
  }
  lVar7 = 0;
LAB_149f7aeed:
  lVar1 = CVarPCGEnablePointArrayDataParenting._padding_;
  bVar3 = pTVar2->ShadowedValue[lVar7];
  local_58 = 0xe000000;
  lVar7 = *(longlong *)CVarPCGEnablePointArrayDataParenting._padding_;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0xf000000;
  local_40 = 0x1000000;
  (**(code **)(lVar7 + 0xa8))(CVarPCGEnablePointArrayDataParenting._padding_,&local_68,&local_58);
  (**(code **)(lVar7 + 0xb0))(lVar1,&u_1);
  pUVar8 = PCGTestsCommon::CreateRandomPointData<UPCGPointArrayData,0>(100,0x2a,false);
  iVar5 = (**(code **)(pUVar8->_padding_ + 0x640))(pUVar8,1);
  ::FString::FString(&local_68,"Valid ParentAllocatedProperties");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar12.Data = local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,0x53,iVar5);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pUVar9 = (UPCGSpatialData *)(**(code **)(pUVar8->_padding_ + 0x310))(pUVar8,0,1);
  pUVar10 = CastChecked<UPCGPointArrayData,UPCGSpatialData>(pUVar9);
  iVar5 = (**(code **)(pUVar8->_padding_ + 0x640))(pUVar8,1);
  iVar6 = (**(code **)(pUVar10->_padding_ + 0x640))(pUVar10,1);
  ::FString::FString(&local_68,
                     "ChildData->GetAllocatedProperties() == ParentData->GetAllocatedProperties()");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar12.Data = local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar6,iVar5);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  iVar5 = (**(code **)(pUVar10->_padding_ + 0x488))(pUVar10);
  iVar6 = (**(code **)(pUVar8->_padding_ + 0x488))(pUVar8);
  ::FString::FString(&local_68,"ChildData->GetNumPoints() == ParentData->GetNumPoints()");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar12.Data = local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar5 == iVar6);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  bVar4 = (bool)(**(code **)(pUVar10->_padding_ + 0x440))(pUVar10);
  ::FString::FString(&local_68,"ChildData has parent");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar12.Data = local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,bVar4);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  bVar4 = (bool)(**(code **)(pUVar8->_padding_ + 0x440))(pUVar8);
  ::FString::FString(&local_68,"ParentData has no parent");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar12.Data = local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,bVar4);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  bVar4 = FPCGPointArrayDataTestBaseClass::TestEqualData
                    ((FPCGPointArrayDataTestBaseClass *)this,(UPCGBasePointData *)pUVar8,
                     (UPCGBasePointData *)pUVar10);
  lVar1 = CVarPCGEnablePointArrayDataParenting._padding_;
  local_58 = 0xe000000;
  local_44 = 0xf000000;
  lVar7 = *(longlong *)CVarPCGEnablePointArrayDataParenting._padding_;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0x1000000;
  uVar11 = (**(code **)(lVar7 + 0xa8))
                     (CVarPCGEnablePointArrayDataParenting._padding_,&local_68,&local_58);
  puVar13 = &u_0;
  if (bVar3 != false) {
    puVar13 = &u_1;
  }
  (**(code **)(lVar7 + 0xb0))(lVar1,puVar13,uVar11);
  return bVar4;
}

// GetBeautifiedTestName @ 149f7b1b0

FString * __thiscall
FPCGPointArrayDataDuplicateDataTest::GetBeautifiedTestName
          (FPCGPointArrayDataDuplicateDataTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.PointArrayData.DuplicateData");
  return __return_storage_ptr__;
}

