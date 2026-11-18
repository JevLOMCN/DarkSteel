// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1418a4990

EAutomationTestFlags __thiscall
FRWAccessDetector_FullyRecursiveReadReentrance::GetTestFlags
          (FRWAccessDetector_FullyRecursiveReadReentrance *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1418a49a0

bool __thiscall
FRWAccessDetector_FullyRecursiveReadReentrance::IsStressTest
          (FRWAccessDetector_FullyRecursiveReadReentrance *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1418a49b0

uint __thiscall
FRWAccessDetector_FullyRecursiveReadReentrance::GetRequiredDeviceNum
          (FRWAccessDetector_FullyRecursiveReadReentrance *this)

{
  return 1;
}

// GetTestSourceFileName @ 1418a49c0

FString * __thiscall
FRWAccessDetector_FullyRecursiveReadReentrance::GetTestSourceFileName
          (FRWAccessDetector_FullyRecursiveReadReentrance *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1418a49f0

int __thiscall
FRWAccessDetector_FullyRecursiveReadReentrance::GetTestSourceFileLine
          (FRWAccessDetector_FullyRecursiveReadReentrance *this)

{
  return 0x174;
}

// GetTests @ 1418a4a00

/* WARNING: Removing unreachable block (ram,0x0001418a4aed) */
/* WARNING: Removing unreachable block (ram,0x0001418a4bb8) */

void __thiscall
FRWAccessDetector_FullyRecursiveReadReentrance::GetTests
          (FRWAccessDetector_FullyRecursiveReadReentrance *this,
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
  
  ::FString::FString(&local_18,"System.Core.Misc.MTAccessDetector.FullyRecursiveReadReentrance");
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

// RunTest @ 1418a4be0

/* WARNING: Removing unreachable block (ram,0x0001418a4c5c) */
/* WARNING: Removing unreachable block (ram,0x0001418a4c81) */
/* WARNING: Removing unreachable block (ram,0x0001418a4c22) */
/* WARNING: Removing unreachable block (ram,0x0001418a4c2b) */
/* WARNING: Removing unreachable block (ram,0x0001418a4c50) */
/* WARNING: Removing unreachable block (ram,0x0001418a4c51) */
/* WARNING: Removing unreachable block (ram,0x0001418a4d84) */
/* WARNING: Removing unreachable block (ram,0x0001418a4da9) */
/* WARNING: Removing unreachable block (ram,0x0001418a4daa) */
/* WARNING: Removing unreachable block (ram,0x0001418a4e64) */

bool __thiscall
FRWAccessDetector_FullyRecursiveReadReentrance::RunTest
          (FRWAccessDetector_FullyRecursiveReadReentrance *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  DWORD DVar8;
  uint local_28;
  DWORD local_24;
  
  local_24 = 0xffffffff;
  local_28 = 0;
  DVar8 = GetCurrentThreadId();
  if (DVar8 != 0xffffffff) {
    LOCK();
    local_28 = 0x100000;
    UNLOCK();
    local_24 = DVar8;
  }
  bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Acquiring Write Access",true);
  DVar8 = GetCurrentThreadId();
  if (local_24 == DVar8) {
    bVar3 = true;
  }
  else {
    LOCK();
    UNLOCK();
    if (((local_28 != 0) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                              ,0x5c,L"Acquiring a read access while there is already a write access"
                             ), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
    bVar3 = local_28 == 0;
    local_28 = local_28 + 1;
  }
  bVar3 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Acquiring Read Access",bVar3);
  DVar8 = GetCurrentThreadId();
  if (local_24 == DVar8) {
    bVar4 = true;
  }
  else {
    LOCK();
    UNLOCK();
    if ((((local_28 & 0xfff00000) != 0) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x67,
                           L"Another thread asked to have a write access during this read access"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
    bVar4 = (local_28 & 0xfff00000) == 0;
    local_28 = local_28 - 1;
  }
  bVar4 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Releasing Read Access",bVar4);
  GetCurrentThreadId();
  LOCK();
  UNLOCK();
  if (((local_28 != 0x100000) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x7d,
                         L"Another thread asked to have a read or write access during this write access"
                        ), bVar5)) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  bVar5 = FAutomationTestBase::TestTrue
                    ((FAutomationTestBase *)this,L"Releasing Write Access",local_28 == 0x100000);
  if ((local_28 != 0x100000) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AtomicValue.load(std::memory_order_relaxed) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x3a,L"Detector cannot be destroyed while other threads access it"), bVar7
     )) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return bVar5 && ((bVar3 && bVar2) && bVar4);
}

// GetBeautifiedTestName @ 1418a4e70

FString * __thiscall
FRWAccessDetector_FullyRecursiveReadReentrance::GetBeautifiedTestName
          (FRWAccessDetector_FullyRecursiveReadReentrance *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Core.Misc.MTAccessDetector.FullyRecursiveReadReentrance");
  return __return_storage_ptr__;
}

