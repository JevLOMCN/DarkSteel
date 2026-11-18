// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141d5c740

EAutomationTestFlags __thiscall
UE::TasksTests::FTasksPipeWaitUntilEmptyTest::GetTestFlags(FTasksPipeWaitUntilEmptyTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141d5c750

bool __thiscall
UE::TasksTests::FTasksPipeWaitUntilEmptyTest::IsStressTest(FTasksPipeWaitUntilEmptyTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141d5c760

uint __thiscall
UE::TasksTests::FTasksPipeWaitUntilEmptyTest::GetRequiredDeviceNum
          (FTasksPipeWaitUntilEmptyTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141d5c770

FString * __thiscall
UE::TasksTests::FTasksPipeWaitUntilEmptyTest::GetTestSourceFileName
          (FTasksPipeWaitUntilEmptyTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141d5c7a0

int __thiscall
UE::TasksTests::FTasksPipeWaitUntilEmptyTest::GetTestSourceFileLine
          (FTasksPipeWaitUntilEmptyTest *this)

{
  return 0x296;
}

// GetTests @ 141d5c7b0

/* WARNING: Removing unreachable block (ram,0x000141d5c92e) */

void __thiscall
UE::TasksTests::FTasksPipeWaitUntilEmptyTest::GetTests
          (FTasksPipeWaitUntilEmptyTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141d5c950

bool __thiscall
UE::TasksTests::FTasksPipeWaitUntilEmptyTest::RunTest
          (FTasksPipeWaitUntilEmptyTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141d5c980

FString * __thiscall
UE::TasksTests::FTasksPipeWaitUntilEmptyTest::GetBeautifiedTestName
          (FTasksPipeWaitUntilEmptyTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTasksPipeWaitUntilEmptyTest @ 141d6c380

FTasksPipeWaitUntilEmptyTest * __thiscall
UE::TasksTests::FTasksPipeWaitUntilEmptyTest::FTasksPipeWaitUntilEmptyTest
          (FTasksPipeWaitUntilEmptyTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTasksPipeWaitUntilEmptyTest_TasksTests_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilte]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Tasks::Pipe::WaitUntilEmpty");
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
  ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilte]");
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

// TestBody @ 141d88cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody
          (FTasksPipeWaitUntilEmptyTest *this,FString *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<bool> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  FTaskBase *pFVar6;
  FTaskBase *pFVar7;
  FTask *pFVar8;
  FTaskBase *pFVar9;
  FTaskBase *this_00;
  undefined8 uVar10;
  longlong lVar11;
  FTaskBase *this_01;
  FTimespan FVar12;
  undefined1 auVar13 [16];
  double dVar14;
  LARGE_INTEGER local_res18;
  FPipe local_b8;
  FPipe local_90;
  LARGE_INTEGER local_68;
  FTaskBase *local_60;
  FPipe local_58;
  
  local_90.LastTask = (atomic<UE::Tasks::Private::FTaskBase_*>)0x0;
  local_90.TaskCount = (atomic<unsigned___int64>)0x0;
  local_90.EmptyEventRef.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  this_01 = (FTaskBase *)0x0;
  if (local_90.EmptyEventRef.SharedReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    local_90.EmptyEventRef.Object =
         (TEventCount<unsigned_int> *)___xmm_00000000000000000000000000000010;
    local_90.EmptyEventRef.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    (local_90.EmptyEventRef.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)0x1;
    *(undefined8 *)
     &(local_90.EmptyEventRef.SharedReferenceCount.ReferenceController)->WeakReferenceCount = 1;
    (local_90.EmptyEventRef.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__TEventCount_I_UE___00_SharedPointerInternals__6B_;
    local_90.EmptyEventRef.Object =
         (TEventCount<unsigned_int> *)
         (local_90.EmptyEventRef.SharedReferenceCount.ReferenceController + 1);
    if (((TReferenceControllerBase<1> *)local_90.EmptyEventRef.Object ==
         (TReferenceControllerBase<1> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_90.DebugName =
       L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(666)"
  ;
  Tasks::FPipe::WaitUntilEmpty(&local_90,(FTimespan)0x7fffffffffffffff);
  if ((local_90.TaskCount != (atomic<unsigned___int64>)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasWork()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                         ,0x2a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.EmptyEventRef.SharedReferenceCount.ReferenceController);
  local_b8.LastTask = (atomic<UE::Tasks::Private::FTaskBase_*>)0x0;
  local_b8.TaskCount = (atomic<unsigned___int64>)0x0;
  local_b8.EmptyEventRef.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_b8.EmptyEventRef.SharedReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    local_b8.EmptyEventRef.Object =
         (TEventCount<unsigned_int> *)___xmm_00000000000000000000000000000010;
    local_b8.EmptyEventRef.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    local_b8.EmptyEventRef.Object =
         (TEventCount<unsigned_int> *)
         (local_b8.EmptyEventRef.SharedReferenceCount.ReferenceController + 1);
    (local_b8.EmptyEventRef.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)0x1;
    *(undefined8 *)
     &(local_b8.EmptyEventRef.SharedReferenceCount.ReferenceController)->WeakReferenceCount = 1;
    (local_b8.EmptyEventRef.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__TEventCount_I_UE___00_SharedPointerInternals__6B_;
    if (((TReferenceControllerBase<1> *)local_b8.EmptyEventRef.Object ==
         (TReferenceControllerBase<1> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_b8.DebugName =
       L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(671)"
  ;
  pFVar6 = (FTaskBase *)
           Tasks::Private::FTaskEventBase::Create
                     (
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(673)"
                     );
  if ((local_b8.TaskCount != (atomic<unsigned___int64>)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Pipe.HasWork()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x2a3,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  pFVar9 = this_01;
  if (pFVar7 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::`4'::<lambda_1>,void,void>
          ::_vftable_;
    if (((*(ulonglong *)&(pFVar7->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
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
    *(undefined8 *)&(pFVar7->LowLevelTask).field_0x38 = 0xc80000541e720400;
    pFVar7->ExtendedPriority = None;
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar7->_padding_);
    pFVar7->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::`4'::<lambda_1>_>
          ::_vftable_;
    pFVar9 = pFVar7;
  }
  LOCK();
  local_b8.TaskCount = (atomic<unsigned___int64>)((longlong)local_b8.TaskCount + 1);
  UNLOCK();
  LOCK();
  pFVar9->NumLocks = (atomic<unsigned_int>)((int)pFVar9->NumLocks + 1);
  UNLOCK();
  pFVar9->Pipe = &local_b8;
  if (pFVar6 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::AddPrerequisites(pFVar9,pFVar6);
  }
  Tasks::Private::FTaskBase::TryLaunch(pFVar9,0x100);
  if ((local_b8.TaskCount == (atomic<unsigned___int64>)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pipe.HasWork()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x2a8,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((pFVar9->Subsequents).bIsClosed != (atomic<bool>)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Task1.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x2aa,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  auVar13._8_8_ = 0;
  auVar13._0_8_ = __real_412e848100000000;
  auVar13 = roundpd(auVar13,auVar13,1);
  FVar12.Ticks = (long64)auVar13._0_8_;
  bVar5 = Tasks::FPipe::WaitUntilEmpty(&local_b8,FVar12);
  if ((bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Pipe.WaitUntilEmpty(FTimespan::FromMilliseconds(100))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x2ac,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  pFVar7 = this_01;
  if (this_00 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::`4'::<lambda_2>,void,void>
          ::_vftable_;
    if (((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
              (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
    *(FTaskBase **)&this_00->LowLevelTask = this_00;
    *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
    pFVar8 = LowLevelTasks::FTask::GetActiveTask();
    uVar10 = 0;
    if (pFVar8 != (FTask *)0x0) {
      uVar10 = *(undefined8 *)&pFVar8->field_0x30;
    }
    *(undefined8 *)&(this_00->LowLevelTask).field_0x30 = uVar10;
    *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc80000541e724800;
    this_00->ExtendedPriority = None;
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_);
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::`4'::<lambda_2>_>
          ::_vftable_;
    pFVar7 = this_00;
  }
  LOCK();
  local_b8.TaskCount = (atomic<unsigned___int64>)((longlong)local_b8.TaskCount + 1);
  UNLOCK();
  LOCK();
  pFVar7->NumLocks = (atomic<unsigned_int>)((int)pFVar7->NumLocks + 1);
  UNLOCK();
  pFVar7->Pipe = &local_b8;
  Tasks::Private::FTaskBase::TryLaunch(pFVar7,0x100);
  QueryPerformanceCounter(&local_res18);
  if (FVar12.Ticks == 0x7fffffffffffffff) {
    local_60 = (FTaskBase *)0xffffffffffffffff;
  }
  else {
    local_60 = this_01;
    if (0.0 < (double)FVar12.Ticks * __real_3e7ad7f29abcaf48) {
      dVar14 = ((double)FVar12.Ticks * __real_3e7ad7f29abcaf48) /
               FGenericPlatformTime::SecondsPerCycle64;
      lVar11 = 0;
      if ((__real_43e0000000000000 <= dVar14) &&
         (dVar14 = dVar14 - __real_43e0000000000000, dVar14 < __real_43e0000000000000)) {
        lVar11 = -0x8000000000000000;
      }
      local_60 = (FTaskBase *)((longlong)dVar14 + lVar11);
    }
  }
  local_68 = local_res18;
  bVar5 = Tasks::Private::FTaskBase::Wait(pFVar7,(FTimeout *)&local_68.s);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Task2.Wait(FTimespan::FromMilliseconds(100))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x2af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar5 = Tasks::FPipe::WaitUntilEmpty(&local_b8,FVar12);
  if ((bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Pipe.WaitUntilEmpty(FTimespan::FromMilliseconds(100))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x2b1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((pFVar9->Subsequents).bIsClosed != (atomic<bool>)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Task1.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x2b3,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((pFVar7->Subsequents).bIsClosed == (atomic<bool>)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Task2.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x2b4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((pFVar6 != (FTaskBase *)0x0) && ((pFVar6->Subsequents).bIsClosed == (atomic<bool>)0x0)) {
    LOCK();
    aVar2 = pFVar6->TaskTriggered;
    pFVar6->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar2 == (atomic<bool>)0x0) {
      LOCK();
      pFVar6->RefCount = (atomic<unsigned_int>)((int)pFVar6->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(pFVar6,0xd8);
    }
  }
  bVar5 = Tasks::FPipe::WaitUntilEmpty(&local_b8,FVar12);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pipe.WaitUntilEmpty(FTimespan::FromMilliseconds(100))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x2b8,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((pFVar9->Subsequents).bIsClosed == (atomic<bool>)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Task1.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x2b9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((pFVar7->Subsequents).bIsClosed == (atomic<bool>)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Task2.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x2ba,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  paVar1 = &pFVar7->RefCount;
  aVar3 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar3 == (atomic<unsigned_int>)0x1) {
    (**(code **)pFVar7->_padding_)(pFVar7,1);
  }
  LOCK();
  paVar1 = &pFVar9->RefCount;
  aVar3 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar3 == (atomic<unsigned_int>)0x1) {
    (**(code **)pFVar9->_padding_)(pFVar9,1);
  }
  if (pFVar6 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar6->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  if ((local_b8.TaskCount != (atomic<unsigned___int64>)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasWork()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                         ,0x2a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.EmptyEventRef.SharedReferenceCount.ReferenceController);
  Tasks::FPipe::FPipe(&local_58,
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(702)"
                     );
  pFVar6 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  if (pFVar6 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase(pFVar6,2,true);
    pFVar6->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::`82'::<lambda_3>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (pFVar6,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(703)"
               ,Default,None,None);
    pFVar6->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksPipeWaitUntilEmptyTest::TestBody'::`82'::<lambda_3>_>
          ::_vftable_;
    this_01 = pFVar6;
  }
  LOCK();
  local_58.TaskCount = (atomic<unsigned___int64>)((longlong)local_58.TaskCount + 1);
  UNLOCK();
  LOCK();
  this_01->NumLocks = (atomic<unsigned_int>)((int)this_01->NumLocks + 1);
  UNLOCK();
  this_01->Pipe = &local_58;
  Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
  LOCK();
  paVar1 = &this_01->RefCount;
  aVar3 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar3 == (atomic<unsigned_int>)0x1) {
    (**(code **)this_01->_padding_)(this_01,1);
  }
  Tasks::FPipe::WaitUntilEmpty(&local_58,(FTimespan)0x7fffffffffffffff);
  if ((local_58.TaskCount != (atomic<unsigned___int64>)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasWork()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                         ,0x2a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.EmptyEventRef.SharedReferenceCount.ReferenceController);
  return;
}

