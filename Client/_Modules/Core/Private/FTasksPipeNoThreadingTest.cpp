// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141d5bc40

EAutomationTestFlags __thiscall
UE::TasksTests::FTasksPipeNoThreadingTest::GetTestFlags(FTasksPipeNoThreadingTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141d5bc50

bool __thiscall
UE::TasksTests::FTasksPipeNoThreadingTest::IsStressTest(FTasksPipeNoThreadingTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141d5bc60

uint __thiscall
UE::TasksTests::FTasksPipeNoThreadingTest::GetRequiredDeviceNum(FTasksPipeNoThreadingTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141d5bc70

FString * __thiscall
UE::TasksTests::FTasksPipeNoThreadingTest::GetTestSourceFileName
          (FTasksPipeNoThreadingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141d5bca0

int __thiscall
UE::TasksTests::FTasksPipeNoThreadingTest::GetTestSourceFileLine(FTasksPipeNoThreadingTest *this)

{
  return 0x57d;
}

// GetTests @ 141d5bcb0

/* WARNING: Removing unreachable block (ram,0x000141d5be2e) */

void __thiscall
UE::TasksTests::FTasksPipeNoThreadingTest::GetTests
          (FTasksPipeNoThreadingTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141d5be50

bool __thiscall
UE::TasksTests::FTasksPipeNoThreadingTest::RunTest(FTasksPipeNoThreadingTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141d5be80

FString * __thiscall
UE::TasksTests::FTasksPipeNoThreadingTest::GetBeautifiedTestName
          (FTasksPipeNoThreadingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTasksPipeNoThreadingTest @ 141d6bfe0

FTasksPipeNoThreadingTest * __thiscall
UE::TasksTests::FTasksPipeNoThreadingTest::FTasksPipeNoThreadingTest
          (FTasksPipeNoThreadingTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTasksPipeNoThreadingTest_TasksTests_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Tasks::PipeNoThreading");
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
  ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
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

// TestBody @ 141d87700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::TasksTests::FTasksPipeNoThreadingTest::TestBody
          (FTasksPipeNoThreadingTest *this,FString *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  bool bVar4;
  FTaskBase *pFVar5;
  FTask *pFVar6;
  FTaskBase *pFVar7;
  longlong lVar8;
  FTaskBase *pFVar9;
  undefined1 auVar10 [16];
  double dVar11;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_68;
  FTaskBase *local_60;
  FPipe local_58;
  
  bVar4 = FGenericPlatformProcess::SupportsMultithreading();
  if (!bVar4) {
    local_58.LastTask = (atomic<UE::Tasks::Private::FTaskBase_*>)0x0;
    local_58.TaskCount = (atomic<unsigned___int64>)0x0;
    local_58.EmptyEventRef.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
    pFVar9 = (FTaskBase *)0x0;
    if (local_58.EmptyEventRef.SharedReferenceCount.ReferenceController ==
        (TReferenceControllerBase<1> *)0x0) {
      local_58.EmptyEventRef.Object =
           (TEventCount<unsigned_int> *)___xmm_00000000000000000000000000000010;
      local_58.EmptyEventRef.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      (local_58.EmptyEventRef.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)0x1;
      (local_58.EmptyEventRef.SharedReferenceCount.ReferenceController)->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_V__TEventCount_I_UE___00_SharedPointerInternals__6B_
      ;
      local_58.EmptyEventRef.Object =
           (TEventCount<unsigned_int> *)
           (local_58.EmptyEventRef.SharedReferenceCount.ReferenceController + 1);
      *(undefined8 *)
       &(local_58.EmptyEventRef.SharedReferenceCount.ReferenceController)->WeakReferenceCount = 1;
      if (((TReferenceControllerBase<1> *)local_58.EmptyEventRef.Object ==
           (TReferenceControllerBase<1> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_58.DebugName =
         L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(1412)"
    ;
    pFVar5 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
             ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                         *)&Tasks::Private::SmallTaskAllocator);
    pFVar7 = pFVar9;
    if (pFVar5 != (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::FTaskBase(pFVar5,2,true);
      pFVar5->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTaskBase<`UE::TasksTests::FTasksPipeNoThreadingTest::TestBody'::`2'::<lambda_1>,void,void>
            ::_vftable_;
      if (((*(ulonglong *)&(pFVar5->LowLevelTask).field_0x38 & 0x20) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x1dd,L"State: %d"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(*(longlong *)&(pFVar5->LowLevelTask).field_0x28 + 0x18))
                (&(pFVar5->LowLevelTask).field_0x28,&pFVar5->LowLevelTask);
      *(undefined ***)&(pFVar5->LowLevelTask).field_0x28 =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FTaskBase **)&pFVar5->LowLevelTask = pFVar5;
      *(FTaskBase **)&(pFVar5->LowLevelTask).field_0x8 = pFVar5;
      pFVar6 = LowLevelTasks::FTask::GetActiveTask();
      if (pFVar6 != (FTask *)0x0) {
        pFVar7 = *(FTaskBase **)&pFVar6->field_0x30;
      }
      *(FTaskBase **)&(pFVar5->LowLevelTask).field_0x30 = pFVar7;
      *(undefined8 *)&(pFVar5->LowLevelTask).field_0x38 = 0xc80000541e7d0800;
      pFVar5->ExtendedPriority = None;
      FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar5->_padding_);
      pFVar5->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTask<`UE::TasksTests::FTasksPipeNoThreadingTest::TestBody'::`2'::<lambda_1>_>
            ::_vftable_;
      pFVar7 = pFVar5;
    }
    LOCK();
    local_58.TaskCount = (atomic<unsigned___int64>)((longlong)local_58.TaskCount + 1);
    UNLOCK();
    LOCK();
    pFVar7->NumLocks = (atomic<unsigned_int>)((int)pFVar7->NumLocks + 1);
    UNLOCK();
    pFVar7->Pipe = &local_58;
    Tasks::Private::FTaskBase::TryLaunch(pFVar7,0x100);
    LOCK();
    paVar1 = &pFVar7->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar7->_padding_)(pFVar7,1);
    }
    pFVar5 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
             ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                         *)&Tasks::Private::SmallTaskAllocator);
    pFVar7 = pFVar9;
    if (pFVar5 != (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::FTaskBase(pFVar5,2,true);
      pFVar5->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTaskBase<`UE::TasksTests::FTasksPipeNoThreadingTest::TestBody'::`2'::<lambda_2>,void,void>
            ::_vftable_;
      if (((*(ulonglong *)&(pFVar5->LowLevelTask).field_0x38 & 0x20) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x1dd,L"State: %d"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(*(longlong *)&(pFVar5->LowLevelTask).field_0x28 + 0x18))
                (&(pFVar5->LowLevelTask).field_0x28,&pFVar5->LowLevelTask);
      *(undefined ***)&(pFVar5->LowLevelTask).field_0x28 =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FTaskBase **)&pFVar5->LowLevelTask = pFVar5;
      *(FTaskBase **)&(pFVar5->LowLevelTask).field_0x8 = pFVar5;
      pFVar6 = LowLevelTasks::FTask::GetActiveTask();
      if (pFVar6 != (FTask *)0x0) {
        pFVar7 = *(FTaskBase **)&pFVar6->field_0x30;
      }
      *(FTaskBase **)&(pFVar5->LowLevelTask).field_0x30 = pFVar7;
      *(undefined8 *)&(pFVar5->LowLevelTask).field_0x38 = 0xc80000541e7d3400;
      pFVar5->ExtendedPriority = None;
      FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar5->_padding_);
      pFVar5->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTask<`UE::TasksTests::FTasksPipeNoThreadingTest::TestBody'::`2'::<lambda_2>_>
            ::_vftable_;
      pFVar7 = pFVar5;
    }
    LOCK();
    local_58.TaskCount = (atomic<unsigned___int64>)((longlong)local_58.TaskCount + 1);
    UNLOCK();
    LOCK();
    pFVar7->NumLocks = (atomic<unsigned_int>)((int)pFVar7->NumLocks + 1);
    UNLOCK();
    pFVar7->Pipe = &local_58;
    Tasks::Private::FTaskBase::TryLaunch(pFVar7,0x100);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = __real_412e848100000000;
    auVar10 = roundpd(auVar10,auVar10,1);
    QueryPerformanceCounter(&local_res18);
    if ((longlong)auVar10._0_8_ == 0x7fffffffffffffff) {
      pFVar9 = (FTaskBase *)0xffffffffffffffff;
    }
    else {
      dVar11 = (double)(longlong)auVar10._0_8_ * __real_3e7ad7f29abcaf48;
      if (0.0 < dVar11) {
        dVar11 = dVar11 / FGenericPlatformTime::SecondsPerCycle64;
        lVar8 = 0;
        if ((__real_43e0000000000000 <= dVar11) &&
           (dVar11 = dVar11 - __real_43e0000000000000, dVar11 < __real_43e0000000000000)) {
          lVar8 = -0x8000000000000000;
        }
        pFVar9 = (FTaskBase *)((longlong)dVar11 + lVar8);
      }
    }
    local_68 = local_res18;
    local_60 = pFVar9;
    bVar4 = Tasks::Private::FTaskBase::Wait(pFVar7,(FTimeout *)&local_68.s);
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("FinalTask.Wait(FTimespan::FromMilliseconds(100))",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                           ,0x587,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    Tasks::FPipe::WaitUntilEmpty(&local_58,(FTimespan)0x7fffffffffffffff);
    LOCK();
    paVar1 = &pFVar7->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar7->_padding_)(pFVar7,1);
    }
    if ((local_58.TaskCount != (atomic<unsigned___int64>)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!HasWork()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                           ,0x2a,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.EmptyEventRef.SharedReferenceCount.ReferenceController);
  }
  return;
}

