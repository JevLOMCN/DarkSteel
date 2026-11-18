// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141d57b30

EAutomationTestFlags __thiscall
UE::TasksTests::FTasksLoneStandbyWorker::GetTestFlags(FTasksLoneStandbyWorker *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141d57b40

bool __thiscall UE::TasksTests::FTasksLoneStandbyWorker::IsStressTest(FTasksLoneStandbyWorker *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141d57b50

uint __thiscall
UE::TasksTests::FTasksLoneStandbyWorker::GetRequiredDeviceNum(FTasksLoneStandbyWorker *this)

{
  return 1;
}

// GetTestSourceFileName @ 141d57b60

FString * __thiscall
UE::TasksTests::FTasksLoneStandbyWorker::GetTestSourceFileName
          (FTasksLoneStandbyWorker *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141d57b90

int __thiscall
UE::TasksTests::FTasksLoneStandbyWorker::GetTestSourceFileLine(FTasksLoneStandbyWorker *this)

{
  return 0x6a7;
}

// GetTests @ 141d57ba0

/* WARNING: Removing unreachable block (ram,0x000141d57d1e) */

void __thiscall
UE::TasksTests::FTasksLoneStandbyWorker::GetTests
          (FTasksLoneStandbyWorker *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141d57d40

bool __thiscall
UE::TasksTests::FTasksLoneStandbyWorker::RunTest(FTasksLoneStandbyWorker *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141d57d70

FString * __thiscall
UE::TasksTests::FTasksLoneStandbyWorker::GetBeautifiedTestName
          (FTasksLoneStandbyWorker *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTasksLoneStandbyWorker @ 141d6b8a0

FTasksLoneStandbyWorker * __thiscall
UE::TasksTests::FTasksLoneStandbyWorker::FTasksLoneStandbyWorker
          (FTasksLoneStandbyWorker *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTasksLoneStandbyWorker_TasksTests_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Async::Tasks::LoneStandbyWorker");
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

// TestBody @ 141d85fe0

/* WARNING: Removing unreachable block (ram,0x000141d86195) */
/* WARNING: Removing unreachable block (ram,0x000141d863b8) */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::TasksTests::FTasksLoneStandbyWorker::TestBody(FTasksLoneStandbyWorker *this,FString *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  byte bVar4;
  FMonotonicTimePoint FVar5;
  bool bVar6;
  FTaskBase *pFVar7;
  FTask *pFVar8;
  FTaskBase *pFVar9;
  FTaskBase *this_00 [1];
  FMonotonicTimePoint FVar10;
  FMonotonicTimePoint FVar11;
  byte local_res18 [8];
  byte local_res20 [8];
  byte local_e8;
  byte local_e7;
  byte local_e6 [6];
  TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295> local_e0;
  byte *local_d8;
  byte *local_d0;
  byte *local_c8;
  byte *local_c0;
  byte *pbStack_b8;
  byte *local_b0;
  byte *pbStack_a8;
  FWaitState local_90;
  FWaitState local_80;
  FWaitState local_70 [3];
  
  this_00[0] = (FTaskBase *)0x0;
  LowLevelTasks::FScheduler::RestartWorkers
            (&LowLevelTasks::FScheduler::Singleton,1,0,NonForkable,TPri_Normal,TPri_BelowNormal,0,0)
  ;
  local_c0 = local_res18;
  local_res20[0] = 0;
  pbStack_b8 = &local_e7;
  local_res18[0] = 0;
  local_e6[0] = 0;
  local_e7 = 0;
  local_e8 = 0;
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  pFVar9 = this_00[0];
  if (pFVar7 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksLoneStandbyWorker::TestBody'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    if (((*(ulonglong *)&(pFVar7->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)(*(longlong *)&(pFVar7->LowLevelTask).field_0x28 + 0x18))
              (&(pFVar7->LowLevelTask).field_0x28,&pFVar7->LowLevelTask);
    *(undefined ***)&(pFVar7->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&pFVar7->LowLevelTask = pFVar7;
    *(FTaskBase **)&(pFVar7->LowLevelTask).field_0x8 = pFVar7;
    pFVar8 = LowLevelTasks::FTask::GetActiveTask();
    if (pFVar8 != (FTask *)0x0) {
      pFVar9 = *(FTaskBase **)&pFVar8->field_0x30;
    }
    *(FTaskBase **)&(pFVar7->LowLevelTask).field_0x30 = pFVar9;
    *(undefined8 *)&(pFVar7->LowLevelTask).field_0x38 = 0xc80000541e80ce00;
    pFVar7->ExtendedPriority = None;
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar7->_padding_);
    pFVar7[1]._padding_ = (longlong)local_c0;
    pFVar7[1]._padding_ = (longlong)pbStack_b8;
    pFVar7->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksLoneStandbyWorker::TestBody'::`2'::<lambda_1>_>::
          _vftable_;
    pFVar9 = pFVar7;
  }
  Tasks::Private::FTaskBase::TryLaunch(pFVar9,0x100);
  FVar5.Time = __real_7ff0000000000000.Time;
  while ((local_res18[0] & 1) == 0) {
    if ((local_res18[0] & 2) == 0) {
      LOCK();
      local_res18[0] = 2;
      UNLOCK();
    }
    local_d8 = local_res18;
    ParkingLot::Private::WaitUntil
              (&local_90,local_res18,
               TFunctionWithContext<bool___cdecl(void)>::
               Call<_UE::FManualResetEvent::WaitUntil_::__l13::<lambda_1>_>,&local_d8,
               (_func___cdecl_void_void_ptr *)0x0,(void *)0x0,FVar5);
  }
  local_b0 = local_res20;
  pbStack_a8 = local_e6;
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  if (pFVar7 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksLoneStandbyWorker::TestBody'::`2'::<lambda_2>,void,void>
          ::_vftable_;
    if (((*(ulonglong *)&(pFVar7->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)(*(longlong *)&(pFVar7->LowLevelTask).field_0x28 + 0x18))
              (&(pFVar7->LowLevelTask).field_0x28,&pFVar7->LowLevelTask);
    *(undefined ***)&(pFVar7->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&pFVar7->LowLevelTask = pFVar7;
    *(FTaskBase **)&(pFVar7->LowLevelTask).field_0x8 = pFVar7;
    pFVar8 = LowLevelTasks::FTask::GetActiveTask();
    if (pFVar8 != (FTask *)0x0) {
      this_00[0] = *(FTaskBase **)&pFVar8->field_0x30;
    }
    *(FTaskBase **)&(pFVar7->LowLevelTask).field_0x30 = this_00[0];
    *(undefined8 *)&(pFVar7->LowLevelTask).field_0x38 = 0xc80000541e80d600;
    pFVar7->ExtendedPriority = None;
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar7->_padding_);
    pFVar7[1]._padding_ = (longlong)local_b0;
    pFVar7[1]._padding_ = (longlong)pbStack_a8;
    pFVar7->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksLoneStandbyWorker::TestBody'::`2'::<lambda_2>_>::
          _vftable_;
    this_00[0] = pFVar7;
  }
  Tasks::Private::FTaskBase::TryLaunch(this_00[0],0x100);
  local_e0.Elements[0] = (FTaskBase * [1])(FTaskBase * [1])this_00[0];
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  if (pFVar7 == (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::
    AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>,0>
              ((FTaskBase *)0x0,&local_e0,true);
    Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
    bVar4 = local_e7;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksLoneStandbyWorker::TestBody'::`2'::<lambda_3>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init(pFVar7,L"LocalQueueTask",Default,None,None);
    pFVar7[1]._padding_ = (longlong)&local_e8;
    pFVar7->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksLoneStandbyWorker::TestBody'::`2'::<lambda_3>_>::
          _vftable_;
    Tasks::Private::FTaskBase::
    AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>,0>
              (pFVar7,&local_e0,true);
    Tasks::Private::FTaskBase::TryLaunch(pFVar7,0x100);
    LOCK();
    paVar1 = &pFVar7->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    bVar4 = local_e7;
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar7->_padding_)(pFVar7);
      bVar4 = local_e7;
    }
  }
  while ((local_res20[0] & 1) == 0) {
    if ((local_res20[0] & 2) == 0) {
      LOCK();
      local_res20[0] = 2;
      UNLOCK();
    }
    local_d0 = local_res20;
    local_e7 = bVar4;
    ParkingLot::Private::WaitUntil
              (&local_80,local_res20,
               TFunctionWithContext<bool___cdecl(void)>::
               Call<_UE::FManualResetEvent::WaitUntil_::__l13::<lambda_1>_>,&local_d0,
               (_func___cdecl_void_void_ptr *)0x0,(void *)0x0,FVar5);
    bVar4 = local_e7;
  }
  LOCK();
  local_e7 = 1;
  UNLOCK();
  if ((bVar4 & 3) == 2) {
    ParkingLot::WakeAll(&local_e7);
  }
  if (pFVar9 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::Wait(pFVar9);
  }
  bVar4 = local_e6[0];
  LOCK();
  local_e6[0] = 1;
  UNLOCK();
  if ((bVar4 & 3) == 2) {
    ParkingLot::WakeAll(local_e6);
  }
  FVar10 = FMonotonicTimePoint::Now();
                    /* WARNING: Load size is inaccurate */
  FVar10.Time = *FVar10.Time + __real_4014000000000000;
  bVar4 = local_e8;
joined_r0x000141d86458:
  local_e8 = bVar4;
  if ((bVar4 & 1) == 0) {
                    /* WARNING: Load size is inaccurate */
    if ((FVar10.Time == FVar5.Time) ||
       (FVar11 = FMonotonicTimePoint::Now(),
       *FVar11.Time <= FVar10.Time && FVar10.Time != *FVar11.Time)) {
      if ((bVar4 & 2) == 0) goto code_r0x000141d8647a;
      goto LAB_141d86486;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalQueueEvent.WaitFor(UE::FMonotonicTimeSpan::FromSeconds(5))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                       ,0x6e8,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  LowLevelTasks::FScheduler::RestartWorkers
            (&LowLevelTasks::FScheduler::Singleton,0,0,NonForkable,TPri_Normal,TPri_BelowNormal,0,0)
  ;
  if (this_00[0] != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &this_00[0]->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_00[0]->_padding_)(this_00[0],1);
    }
  }
  if (pFVar9 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar9->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar9->_padding_)(pFVar9,1);
    }
  }
  return;
code_r0x000141d8647a:
  LOCK();
  bVar6 = bVar4 == local_e8;
  if (bVar6) {
    local_e8 = 2;
  }
  UNLOCK();
  bVar4 = local_e8;
  if (bVar6) {
LAB_141d86486:
    local_c8 = &local_e8;
    ParkingLot::Private::WaitUntil
              (local_70,&local_e8,
               TFunctionWithContext<bool___cdecl(void)>::
               Call<_UE::FManualResetEvent::WaitUntil_::__l13::<lambda_1>_>,&local_c8,
               (_func___cdecl_void_void_ptr *)0x0,(void *)0x0,FVar10);
    bVar4 = local_e8;
  }
  goto joined_r0x000141d86458;
}

