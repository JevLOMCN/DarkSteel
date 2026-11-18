// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// GetTestFlags @ 1422fbd10

EAutomationTestFlags __thiscall
FPublicExportMapBasicTest::GetTestFlags(FPublicExportMapBasicTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1422fbd20

bool __thiscall FPublicExportMapBasicTest::IsStressTest(FPublicExportMapBasicTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1422fbd30

uint __thiscall FPublicExportMapBasicTest::GetRequiredDeviceNum(FPublicExportMapBasicTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1422fbd40

FString * __thiscall
FPublicExportMapBasicTest::GetTestSourceFileName
          (FPublicExportMapBasicTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1422fbd70

int __thiscall FPublicExportMapBasicTest::GetTestSourceFileLine(FPublicExportMapBasicTest *this)

{
  return 0x3024;
}

// GetTests @ 1422fbd80

/* WARNING: Removing unreachable block (ram,0x0001422fbe6d) */
/* WARNING: Removing unreachable block (ram,0x0001422fbf38) */

void __thiscall
FPublicExportMapBasicTest::GetTests
          (FPublicExportMapBasicTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Loading.FPublicExportMap.Basic");
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

// RunTest @ 1422fbf60

bool __thiscall FPublicExportMapBasicTest::RunTest(FPublicExportMapBasicTest *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FPublicExportMap_u_0 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_18 = 0xffffffff;
  local_28.Allocation = (uchar *)0x0;
  local_20 = 0;
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Empty map has no count",0,0);
  iVar4 = local_20._4_4_;
  if ((local_20._4_4_ != 1) && (local_20 < 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Empty map has no keys",iVar4,0);
  iVar4 = local_20._4_4_;
  if ((local_20._4_4_ != 1) && (local_20 < 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Empty map has no values",iVar4,0);
  FLoadedPackageRef::FPublicExportMap::Store((FPublicExportMap *)&local_28,1,2);
  iVar4 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_28,1);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find stored key",iVar4,2);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Store increased size",(int)local_20,1);
  FLoadedPackageRef::FPublicExportMap::Store((FPublicExportMap *)&local_28,2,3);
  iVar4 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_28,2);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find stored key",iVar4,3);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Store increased size",(int)local_20,2);
  bVar2 = FLoadedPackageRef::FPublicExportMap::Remove((FPublicExportMap *)&local_28,1);
  if (!bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_68,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Removed decreased count",(int)local_20,1);
  bVar2 = FLoadedPackageRef::FPublicExportMap::Remove((FPublicExportMap *)&local_28,1);
  if (bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_58,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Failed remove does not change count",(int)local_20,1);
  iVar4 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_28,1);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find removed key fails",iVar4,-1);
  bVar2 = FLoadedPackageRef::FPublicExportMap::Remove((FPublicExportMap *)&local_28,2);
  if (!bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Removed decreased count",(int)local_20,0);
  bVar2 = FLoadedPackageRef::FPublicExportMap::Remove((FPublicExportMap *)&local_28,2);
  if (bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Failed remove does not change count",(int)local_20,0);
  iVar4 = FLoadedPackageRef::FPublicExportMap::Find((FPublicExportMap *)&local_28,2);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Find removed key fails",iVar4,-1);
  if (1 < local_20._4_4_) {
    FMemory::Free(local_28.Allocation);
  }
  return true;
}

// GetBeautifiedTestName @ 1422fc2d0

FString * __thiscall
FPublicExportMapBasicTest::GetBeautifiedTestName
          (FPublicExportMapBasicTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Loading.FPublicExportMap.Basic");
  return __return_storage_ptr__;
}

