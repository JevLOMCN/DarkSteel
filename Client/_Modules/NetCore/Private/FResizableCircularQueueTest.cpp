// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 8

// GetTestFlags @ 1441c4520

EAutomationTestFlags __thiscall
FResizableCircularQueueTest::GetTestFlags(FResizableCircularQueueTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1441c4530

bool __thiscall FResizableCircularQueueTest::IsStressTest(FResizableCircularQueueTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1441c4540

uint __thiscall FResizableCircularQueueTest::GetRequiredDeviceNum(FResizableCircularQueueTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1441c4550

FString * __thiscall
FResizableCircularQueueTest::GetTestSourceFileName
          (FResizableCircularQueueTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\ResizableCircularQueueTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1441c4580

int __thiscall FResizableCircularQueueTest::GetTestSourceFileLine(FResizableCircularQueueTest *this)

{
  return 8;
}

// GetTests @ 1441c4590

/* WARNING: Removing unreachable block (ram,0x0001441c467d) */
/* WARNING: Removing unreachable block (ram,0x0001441c4748) */

void __thiscall
FResizableCircularQueueTest::GetTests
          (FResizableCircularQueueTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Net.ResizableCircularQueueTest");
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

// RunTest @ 1441c4770

bool __thiscall
FResizableCircularQueueTest::RunTest(FResizableCircularQueueTest *this,FString *param_1)

{
  int *piVar1;
  code *pcVar2;
  FStructWithDestructorForResizableCiruclarQueuePopTest *pFVar3;
  ForAnyElementType _Src;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ForAnyElementType *pFVar17;
  bool bVar18;
  ulonglong uVar19;
  int iVar20;
  TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_> local_1c8;
  TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_> local_1a8;
  TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_> local_188;
  TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_> local_168;
  uint local_148;
  uint uStack_144;
  uint local_140;
  FStructWithDestructorForResizableCiruclarQueuePopTest *local_138;
  ulonglong local_130;
  TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_> local_128;
  TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_> local_108;
  undefined8 local_e8;
  uint local_e0;
  FStructWithDestructorForResizableCiruclarQueuePopTest *local_d8;
  ulonglong local_d0;
  ForAnyElementType local_c8;
  int local_c0 [2];
  TResizableCircularQueue<int,TSizedDefaultAllocator<32>_> local_b8;
  undefined8 local_98;
  uint local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  uint local_70;
  longlong local_68;
  undefined8 local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Test empty - Size",0,0);
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Test empty - IsEmpty",true);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Test empty - Capacity",0,0);
  uVar12 = 0;
  local_1c8.Head = 0;
  local_1c8.Tail = 0;
  local_1c8.IndexMask = 0;
  local_1c8.Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.Storage.ArrayNum = 0;
  local_1c8.Storage.ArrayMax = 0;
  TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::SetCapacity(&local_1c8,8);
  uVar8 = (ulonglong)(local_1c8.Head - local_1c8.Tail) + 1;
  if ((ulonglong)(longlong)local_1c8.Storage.ArrayNum < uVar8) {
    TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::SetCapacity(&local_1c8,uVar8)
    ;
  }
  uVar6 = local_1c8.Head + 1;
  *(undefined4 *)
   (local_1c8.Storage.AllocatorInstance.Data + (ulonglong)(local_1c8.Head & local_1c8.IndexMask) * 4
   ) = 0;
  uVar8 = (ulonglong)(uVar6 - local_1c8.Tail) + 1;
  local_1c8.Head = uVar6;
  if ((ulonglong)(longlong)local_1c8.Storage.ArrayNum < uVar8) {
    TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::SetCapacity(&local_1c8,uVar8)
    ;
  }
  uVar6 = local_1c8.Head + 1;
  *(undefined4 *)
   (local_1c8.Storage.AllocatorInstance.Data + (ulonglong)(local_1c8.Head & local_1c8.IndexMask) * 4
   ) = 1;
  uVar8 = (ulonglong)(uVar6 - local_1c8.Tail) + 1;
  local_1c8.Head = uVar6;
  if ((ulonglong)(longlong)local_1c8.Storage.ArrayNum < uVar8) {
    TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::SetCapacity(&local_1c8,uVar8)
    ;
  }
  uVar6 = local_1c8.Head + 1;
  *(undefined4 *)
   (local_1c8.Storage.AllocatorInstance.Data + (ulonglong)(local_1c8.Head & local_1c8.IndexMask) * 4
   ) = 2;
  uVar8 = (ulonglong)(uVar6 - local_1c8.Tail) + 1;
  local_1c8.Head = uVar6;
  if ((ulonglong)(longlong)local_1c8.Storage.ArrayNum < uVar8) {
    TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::SetCapacity(&local_1c8,uVar8)
    ;
  }
  uVar6 = local_1c8.Head + 1;
  *(undefined4 *)
   (local_1c8.Storage.AllocatorInstance.Data + (ulonglong)(local_1c8.Head & local_1c8.IndexMask) * 4
   ) = 3;
  uVar8 = (ulonglong)(uVar6 - local_1c8.Tail) + 1;
  local_1c8.Head = uVar6;
  if ((ulonglong)(longlong)local_1c8.Storage.ArrayNum < uVar8) {
    TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::SetCapacity(&local_1c8,uVar8)
    ;
  }
  uVar6 = local_1c8.Head + 1;
  *(undefined4 *)
   (local_1c8.Storage.AllocatorInstance.Data + (ulonglong)(local_1c8.Head & local_1c8.IndexMask) * 4
   ) = 4;
  uVar8 = (ulonglong)(uVar6 - local_1c8.Tail) + 1;
  local_1c8.Head = uVar6;
  if ((ulonglong)(longlong)local_1c8.Storage.ArrayNum < uVar8) {
    TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::SetCapacity(&local_1c8,uVar8)
    ;
  }
  uVar6 = local_1c8.Head + 1;
  iVar20 = 5;
  *(undefined4 *)
   (local_1c8.Storage.AllocatorInstance.Data + (ulonglong)(local_1c8.Head & local_1c8.IndexMask) * 4
   ) = 5;
  uVar8 = (ulonglong)(uVar6 - local_1c8.Tail) + 1;
  local_1c8.Head = uVar6;
  if ((ulonglong)(longlong)local_1c8.Storage.ArrayNum < uVar8) {
    TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::SetCapacity(&local_1c8,uVar8)
    ;
  }
  uVar6 = local_1c8.Head + 1;
  *(undefined4 *)
   (local_1c8.Storage.AllocatorInstance.Data + (ulonglong)(local_1c8.Head & local_1c8.IndexMask) * 4
   ) = 6;
  uVar8 = (ulonglong)(uVar6 - local_1c8.Tail) + 1;
  local_1c8.Head = uVar6;
  if ((ulonglong)(longlong)local_1c8.Storage.ArrayNum < uVar8) {
    TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::SetCapacity(&local_1c8,uVar8)
    ;
  }
  uVar6 = local_1c8.Head + 1;
  *(undefined4 *)
   (local_1c8.Storage.AllocatorInstance.Data + (ulonglong)(local_1c8.Head & local_1c8.IndexMask) * 4
   ) = 7;
  local_1c8.Head = uVar6;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test Push to Capacity - Size",
             (ulonglong)(uVar6 - local_1c8.Tail),8);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test Push to Capacity - Capacity",
             (longlong)local_1c8.Storage.ArrayNum,8);
  bVar18 = true;
  uVar14 = local_1c8.Head - local_1c8.Tail;
  uVar9 = uVar12;
  uVar7 = uVar12;
  uVar6 = local_1c8.Tail;
  bVar4 = true;
  if (uVar14 != 0) {
    do {
      if (bVar4 == false) {
LAB_1441c4a95:
        bVar18 = false;
      }
      else {
        if ((local_1c8.Head - uVar6 <= uVar9) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Offset < Count()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                               ,0x4c,L""), uVar6 = local_1c8.Tail, bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        if ((int)uVar7 !=
            *(int *)(local_1c8.Storage.AllocatorInstance.Data +
                    (uVar6 + uVar9 & (ulonglong)local_1c8.IndexMask) * 4)) goto LAB_1441c4a95;
        bVar18 = true;
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar9 = uVar9 + 1;
      bVar4 = bVar18;
    } while (uVar9 < uVar14);
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Test Push to Capacity - Expected",bVar18);
  uVar6 = local_1c8.Head - local_1c8.Tail;
  if ((0xffffffff < (ulonglong)uVar6 + (ulonglong)local_1c8.Tail) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                         ,0x107,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_1c8.Tail = uVar6;
  local_1c8.Storage._8_8_ = local_1c8.Storage._8_8_ & 0xffffffff00000000;
  if (local_1c8.Storage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Storage.AllocatorInstance.Data);
  }
  local_188.Head = 0;
  local_188.Tail = 0;
  local_188.IndexMask = 0;
  local_188.Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Storage.ArrayNum = 0;
  local_188.Storage.ArrayMax = 0;
  TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::SetCapacity(&local_188,0x20);
  uVar9 = uVar12;
  do {
    uVar8 = (ulonglong)(local_188.Head - local_188.Tail) + 1;
    if ((ulonglong)(longlong)local_188.Storage.ArrayNum < uVar8) {
      TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::SetCapacity
                (&local_188,uVar8);
    }
    uVar6 = local_188.Head + 1;
    *(int *)(local_188.Storage.AllocatorInstance.Data +
            (ulonglong)(local_188.Head & local_188.IndexMask) * 4) = (int)uVar9;
    uVar14 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar14;
    local_188.Head = uVar6;
  } while (uVar14 < 0x20);
  if (uVar6 == local_188.Tail) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1638566698149740322>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0xde,"Count() > 0");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  else {
    local_188.Tail = local_188.Tail + 1;
  }
  uVar8 = (ulonglong)(local_188.Head - local_188.Tail) + 1;
  if ((ulonglong)(longlong)local_188.Storage.ArrayNum < uVar8) {
    TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::SetCapacity(&local_188,uVar8)
    ;
  }
  uVar6 = local_188.Head + 1;
  *(undefined4 *)
   (local_188.Storage.AllocatorInstance.Data + (ulonglong)(local_188.Head & local_188.IndexMask) * 4
   ) = 0x20;
  uVar8 = (ulonglong)(uVar6 - local_188.Tail) + 1;
  local_188.Head = uVar6;
  if ((ulonglong)(longlong)local_188.Storage.ArrayNum < uVar8) {
    TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::SetCapacity(&local_188,uVar8)
    ;
  }
  uVar6 = local_188.Head + 1;
  *(undefined4 *)
   (local_188.Storage.AllocatorInstance.Data + (ulonglong)(local_188.Head & local_188.IndexMask) * 4
   ) = 0x21;
  local_188.Head = uVar6;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test Push over Capacity - Size",
             (ulonglong)(uVar6 - local_188.Tail),0x21);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Test Push over Capacity - Capacity",
             0x20 < (uint)local_188.Storage.ArrayNum);
  bVar18 = true;
  iVar15 = 1;
  uVar14 = local_188.Head - local_188.Tail;
  uVar9 = uVar12;
  uVar6 = local_188.Tail;
  bVar4 = true;
  if (uVar14 != 0) {
    do {
      if (bVar4 == false) {
LAB_1441c4cb1:
        bVar18 = false;
      }
      else {
        if ((local_188.Head - uVar6 <= uVar9) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Offset < Count()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                               ,0x4c,L""), uVar6 = local_188.Tail, bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        if (iVar15 != *(int *)(local_188.Storage.AllocatorInstance.Data +
                              (uVar6 + uVar9 & (ulonglong)local_188.IndexMask) * 4))
        goto LAB_1441c4cb1;
        bVar18 = true;
      }
      iVar15 = iVar15 + 1;
      uVar9 = uVar9 + 1;
      bVar4 = bVar18;
    } while (uVar9 < uVar14);
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Test Push over Capacity - Expected",bVar18);
  uVar6 = local_188.Head - local_188.Tail;
  if ((0xffffffff < (ulonglong)uVar6 + (ulonglong)local_188.Tail) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                         ,0x107,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_188.Tail = uVar6;
  local_188.Storage._8_8_ = local_188.Storage._8_8_ & 0xffffffff00000000;
  if (local_188.Storage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Storage.AllocatorInstance.Data);
  }
  local_168.Head = 0;
  local_168.Tail = 0;
  local_168.IndexMask = 0;
  local_168.Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.Storage.ArrayNum = 0;
  local_168.Storage.ArrayMax = 0;
  TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::SetCapacity(&local_168,4);
  uVar9 = uVar12;
  uVar7 = uVar12;
  do {
    uVar8 = (ulonglong)(local_168.Head - local_168.Tail) + 1;
    if ((ulonglong)(longlong)local_168.Storage.ArrayNum < uVar8) {
      TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::SetCapacity
                (&local_168,uVar8);
    }
    uVar6 = local_168.Head + 1;
    iVar15 = (int)uVar7;
    *(int *)(local_168.Storage.AllocatorInstance.Data +
            (ulonglong)(local_168.Head & local_168.IndexMask) * 4) = iVar15;
    uVar11 = (ulonglong)(uVar6 - local_168.Tail) - 1;
    local_168.Head = uVar6;
    if ((uVar6 - local_168.Tail <= uVar11) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset < Count()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                           ,0x4c,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (iVar15 != *(int *)(local_168.Storage.AllocatorInstance.Data +
                          (local_168.Tail + uVar11 & (ulonglong)local_168.IndexMask) * 4)) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_58,L"%s: The two values are not equal.");
      (*pcVar2)(this,&local_58,0);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    if ((uVar7 & 0xf) == 0) {
      if ((local_168.Head == local_168.Tail) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offset < Count()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                             ,0x4c,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      if ((int)uVar9 !=
          *(int *)(local_168.Storage.AllocatorInstance.Data +
                  (ulonglong)(local_168.IndexMask & local_168.Tail) * 4)) {
        pcVar2 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
        (*pcVar2)(this,&local_48,0);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      uVar9 = (ulonglong)((int)uVar9 + 1);
      if (local_168.Head == local_168.Tail) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1638566698149740322>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                           ,0xde,"Count() > 0");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      else {
        local_168.Tail = local_168.Tail + 1;
      }
    }
    uVar7 = (ulonglong)(iVar15 + 1U);
  } while (iVar15 + 1U < 0x100);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test Push and pop - Size",
             (ulonglong)(local_168.Head - local_168.Tail),0xf0);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test Push and pop - Capacity",
             (longlong)local_168.Storage.ArrayNum,0x100);
  bVar18 = true;
  iVar15 = 0x10;
  uVar14 = local_168.Head - local_168.Tail;
  uVar9 = uVar12;
  uVar6 = local_168.Tail;
  bVar4 = true;
  if (uVar14 != 0) {
    do {
      if (bVar4 == false) {
LAB_1441c4f81:
        bVar18 = false;
      }
      else {
        if ((local_168.Head - uVar6 <= uVar9) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Offset < Count()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                               ,0x4c,L""), uVar6 = local_168.Tail, bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        if (iVar15 != *(int *)(local_168.Storage.AllocatorInstance.Data +
                              (uVar6 + uVar9 & (ulonglong)local_168.IndexMask) * 4))
        goto LAB_1441c4f81;
        bVar18 = true;
      }
      iVar15 = iVar15 + 1;
      uVar9 = uVar9 + 1;
      bVar4 = bVar18;
    } while (uVar9 < uVar14);
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Test Push and pop - Expected",bVar18);
  uVar6 = local_168.Head - local_168.Tail;
  if ((0xffffffff < (ulonglong)uVar6 + (ulonglong)local_168.Tail) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                         ,0x107,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_168.Tail = uVar6;
  local_168.Storage._8_8_ = local_168.Storage._8_8_ & 0xffffffff00000000;
  if (local_168.Storage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Storage.AllocatorInstance.Data);
  }
  local_128.Head = 0;
  local_128.Tail = 0;
  local_128.IndexMask = 0;
  local_128.Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Storage.ArrayNum = 0;
  local_128.Storage.ArrayMax = 0;
  TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::SetCapacity(&local_128,0x100);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Test Push and pop all - IsEmpty before",
             local_128.Head == local_128.Tail);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test Push and pop all - Size before",
             (ulonglong)(local_128.Head - local_128.Tail),0);
  uVar9 = uVar12;
  do {
    uVar8 = (ulonglong)(local_128.Head - local_128.Tail) + 1;
    if ((ulonglong)(longlong)local_128.Storage.ArrayNum < uVar8) {
      TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::SetCapacity
                (&local_128,uVar8);
    }
    uVar6 = local_128.Head + 1;
    *(int *)(local_128.Storage.AllocatorInstance.Data +
            (ulonglong)(local_128.Head & local_128.IndexMask) * 4) = (int)uVar9;
    uVar14 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar14;
    local_128.Head = uVar6;
  } while (uVar14 < 0x100);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test Push and pop all - Size",
             (ulonglong)(uVar6 - local_128.Tail),0x100);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test Push and pop all - Capacity",
             (longlong)local_128.Storage.ArrayNum,0x100);
  bVar18 = true;
  uVar14 = local_128.Head - local_128.Tail;
  uVar9 = uVar12;
  uVar7 = uVar12;
  uVar6 = local_128.Tail;
  bVar4 = true;
  if (uVar14 != 0) {
    do {
      if (bVar4 == false) {
LAB_1441c5127:
        bVar18 = false;
      }
      else {
        if ((local_128.Head - uVar6 <= uVar9) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Offset < Count()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                               ,0x4c,L""), uVar6 = local_128.Tail, bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        if ((int)uVar7 !=
            *(int *)(local_128.Storage.AllocatorInstance.Data +
                    (uVar6 + uVar9 & (ulonglong)local_128.IndexMask) * 4)) goto LAB_1441c5127;
        bVar18 = true;
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar9 = uVar9 + 1;
      bVar4 = bVar18;
    } while (uVar9 < uVar14);
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Test Push and pop all - Expected",bVar18);
  lVar10 = 0x100;
  do {
    if (local_128.Head == local_128.Tail) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1638566698149740322>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                         ,0xde,"Count() > 0");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    else {
      local_128.Tail = local_128.Tail + 1;
    }
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Test Push and pop all - IsEmpty after",
             local_128.Head == local_128.Tail);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test Push and pop all - Size after",
             (ulonglong)(local_128.Head - local_128.Tail),0);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test Push and pop all - Capacity after",
             (longlong)local_128.Storage.ArrayNum,0x100);
  uVar6 = local_128.Head - local_128.Tail;
  if ((0xffffffff < (ulonglong)uVar6 + (ulonglong)local_128.Tail) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                         ,0x107,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_128.Tail = uVar6;
  local_128.Storage._8_8_ = local_128.Storage._8_8_ & 0xffffffff00000000;
  if (local_128.Storage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Storage.AllocatorInstance.Data);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = (FStructWithDestructorForResizableCiruclarQueuePopTest *)0x0;
  local_d0 = 0;
  TResizableCircularQueue<`FResizableCircularQueueTest::RunTest'::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,TSizedDefaultAllocator<32>_>
  ::SetCapacity(&local_e8,1);
  local_d8[(uint)local_e8 & local_e0].Count = 1;
  local_e8._0_4_ = (uint)local_e8 + 1;
  DestructItems<_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,unsigned___int64>
            (local_d8 + (local_e0 & local_e8._4_4_),0);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Pop zero elements leaves one element in the queue.",
             (ulonglong)((uint)local_e8 - local_e8._4_4_),1);
  pFVar3 = local_d8;
  uVar16 = (uint)local_e8 - local_e8._4_4_;
  uVar6 = local_e0 & local_e8._4_4_;
  uVar14 = uVar16 + local_e8._4_4_ & local_e0;
  if (uVar16 == 0 || uVar6 < uVar14) {
    DestructItems<_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,unsigned___int64>
              (local_d8 + uVar6,(ulonglong)uVar16);
  }
  else {
    DestructItems<_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,unsigned___int64>
              (local_d8 + uVar6,(ulonglong)((int)local_d0 - uVar6));
    DestructItems<_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,unsigned_int>
              (pFVar3,uVar14);
  }
  if ((0xffffffff < (ulonglong)local_e8._4_4_ + (ulonglong)uVar16) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                         ,0x107,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_e8 = CONCAT44(local_e8._4_4_ + uVar16,(uint)local_e8);
  local_d0 = local_d0 & 0xffffffff00000000;
  DestructItems<_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,int>
            (local_d8,0);
  if (local_d8 != (FStructWithDestructorForResizableCiruclarQueuePopTest *)0x0) {
    FMemory::Free(local_d8);
  }
  local_148 = 0;
  uStack_144 = 0;
  local_140 = 0;
  local_138 = (FStructWithDestructorForResizableCiruclarQueuePopTest *)0x0;
  local_130 = 0;
  TResizableCircularQueue<`FResizableCircularQueueTest::RunTest'::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,TSizedDefaultAllocator<32>_>
  ::SetCapacity(&local_148,0x20);
  uVar9 = (ulonglong)(int)local_130;
  if (local_148 - uStack_144 < uVar9) {
    do {
      uVar7 = (ulonglong)(local_148 - uStack_144) + 1;
      if ((ulonglong)(longlong)(int)uVar9 < uVar7) {
        TResizableCircularQueue<`FResizableCircularQueueTest::RunTest'::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,TSizedDefaultAllocator<32>_>
        ::SetCapacity(&local_148,uVar7);
      }
      uVar6 = local_148 + 1;
      local_138[local_148 & local_140].Count = 1;
      uVar9 = (ulonglong)(int)local_130;
      local_148 = uVar6;
    } while (uVar6 - uStack_144 < uVar9);
  }
  pFVar3 = local_138;
  if (local_148 == uStack_144) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1638566698149740331>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0xd5,"Count() >= PopCount");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  else {
    uVar6 = uStack_144 + 1 & local_140;
    uVar14 = local_140 & uStack_144;
    if (uVar14 < uVar6) {
      DestructItems<_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,unsigned___int64>
                (local_138 + uVar14,1);
    }
    else {
      DestructItems<_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,unsigned___int64>
                (local_138 + uVar14,(ulonglong)((int)local_130 - uVar14));
      DestructItems<_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,unsigned_int>
                (pFVar3,uVar6);
    }
    if ((0xffffffff < (ulonglong)uStack_144 + 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                           ,0x107,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    uStack_144 = uStack_144 + 1;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Pop one element leaves queue at capacity minus one.",
             (ulonglong)(local_148 - uStack_144),(longlong)(int)local_130 - 1);
  uVar8 = (ulonglong)(local_148 - uStack_144) + 1;
  if ((ulonglong)(longlong)(int)local_130 < uVar8) {
    TResizableCircularQueue<`FResizableCircularQueueTest::RunTest'::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,TSizedDefaultAllocator<32>_>
    ::SetCapacity(&local_148,uVar8);
  }
  local_148 = 1;
  local_138->Count = 1;
  TResizableCircularQueue<`FResizableCircularQueueTest::RunTest'::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,TSizedDefaultAllocator<32>_>
  ::PopNoCheck(&local_148,(ulonglong)(1 - uStack_144));
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Pop of all elements leaves queue empty.",
             local_148 == uStack_144);
  TResizableCircularQueue<`FResizableCircularQueueTest::RunTest'::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,TSizedDefaultAllocator<32>_>
  ::PopNoCheck(&local_148,(ulonglong)(local_148 - uStack_144));
  local_130 = local_130 & 0xffffffff00000000;
  DestructItems<_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,int>
            (local_138,0);
  if (local_138 != (FStructWithDestructorForResizableCiruclarQueuePopTest *)0x0) {
    FMemory::Free(local_138);
  }
  local_108.Head = 0;
  local_108.Tail = 0;
  local_108.IndexMask = 0;
  local_108.Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Storage.ArrayNum = 0;
  local_108.Storage.ArrayMax = 0;
  TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::SetCapacity(&local_108,4);
  local_108.Head = 0xfffffffe;
  local_108.Tail = 0xfffffffe;
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Test index wrap - IsEmpty before",true);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test index wrap - Size before",
             (ulonglong)(local_108.Head - local_108.Tail),0);
  uVar9 = uVar12;
  do {
    uVar8 = (ulonglong)(local_108.Head - local_108.Tail) + 1;
    if ((ulonglong)(longlong)local_108.Storage.ArrayNum < uVar8) {
      TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::SetCapacity
                (&local_108,uVar8);
    }
    local_108.Head = 1;
    *(int *)local_108.Storage.AllocatorInstance.Data = (int)uVar9;
    uVar6 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar6;
  } while (uVar6 < 0x100);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test index wrap - Size",(ulonglong)(1 - local_108.Tail),
             0x100);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test index wrap - Capacity",
             (longlong)local_108.Storage.ArrayNum,0x100);
  bVar18 = true;
  uVar14 = local_108.Head - local_108.Tail;
  uVar9 = uVar12;
  uVar7 = uVar12;
  uVar6 = local_108.Tail;
  bVar4 = true;
  if (uVar14 != 0) {
    do {
      if (bVar4 == false) {
LAB_1441c5667:
        bVar18 = false;
      }
      else {
        if ((local_108.Head - uVar6 <= uVar9) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Offset < Count()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                               ,0x4c,L""), uVar6 = local_108.Tail, bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        if ((int)uVar7 !=
            *(int *)(local_108.Storage.AllocatorInstance.Data +
                    (uVar6 + uVar9 & (ulonglong)local_108.IndexMask) * 4)) goto LAB_1441c5667;
        bVar18 = true;
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar9 = uVar9 + 1;
      bVar4 = bVar18;
    } while (uVar9 < uVar14);
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Test index wrap - Expected",bVar18);
  lVar10 = 0x100;
  do {
    if (local_108.Head == local_108.Tail) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1638566698149740322>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                         ,0xde,"Count() > 0");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    else {
      local_108.Tail = local_108.Tail + 1;
    }
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Test index wrap - IsEmpty after",
             local_108.Head == local_108.Tail);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test index wrap - Size after",
             (ulonglong)(local_108.Head - local_108.Tail),0);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test index wrap - Capacity after",
             (longlong)local_108.Storage.ArrayNum,0x100);
  uVar6 = local_108.Head - local_108.Tail;
  if ((0xffffffff < (ulonglong)uVar6 + (ulonglong)local_108.Tail) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                         ,0x107,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_108.Tail = uVar6;
  local_108.Storage._8_8_ = local_108.Storage._8_8_ & 0xffffffff00000000;
  if (local_108.Storage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Storage.AllocatorInstance.Data);
  }
  local_1a8.Head = 0;
  local_1a8.Tail = 0;
  local_1a8.IndexMask = 0;
  local_1a8.Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.Storage.ArrayNum = 0;
  local_1a8.Storage.ArrayMax = 0;
  uVar9 = uVar12;
  uVar7 = uVar12;
  uVar11 = uVar12;
  uVar19 = uVar12;
  while( true ) {
    uVar8 = (ulonglong)(uint)((int)uVar9 - (int)uVar7) + 1;
    if ((ulonglong)(longlong)(int)uVar19 < uVar8) {
      TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::SetCapacity
                (&local_1a8,uVar8);
      uVar9 = local_1a8._0_8_ & 0xffffffff;
    }
    uVar6 = (int)uVar9 + 1;
    local_1a8.Head = uVar6;
    *(int *)(local_1a8.Storage.AllocatorInstance.Data + (uVar9 & local_1a8.IndexMask) * 4) =
         (int)uVar11;
    uVar14 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar14;
    if (8 < uVar14) break;
    uVar19 = local_1a8.Storage._8_8_ & 0xffffffff;
    uVar7 = (ulonglong)local_1a8.Tail;
    uVar9 = (ulonglong)uVar6;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test Trim - Size",(ulonglong)(uVar6 - local_1a8.Tail),9);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test Trim - Capacity",
             (longlong)local_1a8.Storage.ArrayNum,0x10);
  bVar4 = true;
  uVar14 = local_1a8.Head - local_1a8.Tail;
  uVar9 = uVar12;
  uVar7 = uVar12;
  uVar6 = local_1a8.Tail;
  if (uVar14 != 0) {
    do {
      if (bVar4) {
        if (local_1a8.Head - uVar6 <= uVar9) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offset < Count()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                             ,0x4c,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          uVar6 = local_1a8.Tail;
        }
        if ((int)uVar7 !=
            *(int *)(local_1a8.Storage.AllocatorInstance.Data +
                    (uVar6 + uVar9 & (ulonglong)local_1a8.IndexMask) * 4)) goto LAB_1441c5885;
        bVar4 = true;
      }
      else {
LAB_1441c5885:
        bVar4 = false;
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar14);
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Test Trim - Expected",bVar4);
  lVar10 = 5;
  uVar6 = local_1a8.Tail;
  uVar14 = local_1a8.Head;
  do {
    if (uVar14 == uVar6) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1638566698149740322>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                         ,0xde,"Count() > 0");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      uVar6 = local_1a8.Tail;
      uVar14 = local_1a8.Head;
    }
    else {
      uVar6 = uVar6 + 1;
      local_1a8.Tail = uVar6;
    }
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  if (uVar14 == uVar6) {
    if ((0xffffffff < (ulonglong)(uVar14 - uVar6) + (ulonglong)uVar6) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                           ,0x107,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    local_1a8.Head = 0;
    local_1a8.Tail = 0;
    local_1a8.IndexMask = 0xffffffff;
    iVar15 = local_1a8.Storage.ArrayMax;
    local_1a8.Storage._8_8_ = local_1a8.Storage._8_8_ & 0xffffffff00000000;
    if (iVar15 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&local_1a8.Storage.AllocatorInstance,0,&local_1a8.Storage.ArrayMax);
    }
  }
  else {
    TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::SetCapacity
              (&local_1a8,(ulonglong)(uVar14 - uVar6));
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test Trim - Size",
             (ulonglong)(local_1a8.Head - local_1a8.Tail),4);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test Trim - Capacity",
             (longlong)local_1a8.Storage.ArrayNum,4);
  bVar4 = true;
  uVar14 = local_1a8.Head - local_1a8.Tail;
  uVar6 = local_1a8.Tail;
  if (uVar14 != 0) {
    do {
      if (bVar4) {
        if (local_1a8.Head - uVar6 <= uVar12) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offset < Count()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                             ,0x4c,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          uVar6 = local_1a8.Tail;
        }
        if (iVar20 != *(int *)(local_1a8.Storage.AllocatorInstance.Data +
                              (uVar6 + uVar12 & (ulonglong)local_1a8.IndexMask) * 4))
        goto LAB_1441c5a1c;
        bVar4 = true;
      }
      else {
LAB_1441c5a1c:
        bVar4 = false;
      }
      iVar20 = iVar20 + 1;
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar14);
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Test Trim - Expected",bVar4);
  uVar6 = local_1a8.Head - local_1a8.Tail;
  if (0xffffffff < (ulonglong)uVar6 + (ulonglong)local_1a8.Tail) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  local_1a8.Tail = local_1a8.Tail + uVar6;
  local_1a8.Storage._8_8_ = local_1a8.Storage._8_8_ & 0xffffffff00000000;
  if (local_1a8.Storage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Storage.AllocatorInstance.Data);
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Test trim empty - Size",0,0);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Test trim empty - Capacity",0,0);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  TResizableCircularQueue<TArray<`FResizableCircularQueueTest::RunTest'::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::SetCapacity(&local_78,1);
  uVar6 = (uint)local_78;
  local_78 = CONCAT44(local_78._4_4_,(uint)local_78 + 1);
  *(undefined8 *)(local_68 + (ulonglong)(uVar6 & local_70) * 0x10) = 0;
  *(undefined8 *)(local_68 + 8 + (ulonglong)(uVar6 & local_70) * 0x10) = 0;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test enqueue non-trivial element",0,0);
  TResizableCircularQueue<TArray<`FResizableCircularQueueTest::RunTest'::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::
  ~TResizableCircularQueue<TArray<_FResizableCircularQueueTest::RunTest_::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (&local_78);
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0[0] = 0;
  local_c0[1] = 0;
  iVar20 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,2,&local_c8,local_c0,local_c0 + 1);
  DefaultConstructItems<_FResizableCircularQueueTest::RunTest_::__l37::FNonTrivialStruct,int>
            (local_c8.Data + (longlong)iVar20 * 4,2);
  uVar12 = (ulonglong)((uint)local_98 - local_98._4_4_) + 1;
  if ((ulonglong)(longlong)(int)local_80 < uVar12) {
    TResizableCircularQueue<TArray<`FResizableCircularQueueTest::RunTest'::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
    ::SetCapacity(&local_98,uVar12);
  }
  _Src.Data = local_c8.Data;
  pFVar17 = (ForAnyElementType *)((ulonglong)((uint)local_98 & local_90) * 0x10 + local_88);
  pFVar17->Data = (FScriptContainerElement *)0x0;
  piVar1 = (int *)((longlong)&pFVar17[1].Data + 4);
  lVar10 = (longlong)local_c0[0];
  *(int *)&pFVar17[1].Data = local_c0[0];
  if (local_c0[0] == 0) {
    *piVar1 = 0;
    local_98._0_4_ = (uint)local_98 + 1;
  }
  else {
    local_98._0_4_ = (uint)local_98 + 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_c0[0],0,pFVar17,local_c0[0],piVar1);
    memcpy(pFVar17->Data,_Src.Data,lVar10 << 2);
  }
  if (((uint)local_98 == local_98._4_4_) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset < Count()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                         ,0x4c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  plVar13 = (longlong *)((ulonglong)(local_90 & local_98._4_4_) * 0x10 + local_88);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test enqueue array with size 2",(int)plVar13[1],2);
  if ((FScriptContainerElement *)*plVar13 == local_c8.Data) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are equal.");
    (*pcVar2)(this,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  TResizableCircularQueue<TArray<`FResizableCircularQueueTest::RunTest'::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::
  ~TResizableCircularQueue<TArray<_FResizableCircularQueueTest::RunTest_::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (&local_98);
  local_b8.Head = 0;
  local_b8.Tail = 0;
  local_b8.IndexMask = 0;
  local_b8.Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Storage.ArrayNum = 0;
  local_b8.Storage.ArrayMax = 0;
  TResizableCircularQueue<int,TSizedDefaultAllocator<32>_>::SetCapacity(&local_b8,8);
  uVar8 = (ulonglong)(local_b8.Head - local_b8.Tail) + 1;
  if ((ulonglong)(longlong)local_b8.Storage.ArrayNum < uVar8) {
    TResizableCircularQueue<int,TSizedDefaultAllocator<32>_>::SetCapacity(&local_b8,uVar8);
  }
  *(undefined4 *)
   (local_b8.Storage.AllocatorInstance.Data + (ulonglong)(local_b8.Head & local_b8.IndexMask) * 4) =
       0;
  local_b8.Head = local_b8.Head + 1;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test enqueue of initialized primitive type",0,0);
  uVar6 = local_b8.Head - local_b8.Tail;
  if ((0xffffffff < (ulonglong)uVar6 + (ulonglong)local_b8.Tail) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                         ,0x107,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_b8.Tail = local_b8.Tail + uVar6;
  local_b8.Storage._8_8_ = local_b8.Storage._8_8_ & 0xffffffff00000000;
  if (local_b8.Storage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Storage.AllocatorInstance.Data);
  }
  bVar4 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  if ((bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasAnyErrors()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\ResizableCircularQueueTests.cpp"
                         ,0x128,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  return true;
}

// GetBeautifiedTestName @ 1441c5e00

FString * __thiscall
FResizableCircularQueueTest::GetBeautifiedTestName
          (FResizableCircularQueueTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Net.ResizableCircularQueueTest");
  return __return_storage_ptr__;
}

