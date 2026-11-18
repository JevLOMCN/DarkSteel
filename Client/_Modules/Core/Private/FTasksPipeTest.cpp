// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141d5b6c0

EAutomationTestFlags __thiscall UE::TasksTests::FTasksPipeTest::GetTestFlags(FTasksPipeTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141d5b6e0

bool __thiscall UE::TasksTests::FTasksPipeTest::IsStressTest(FTasksPipeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141d5b700

uint __thiscall UE::TasksTests::FTasksPipeTest::GetRequiredDeviceNum(FTasksPipeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141d5b720

FString * __thiscall
UE::TasksTests::FTasksPipeTest::GetTestSourceFileName
          (FTasksPipeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141d5b780

int __thiscall UE::TasksTests::FTasksPipeTest::GetTestSourceFileLine(FTasksPipeTest *this)

{
  return 0x1cf;
}

// GetTests @ 141d5b7a0

/* WARNING: Removing unreachable block (ram,0x000141d5b91e) */

void __thiscall
UE::TasksTests::FTasksPipeTest::GetTests
          (FTasksPipeTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141d5bae0

bool __thiscall UE::TasksTests::FTasksPipeTest::RunTest(FTasksPipeTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141d5bb40

FString * __thiscall
UE::TasksTests::FTasksPipeTest::GetBeautifiedTestName
          (FTasksPipeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTasksPipeTest @ 141d6c1b0

FTasksPipeTest * __thiscall
UE::TasksTests::FTasksPipeTest::FTasksPipeTest(FTasksPipeTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTasksPipeTest_TasksTests_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Tasks::Pipe");
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

// TestBody @ 141d87ba0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "memory_order": Some values do not have unique names */

void __thiscall UE::TasksTests::FTasksPipeTest::TestBody(FTasksPipeTest *this,FString *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<bool> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FTaskBase *pFVar8;
  FTask *pFVar9;
  undefined8 uVar10;
  FTaskBase *pFVar11;
  FTaskBase *pFVar12;
  FTaskEvent FVar13;
  TTask<void> TVar14;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *pTVar15;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> this_00;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> this_01;
  undefined1 auVar16 [16];
  char local_res18 [8];
  char local_res20 [8];
  undefined4 in_stack_fffffffffffffdb8;
  undefined1 local_238;
  char local_237 [7];
  FTaskBase *local_230;
  FTaskEvent local_228;
  FTaskHandle local_220;
  FTaskHandle local_218;
  FTaskHandle local_210;
  FTaskHandle local_208;
  FTaskHandle local_200;
  TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295> local_1f8;
  TTask<void> local_1f0;
  FTaskEvent local_1e8;
  TTask<void> local_1e0;
  FPipe local_1d8;
  FPipe local_1b0;
  FPipe local_188;
  FPipe local_160;
  FPipe local_138;
  TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295> local_110;
  char *local_108;
  initializer_list<UE::Tasks::Private::FTaskHandle> local_f8;
  FPipe local_e8;
  FPipe local_c0;
  FPipe local_98;
  FPipe local_70;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_48;
  
  bVar5 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar5) {
    Tasks::FPipe::FPipe(&local_1d8,
                        L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(472)"
                       );
    pFVar8 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
             ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                         *)&Tasks::Private::SmallTaskAllocator);
    if (pFVar8 == (FTaskBase *)0x0) {
      pFVar8 = (FTaskBase *)0x0;
    }
    else {
      Tasks::Private::FTaskBase::FTaskBase(pFVar8,2,true);
      pFVar8->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::`6'::<lambda_1>,void,void>
            ::_vftable_;
      if (((*(ulonglong *)&(pFVar8->LowLevelTask).field_0x38 & 0x20) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x1dd,L"State: %d"), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(*(longlong *)&(pFVar8->LowLevelTask).field_0x28 + 0x18))
                (&(pFVar8->LowLevelTask).field_0x28,&pFVar8->LowLevelTask);
      *(undefined ***)&(pFVar8->LowLevelTask).field_0x28 =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FTaskBase **)&pFVar8->LowLevelTask = pFVar8;
      *(FTaskBase **)&(pFVar8->LowLevelTask).field_0x8 = pFVar8;
      pFVar9 = LowLevelTasks::FTask::GetActiveTask();
      uVar10 = 0;
      if (pFVar9 != (FTask *)0x0) {
        uVar10 = *(undefined8 *)&pFVar9->field_0x30;
      }
      *(undefined8 *)&(pFVar8->LowLevelTask).field_0x30 = uVar10;
      *(undefined8 *)&(pFVar8->LowLevelTask).field_0x38 = 0xc80000541e6da000;
      pFVar8->ExtendedPriority = None;
      FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar8->_padding_);
      pFVar8->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::`6'::<lambda_1>_>::_vftable_
      ;
    }
    this_01.Reference = (FTaskBase *)0x0;
    LOCK();
    local_1d8.TaskCount = (atomic<unsigned___int64>)((longlong)local_1d8.TaskCount + 1);
    UNLOCK();
    LOCK();
    pFVar8->NumLocks = (atomic<unsigned_int>)((int)pFVar8->NumLocks + 1);
    UNLOCK();
    pFVar8->Pipe = &local_1d8;
    Tasks::Private::FTaskBase::TryLaunch(pFVar8,0x100);
    pFVar11 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&Tasks::Private::SmallTaskAllocator);
    pFVar12 = this_01.Reference;
    if (pFVar11 != (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::FTaskBase(pFVar11,2,true);
      pFVar11->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::`6'::<lambda_2>,void,void>
            ::_vftable_;
      if (((*(ulonglong *)&(pFVar11->LowLevelTask).field_0x38 & 0x20) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x1dd,L"State: %d"), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(*(longlong *)&(pFVar11->LowLevelTask).field_0x28 + 0x18))
                (&(pFVar11->LowLevelTask).field_0x28,&pFVar11->LowLevelTask);
      *(undefined ***)&(pFVar11->LowLevelTask).field_0x28 =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FTaskBase **)&pFVar11->LowLevelTask = pFVar11;
      *(FTaskBase **)&(pFVar11->LowLevelTask).field_0x8 = pFVar11;
      pFVar9 = LowLevelTasks::FTask::GetActiveTask();
      if (pFVar9 != (FTask *)0x0) {
        pFVar12 = *(FTaskBase **)&pFVar9->field_0x30;
      }
      *(FTaskBase **)&(pFVar11->LowLevelTask).field_0x30 = pFVar12;
      *(undefined8 *)&(pFVar11->LowLevelTask).field_0x38 = 0xc80000541e6dcc00;
      pFVar11->ExtendedPriority = None;
      FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar11->_padding_);
      pFVar11->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::`6'::<lambda_2>_>::_vftable_
      ;
      pFVar12 = pFVar11;
    }
    LOCK();
    local_1d8.TaskCount = (atomic<unsigned___int64>)((longlong)local_1d8.TaskCount + 1);
    UNLOCK();
    LOCK();
    pFVar12->NumLocks = (atomic<unsigned_int>)((int)pFVar12->NumLocks + 1);
    UNLOCK();
    pFVar12->Pipe = &local_1d8;
    Tasks::Private::FTaskBase::TryLaunch(pFVar12,0x100);
    Tasks::Private::FTaskBase::Wait(pFVar12);
    Tasks::FPipe::WaitUntilEmpty(&local_1d8,(FTimespan)0x7fffffffffffffff);
    LOCK();
    paVar1 = &pFVar12->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar12->_padding_)(pFVar12,1);
    }
    LOCK();
    paVar1 = &pFVar8->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
    if ((local_1d8.TaskCount != (atomic<unsigned___int64>)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!HasWork()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                           ,0x2a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d8.EmptyEventRef.SharedReferenceCount.ReferenceController);
    Tasks::FPipe::FPipe(&local_1b0,
                        L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(501)"
                       );
    pFVar12 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&Tasks::Private::SmallTaskAllocator);
    pFVar8 = this_01.Reference;
    if (pFVar12 != (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::FTaskBase(pFVar12,2,true);
      pFVar12->_padding_ = (longlong)&___7__TTaskWithResult__N_Private_Tasks_UE__6B_;
      if (((*(ulonglong *)&(pFVar12->LowLevelTask).field_0x38 & 0x20) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x1dd,L"State: %d"), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(*(longlong *)&(pFVar12->LowLevelTask).field_0x28 + 0x18))
                (&(pFVar12->LowLevelTask).field_0x28,&pFVar12->LowLevelTask);
      *(undefined ***)&(pFVar12->LowLevelTask).field_0x28 =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FTaskBase **)&pFVar12->LowLevelTask = pFVar12;
      *(FTaskBase **)&(pFVar12->LowLevelTask).field_0x8 = pFVar12;
      pFVar9 = LowLevelTasks::FTask::GetActiveTask();
      if (pFVar9 != (FTask *)0x0) {
        pFVar8 = *(FTaskBase **)&pFVar9->field_0x30;
      }
      *(FTaskBase **)&(pFVar12->LowLevelTask).field_0x30 = pFVar8;
      *(undefined8 *)&(pFVar12->LowLevelTask).field_0x38 = 0xc80000541e6d2a00;
      pFVar12->ExtendedPriority = None;
      FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar12->_padding_);
      pFVar12[1]._padding_ = (longlong)&local_1b0;
      pFVar12->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTask<``UE::TasksTests::FTasksPipeTest::TestBody'::`7'::FAsyncClass::DoSomething'::`2'::<lambda_1>_>
            ::_vftable_;
      pFVar8 = pFVar12;
    }
    LOCK();
    local_1b0.TaskCount = (atomic<unsigned___int64>)((longlong)local_1b0.TaskCount + 1);
    UNLOCK();
    LOCK();
    pFVar8->NumLocks = (atomic<unsigned_int>)((int)pFVar8->NumLocks + 1);
    UNLOCK();
    pFVar8->Pipe = &local_1b0;
    Tasks::Private::FTaskBase::TryLaunch(pFVar8,0x100);
    Tasks::Private::FTaskBase::Wait(pFVar8);
    if (((pFVar8->Subsequents).bIsClosed == (atomic<bool>)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                           ,0x353,L"The task must be completed to obtain its result"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    LOCK();
    paVar1 = &pFVar8->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
    pFVar12 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&Tasks::Private::SmallTaskAllocator);
    pFVar8 = this_01.Reference;
    if (pFVar12 != (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::FTaskBase(pFVar12,2,true);
      pFVar12->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTaskBase<``UE::TasksTests::FTasksPipeTest::TestBody'::`7'::FAsyncClass::DoSomethingElse'::`2'::<lambda_1>,void,void>
            ::_vftable_;
      Tasks::Private::FTaskBase::Init(pFVar12,L"DoSomethingElse()",Default,None,None);
      pFVar12[1]._padding_ = (longlong)&local_1b0;
      pFVar12->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTask<``UE::TasksTests::FTasksPipeTest::TestBody'::`7'::FAsyncClass::DoSomethingElse'::`2'::<lambda_1>_>
            ::_vftable_;
      pFVar8 = pFVar12;
    }
    LOCK();
    local_1b0.TaskCount = (atomic<unsigned___int64>)((longlong)local_1b0.TaskCount + 1);
    UNLOCK();
    LOCK();
    pFVar8->NumLocks = (atomic<unsigned_int>)((int)pFVar8->NumLocks + 1);
    UNLOCK();
    pFVar8->Pipe = &local_1b0;
    Tasks::Private::FTaskBase::TryLaunch(pFVar8,0x100);
    Tasks::Private::FTaskBase::Wait(pFVar8);
    LOCK();
    paVar1 = &pFVar8->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
    Tasks::FPipe::~FPipe(&local_1b0);
    Tasks::FPipe::FPipe(&local_188,
                        L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(511)"
                       );
    pFVar12 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&Tasks::Private::SmallTaskAllocator);
    pFVar8 = this_01.Reference;
    if (pFVar12 != (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::FTaskBase(pFVar12,2,true);
      pFVar12->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::`8'::<lambda_3>,void,void>
            ::_vftable_;
      Tasks::Private::FTaskBase::Init
                (pFVar12,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(512)"
                 ,Default,None,None);
      pFVar12->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::`8'::<lambda_3>_>::_vftable_
      ;
      pFVar8 = pFVar12;
    }
    LOCK();
    local_188.TaskCount = (atomic<unsigned___int64>)((longlong)local_188.TaskCount + 1);
    UNLOCK();
    LOCK();
    pFVar8->NumLocks = (atomic<unsigned_int>)((int)pFVar8->NumLocks + 1);
    UNLOCK();
    pFVar8->Pipe = &local_188;
    Tasks::Private::FTaskBase::TryLaunch(pFVar8,0x100);
    LOCK();
    paVar1 = &pFVar8->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
    pFVar12 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&Tasks::Private::SmallTaskAllocator);
    pFVar8 = this_01.Reference;
    if (pFVar12 != (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::FTaskBase(pFVar12,2,true);
      pFVar12->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::`8'::<lambda_4>,void,void>
            ::_vftable_;
      Tasks::Private::FTaskBase::Init
                (pFVar12,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(513)"
                 ,Default,None,None);
      pFVar12->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::`8'::<lambda_4>_>::_vftable_
      ;
      pFVar8 = pFVar12;
    }
    LOCK();
    local_188.TaskCount = (atomic<unsigned___int64>)((longlong)local_188.TaskCount + 1);
    UNLOCK();
    LOCK();
    pFVar8->NumLocks = (atomic<unsigned_int>)((int)pFVar8->NumLocks + 1);
    UNLOCK();
    pFVar8->Pipe = &local_188;
    Tasks::Private::FTaskBase::TryLaunch(pFVar8,0x100);
    Tasks::Private::FTaskBase::Wait(pFVar8);
    LOCK();
    paVar1 = &pFVar8->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
    Tasks::FPipe::WaitUntilEmpty(&local_188,(FTimespan)0x7fffffffffffffff);
    if ((local_188.TaskCount != (atomic<unsigned___int64>)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!HasWork()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                           ,0x2a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.EmptyEventRef.SharedReferenceCount.ReferenceController);
    Tasks::FPipe::FPipe(&local_e8,
                        L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(518)"
                       );
    pFVar12 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&Tasks::Private::SmallTaskAllocator);
    pFVar8 = this_01.Reference;
    if (pFVar12 != (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::FTaskBase(pFVar12,2,true);
      pFVar12->_padding_ = (longlong)&___7__TExecutableTaskBase_P6AXXZXX_Private_Tasks_UE__6B_;
      Tasks::Private::FTaskBase::Init
                (pFVar12,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(519)"
                 ,Default,None,None);
      pFVar12[1]._padding_ = (longlong)DummyFunc;
      pFVar12->_padding_ = (longlong)&___7__TExecutableTask_P6AXXZ_Private_Tasks_UE__6B_;
      pFVar8 = pFVar12;
    }
    LOCK();
    local_e8.TaskCount = (atomic<unsigned___int64>)((longlong)local_e8.TaskCount + 1);
    UNLOCK();
    LOCK();
    pFVar8->NumLocks = (atomic<unsigned_int>)((int)pFVar8->NumLocks + 1);
    UNLOCK();
    pFVar8->Pipe = &local_e8;
    Tasks::Private::FTaskBase::TryLaunch(pFVar8,0x100);
    Tasks::Private::FTaskBase::Wait(pFVar8);
    LOCK();
    paVar1 = &pFVar8->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
    Tasks::FPipe::WaitUntilEmpty(&local_e8,(FTimespan)0x7fffffffffffffff);
    if ((local_e8.TaskCount != (atomic<unsigned___int64>)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!HasWork()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                           ,0x2a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController);
    Tasks::FPipe::FPipe(&local_c0,
                        L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(531)"
                       );
    pFVar12 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&Tasks::Private::SmallTaskAllocator);
    pFVar8 = this_01.Reference;
    if (pFVar12 != (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::FTaskBase(pFVar12,2,true);
      pFVar12->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::`10'::FFunctor,void,void>
            ::_vftable_;
      Tasks::Private::FTaskBase::Init
                (pFVar12,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(532)"
                 ,Default,None,None);
      pFVar12->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::`10'::FFunctor>::_vftable_;
      pFVar8 = pFVar12;
    }
    LOCK();
    local_c0.TaskCount = (atomic<unsigned___int64>)((longlong)local_c0.TaskCount + 1);
    UNLOCK();
    LOCK();
    pFVar8->NumLocks = (atomic<unsigned_int>)((int)pFVar8->NumLocks + 1);
    UNLOCK();
    pFVar8->Pipe = &local_c0;
    Tasks::Private::FTaskBase::TryLaunch(pFVar8,0x100);
    Tasks::Private::FTaskBase::Wait(pFVar8);
    LOCK();
    paVar1 = &pFVar8->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
    Tasks::FPipe::WaitUntilEmpty(&local_c0,(FTimespan)0x7fffffffffffffff);
    if ((local_c0.TaskCount != (atomic<unsigned___int64>)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!HasWork()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                           ,0x2a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c0.EmptyEventRef.SharedReferenceCount.ReferenceController);
    Tasks::FPipe::FPipe(&local_160,
                        L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(537)"
                       );
    local_238 = 0;
    pFVar12 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&Tasks::Private::SmallTaskAllocator);
    pFVar8 = this_01.Reference;
    if (pFVar12 != (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::FTaskBase(pFVar12,2,true);
      pFVar12->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::`11'::<lambda_5>,void,void>
            ::_vftable_;
      Tasks::Private::FTaskBase::Init
                (pFVar12,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(539)"
                 ,Default,None,None);
      pFVar12[1]._padding_ = (longlong)&local_238;
      pFVar12->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::`11'::<lambda_5>_>::
            _vftable_;
      pFVar8 = pFVar12;
    }
    LOCK();
    local_160.TaskCount = (atomic<unsigned___int64>)((longlong)local_160.TaskCount + 1);
    UNLOCK();
    LOCK();
    pFVar8->NumLocks = (atomic<unsigned_int>)((int)pFVar8->NumLocks + 1);
    UNLOCK();
    pFVar8->Pipe = &local_160;
    Tasks::Private::FTaskBase::TryLaunch(pFVar8,0x100);
    pFVar11 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&Tasks::Private::SmallTaskAllocator);
    pFVar12 = this_01.Reference;
    if (pFVar11 != (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::FTaskBase(pFVar11,2,true);
      pFVar11->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::`11'::<lambda_6>,void,void>
            ::_vftable_;
      Tasks::Private::FTaskBase::Init
                (pFVar11,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(548)"
                 ,Default,None,None);
      pFVar11[1]._padding_ = (longlong)&local_238;
      pFVar11->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::`11'::<lambda_6>_>::
            _vftable_;
      pFVar12 = pFVar11;
    }
    LOCK();
    local_160.TaskCount = (atomic<unsigned___int64>)((longlong)local_160.TaskCount + 1);
    UNLOCK();
    LOCK();
    pFVar12->NumLocks = (atomic<unsigned_int>)((int)pFVar12->NumLocks + 1);
    UNLOCK();
    pFVar12->Pipe = &local_160;
    Tasks::Private::FTaskBase::TryLaunch(pFVar12,0x100);
    Tasks::Private::FTaskBase::Wait(pFVar12);
    LOCK();
    paVar1 = &pFVar12->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar12->_padding_)(pFVar12,1);
    }
    Tasks::FPipe::WaitUntilEmpty(&local_160,(FTimespan)0x7fffffffffffffff);
    LOCK();
    paVar1 = &pFVar8->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
    if ((local_160.TaskCount != (atomic<unsigned___int64>)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!HasWork()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                           ,0x2a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_160.EmptyEventRef.SharedReferenceCount.ReferenceController);
    Tasks::FPipe::FPipe(&local_138,
                        L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(553)"
                       );
    pFVar12 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&Tasks::Private::SmallTaskAllocator);
    pFVar8 = this_01.Reference;
    if (pFVar12 != (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::FTaskBase(pFVar12,2,true);
      pFVar12->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::`12'::<lambda_7>,void,void>
            ::_vftable_;
      Tasks::Private::FTaskBase::Init
                (pFVar12,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(555)"
                 ,Default,None,None);
      pFVar12->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::`12'::<lambda_7>_>::
            _vftable_;
      pFVar8 = pFVar12;
    }
    LOCK();
    local_138.TaskCount = (atomic<unsigned___int64>)((longlong)local_138.TaskCount + 1);
    UNLOCK();
    LOCK();
    pFVar8->NumLocks = (atomic<unsigned_int>)((int)pFVar8->NumLocks + 1);
    UNLOCK();
    pFVar8->Pipe = &local_138;
    Tasks::Private::FTaskBase::TryLaunch(pFVar8,0x100);
    Tasks::Private::FTaskBase::Wait(pFVar8);
    LOCK();
    paVar1 = &pFVar8->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
    pFVar12 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&Tasks::Private::SmallTaskAllocator);
    pFVar8 = this_01.Reference;
    if (pFVar12 != (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::FTaskBase(pFVar12,2,true);
      pFVar12->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::`12'::<lambda_8>,void,void>
            ::_vftable_;
      Tasks::Private::FTaskBase::Init
                (pFVar12,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(556)"
                 ,Default,None,None);
      pFVar12->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::`12'::<lambda_8>_>::
            _vftable_;
      pFVar8 = pFVar12;
    }
    LOCK();
    local_138.TaskCount = (atomic<unsigned___int64>)((longlong)local_138.TaskCount + 1);
    UNLOCK();
    LOCK();
    pFVar8->NumLocks = (atomic<unsigned_int>)((int)pFVar8->NumLocks + 1);
    UNLOCK();
    pFVar8->Pipe = &local_138;
    Tasks::Private::FTaskBase::TryLaunch(pFVar8,0x100);
    Tasks::Private::FTaskBase::Wait(pFVar8);
    LOCK();
    paVar1 = &pFVar8->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
    Tasks::FPipe::WaitUntilEmpty(&local_138,(FTimespan)0x7fffffffffffffff);
    if ((local_138.TaskCount != (atomic<unsigned___int64>)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!HasWork()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                           ,0x2a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_138.EmptyEventRef.SharedReferenceCount.ReferenceController);
    Tasks::FPipe::FPipe(&local_98,
                        L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(561)"
                       );
    local_237[0] = '\0';
    local_230 = (FTaskBase *)
                Tasks::Private::FTaskEventBase::Create
                          (
                          L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(563)"
                          );
    pFVar8 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
             ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                         *)&Tasks::Private::SmallTaskAllocator);
    this_00.Reference = this_01.Reference;
    if (pFVar8 != (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::FTaskBase(pFVar8,2,true);
      pFVar8->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::`13'::<lambda_9>,void,void>
            ::_vftable_;
      Tasks::Private::FTaskBase::Init
                (pFVar8,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(564)"
                 ,Default,None,None);
      pFVar8[1]._padding_ = (longlong)local_237;
      pFVar8[1]._padding_ = (longlong)&local_230;
      pFVar8->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::`13'::<lambda_9>_>::
            _vftable_;
      this_00.Reference = pFVar8;
    }
    LOCK();
    local_98.TaskCount = (atomic<unsigned___int64>)((longlong)local_98.TaskCount + 1);
    UNLOCK();
    LOCK();
    (this_00.Reference)->NumLocks = (atomic<unsigned_int>)((int)(this_00.Reference)->NumLocks + 1);
    UNLOCK();
    (this_00.Reference)->Pipe = &local_98;
    Tasks::Private::FTaskBase::TryLaunch(this_00.Reference,0x100);
    do {
    } while (local_237[0] == '\0');
    auVar16._8_8_ = 0;
    auVar16._0_8_ = __real_412e848100000000;
    auVar16 = roundpd(auVar16,auVar16,1);
    local_220.Pimpl.Reference =
         (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
         (TRefCountPtr<UE::Tasks::Private::FTaskBase>)this_00.Reference;
    bVar5 = Tasks::Private::FTaskHandle::Wait(&local_220,(FTimespan)(longlong)auVar16._0_8_);
    if ((bVar5) &&
       (bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4769338058656972225>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                           ,0x23f,"!Task.Wait(FTimespan::FromMilliseconds(100))"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((local_230 != (FTaskBase *)0x0) && ((local_230->Subsequents).bIsClosed == (atomic<bool>)0x0)
       ) {
      LOCK();
      aVar2 = local_230->TaskTriggered;
      local_230->TaskTriggered = (atomic<bool>)0x1;
      UNLOCK();
      if (aVar2 == (atomic<bool>)0x0) {
        LOCK();
        local_230->RefCount = (atomic<unsigned_int>)((int)local_230->RefCount + 1);
        UNLOCK();
        Tasks::Private::FTaskBase::TryLaunch(local_230,0xd8);
      }
    }
    if (this_00.Reference != (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::Wait(this_00.Reference);
    }
    Tasks::FPipe::WaitUntilEmpty(&local_98,(FTimespan)0x7fffffffffffffff);
    if (this_00.Reference != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &(this_00.Reference)->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)(this_00.Reference)->_padding_)(this_00.Reference,1);
      }
    }
    if (local_230 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &local_230->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)local_230->_padding_)(local_230,1);
      }
    }
    if ((local_98.TaskCount != (atomic<unsigned___int64>)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!HasWork()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                           ,0x2a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.EmptyEventRef.SharedReferenceCount.ReferenceController);
    Tasks::FPipe::FPipe(&local_70,
                        L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(583)"
                       );
    FVar13 = (FTaskEvent)
             Tasks::Private::FTaskEventBase::Create
                       (
                       L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(584)"
                       );
    local_res18[0] = '\0';
    local_res20[0] = '\0';
    local_228 = FVar13;
    local_1f8.Elements[0] = (FTaskBase * [1])(FTaskBase * [1])FVar13;
    pFVar8 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
             ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                         *)&Tasks::Private::SmallTaskAllocator);
    if (pFVar8 != (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::FTaskBase(pFVar8,2,true);
      pFVar8->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTaskBase<`UE::TasksTests::FTasksPipeTest::TestBody'::`16'::<lambda_10>,void,void>
            ::_vftable_;
      Tasks::Private::FTaskBase::Init
                (pFVar8,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(587)"
                 ,Default,Inline,None);
      pFVar8[1]._padding_ = (longlong)local_res20;
      pFVar8[1]._padding_ = (longlong)local_res18;
      pFVar8->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTask<`UE::TasksTests::FTasksPipeTest::TestBody'::`16'::<lambda_10>_>::
            _vftable_;
      FVar13 = local_228;
      this_01.Reference = pFVar8;
    }
    LOCK();
    local_70.TaskCount = (atomic<unsigned___int64>)((longlong)local_70.TaskCount + 1);
    UNLOCK();
    LOCK();
    (this_01.Reference)->NumLocks = (atomic<unsigned_int>)((int)(this_01.Reference)->NumLocks + 1);
    UNLOCK();
    (this_01.Reference)->Pipe = &local_70;
    Tasks::Private::FTaskBase::
    AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>,0>
              (this_01.Reference,&local_1f8,true);
    Tasks::Private::FTaskBase::TryLaunch(this_01.Reference,0x100);
    local_1f0 = (TTask<void>)0x0;
    local_210.Pimpl.Reference =
         (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
         (TRefCountPtr<UE::Tasks::Private::FTaskBase>)this_01.Reference;
    Tasks::TTask<void>::~TTask<void>(&local_1f0);
    local_110.Elements[0] = (FTaskBase * [1])local_res18;
    local_108 = local_res20;
    local_1e8 = FVar13;
    TVar14 = Tasks::FPipe::
             Launch<_UE::TasksTests::FTasksPipeTest::TestBody_::__l16::<lambda_11>,TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>_>
                       (&local_70,(wchar_t *)&local_1e0,
                        (<lambda_11> *)
                        L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(588)"
                        ,&local_110,(ETaskPriority)&local_1e8,Inline,
                        CONCAT31((int3)((uint)in_stack_fffffffffffffdb8 >> 8),1));
    local_218.Pimpl.Reference = *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)TVar14;
    *(undefined8 *)TVar14 = 0;
    Tasks::TTask<void>::~TTask<void>(&local_1e0);
    Tasks::FTaskEvent::Trigger(&local_228);
    Tasks::Private::FTaskHandle::FTaskHandle(&local_208,&local_210);
    Tasks::Private::FTaskHandle::FTaskHandle(&local_200,&local_218);
    local_f8._First = &local_208;
    local_f8._Last = (FTaskHandle *)&local_1f8;
    pTVar15 = TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>::
              TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>
                        (&local_48,&local_f8);
    Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
              (pTVar15,(FTimespan)0x7fffffffffffffff);
    TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>(&local_48);
    _vector_destructor_iterator_(&local_208,8,2,Tasks::Private::FTaskHandle::~FTaskHandle);
    if (((local_res18[0] == '\0') || (local_res20[0] == '\0')) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bFirstDone && bSecondDone",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                           ,0x24f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    Tasks::FPipe::WaitUntilEmpty(&local_70,(FTimespan)0x7fffffffffffffff);
    Tasks::Private::FTaskHandle::~FTaskHandle(&local_218);
    Tasks::Private::FTaskHandle::~FTaskHandle(&local_210);
    Tasks::FTaskEvent::~FTaskEvent(&local_228);
    Tasks::FPipe::~FPipe(&local_70);
    iVar6 = std::_Atomic_storage<int,4>::load
                      ((_Atomic_storage<int,4> *)&CpuChannel->Enabled,memory_order_relaxed);
    if (iVar6 < 0) {
      Benchmark<5,void_(__cdecl&)(void)>(L"PipeStressTest<200, 100>",PipeStressTest<200,100>);
      return;
    }
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId595,L"PipeStressTest<200, 100>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
               ,0x253);
    uVar7 = std::_Atomic_storage<int,4>::load
                      ((_Atomic_storage<int,4> *)&__CpuProfilerEventSpecId595,memory_order_relaxed);
    FCpuProfilerTrace::OutputBeginEvent(uVar7);
    Benchmark<5,void_(__cdecl&)(void)>(L"PipeStressTest<200, 100>",PipeStressTest<200,100>);
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

