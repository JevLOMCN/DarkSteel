// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// GetTestFlags @ 141d58630

EAutomationTestFlags __thiscall
UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::GetTestFlags
          (FTaskGraphLaunchFromThreadDuringRestartWorkers *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141d58640

bool __thiscall
UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::IsStressTest
          (FTaskGraphLaunchFromThreadDuringRestartWorkers *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141d58650

uint __thiscall
UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::GetRequiredDeviceNum
          (FTaskGraphLaunchFromThreadDuringRestartWorkers *this)

{
  return 1;
}

// GetTestSourceFileName @ 141d58660

FString * __thiscall
UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::GetTestSourceFileName
          (FTaskGraphLaunchFromThreadDuringRestartWorkers *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141d58690

int __thiscall
UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::GetTestSourceFileLine
          (FTaskGraphLaunchFromThreadDuringRestartWorkers *this)

{
  return 0x706;
}

// GetTests @ 141d586a0

/* WARNING: Removing unreachable block (ram,0x000141d5881e) */

void __thiscall
UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::GetTests
          (FTaskGraphLaunchFromThreadDuringRestartWorkers *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar1 = &this->PrettyNameDotNotation;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar1)
  ;
  pFVar5 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = local_18;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar5 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 141d58840

/* WARNING: Removing unreachable block (ram,0x000141d58908) */

bool __thiscall
UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::RunTest
          (FTaskGraphLaunchFromThreadDuringRestartWorkers *this,FString *param_1)

{
  FMonotonicTimePoint FVar1;
  bool bVar2;
  longlong lVar3;
  FManualResetEvent local_res18 [8];
  atomic<bool> local_res20 [8];
  <lambda_1> local_80;
  FWaitState local_70;
  TUniqueFunction<void___cdecl(void)> local_58;
  
  local_80.Done = local_res18;
  local_80.bExit = local_res20;
  local_res20[0] = (atomic<bool>)0x0;
  local_res18[0].State = (atomic<unsigned_char>)0x0;
  local_58._0_8_ = 0;
  local_58._40_8_ = 0;
  Async<_UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody_::__l2::<lambda_1>_>
            ((TFuture<void> *)&local_70,Thread,&local_80,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_70.WakeToken);
  lVar3 = 1000;
  do {
    LowLevelTasks::FScheduler::RestartWorkers
              (&LowLevelTasks::FScheduler::Singleton,0,4,NonForkable,TPri_Normal,TPri_BelowNormal,0,
               0);
    FVar1.Time = __real_7ff0000000000000.Time;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  LOCK();
  local_res20[0] = (atomic<bool>)0x1;
  UNLOCK();
  while (((byte)local_res18[0].State & 1) == 0) {
    if (((byte)local_res18[0].State & 2) == 0) {
      LOCK();
      local_res18[0].State = (atomic<unsigned_char>)0x2;
      UNLOCK();
    }
    local_80.Done = local_res18;
    ParkingLot::Private::WaitUntil
              (&local_70,local_res18,
               TFunctionWithContext<bool___cdecl(void)>::
               Call<_UE::FManualResetEvent::WaitUntil_::__l13::<lambda_1>_>,&local_80,
               (_func___cdecl_void_void_ptr *)0x0,(void *)0x0,FVar1);
  }
  LowLevelTasks::FScheduler::RestartWorkers
            (&LowLevelTasks::FScheduler::Singleton,0,0,NonForkable,TPri_Normal,TPri_BelowNormal,0,0)
  ;
  bVar2 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar2;
}

// GetBeautifiedTestName @ 141d589b0

FString * __thiscall
UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::GetBeautifiedTestName
          (FTaskGraphLaunchFromThreadDuringRestartWorkers *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTaskGraphLaunchFromThreadDuringRestartWorkers @ 141d6a0f0

FTaskGraphLaunchFromThreadDuringRestartWorkers * __thiscall
UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::
FTaskGraphLaunchFromThreadDuringRestartWorkers
          (FTaskGraphLaunchFromThreadDuringRestartWorkers *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EAutomationTestFlags EVar3;
  FString *pFVar4;
  FAutomationTestFramework *this_00;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,false);
  this->_padding_ = (longlong)&___7FTaskGraphLaunchFromThreadDuringRestartWorkers_TasksTests_UE__6B_
  ;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Async::Tasks::RestartWorkersAndExternalThreads");
  pFVar4 = ::FString::Replace(pFVar4,&local_18,L"::",L".",IgnoreCase);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrettyNameDotNotation).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->PrettyNameDotNotation).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar3 = this->TestFlags;
  if ((EVar3 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext)) == None
     ) {
    EVar3 = EVar3 | (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
    this->TestFlags = EVar3;
  }
  if ((EVar3 & (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      None) {
    this->TestFlags = EVar3 | EngineFilter;
  }
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,lVar5 * 2);
  }
  FAutomationTestFramework::RegisterAutomationTestTags(this_00,&local_28,&local_18,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// operator() @ 141d6dcd0

void __thiscall
`UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::__l2::<lambda_1>::
operator()(void *this)

{
  atomic<unsigned_int> *paVar1;
  byte bVar2;
  atomic<unsigned_int> aVar3;
  char cVar4;
  byte *pbVar5;
  code *pcVar6;
  bool bVar7;
  FTaskBase *this_00;
  FTask *pFVar8;
  undefined8 uVar9;
  
  cVar4 = **(char **)((longlong)this + 8);
  do {
    if (cVar4 != '\0') {
      pbVar5 = *(byte **)this;
      LOCK();
      bVar2 = *pbVar5;
      *pbVar5 = 1;
      UNLOCK();
      if ((bVar2 & 3) == 2) {
        UE::ParkingLot::WakeAll(pbVar5);
        return;
      }
      return;
    }
    this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (this_00 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<``UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::`2'::<lambda_1>::operator()'::`4'::<lambda_1>,void,void>
            ::_vftable_;
      if (((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x1dd,L"State: %d"), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
                (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
      *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FTaskBase **)&this_00->LowLevelTask = this_00;
      *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
      pFVar8 = LowLevelTasks::FTask::GetActiveTask();
      if (pFVar8 == (FTask *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)&pFVar8->field_0x30;
      }
      *(undefined8 *)&(this_00->LowLevelTask).field_0x30 = uVar9;
      *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc80000541e80f800;
      this_00->ExtendedPriority = None;
      UE::FInheritedContextBase::CaptureInheritedContext
                ((FInheritedContextBase *)&this_00->_padding_);
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTask<``UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody'::`2'::<lambda_1>::operator()'::`4'::<lambda_1>_>
            ::_vftable_;
      UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
      UE::Tasks::Private::FTaskBase::Wait(this_00);
      LOCK();
      paVar1 = &this_00->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_00->_padding_)(this_00,1);
      }
    }
    cVar4 = **(char **)((longlong)this + 8);
  } while( true );
}

// TestBody @ 141d814c0

/* WARNING: Removing unreachable block (ram,0x000141d81588) */

void __thiscall
UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody
          (FTaskGraphLaunchFromThreadDuringRestartWorkers *this,FString *param_1)

{
  FMonotonicTimePoint FVar1;
  longlong lVar2;
  FManualResetEvent local_res18 [8];
  atomic<bool> local_res20 [8];
  <lambda_1> local_70;
  FWaitState local_60;
  TUniqueFunction<void___cdecl(void)> local_48;
  
  local_70.Done = local_res18;
  local_70.bExit = local_res20;
  local_res20[0] = (atomic<bool>)0x0;
  local_res18[0].State = (atomic<unsigned_char>)0x0;
  local_48._0_8_ = 0;
  local_48._40_8_ = 0;
  Async<_UE::TasksTests::FTaskGraphLaunchFromThreadDuringRestartWorkers::TestBody_::__l2::<lambda_1>_>
            ((TFuture<void> *)&local_60,Thread,&local_70,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_60.WakeToken);
  lVar2 = 1000;
  do {
    LowLevelTasks::FScheduler::RestartWorkers
              (&LowLevelTasks::FScheduler::Singleton,0,4,NonForkable,TPri_Normal,TPri_BelowNormal,0,
               0);
    FVar1.Time = __real_7ff0000000000000.Time;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  LOCK();
  local_res20[0] = (atomic<bool>)0x1;
  UNLOCK();
  while (((byte)local_res18[0].State & 1) == 0) {
    if (((byte)local_res18[0].State & 2) == 0) {
      LOCK();
      local_res18[0].State = (atomic<unsigned_char>)0x2;
      UNLOCK();
    }
    local_70.Done = local_res18;
    ParkingLot::Private::WaitUntil
              (&local_60,local_res18,
               TFunctionWithContext<bool___cdecl(void)>::
               Call<_UE::FManualResetEvent::WaitUntil_::__l13::<lambda_1>_>,&local_70,
               (_func___cdecl_void_void_ptr *)0x0,(void *)0x0,FVar1);
  }
  LowLevelTasks::FScheduler::RestartWorkers
            (&LowLevelTasks::FScheduler::Singleton,0,0,NonForkable,TPri_Normal,TPri_BelowNormal,0,0)
  ;
  return;
}

