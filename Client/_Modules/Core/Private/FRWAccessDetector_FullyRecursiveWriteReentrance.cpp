// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1418a43c0

EAutomationTestFlags __thiscall
FRWAccessDetector_FullyRecursiveWriteReentrance::GetTestFlags
          (FRWAccessDetector_FullyRecursiveWriteReentrance *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1418a43d0

bool __thiscall
FRWAccessDetector_FullyRecursiveWriteReentrance::IsStressTest
          (FRWAccessDetector_FullyRecursiveWriteReentrance *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1418a43e0

uint __thiscall
FRWAccessDetector_FullyRecursiveWriteReentrance::GetRequiredDeviceNum
          (FRWAccessDetector_FullyRecursiveWriteReentrance *this)

{
  return 1;
}

// GetTestSourceFileName @ 1418a43f0

FString * __thiscall
FRWAccessDetector_FullyRecursiveWriteReentrance::GetTestSourceFileName
          (FRWAccessDetector_FullyRecursiveWriteReentrance *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1418a4420

int __thiscall
FRWAccessDetector_FullyRecursiveWriteReentrance::GetTestSourceFileLine
          (FRWAccessDetector_FullyRecursiveWriteReentrance *this)

{
  return 0x166;
}

// GetTests @ 1418a4430

/* WARNING: Removing unreachable block (ram,0x0001418a451d) */
/* WARNING: Removing unreachable block (ram,0x0001418a45e8) */

void __thiscall
FRWAccessDetector_FullyRecursiveWriteReentrance::GetTests
          (FRWAccessDetector_FullyRecursiveWriteReentrance *this,
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
  
  ::FString::FString(&local_18,"System.Core.Misc.MTAccessDetector.FullyRecursiveWriteReentrance");
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

// RunTest @ 1418a4610

/* WARNING: Removing unreachable block (ram,0x0001418a468c) */
/* WARNING: Removing unreachable block (ram,0x0001418a46b1) */
/* WARNING: Removing unreachable block (ram,0x0001418a4652) */
/* WARNING: Removing unreachable block (ram,0x0001418a465b) */
/* WARNING: Removing unreachable block (ram,0x0001418a4680) */
/* WARNING: Removing unreachable block (ram,0x0001418a4681) */

bool __thiscall
FRWAccessDetector_FullyRecursiveWriteReentrance::RunTest
          (FRWAccessDetector_FullyRecursiveWriteReentrance *this,FString *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  DWORD DVar9;
  int local_28;
  DWORD local_24;
  int local_20;
  
  local_24 = 0xffffffff;
  local_28 = 0;
  DVar9 = GetCurrentThreadId();
  if (DVar9 != 0xffffffff) {
    LOCK();
    local_28 = 0x100000;
    UNLOCK();
    local_24 = DVar9;
  }
  local_20 = 1;
  bVar3 = FAutomationTestBase::TestTrue
                    ((FAutomationTestBase *)this,L"Acquiring 1st Write Access",true);
  DVar9 = GetCurrentThreadId();
  if (local_24 == DVar9) {
LAB_1418a474b:
    local_20 = 2;
    bVar4 = true;
  }
  else {
    LOCK();
    UNLOCK();
    if (local_28 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RecursiveDepth == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0xb4,L"");
      local_28 = local_28 + 0x100000;
      local_24 = DVar9;
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      goto LAB_1418a474b;
    }
    if ((UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x72,
                           L"Acquiring a write access while there are ongoing read or write access")
       , bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    bVar4 = false;
    local_28 = local_28 + 0x100000;
  }
  bVar4 = FAutomationTestBase::TestTrue
                    ((FAutomationTestBase *)this,L"Acquiring 2nd Write Access",bVar4);
  DVar9 = GetCurrentThreadId();
  if (local_24 == DVar9) {
    if ((local_20 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RecursiveDepth > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0xc5,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    local_20 = local_20 + -1;
    if (local_20 == 0) {
      local_24 = 0xffffffff;
      goto LAB_1418a47b9;
    }
    bVar6 = true;
  }
  else {
LAB_1418a47b9:
    LOCK();
    iVar2 = local_28 + -0x100000;
    UNLOCK();
    bVar6 = local_28 == 0x100000;
    local_28 = iVar2;
    if (((!bVar6) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x7d,
                           L"Another thread asked to have a read or write access during this write access"
                          ), bVar7)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  bVar6 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Releasing Write Access",bVar6)
  ;
  DVar9 = GetCurrentThreadId();
  if (local_24 == DVar9) {
    if ((local_20 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("RecursiveDepth > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0xc5,L""), bVar7)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    if (local_20 != 1) {
      bVar7 = true;
      goto LAB_1418a48a6;
    }
  }
  LOCK();
  iVar2 = local_28 + -0x100000;
  UNLOCK();
  bVar7 = local_28 == 0x100000;
  local_28 = iVar2;
  if (((!bVar7) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x7d,
                         L"Another thread asked to have a read or write access during this write access"
                        ), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
LAB_1418a48a6:
  bVar7 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Releasing Write Access",bVar7)
  ;
  if ((local_28 != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AtomicValue.load(std::memory_order_relaxed) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x3a,L"Detector cannot be destroyed while other threads access it"), bVar8
     )) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return bVar7 && ((bVar4 && bVar3) && bVar6);
}

// GetBeautifiedTestName @ 1418a4920

FString * __thiscall
FRWAccessDetector_FullyRecursiveWriteReentrance::GetBeautifiedTestName
          (FRWAccessDetector_FullyRecursiveWriteReentrance *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Core.Misc.MTAccessDetector.FullyRecursiveWriteReentrance");
  return __return_storage_ptr__;
}

