// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 141470440

EAutomationTestFlags __thiscall
Tasks2Tests::FTasksLocalGlobalPriorities::GetTestFlags(FTasksLocalGlobalPriorities *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141470450

bool __thiscall
Tasks2Tests::FTasksLocalGlobalPriorities::IsStressTest(FTasksLocalGlobalPriorities *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141470460

uint __thiscall
Tasks2Tests::FTasksLocalGlobalPriorities::GetRequiredDeviceNum(FTasksLocalGlobalPriorities *this)

{
  return 1;
}

// GetTestSourceFileName @ 141470470

FString * __thiscall
Tasks2Tests::FTasksLocalGlobalPriorities::GetTestSourceFileName
          (FTasksLocalGlobalPriorities *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1414704a0

int __thiscall
Tasks2Tests::FTasksLocalGlobalPriorities::GetTestSourceFileLine(FTasksLocalGlobalPriorities *this)

{
  return 0x211;
}

// GetTests @ 1414704b0

/* WARNING: Removing unreachable block (ram,0x00014147059d) */
/* WARNING: Removing unreachable block (ram,0x000141470668) */

void __thiscall
Tasks2Tests::FTasksLocalGlobalPriorities::GetTests
          (FTasksLocalGlobalPriorities *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.LowLevelTasks.LocalGlobalPriorities");
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

// RunTest @ 141470690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

bool __thiscall
Tasks2Tests::FTasksLocalGlobalPriorities::RunTest
          (FTasksLocalGlobalPriorities *this,FString *param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulong uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  undefined1 auStackY_128 [32];
  char local_e8;
  char local_e7 [7];
  undefined1 local_e0 [40];
  undefined **local_b8;
  undefined8 local_b0;
  ulonglong uStack_a8;
  char *local_a0;
  char *local_98;
  undefined **local_78;
  undefined8 local_70;
  ulonglong uStack_68;
  char *local_60;
  char *local_58;
  undefined **local_38;
  undefined8 local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_128;
  LowLevelTasks::FScheduler::RestartWorkers
            (&LowLevelTasks::FScheduler::Singleton,0,1,NonForkable,TPri_Normal,TPri_BelowNormal,0,0)
  ;
  local_b8 = &
             ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  local_30 = ___xmm_e8000000000000200000000000000000;
  uStack_28 = _UNK_15061cdc8;
  local_e8 = '\0';
  local_e7[0] = '\0';
  local_38 = &
             ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  local_78 = &
             ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  local_b0 = ___xmm_e8000000000000200000000000000000;
  uStack_a8 = _UNK_15061cdc8;
  local_70 = ___xmm_e8000000000000200000000000000000;
  uStack_68 = _UNK_15061cdc8;
  if (((_UNK_15061cdc8 & 0x20) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  (*(code *)local_38[3])(&local_38,&local_60);
  uVar3 = _tls_index;
  uVar7 = (ulonglong)_tls_index;
  local_38 = &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
              TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::`2'::<lambda_1>_>'::`13'::<lambda_1>,0>
              ::_vftable_;
  local_60 = local_e7;
  local_58 = &local_e8;
  lVar1 = *(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x40);
  if (lVar1 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = *(undefined8 *)(lVar1 + 0x30);
  }
  uStack_28 = 0xd800005418586e00;
  if (((uStack_68 & 0x20) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  (*(code *)local_78[3])(&local_78,&local_a0);
  local_78 = &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
              TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::`2'::<lambda_2>_>'::`13'::<lambda_1>,0>
              ::_vftable_;
  local_a0 = &local_e8;
  local_98 = local_e7;
  lVar1 = *(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x40);
  if (lVar1 == 0) {
    local_70 = 0;
  }
  else {
    local_70 = *(undefined8 *)(lVar1 + 0x30);
  }
  uStack_68 = 0xd000005418587400;
  if (((uStack_a8 & 0x20) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  (*(code *)local_b8[3])();
  local_b8 = &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
              TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::`2'::<lambda_3>_>'::`13'::<lambda_1>,0>
              ::_vftable_;
  local_e0._0_8_ = &local_60;
  local_e0._8_8_ = &local_a0;
  lVar1 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar3 * 8) + 0x40);
  if (lVar1 == 0) {
    local_b0 = 0;
  }
  else {
    local_b0 = *(undefined8 *)(lVar1 + 0x30);
  }
  uStack_a8 = 0xd800005418587a00;
  uVar7 = 0xd800005418587a00;
  do {
    LOCK();
    bVar5 = uVar7 != uStack_a8;
    uVar4 = uVar7 | 2;
    if (bVar5) {
      uVar7 = uStack_a8;
      uVar4 = uStack_a8;
    }
    uStack_a8 = uVar4;
    UNLOCK();
  } while (bVar5);
  if ((uVar7 & 2) == 0) {
    LowLevelTasks::FScheduler::LaunchInternal
              (&LowLevelTasks::FScheduler::Singleton,(FTask *)local_e0,DefaultPreference,true);
  }
  do {
  } while ((uStack_28 & 0x20) == 0);
  do {
  } while ((uStack_68 & 0x20) == 0);
  if ((local_e8 != '\x01') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GlobalRun == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                         ,0x241,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if ((local_e7[0] != '\x01') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalRun == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                         ,0x242,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  LowLevelTasks::FScheduler::RestartWorkers
            (&LowLevelTasks::FScheduler::Singleton,0,0,NonForkable,TPri_Normal,TPri_BelowNormal,0,0)
  ;
  if (((uStack_68 & 0x20) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x204,L"State: %d"), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  (*(code *)local_78[3])(&local_78,&local_a0);
  if (((uStack_28 & 0x20) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x204,L"State: %d"), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  (*(code *)local_38[3])(&local_38,&local_60);
  if (((uStack_a8 & 0x20) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x204,L"State: %d"), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  (*(code *)local_b8[3])(&local_b8,local_e0);
  return true;
}

// GetBeautifiedTestName @ 141470b40

FString * __thiscall
Tasks2Tests::FTasksLocalGlobalPriorities::GetBeautifiedTestName
          (FTasksLocalGlobalPriorities *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.LowLevelTasks.LocalGlobalPriorities");
  return __return_storage_ptr__;
}

