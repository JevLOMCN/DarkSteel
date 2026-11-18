// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149f7d880

EAutomationTestFlags __thiscall
FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTest::GetTestFlags
          (FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f7d890

bool __thiscall
FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTest::IsStressTest
          (FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f7d8a0

uint __thiscall
FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTest::GetRequiredDeviceNum
          (FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f7d8b0

FString * __thiscall
FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTest::GetTestSourceFileName
          (FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTest *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Data\\PCGPointArrayDataTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f7d8e0

int __thiscall
FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTest::GetTestSourceFileLine
          (FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTest *this)

{
  return 0x56;
}

// GetTests @ 149f7d8f0

/* WARNING: Removing unreachable block (ram,0x000149f7d9dd) */
/* WARNING: Removing unreachable block (ram,0x000149f7daa8) */

void __thiscall
FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTest::GetTests
          (FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTest *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.PointArrayData.CopyPointsFromPointDataToPointArrayData")
  ;
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

// RunTest @ 149f7dad0

bool __thiscall
FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTest::RunTest
          (FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTest *this,FString *param_1)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  undefined4 uVar4;
  UPCGPointData *pUVar5;
  UObject *pUVar6;
  UPCGPointArrayData *pUVar7;
  
  pUVar5 = PCGTestsCommon::CreateRandomPointData<UPCGPointData,0>(100,0x2a,false);
  pUVar6 = GetTransientPackageAsObject();
  pUVar7 = NewObject<UPCGPointArrayData>(pUVar6);
  pcVar1 = *(code **)(pUVar7->_padding_ + 0x490);
  uVar4 = (**(code **)(pUVar5->_padding_ + 0x488))(pUVar5);
  (*pcVar1)(pUVar7,uVar4,1);
  lVar2 = pUVar5->_padding_;
  uVar4 = (**(code **)(lVar2 + 0x488))(pUVar5);
  (**(code **)(lVar2 + 0x638))(pUVar5,pUVar7,0,0,uVar4);
  bVar3 = FPCGPointArrayDataTestBaseClass::TestEqualData
                    ((FPCGPointArrayDataTestBaseClass *)this,(UPCGBasePointData *)pUVar7,
                     (UPCGBasePointData *)pUVar5);
  return bVar3;
}

// GetBeautifiedTestName @ 149f7db80

FString * __thiscall
FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTest::GetBeautifiedTestName
          (FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTest *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "Plugins.PCG.PointArrayData.CopyPointsFromPointDataToPointArrayData");
  return __return_storage_ptr__;
}

