// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1418a1230

EAutomationTestFlags __thiscall
FRWAccessDetector_ReadReentrance::GetTestFlags(FRWAccessDetector_ReadReentrance *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1418a1240

bool __thiscall
FRWAccessDetector_ReadReentrance::IsStressTest(FRWAccessDetector_ReadReentrance *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1418a1250

uint __thiscall
FRWAccessDetector_ReadReentrance::GetRequiredDeviceNum(FRWAccessDetector_ReadReentrance *this)

{
  return 1;
}

// GetTestSourceFileName @ 1418a1260

FString * __thiscall
FRWAccessDetector_ReadReentrance::GetTestSourceFileName
          (FRWAccessDetector_ReadReentrance *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1418a1290

int __thiscall
FRWAccessDetector_ReadReentrance::GetTestSourceFileLine(FRWAccessDetector_ReadReentrance *this)

{
  return 0x94;
}

// GetTests @ 1418a12a0

/* WARNING: Removing unreachable block (ram,0x0001418a138d) */
/* WARNING: Removing unreachable block (ram,0x0001418a1458) */

void __thiscall
FRWAccessDetector_ReadReentrance::GetTests
          (FRWAccessDetector_ReadReentrance *this,
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
  
  ::FString::FString(&local_18,"System.Core.Misc.MTAccessDetector.ReadReentrance");
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

// RunTest @ 1418a1480

/* WARNING: Removing unreachable block (ram,0x0001418a15db) */
/* WARNING: Removing unreachable block (ram,0x0001418a15e4) */
/* WARNING: Removing unreachable block (ram,0x0001418a1609) */
/* WARNING: Removing unreachable block (ram,0x0001418a14c1) */
/* WARNING: Removing unreachable block (ram,0x0001418a14ca) */
/* WARNING: Removing unreachable block (ram,0x0001418a14ef) */
/* WARNING: Removing unreachable block (ram,0x0001418a162f) */
/* WARNING: Removing unreachable block (ram,0x0001418a1654) */

bool __thiscall
FRWAccessDetector_ReadReentrance::RunTest(FRWAccessDetector_ReadReentrance *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  
  bVar2 = UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure;
  LOCK();
  UNLOCK();
  UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure = true;
  bVar3 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Acquiring Write Access",true);
  LOCK();
  UNLOCK();
  if ((UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x5c,L"Acquiring a read access while there is already a write access"),
     bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  bVar4 = FAutomationTestBase::TestFalse((FAutomationTestBase *)this,L"Acquiring Read Access",false)
  ;
  LOCK();
  UNLOCK();
  if ((UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x67,
                         L"Another thread asked to have a write access during this read access"),
     bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  bVar6 = FAutomationTestBase::TestFalse((FAutomationTestBase *)this,L"Releasing Read Access",false)
  ;
  LOCK();
  UNLOCK();
  bVar7 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Releasing Write Access",true);
  UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure = bVar2;
  return bVar7 && ((bVar4 && bVar3) && bVar6);
}

// GetBeautifiedTestName @ 1418a1680

FString * __thiscall
FRWAccessDetector_ReadReentrance::GetBeautifiedTestName
          (FRWAccessDetector_ReadReentrance *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Misc.MTAccessDetector.ReadReentrance");
  return __return_storage_ptr__;
}

