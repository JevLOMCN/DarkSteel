// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149f7c0b0

EAutomationTestFlags __thiscall
FPCGPointArrayDataToPointDataTest::GetTestFlags(FPCGPointArrayDataToPointDataTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f7c0c0

bool __thiscall
FPCGPointArrayDataToPointDataTest::IsStressTest(FPCGPointArrayDataToPointDataTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f7c0d0

uint __thiscall
FPCGPointArrayDataToPointDataTest::GetRequiredDeviceNum(FPCGPointArrayDataToPointDataTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f7c0e0

FString * __thiscall
FPCGPointArrayDataToPointDataTest::GetTestSourceFileName
          (FPCGPointArrayDataToPointDataTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Data\\PCGPointArrayDataTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f7c110

int __thiscall
FPCGPointArrayDataToPointDataTest::GetTestSourceFileLine(FPCGPointArrayDataToPointDataTest *this)

{
  return 0x50;
}

// GetTests @ 149f7c120

/* WARNING: Removing unreachable block (ram,0x000149f7c20d) */
/* WARNING: Removing unreachable block (ram,0x000149f7c2d8) */

void __thiscall
FPCGPointArrayDataToPointDataTest::GetTests
          (FPCGPointArrayDataToPointDataTest *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.PointArrayData.ToPointData");
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

// RunTest @ 149f7c300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPointArrayDataToPointDataTest::RunTest(FPCGPointArrayDataToPointDataTest *this,FString *param_1)

{
  bool bVar1;
  UPCGPointArrayData *pUVar2;
  UPCGBasePointData *pUVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined4 local_17;
  undefined2 local_13;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  pUVar2 = PCGTestsCommon::CreateRandomPointData<UPCGPointArrayData,0>(100,0x2a,false);
  local_18 = 0;
  local_17 = 0;
  local_13 = 0;
  local_11 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  pUVar3 = (UPCGBasePointData *)(**(code **)(pUVar2->_padding_ + 0x3b0))(pUVar2,0,&local_48);
  bVar1 = FPCGPointArrayDataTestBaseClass::TestEqualData
                    ((FPCGPointArrayDataTestBaseClass *)this,(UPCGBasePointData *)pUVar2,pUVar3);
  return bVar1;
}

// GetBeautifiedTestName @ 149f7c3a0

FString * __thiscall
FPCGPointArrayDataToPointDataTest::GetBeautifiedTestName
          (FPCGPointArrayDataToPointDataTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.PointArrayData.ToPointData");
  return __return_storage_ptr__;
}

