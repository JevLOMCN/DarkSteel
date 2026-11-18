// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// GetTestFlags @ 141470bb0

EAutomationTestFlags __thiscall Tasks2Tests::FTasksUnitTests2::GetTestFlags(FTasksUnitTests2 *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141470bc0

bool __thiscall Tasks2Tests::FTasksUnitTests2::IsStressTest(FTasksUnitTests2 *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141470bd0

uint __thiscall Tasks2Tests::FTasksUnitTests2::GetRequiredDeviceNum(FTasksUnitTests2 *this)

{
  return 1;
}

// GetTestSourceFileName @ 141470be0

FString * __thiscall
Tasks2Tests::FTasksUnitTests2::GetTestSourceFileName
          (FTasksUnitTests2 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141470c10

int __thiscall Tasks2Tests::FTasksUnitTests2::GetTestSourceFileLine(FTasksUnitTests2 *this)

{
  return 0x249;
}

// GetTests @ 141470c20

/* WARNING: Removing unreachable block (ram,0x000141470d0d) */
/* WARNING: Removing unreachable block (ram,0x000141470dd8) */

void __thiscall
Tasks2Tests::FTasksUnitTests2::GetTests
          (FTasksUnitTests2 *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.LowLevelTasks.UnitTests");
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

// RunTest @ 141470e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall Tasks2Tests::FTasksUnitTests2::RunTest(FTasksUnitTests2 *this,FString *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined8 uVar8;
  FTask *pFVar9;
  FTask *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  void *pvVar14;
  TReferenceControllerBase<1> *pTVar15;
  FTask *pFVar16;
  FTask *pFVar17;
  uint uVar18;
  undefined1 auStack_238 [32];
  uint local_218;
  int local_200;
  int local_1fc;
  int local_1f8;
  uint local_1f4;
  int local_1f0 [2];
  FTask *local_1e8;
  FTask *local_1e0;
  TAwaitableTask<void> local_1d8;
  undefined8 local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  <lambda_4> local_1b0;
  undefined1 local_1a8 [40];
  undefined **local_180;
  undefined8 local_178;
  ulonglong uStack_170;
  undefined1 local_168 [40];
  undefined **local_140;
  undefined8 local_138;
  ulonglong uStack_130;
  undefined1 local_128 [40];
  undefined **local_100;
  undefined8 local_f8;
  ulonglong uStack_f0;
  int *local_e8 [5];
  undefined **local_c0;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [40];
  undefined **local_80;
  undefined1 local_78 [40];
  undefined **local_50;
  ulonglong local_48;
  
  uVar11 = _UNK_15061cdc8;
  uVar3 = ___xmm_e8000000000000200000000000000000;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_238;
  uVar18 = 0;
  local_1c8 = 0xc80000541858ac00;
  local_1b8 = 0xc800005418588600;
  local_1c0 = 0xc80000541858b400;
  pvVar14 = ThreadLocalStoragePointer;
  do {
    uVar13 = local_1b8;
    pTVar15 = (TReferenceControllerBase<1> *)0x0;
    local_138 = uVar3;
    uStack_130 = uVar11;
    local_200 = 0x539;
    local_140 = &
                ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    uVar6 = (uint)uVar11;
    if ((uVar11 & 0x20) == 0) {
      local_218 = uVar6 & 0x3f;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    (*(code *)local_140[3])(&local_140,local_168);
    local_140 = &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
                 TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`5'::<lambda_1>_>'::`13'::<lambda_1>,0>
                 ::_vftable_;
    local_168._0_8_ = &local_200;
    lVar1 = *(longlong *)(*(longlong *)((longlong)pvVar14 + (ulonglong)_tls_index * 8) + 0x40);
    if (lVar1 == 0) {
      local_138 = 0;
    }
    else {
      local_138 = *(undefined8 *)(lVar1 + 0x30);
    }
    uVar12 = uVar13 & 0xffffffffffffffc0;
    uStack_130 = uVar13;
    if ((uVar13 >> 0x3e & 2) == 0) {
LAB_141470f8f:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Task.TryCancel(ECancellationFlags::PrelaunchCancellation)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                         ,0x259,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    else {
      uStack_130 = uVar12 | 1;
      LOCK();
      if (uVar12 != uVar13) {
        uStack_130 = uVar13;
      }
      UNLOCK();
      if (uVar12 != uVar13) {
        LOCK();
        bVar4 = (uVar12 | 2) != uStack_130;
        uVar13 = uVar12 | 3;
        if (bVar4) {
          uVar13 = uStack_130;
        }
        uStack_130 = uVar13;
        UNLOCK();
        if (bVar4) goto LAB_141470f8f;
      }
    }
    if ((uStack_130 & 4) == 0) {
      uVar12 = uStack_130 & 0xffffffffffffffc0;
      LOCK();
      bVar4 = (uVar12 | 1) != uStack_130;
      uVar13 = uVar12;
      if (bVar4) {
        uVar13 = uStack_130;
      }
      uStack_130 = uVar13;
      UNLOCK();
      uVar13 = uStack_130;
      if (bVar4) {
        LOCK();
        bVar4 = (uVar12 | 3) != uStack_130;
        uVar13 = uVar12 | 2;
        if (bVar4) {
          uVar13 = uStack_130;
        }
        uStack_130 = uVar13;
        UNLOCK();
        uVar13 = uStack_130;
        if (bVar4) goto LAB_141470fe7;
      }
    }
    else {
LAB_141470fe7:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Task.TryRevive()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                         ,0x25a,L"");
      uVar13 = uStack_130;
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    do {
      LOCK();
      bVar4 = uVar13 != uStack_130;
      uVar12 = uVar13 | 2;
      if (bVar4) {
        uVar13 = uStack_130;
        uVar12 = uStack_130;
      }
      uStack_130 = uVar12;
      UNLOCK();
    } while (bVar4);
    if ((uVar13 & 2) == 0) {
      LowLevelTasks::FScheduler::LaunchInternal
                (&LowLevelTasks::FScheduler::Singleton,(FTask *)local_168,DefaultPreference,true);
    }
    if (uVar18 == 0) {
LAB_1414710f6:
      bVar4 = false;
    }
    else {
      uVar13 = uStack_130 & 0xffffffffffffffc0;
      if ((uStack_130 >> 0x3e & 2) == 0) goto LAB_1414710f6;
      LOCK();
      bVar4 = uVar13 != uStack_130;
      uVar12 = uVar13 | 1;
      if (bVar4) {
        uVar12 = uStack_130;
      }
      uStack_130 = uVar12;
      UNLOCK();
      uVar12 = uStack_130;
      if (bVar4) {
        LOCK();
        bVar4 = (uVar13 | 2) != uStack_130;
        uVar13 = uVar13 | 3;
        if (bVar4) {
          uVar13 = uStack_130;
        }
        uStack_130 = uVar13;
        UNLOCK();
        uVar12 = uStack_130;
        if (bVar4) goto LAB_1414710f6;
      }
      do {
        LOCK();
        bVar4 = uVar12 != uStack_130;
        uVar13 = uVar12 | 2;
        if (bVar4) {
          uVar12 = uStack_130;
          uVar13 = uStack_130;
        }
        uStack_130 = uVar13;
        UNLOCK();
      } while (bVar4);
      if ((uVar12 & 2) == 0) {
        LowLevelTasks::FTask::ExecuteTask((FTask *)local_168);
      }
      if ((uStack_130 & 4) == 0) {
        uVar12 = uStack_130 & 0xffffffffffffffc0;
        LOCK();
        bVar4 = (uVar12 | 1) != uStack_130;
        uVar13 = uVar12;
        if (bVar4) {
          uVar13 = uStack_130;
        }
        uStack_130 = uVar13;
        UNLOCK();
        if (bVar4) {
          LOCK();
          bVar4 = (uVar12 | 3) != uStack_130;
          uVar13 = uVar12 | 2;
          if (bVar4) {
            uVar13 = uStack_130;
          }
          uStack_130 = uVar13;
          UNLOCK();
          if (bVar4) {
            bVar4 = true;
            goto joined_r0x0001414710ff;
          }
        }
        goto LAB_1414710f6;
      }
      bVar4 = true;
    }
joined_r0x0001414710ff:
    while ((uStack_130 & 0x20) == 0) {
      FWindowsPlatformProcess::YieldThread();
    }
    if (bVar4) {
      if ((local_200 != 0x539) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestValue == 1337",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                             ,0x266,L""), bVar4)) {
code_r0x00014147116f:
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    else if ((local_200 != 0x2a) &&
            (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("TestValue == 42",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                                ,0x26a,L""), bVar4)) goto code_r0x00014147116f;
    if ((uStack_130 & 0x20) == 0) {
      local_218 = (uint)uStack_130 & 0x3f;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x204,L"State: %d");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    (*(code *)local_140[3])(&local_140,local_168);
    local_1fc = 0x539;
    pTVar7 = ::operator_new(0x50);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      pFVar17 = (FTask *)&DAT_00000010;
    }
    else {
      pTVar7->SharedReferenceCount = (atomic<int>)0x1;
      pFVar17 = (FTask *)(pTVar7 + 1);
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      pTVar7->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFTask_LowLevelTasks___00_SharedPointerInternals__6B_
      ;
      pTVar7[1]._padding_ = 0;
      pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar7[2]._padding_ = 0;
      pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar7[3]._padding_ = 0;
      *(undefined ***)&pTVar7[3].SharedReferenceCount =
           &
           ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      pTVar7[4].SharedReferenceCount = (atomic<int>)0x20;
      pTVar7[4].WeakReferenceCount = (atomic<int>)0xe8000000;
      pTVar7[4]._padding_ = 0;
      if ((pFVar17 == (FTask *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      pTVar15 = pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    if ((pFVar17 == (FTask *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((*(ulonglong *)&pFVar17->field_0x38 & 0x20) == 0) {
      local_218 = (uint)*(undefined8 *)&pFVar17->field_0x38 & 0x3f;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    (**(code **)(*(longlong *)&pFVar17->field_0x28 + 0x18))(&pFVar17->field_0x28,pFVar17);
    *(FTask **)&pFVar17->field_0x8 = pFVar17;
    *(undefined ***)&pFVar17->field_0x28 =
         &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
          TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`42'::<lambda_2>_>'::`13'::<lambda_1>,0>
          ::_vftable_;
    *(TReferenceControllerBase<1> **)&pFVar17->field_0x10 = pTVar15;
    *(int **)pFVar17 = &local_1fc;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    lVar1 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x40)
    ;
    uVar8 = 0;
    if (lVar1 != 0) {
      uVar8 = *(undefined8 *)(lVar1 + 0x30);
    }
    *(undefined8 *)&pFVar17->field_0x30 = uVar8;
    *(undefined8 *)&pFVar17->field_0x38 = local_1c8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    uVar13 = *(ulonglong *)&pFVar17->field_0x38;
    do {
      LOCK();
      uVar12 = *(ulonglong *)&pFVar17->field_0x38;
      bVar4 = uVar13 == uVar12;
      if (bVar4) {
        *(ulonglong *)&pFVar17->field_0x38 = uVar13 | 2;
        uVar12 = uVar13;
      }
      UNLOCK();
      uVar13 = uVar12;
    } while (!bVar4);
    if ((uVar12 & 2) == 0) {
      LowLevelTasks::FScheduler::LaunchInternal
                (&LowLevelTasks::FScheduler::Singleton,pFVar17,DefaultPreference,true);
    }
    if (uVar18 == 0) {
LAB_1414713cf:
      bVar4 = false;
    }
    else {
      uVar13 = *(ulonglong *)&pFVar17->field_0x38 & 0xffffffffffffffc0;
      if ((*(ulonglong *)&pFVar17->field_0x38 >> 0x3e & 2) == 0) goto LAB_1414713cf;
      LOCK();
      bVar4 = uVar13 == *(ulonglong *)&pFVar17->field_0x38;
      if (bVar4) {
        *(ulonglong *)&pFVar17->field_0x38 = uVar13 | 1;
      }
      UNLOCK();
      if (!bVar4) {
        LOCK();
        bVar4 = (uVar13 | 2) == *(ulonglong *)&pFVar17->field_0x38;
        if (bVar4) {
          *(ulonglong *)&pFVar17->field_0x38 = uVar13 | 3;
        }
        UNLOCK();
        if (!bVar4) goto LAB_1414713cf;
      }
      uVar13 = *(ulonglong *)&pFVar17->field_0x38;
      do {
        LOCK();
        uVar12 = *(ulonglong *)&pFVar17->field_0x38;
        bVar4 = uVar13 == uVar12;
        if (bVar4) {
          *(ulonglong *)&pFVar17->field_0x38 = uVar13 | 2;
          uVar12 = uVar13;
        }
        UNLOCK();
        uVar13 = uVar12;
      } while (!bVar4);
      if ((uVar12 & 2) == 0) {
        LowLevelTasks::FTask::ExecuteTask(pFVar17);
      }
      bVar4 = true;
    }
    uVar13 = *(ulonglong *)&pFVar17->field_0x38;
    while ((uVar13 & 0x20) == 0) {
      FWindowsPlatformProcess::YieldThread();
      uVar13 = *(ulonglong *)&pFVar17->field_0x38;
    }
    if (bVar4) {
      if ((local_1fc != 0x539) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestValue == 1337",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                             ,0x280,L""), bVar4)) {
code_r0x00014147144e:
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    else if ((local_1fc != 0x2a) &&
            (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("TestValue == 42",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                                ,0x284,L""), bVar4)) goto code_r0x00014147144e;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    local_178 = uVar3;
    uStack_170 = uVar11;
    local_1f8 = 0x539;
    local_180 = &
                ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    if ((uVar11 & 0x20) == 0) {
      local_218 = uVar6 & 0x3f;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    (*(code *)local_180[3])(&local_180,local_1a8);
    pvVar14 = ThreadLocalStoragePointer;
    local_180 = &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
                 TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`62'::<lambda_3>_>'::`13'::<lambda_1>,0>
                 ::_vftable_;
    pFVar17 = (FTask *)0x0;
    local_1a8._0_8_ = &local_1f8;
    lVar1 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x40)
    ;
    if (lVar1 == 0) {
      local_178 = 0;
    }
    else {
      local_178 = *(undefined8 *)(lVar1 + 0x30);
    }
    uStack_170 = local_1c0;
    LOCK();
    bVar4 = (local_1c0 & 0xffffffffffffffc0 | 2) == local_1c0;
    uVar13 = local_1c0 & 0xffffffffffffffc0 | 6;
    if (!bVar4) {
      uVar13 = uStack_170;
    }
    uStack_170 = uVar13;
    UNLOCK();
    uVar13 = uStack_170;
    if (bVar4) {
      (*(code *)PTR_Call_15061b7a8)(&local_180,local_1a8,1);
      uVar13 = uStack_170;
      do {
        LOCK();
        bVar4 = uVar13 != uStack_170;
        uVar12 = uVar13 | 0x18;
        if (bVar4) {
          uVar13 = uStack_170;
          uVar12 = uStack_170;
        }
        uStack_170 = uVar12;
        UNLOCK();
      } while (bVar4);
      if ((uVar13 & 8) != 0) {
        local_218 = 0x28;
        local_80 = &
                   ___7TTaskDelegateBase___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
        ;
        (*(code *)*local_180)(&local_180,&local_80,local_a8,local_1a8);
        LOCK();
        uStack_170 = uStack_170 | 0x20;
        UNLOCK();
        (*(code *)local_80[3])(&local_80,local_a8);
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Task.TryExpedite()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                         ,0x291,L"");
      uVar13 = uStack_170;
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    do {
      LOCK();
      bVar4 = uVar13 != uStack_170;
      uVar12 = uVar13 | 2;
      if (bVar4) {
        uVar13 = uStack_170;
        uVar12 = uStack_170;
      }
      uStack_170 = uVar12;
      UNLOCK();
    } while (bVar4);
    if ((uVar13 & 2) == 0) {
      LowLevelTasks::FScheduler::LaunchInternal
                (&LowLevelTasks::FScheduler::Singleton,(FTask *)local_1a8,DefaultPreference,true);
    }
    LOCK();
    bVar4 = (uStack_170 & 0xffffffffffffffc0 | 2) == uStack_170;
    uVar13 = uStack_170 & 0xffffffffffffffc0 | 6;
    if (!bVar4) {
      uVar13 = uStack_170;
    }
    uStack_170 = uVar13;
    UNLOCK();
    if (bVar4) {
      (*(code *)local_180[1])(&local_180,local_1a8,1);
      uVar13 = uStack_170;
      do {
        LOCK();
        bVar4 = uVar13 != uStack_170;
        uVar12 = uVar13 | 0x18;
        if (bVar4) {
          uVar13 = uStack_170;
          uVar12 = uStack_170;
        }
        uStack_170 = uVar12;
        UNLOCK();
      } while (bVar4);
      if ((uVar13 & 8) != 0) {
        local_218 = 0x28;
        local_50 = &
                   ___7TTaskDelegateBase___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
        ;
        (*(code *)*local_180)(&local_180,&local_50,local_78,local_1a8);
        LOCK();
        uStack_170 = uStack_170 | 0x20;
        UNLOCK();
        (*(code *)local_50[3])(&local_50,local_78);
      }
    }
    uVar13 = uStack_170 & 0xffffffffffffffc0;
    if ((uStack_170 >> 0x3e & 2) != 0) {
      LOCK();
      bVar4 = uVar13 != uStack_170;
      uVar12 = uVar13 | 1;
      if (bVar4) {
        uVar12 = uStack_170;
      }
      uStack_170 = uVar12;
      UNLOCK();
      uVar12 = uStack_170;
      if (bVar4) {
        LOCK();
        bVar4 = (uVar13 | 2) != uStack_170;
        uVar13 = uVar13 | 3;
        if (bVar4) {
          uVar13 = uStack_170;
        }
        uStack_170 = uVar13;
        UNLOCK();
        uVar12 = uStack_170;
        if (bVar4) goto joined_r0x000141471729;
      }
      do {
        LOCK();
        bVar4 = uVar12 != uStack_170;
        uVar13 = uVar12 | 2;
        if (bVar4) {
          uVar12 = uStack_170;
          uVar13 = uStack_170;
        }
        uStack_170 = uVar13;
        UNLOCK();
      } while (bVar4);
      if ((uVar12 & 2) == 0) {
        LowLevelTasks::FTask::ExecuteTask((FTask *)local_1a8);
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Task.TryCancel()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                         ,0x295,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
joined_r0x000141471729:
    while ((uStack_170 & 0x20) == 0) {
      FWindowsPlatformProcess::YieldThread();
    }
    if ((local_1f8 != 0x2a) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestValue == 42",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                           ,0x298,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if ((uStack_170 & 0x20) == 0) {
      local_218 = (uint)uStack_170 & 0x3f;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x204,L"State: %d");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    (*(code *)local_180[3])(&local_180,local_1a8);
    uVar18 = uVar18 + 1;
    if (1 < uVar18) {
      local_1f4 = 0x539;
      local_1d8.PromiseVTable._padding_ =
           (longlong)&___7__TPromiseVTableDummy_X_AwaitableTask_Detail__6B_;
      local_1b0.TestValue = &local_1f4;
      local_1d8.PromiseVTable.Promise = (FPromiseBase *)0x0;
      TAwaitableTask<void>::
      InitAndLaunch<_Tasks2Tests::FTasksUnitTests2::RunTest_::__l84::<lambda_4>_>
                (&local_1d8,L"Awaitable Test",Default,&local_1b0);
      (**(code **)(local_1d8.PromiseVTable._padding_ + 0x10))();
      if ((local_1f4 != 0x2a) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestValue == 42",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                             ,0x2a7,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      (**(code **)(local_1d8.PromiseVTable._padding_ + 0x30))();
      pFVar9 = ::operator_new(4);
      pFVar16 = pFVar17;
      if (pFVar9 != (FTask *)0x0) {
        *(undefined4 *)pFVar9 = 0x539;
        pFVar16 = pFVar9;
      }
      pFVar10 = ::operator_new(0x40);
      pFVar9 = pFVar17;
      if (pFVar10 != (FTask *)0x0) {
        *(undefined8 *)pFVar10 = 0;
        *(undefined8 *)&pFVar10->field_0x8 = 0;
        *(undefined8 *)&pFVar10->field_0x10 = 0;
        *(undefined8 *)&pFVar10->field_0x18 = 0;
        *(undefined8 *)&pFVar10->field_0x20 = 0;
        *(undefined ***)&pFVar10->field_0x28 =
             &
             ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
        ;
        *(undefined8 *)&pFVar10->field_0x30 = 0;
        *(undefined8 *)&pFVar10->field_0x38 = 0xe800000000000020;
        pFVar9 = pFVar10;
      }
      local_1e8 = pFVar16;
      if ((*(ulonglong *)&pFVar9->field_0x38 & 0x20) == 0) {
        local_218 = (uint)*(undefined8 *)&pFVar9->field_0x38 & 0x3f;
        local_1e0 = pFVar9;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      local_1e0 = (FTask *)0x0;
      (**(code **)(*(longlong *)&pFVar9->field_0x28 + 0x18))(&pFVar9->field_0x28,pFVar9);
      uVar13 = (ulonglong)_tls_index;
      *(undefined ***)&pFVar9->field_0x28 =
           &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
            TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`92'::<lambda_5>_>'::`13'::<lambda_1>,0>
            ::_vftable_;
      pvVar14 = ThreadLocalStoragePointer;
      *(FTask **)pFVar9 = pFVar16;
      *(FTask **)&pFVar9->field_0x8 = pFVar9;
      lVar1 = *(longlong *)(*(longlong *)((longlong)pvVar14 + uVar13 * 8) + 0x40);
      if (lVar1 != 0) {
        pFVar17 = *(FTask **)(lVar1 + 0x30);
      }
      *(FTask **)&pFVar9->field_0x30 = pFVar17;
      *(undefined8 *)&pFVar9->field_0x38 = 0xc80000541858d000;
      `Tasks2Tests::FTasksUnitTests2::RunTest'::__l92::<lambda_5>::~<lambda_5>(&local_1e8);
      uVar13 = *(ulonglong *)&pFVar9->field_0x38;
      do {
        LOCK();
        uVar12 = *(ulonglong *)&pFVar9->field_0x38;
        bVar4 = uVar13 == uVar12;
        if (bVar4) {
          *(ulonglong *)&pFVar9->field_0x38 = uVar13 | 2;
          uVar12 = uVar13;
        }
        UNLOCK();
        uVar13 = uVar12;
      } while (!bVar4);
      if ((uVar12 & 2) == 0) {
        LowLevelTasks::FScheduler::LaunchInternal
                  (&LowLevelTasks::FScheduler::Singleton,pFVar9,DefaultPreference,true);
      }
      local_b8 = uVar3;
      uStack_b0 = uVar11;
      local_1f0[0] = 0x539;
      local_100 = &
                  ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      local_c0 = &
                 ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      local_f8 = uVar3;
      uStack_f0 = uVar11;
      if ((uVar11 & 0x20) == 0) {
        local_218 = uVar6 & 0x3f;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      (*(code *)local_c0[3])(&local_c0,local_e8);
      uVar11 = (ulonglong)_tls_index;
      local_c0 = &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
                  TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`93'::<lambda_6>_>'::`13'::<lambda_1>,0>
                  ::_vftable_;
      local_e8[0] = local_1f0;
      lVar1 = *(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x40);
      if (lVar1 == 0) {
        local_b8 = 0;
      }
      else {
        local_b8 = *(undefined8 *)(lVar1 + 0x30);
      }
      uStack_b0 = 0xc80000541858d800;
      if ((uStack_f0 & 0x20) == 0) {
        local_218 = (uint)uStack_f0 & 0x3f;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      (*(code *)local_100[3])(&local_100,local_128);
      local_100 = &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
                   TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`93'::<lambda_7>_>'::`13'::<lambda_1>,0>
                   ::_vftable_;
      local_128._0_8_ = local_e8;
      lVar1 = *(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x40);
      if (lVar1 == 0) {
        local_f8 = 0;
      }
      else {
        local_f8 = *(undefined8 *)(lVar1 + 0x30);
      }
      uStack_f0 = 0xc80000541858dc00;
      uVar11 = 0xc80000541858dc00;
      do {
        LOCK();
        bVar4 = uVar11 != uStack_f0;
        uVar13 = uVar11 | 2;
        if (bVar4) {
          uVar11 = uStack_f0;
          uVar13 = uStack_f0;
        }
        uStack_f0 = uVar13;
        UNLOCK();
      } while (bVar4);
      if ((uVar11 & 2) == 0) {
        LowLevelTasks::FScheduler::LaunchInternal
                  (&LowLevelTasks::FScheduler::Singleton,(FTask *)local_128,DefaultPreference,true);
      }
      else {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TryLaunch(TaskA)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                           ,0x2c7,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      while ((uStack_b0 & 0x20) == 0) {
        FWindowsPlatformProcess::YieldThread();
      }
      if ((local_1f0[0] != 0x2a) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestValue == 42",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                             ,0x2ca,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      if ((uStack_b0 & 0x20) == 0) {
        local_218 = (uint)uStack_b0 & 0x3f;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x204,L"State: %d");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      (*(code *)local_c0[3])(&local_c0,local_e8);
      if ((uStack_f0 & 0x20) == 0) {
        local_218 = (uint)uStack_f0 & 0x3f;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x204,L"State: %d");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      (*(code *)local_100[3])(&local_100,local_128);
      return true;
    }
  } while( true );
}

// GetBeautifiedTestName @ 141471cb0

FString * __thiscall
Tasks2Tests::FTasksUnitTests2::GetBeautifiedTestName
          (FTasksUnitTests2 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.LowLevelTasks.UnitTests");
  return __return_storage_ptr__;
}

// ~<lambda_5> @ 14147f9f0

void __thiscall `Tasks2Tests::FTasksUnitTests2::RunTest'::__l92::<lambda_5>::~<lambda_5>(void *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  
  pvVar1 = *(void **)((longlong)this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if ((*(ulonglong *)((longlong)pvVar1 + 0x38) & 0x20) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                       ,0x204,L"State: %d");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(*(longlong *)((longlong)pvVar1 + 0x28) + 0x18))((longlong)pvVar1 + 0x28,pvVar1);
  ::operator_delete(pvVar1,0x40);
  return;
}

