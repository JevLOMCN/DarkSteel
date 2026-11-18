// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 15

// GetTestFlags @ 141d58060

EAutomationTestFlags __thiscall UE::TasksTests::FTasksBasicTest::GetTestFlags(FTasksBasicTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141d58070

bool __thiscall UE::TasksTests::FTasksBasicTest::IsStressTest(FTasksBasicTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141d58080

uint __thiscall UE::TasksTests::FTasksBasicTest::GetRequiredDeviceNum(FTasksBasicTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141d58090

FString * __thiscall
UE::TasksTests::FTasksBasicTest::GetTestSourceFileName
          (FTasksBasicTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141d580c0

int __thiscall UE::TasksTests::FTasksBasicTest::GetTestSourceFileLine(FTasksBasicTest *this)

{
  return 0x1c;
}

// GetTests @ 141d580d0

/* WARNING: Removing unreachable block (ram,0x000141d5824e) */

void __thiscall
UE::TasksTests::FTasksBasicTest::GetTests
          (FTasksBasicTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141d58270

bool __thiscall UE::TasksTests::FTasksBasicTest::RunTest(FTasksBasicTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141d582a0

FString * __thiscall
UE::TasksTests::FTasksBasicTest::GetBeautifiedTestName
          (FTasksBasicTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTasksBasicTest @ 141d6a850

FTasksBasicTest * __thiscall
UE::TasksTests::FTasksBasicTest::FTasksBasicTest(FTasksBasicTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTasksBasicTest_TasksTests_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Tasks::Basic");
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

// operator() @ 141d6d6d0

void __thiscall
`UE::TasksTests::FTasksBasicTest::TestBody'[::C]::<lambda_19>::operator()(void *this)

{
  atomic<bool> aVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FTaskBase *pFVar6;
  
  puVar2 = *(undefined8 **)this;
  pFVar6 = UE::Tasks::Private::GetCurrentTask();
  if (pFVar6 == (FTaskBase *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0x1ff,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  UE::Tasks::Private::FTaskBase::AddNested(pFVar6,(FTaskBase *)*puVar2);
  lVar3 = **(longlong **)((longlong)this + 8);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0xd0) == '\0')) {
    pFVar6 = (FTaskBase *)**(longlong **)((longlong)this + 8);
    LOCK();
    aVar1 = pFVar6->TaskTriggered;
    pFVar6->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar1 == (atomic<bool>)0x0) {
      LOCK();
      pFVar6->RefCount = (atomic<unsigned_int>)((int)pFVar6->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar6,0xd8);
    }
  }
  return;
}

// operator() @ 141d6f5b0

void __thiscall
`UE::TasksTests::FTasksBasicTest::TestBody'::__l145::<lambda_20>::operator()(void *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  bool bVar4;
  FTaskBase *this_00;
  FTask *pFVar5;
  undefined8 uVar6;
  FTaskBase *this_01;
  
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (this_00 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<``UE::TasksTests::FTasksBasicTest::TestBody'::`145'::<lambda_20>::operator()'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    if (((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
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
    pFVar5 = LowLevelTasks::FTask::GetActiveTask();
    uVar6 = 0;
    if (pFVar5 != (FTask *)0x0) {
      uVar6 = *(undefined8 *)&pFVar5->field_0x30;
    }
    *(undefined8 *)&(this_00->LowLevelTask).field_0x30 = uVar6;
    *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc80000541e655800;
    this_00->ExtendedPriority = None;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_)
    ;
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<``UE::TasksTests::FTasksBasicTest::TestBody'::`145'::<lambda_20>::operator()'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  this_01 = UE::Tasks::Private::GetCurrentTask();
  if ((this_01 == (FTaskBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                         ,0x1ff,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UE::Tasks::Private::FTaskBase::AddNested(this_01,this_00);
  if (this_00 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(this_00);
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000141d6f73f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)this_00->_padding_)(this_00,1);
      return;
    }
  }
  return;
}

// operator() @ 141d6f750

void __thiscall
`UE::TasksTests::FTasksBasicTest::TestBody'::__l146::<lambda_21>::operator()(void *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  FTaskBase *pFVar4;
  
  puVar1 = *(undefined8 **)this;
  pFVar4 = UE::Tasks::Private::GetCurrentTask();
  if (pFVar4 == (FTaskBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0x1ff,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::Tasks::Private::FTaskBase::AddNested(pFVar4,(FTaskBase *)*puVar1);
  puVar1 = *(undefined8 **)((longlong)this + 8);
  pFVar4 = UE::Tasks::Private::GetCurrentTask();
  if (pFVar4 == (FTaskBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0x1ff,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::Tasks::Private::FTaskBase::AddNested(pFVar4,(FTaskBase *)*puVar1);
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  pFVar4 = UE::Tasks::Private::GetCurrentTask();
  if (pFVar4 == (FTaskBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0x1ff,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::Tasks::Private::FTaskBase::AddNested(pFVar4,(FTaskBase *)*puVar1);
  return;
}

// operator() @ 141d6f840

void __thiscall
`UE::TasksTests::FTasksBasicTest::TestBody'::__l168::<lambda_22>::operator()(void *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<bool> aVar2;
  atomic<unsigned_int> aVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  FTaskBase *pFVar7;
  FTask *pFVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  double dVar12;
  FTaskBase *local_res8;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_28;
  longlong local_20;
  
  puVar4 = *(undefined8 **)this;
  pFVar7 = UE::Tasks::Private::GetCurrentTask();
  if ((pFVar7 == (FTaskBase *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                         ,0x1ff,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  UE::Tasks::Private::FTaskBase::AddNested(pFVar7,(FTaskBase *)*puVar4);
  local_res8 = (FTaskBase *)
               UE::Tasks::Private::FTaskEventBase::Create
                         (
                         L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(275)"
                         );
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&UE::Tasks::Private::SmallTaskAllocator);
  if (pFVar7 == (FTaskBase *)0x0) {
    pFVar7 = (FTaskBase *)0x0;
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<``UE::TasksTests::FTasksBasicTest::TestBody'::`168'::<lambda_22>::operator()'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    if (((*(ulonglong *)&(pFVar7->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)(*(longlong *)&(pFVar7->LowLevelTask).field_0x28 + 0x18))
              (&(pFVar7->LowLevelTask).field_0x28,&pFVar7->LowLevelTask);
    *(FTaskBase **)&pFVar7->LowLevelTask = pFVar7;
    *(undefined ***)&(pFVar7->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(pFVar7->LowLevelTask).field_0x8 = pFVar7;
    pFVar8 = LowLevelTasks::FTask::GetActiveTask();
    uVar9 = 0;
    if (pFVar8 != (FTask *)0x0) {
      uVar9 = *(undefined8 *)&pFVar8->field_0x30;
    }
    *(undefined8 *)&(pFVar7->LowLevelTask).field_0x30 = uVar9;
    *(undefined8 *)&(pFVar7->LowLevelTask).field_0x38 = 0xc80000541e65b000;
    pFVar7->ExtendedPriority = None;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar7->_padding_);
    pFVar7[1]._padding_ = (longlong)&local_res8;
    pFVar7->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<``UE::TasksTests::FTasksBasicTest::TestBody'::`168'::<lambda_22>::operator()'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  lVar10 = 0;
  UE::Tasks::Private::FTaskBase::TryLaunch(pFVar7,0x100);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = __real_412e848100000000;
  auVar11 = roundpd(auVar11,auVar11,1);
  if (pFVar7 != (FTaskBase *)0x0) {
    QueryPerformanceCounter(&local_res10);
    if ((longlong)auVar11._0_8_ == 0x7fffffffffffffff) {
      lVar10 = -1;
    }
    else {
      dVar12 = (double)(longlong)auVar11._0_8_ * __real_3e7ad7f29abcaf48;
      if (0.0 < dVar12) {
        dVar12 = dVar12 / FGenericPlatformTime::SecondsPerCycle64;
        lVar10 = 0;
        if ((__real_43e0000000000000 <= dVar12) &&
           (dVar12 = dVar12 - __real_43e0000000000000, dVar12 < __real_43e0000000000000)) {
          lVar10 = -0x8000000000000000;
        }
        lVar10 = (longlong)dVar12 + lVar10;
      }
    }
    local_28 = local_res10;
    local_20 = lVar10;
    bVar6 = UE::Tasks::Private::FTaskBase::Wait(pFVar7,(FTimeout *)&local_28.s);
    if (!bVar6) goto LAB_141d6fa94;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("!NestedTask.Wait(FTimespan::FromMilliseconds(100))",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                     ,0x11b,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_141d6fa94:
  if ((local_res8 != (FTaskBase *)0x0) && ((local_res8->Subsequents).bIsClosed == (atomic<bool>)0x0)
     ) {
    LOCK();
    aVar2 = local_res8->TaskTriggered;
    local_res8->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar2 == (atomic<bool>)0x0) {
      LOCK();
      local_res8->RefCount = (atomic<unsigned_int>)((int)local_res8->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(local_res8,0xd8);
    }
  }
  if (pFVar7 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(pFVar7);
    LOCK();
    paVar1 = &pFVar7->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar7->_padding_)(pFVar7,1);
    }
  }
  if (local_res8 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &local_res8->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)local_res8->_padding_)(local_res8,1);
    }
  }
  return;
}

// operator() @ 141d6fb30

void __thiscall
`UE::TasksTests::FTasksBasicTest::TestBody'::__l193::<lambda_25>::operator()(void *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FTaskBase *this_00;
  FTask *pFVar6;
  undefined8 uVar7;
  
  lVar3 = *(longlong *)this;
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<``UE::TasksTests::FTasksBasicTest::TestBody'::`193'::<lambda_25>::operator()'::`2'::<lambda_1>,void,void>
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
    pFVar6 = LowLevelTasks::FTask::GetActiveTask();
    if (pFVar6 == (FTask *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)&pFVar6->field_0x30;
    }
    *(undefined8 *)&(this_00->LowLevelTask).field_0x30 = uVar7;
    *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc80000541e667800;
    this_00->ExtendedPriority = Inline;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_)
    ;
    this_00[1]._padding_ = lVar3;
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<``UE::TasksTests::FTasksBasicTest::TestBody'::`193'::<lambda_25>::operator()'::`2'::<lambda_1>_>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
    if ((this_00->Subsequents).bIsClosed == (atomic<bool>)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Inner.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x165,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_141d6fca8;
    }
  }
  if (this_00 == (FTaskBase *)0x0) {
    return;
  }
LAB_141d6fca8:
  LOCK();
  paVar1 = &this_00->RefCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<unsigned_int>)0x1) {
    (**(code **)this_00->_padding_)(this_00,1);
  }
  return;
}

// TestBody @ 141d82020

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "memory_order": Some values do not have unique names */

void __thiscall UE::TasksTests::FTasksBasicTest::TestBody(FTasksBasicTest *this,FString *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  longlong *plVar3;
  atomic<bool> aVar4;
  atomic<unsigned_int> aVar5;
  int iVar6;
  undefined8 *puVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  FTaskBase *pFVar11;
  FTask *pFVar12;
  TTaskWithResult<int> *pTVar13;
  TTaskWithResult<int> *pTVar14;
  FTimespan FVar15;
  TTask<_protected:_void___cdecl_UE::TasksTests::FTasksBasicTest::TestBody(FString_const_&)_::_119_::FMoveConstructable>
  TVar16;
  TTask<void> TVar17;
  TTask<bool> this_00;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> TVar18;
  longlong lVar19;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *pTVar20;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> this_01;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  float fVar21;
  char local_res18 [8];
  char local_res20 [8];
  ETaskFlags in_stack_fffffffffffffd38;
  ETaskFlags EVar22;
  undefined1 local_2a8;
  undefined1 local_2a7;
  undefined1 local_2a6;
  undefined1 local_2a5;
  undefined1 local_2a4;
  undefined1 local_2a3;
  undefined1 local_2a2;
  undefined1 local_2a1;
  undefined1 local_2a0 [8];
  FTaskBase *local_298;
  FTaskHandle local_290;
  FTaskHandle local_288;
  FTaskHandle local_280;
  FTaskHandle local_278;
  FTaskHandle local_270;
  FTaskHandle local_268;
  FTaskHandle local_260;
  FTaskHandle local_258;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> local_250;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> local_248;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> local_240;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> local_238;
  FTaskHandle local_230;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> local_228;
  FTaskHandle local_220;
  FTaskHandle local_218;
  FTaskHandle local_210;
  FTaskHandle local_208;
  TTaskWithResult<int> *local_200;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_1f8;
  TTask<void> local_1e8;
  FTaskHandle local_1e0;
  FTaskHandle local_1d8;
  wchar_t local_1d0 [4];
  wchar_t local_1c8 [4];
  char *local_1c0;
  TTask<void> local_1b8;
  TTask<void> local_1b0;
  TTask<bool> local_1a8;
  TTask<void> local_1a0;
  <lambda_18> local_198;
  TTask<void> local_190;
  TTask<void> local_188;
  TTask<void> local_180;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> *local_178;
  TTask<void> local_170;
  TTask<void> local_168;
  <lambda_24> local_160;
  <lambda_25> local_158;
  TTask<void> local_150;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_148;
  LARGE_INTEGER local_138;
  LARGE_INTEGER local_130;
  LARGE_INTEGER local_128;
  undefined8 local_120;
  LARGE_INTEGER local_118;
  undefined8 local_110;
  initializer_list<UE::Tasks::Private::FTaskHandle> local_108;
  TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295> local_f8;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> *local_e8;
  FTaskHandle *local_e0;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> *local_d8;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> *local_d0;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> *local_c8;
  undefined1 local_88 [16];
  FPipe local_78;
  
  bVar9 = FGenericPlatformProcess::SupportsMultithreading();
  if (!bVar9) {
    return;
  }
  pFVar11 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  this_01.Reference = (FTaskBase *)0x0;
  if (pFVar11 == (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(pFVar11,2,true);
    pFVar11->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::`6'::<lambda_1>,void,void>
          ::_vftable_;
    if ((*(ulonglong *)&(pFVar11->LowLevelTask).field_0x38 & 0x20) == 0) {
      in_stack_fffffffffffffd38 = None;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    (**(code **)(*(longlong *)&(pFVar11->LowLevelTask).field_0x28 + 0x18))
              (&(pFVar11->LowLevelTask).field_0x28,&pFVar11->LowLevelTask);
    *(undefined ***)&(pFVar11->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&pFVar11->LowLevelTask = pFVar11;
    *(FTaskBase **)&(pFVar11->LowLevelTask).field_0x8 = pFVar11;
    pFVar12 = LowLevelTasks::FTask::GetActiveTask();
    pTVar13 = (TTaskWithResult<int> *)this_01.Reference;
    if (pFVar12 != (FTask *)0x0) {
      pTVar13 = *(TTaskWithResult<int> **)&pFVar12->field_0x30;
    }
    *(TTaskWithResult<int> **)&(pFVar11->LowLevelTask).field_0x30 = pTVar13;
    *(undefined8 *)&(pFVar11->LowLevelTask).field_0x38 = 0xc00000541e66a800;
    pFVar11->ExtendedPriority = None;
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar11->_padding_);
    pFVar11->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::`6'::<lambda_1>_>::_vftable_;
    Tasks::Private::FTaskBase::TryLaunch(pFVar11,0x100);
    LOCK();
    paVar1 = &pFVar11->RefCount;
    aVar5 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar11->_padding_)(pFVar11,1);
    }
  }
  pFVar11 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (pFVar11 == (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(pFVar11,2,true);
    pFVar11->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::`7'::<lambda_2>,void,void>
          ::_vftable_;
    if ((*(ulonglong *)&(pFVar11->LowLevelTask).field_0x38 & 0x20) == 0) {
      in_stack_fffffffffffffd38 = None;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    (**(code **)(*(longlong *)&(pFVar11->LowLevelTask).field_0x28 + 0x18))
              (&(pFVar11->LowLevelTask).field_0x28,&pFVar11->LowLevelTask);
    *(undefined ***)&(pFVar11->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&pFVar11->LowLevelTask = pFVar11;
    *(FTaskBase **)&(pFVar11->LowLevelTask).field_0x8 = pFVar11;
    pFVar12 = LowLevelTasks::FTask::GetActiveTask();
    pTVar13 = (TTaskWithResult<int> *)this_01.Reference;
    if (pFVar12 != (FTask *)0x0) {
      pTVar13 = *(TTaskWithResult<int> **)&pFVar12->field_0x30;
    }
    *(TTaskWithResult<int> **)&(pFVar11->LowLevelTask).field_0x30 = pTVar13;
    *(undefined8 *)&(pFVar11->LowLevelTask).field_0x38 = 0xc80000541e66d400;
    pFVar11->ExtendedPriority = None;
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar11->_padding_);
    pFVar11->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::`7'::<lambda_2>_>::_vftable_;
    Tasks::Private::FTaskBase::TryLaunch(pFVar11,0x100);
    Tasks::Private::FTaskBase::Wait(pFVar11);
    LOCK();
    paVar1 = &pFVar11->RefCount;
    aVar5 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar11->_padding_)(pFVar11,1);
    }
  }
  local_298 = (FTaskBase *)
              Tasks::Private::FTaskEventBase::Create
                        (
                        L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(53)"
                        );
  if (((local_298 == (FTaskBase *)0x0) || ((local_298->Subsequents).bIsClosed != (atomic<bool>)0x0))
     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Event.IsCompleted()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                            ,0x36,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar13 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (pTVar13 == (TTaskWithResult<int> *)0x0) {
    Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
    fVar21 = __real_3dcccccd;
    FWindowsPlatformProcess::Sleep(__real_3dcccccd);
    pTVar13 = (TTaskWithResult<int> *)this_01.Reference;
LAB_141d823e5:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Task.IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                       ,0x3b,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)pTVar13,2,true);
    in_stack_fffffffffffffd38 = None;
    pTVar13->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::`9'::<lambda_3>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              ((FTaskBase *)pTVar13,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(57)"
               ,Default,None,None);
    *(FTaskBase ***)(pTVar13->ResultStorage).Pad = &local_298;
    pTVar13->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::`9'::<lambda_3>_>::_vftable_;
    Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)pTVar13,0x100);
    fVar21 = __real_3dcccccd;
    FWindowsPlatformProcess::Sleep(__real_3dcccccd);
    if (*(atomic<bool> *)&pTVar13->_padding_ != (atomic<bool>)0x0) goto LAB_141d823e5;
  }
  if ((local_298 != (FTaskBase *)0x0) && ((local_298->Subsequents).bIsClosed == (atomic<bool>)0x0))
  {
    LOCK();
    aVar4 = local_298->TaskTriggered;
    local_298->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar4 == (atomic<bool>)0x0) {
      LOCK();
      local_298->RefCount = (atomic<unsigned_int>)((int)local_298->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(local_298,0xd8);
    }
  }
  if (((local_298 != (FTaskBase *)0x0) && ((local_298->Subsequents).bIsClosed == (atomic<bool>)0x0))
     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("Event.IsCompleted()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                            ,0x3e,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar11 = local_298;
  if (local_298 != (FTaskBase *)0x0) {
    QueryPerformanceCounter(&local_138);
    local_128 = local_138;
    local_120 = 0;
    bVar9 = Tasks::Private::FTaskBase::Wait(pFVar11,(FTimeout *)&local_128.s);
    if ((!bVar9) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Event.Wait(FTimespan::Zero())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                           ,0x3f,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (pTVar13 != (TTaskWithResult<int> *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned_int> *)&pTVar13->_padding_;
    aVar5 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 == (atomic<unsigned_int>)0x1) {
      (**(code **)pTVar13->_padding_)(pTVar13,1);
    }
  }
  if (local_298 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &local_298->RefCount;
    aVar5 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 == (atomic<unsigned_int>)0x1) {
      (**(code **)local_298->_padding_)(local_298,1);
    }
  }
  pFVar11 = (FTaskBase *)
            Tasks::Private::FTaskEventBase::Create
                      (
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(67)"
                      );
  if (pFVar11 != (FTaskBase *)0x0) {
    if ((pFVar11->Subsequents).bIsClosed == (atomic<bool>)0x0) {
      LOCK();
      aVar4 = pFVar11->TaskTriggered;
      pFVar11->TaskTriggered = (atomic<bool>)0x1;
      UNLOCK();
      if (aVar4 == (atomic<bool>)0x0) {
        LOCK();
        pFVar11->RefCount = (atomic<unsigned_int>)((int)pFVar11->RefCount + 1);
        UNLOCK();
        Tasks::Private::FTaskBase::TryLaunch(pFVar11,0xd8);
      }
    }
    if (((pFVar11->Subsequents).bIsClosed == (atomic<bool>)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Event.IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                           ,0x45,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((pFVar11->Subsequents).bIsClosed == (atomic<bool>)0x0) {
      LOCK();
      aVar4 = pFVar11->TaskTriggered;
      pFVar11->TaskTriggered = (atomic<bool>)0x1;
      UNLOCK();
      if (aVar4 == (atomic<bool>)0x0) {
        LOCK();
        pFVar11->RefCount = (atomic<unsigned_int>)((int)pFVar11->RefCount + 1);
        UNLOCK();
        Tasks::Private::FTaskBase::TryLaunch(pFVar11,0xd8);
      }
    }
  }
  if (pFVar11 != (FTaskBase *)0x0) {
    if ((pFVar11->Subsequents).bIsClosed == (atomic<bool>)0x0) {
      LOCK();
      aVar4 = pFVar11->TaskTriggered;
      pFVar11->TaskTriggered = (atomic<bool>)0x1;
      UNLOCK();
      if (aVar4 == (atomic<bool>)0x0) {
        LOCK();
        pFVar11->RefCount = (atomic<unsigned_int>)((int)pFVar11->RefCount + 1);
        UNLOCK();
        Tasks::Private::FTaskBase::TryLaunch(pFVar11,0xd8);
      }
    }
    if (((pFVar11->Subsequents).bIsClosed == (atomic<bool>)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Event.IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                           ,0x48,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    LOCK();
    paVar1 = &pFVar11->RefCount;
    aVar5 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar11->_padding_)(pFVar11,1);
    }
  }
  pFVar11 = (FTaskBase *)
            Tasks::Private::FTaskEventBase::Create
                      (
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(76)"
                      );
  if ((pFVar11 == (FTaskBase *)0x0) || ((pFVar11->Subsequents).bIsClosed != (atomic<bool>)0x0)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Event.IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                       ,0x4d,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (pFVar11 != (FTaskBase *)0x0) goto LAB_141d82692;
  }
  else {
LAB_141d82692:
    LOCK();
    pFVar11->RefCount = (atomic<unsigned_int>)((int)pFVar11->RefCount + 1);
    UNLOCK();
  }
  pTVar13 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (pTVar13 == (TTaskWithResult<int> *)0x0) {
    Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
    if (pFVar11 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar11->RefCount;
      aVar5 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar5 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar11->_padding_)(pFVar11,1);
      }
    }
    FWindowsPlatformProcess::Sleep(fVar21);
    pTVar13 = (TTaskWithResult<int> *)this_01.Reference;
LAB_141d82748:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Task.IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                       ,0x52,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)pTVar13,2,true);
    in_stack_fffffffffffffd38 = None;
    pTVar13->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::`53'::<lambda_4>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              ((FTaskBase *)pTVar13,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(80)"
               ,Default,None,None);
    *(FTaskBase **)(pTVar13->ResultStorage).Pad = pFVar11;
    pTVar13->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::`53'::<lambda_4>_>::_vftable_
    ;
    Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)pTVar13,0x100);
    FWindowsPlatformProcess::Sleep(fVar21);
    if (*(atomic<bool> *)&pTVar13->_padding_ != (atomic<bool>)0x0) goto LAB_141d82748;
  }
  if (pFVar11 != (FTaskBase *)0x0) {
    if ((pFVar11->Subsequents).bIsClosed == (atomic<bool>)0x0) {
      LOCK();
      aVar4 = pFVar11->TaskTriggered;
      pFVar11->TaskTriggered = (atomic<bool>)0x1;
      UNLOCK();
      if (aVar4 == (atomic<bool>)0x0) {
        LOCK();
        pFVar11->RefCount = (atomic<unsigned_int>)((int)pFVar11->RefCount + 1);
        UNLOCK();
        Tasks::Private::FTaskBase::TryLaunch(pFVar11,0xd8);
      }
    }
    if ((pFVar11->Subsequents).bIsClosed == (atomic<bool>)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Event.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x55,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else if (pFVar11 == (FTaskBase *)0x0) goto LAB_141d82834;
    QueryPerformanceCounter(&local_130);
    local_118 = local_130;
    local_110 = 0;
    bVar9 = Tasks::Private::FTaskBase::Wait(pFVar11,(FTimeout *)&local_118.s);
    if ((!bVar9) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Event.Wait(FTimespan::Zero())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                           ,0x56,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
LAB_141d82834:
  if (pTVar13 != (TTaskWithResult<int> *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned_int> *)&pTVar13->_padding_;
    aVar5 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 == (atomic<unsigned_int>)0x1) {
      (**(code **)pTVar13->_padding_)(pTVar13,1);
    }
  }
  if (pFVar11 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar11->RefCount;
    aVar5 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar11->_padding_)(pFVar11,1);
    }
  }
  pTVar13 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  TVar18.Reference = this_01.Reference;
  if (pTVar13 != (TTaskWithResult<int> *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)pTVar13,2,true);
    in_stack_fffffffffffffd38 = None;
    pTVar13->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::`82'::<lambda_5>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              ((FTaskBase *)pTVar13,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(92)"
               ,Default,None,None);
    pTVar13->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::`82'::<lambda_5>_>::_vftable_
    ;
    TVar18.Reference = (FTaskBase *)pTVar13;
  }
  Tasks::Private::FTaskBase::TryLaunch(TVar18.Reference,0x100);
  local_208.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar18.Reference;
  pTVar14 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  pTVar13 = (TTaskWithResult<int> *)this_01.Reference;
  if (pTVar14 != (TTaskWithResult<int> *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)pTVar14,2,true);
    in_stack_fffffffffffffd38 = None;
    pTVar14->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::`82'::<lambda_6>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              ((FTaskBase *)pTVar14,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(93)"
               ,Default,None,None);
    pTVar14->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::`82'::<lambda_6>_>::_vftable_
    ;
    pTVar13 = pTVar14;
  }
  Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)pTVar13,0x100);
  local_108._First = &local_208;
  local_108._Last = (FTaskHandle *)&local_1f8;
  local_200 = pTVar13;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>::
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>(&local_1f8,&local_108);
  pTVar20 = &local_1f8;
  lVar19 = 2;
  do {
    puVar7 = *(undefined8 **)&pTVar20[-1].ArrayNum;
    pTVar20 = (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)
              &pTVar20[-1].ArrayNum;
    lVar19 = lVar19 + -1;
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar7 + 6);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
  } while (lVar19 != 0);
  Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
            (&local_1f8,(FTimespan)0x7fffffffffffffff);
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)local_1f8.AllocatorInstance.Data,local_1f8.ArrayNum);
  if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.AllocatorInstance.Data);
  }
  local_res20[0] = '\0';
  pTVar14 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  pTVar13 = (TTaskWithResult<int> *)this_01.Reference;
  if (pTVar14 != (TTaskWithResult<int> *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)pTVar14,2,true);
    in_stack_fffffffffffffd38 = None;
    pTVar14->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::`83'::<lambda_7>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              ((FTaskBase *)pTVar14,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(100)"
               ,Default,None,None);
    *(char **)(pTVar14->ResultStorage).Pad = local_res20;
    pTVar14->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::`83'::<lambda_7>_>::_vftable_
    ;
    pTVar13 = pTVar14;
  }
  Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)pTVar13,0x100);
  if (pTVar13 != (TTaskWithResult<int> *)0x0) {
    do {
    } while ((char)pTVar13->_padding_ == '\0');
    Tasks::Private::FTaskBase::Wait((FTaskBase *)pTVar13);
  }
  if ((local_res20[0] == '\0') &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Done",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x6a,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (pTVar13 != (TTaskWithResult<int> *)0x0) {
    LOCK();
    plVar3 = &pTVar13->_padding_;
    lVar19 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)pTVar13->_padding_)(pTVar13,1);
    }
  }
  pTVar13 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (pTVar13 == (TTaskWithResult<int> *)0x0) {
    Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0xc6,L"");
    pTVar13 = (TTaskWithResult<int> *)this_01.Reference;
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    in_stack_fffffffffffffd38 = None;
    Tasks::Private::TTaskWithResult<int>::TTaskWithResult<int>
              (pTVar13,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(110)"
               ,Default,None,2,None);
    pTVar13->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::`93'::<lambda_8>_>::_vftable_
    ;
    Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)pTVar13,0x100);
    Tasks::Private::FTaskBase::Wait((FTaskBase *)pTVar13);
  }
  if ((*(atomic<bool> *)&pTVar13->_padding_ == (atomic<bool>)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                         ,0x353,L"The task must be completed to obtain its result"), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((*(int *)(pTVar13->ResultStorage).Pad != 0x2a) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Task.GetResult() == 42",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x6f,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  LOCK();
  paVar1 = (atomic<unsigned_int> *)&pTVar13->_padding_;
  aVar5 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar5 == (atomic<unsigned_int>)0x1) {
    (**(code **)pTVar13->_padding_)(pTVar13,1);
  }
  pTVar14 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  pTVar13 = (TTaskWithResult<int> *)this_01.Reference;
  if (pTVar14 != (TTaskWithResult<int> *)0x0) {
    in_stack_fffffffffffffd38 = None;
    Tasks::Private::TTaskWithResult<int>::TTaskWithResult<int>
              (pTVar14,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(115)"
               ,Default,None,2,None);
    pTVar14->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::`101'::<lambda_9>_>::
          _vftable_;
    pTVar13 = pTVar14;
  }
  Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)pTVar13,0x100);
  if (pTVar13 == (TTaskWithResult<int> *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0xc6,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    do {
    } while ((char)pTVar13->_padding_ == '\0');
    Tasks::Private::FTaskBase::Wait((FTaskBase *)pTVar13);
  }
  if (((char)pTVar13->_padding_ == '\0') &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                         ,0x353,L"The task must be completed to obtain its result"), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((*(int *)(pTVar13->ResultStorage).Pad != 0x2a) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Task.GetResult() == 42",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x78,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  LOCK();
  plVar3 = &pTVar13->_padding_;
  lVar19 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar19 == 1) {
    (**(code **)pTVar13->_padding_)(pTVar13,1);
  }
  local_1d8.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  pTVar13 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  TVar18.Reference = this_01.Reference;
  if (pTVar13 != (TTaskWithResult<int> *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)pTVar13,2,true);
    in_stack_fffffffffffffd38 = None;
    pTVar13->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::`111'::<lambda_10>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              ((FTaskBase *)pTVar13,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(125)"
               ,Default,None,None);
    pTVar13->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::`111'::<lambda_10>_>::
          _vftable_;
    TVar18.Reference = (FTaskBase *)pTVar13;
  }
  Tasks::Private::FTaskBase::TryLaunch(TVar18.Reference,0x100);
  local_f8.Elements[0] = (FTaskBase *)0x0;
  local_1e0.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar18.Reference;
  local_f8.Elements[1] = TVar18.Reference;
  pTVar13 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (pTVar13 != (TTaskWithResult<int> *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)pTVar13,2,true);
    in_stack_fffffffffffffd38 = None;
    pTVar13->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksBasicTest::TestBody'::`111'::<lambda_11>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              ((FTaskBase *)pTVar13,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(126)"
               ,Default,None,None);
    pTVar13->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksBasicTest::TestBody'::`111'::<lambda_11>_>::
          _vftable_;
    this_01.Reference = (FTaskBase *)pTVar13;
  }
  Tasks::Private::FTaskBase::
  AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295>,0>
            (this_01.Reference,&local_f8,true);
  Tasks::Private::FTaskBase::TryLaunch(this_01.Reference,0x100);
  local_1e8 = (TTask<void>)0x0;
  local_220.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)this_01.Reference;
  Tasks::TTask<void>::~TTask<void>(&local_1e8);
  FVar15 = FTimespan::FromMilliseconds((double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da));
                    /* WARNING: Load size is inaccurate */
  bVar9 = Tasks::Private::FTaskHandle::Wait(&local_220,(FTimespan)*FVar15.Ticks);
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Task.Wait(FTimespan::FromMilliseconds(100))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x7f,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  Tasks::Private::FTaskHandle::~FTaskHandle(&local_220);
  Tasks::Private::FTaskHandle::~FTaskHandle(&local_1e0);
  Tasks::Private::FTaskHandle::~FTaskHandle(&local_1d8);
  in_stack_fffffffffffffd38 = in_stack_fffffffffffffd38 & 0xffffff00;
  TVar16 = Tasks::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l120::<lambda_12>_>
                     (local_1d0,
                      (<lambda_12> *)
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(157)"
                      ,(ETaskPriority)&local_2a7,Inline,in_stack_fffffffffffffd38);
  Tasks::TTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable>::GetResult
            ((void *)TVar16);
  Tasks::TTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable>::
  ~TTask<_UE::TasksTests::FTasksBasicTest::TestBody_::__l119::FMoveConstructable>(local_1d0);
  in_stack_fffffffffffffd38 = in_stack_fffffffffffffd38 & 0xffffff00;
  TVar16 = Tasks::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l121::<lambda_13>_>
                     (local_1c8,
                      (<lambda_13> *)
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(171)"
                      ,(ETaskPriority)&local_2a6,Inline,in_stack_fffffffffffffd38);
  Tasks::TTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable>::GetResult
            ((void *)TVar16);
  `UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable::FMoveConstructable
            (&local_2a8);
  Tasks::TTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable>::
  ~TTask<_UE::TasksTests::FTasksBasicTest::TestBody_::__l119::FMoveConstructable>(local_1c8);
  `UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable::~FMoveConstructable
            (&local_2a8);
  uVar10 = std::_Atomic_storage<unsigned_int,4>::load
                     ((_Atomic_storage<unsigned_int,4> *)
                      &LowLevelTasks::FScheduler::Singleton.ActiveWorkers,memory_order_relaxed);
  if (uVar10 != 0) {
    local_1c0 = local_res18;
    local_res18[0] = '\0';
    in_stack_fffffffffffffd38 = in_stack_fffffffffffffd38 & 0xffffff00;
    Tasks::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l124::<lambda_14>_>
              ((wchar_t *)&local_1b8,
               (<lambda_14> *)
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(189)"
               ,(ETaskPriority)&local_1c0,Inline,in_stack_fffffffffffffd38);
    Tasks::TTask<void>::~TTask<void>(&local_1b8);
    do {
    } while (local_res18[0] == '\0');
  }
  in_stack_fffffffffffffd38 = in_stack_fffffffffffffd38 & 0xffffff00;
  TVar17 = Tasks::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l127::<lambda_15>_>
                     ((wchar_t *)&local_1b0,
                      (<lambda_15> *)
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(197)"
                      ,(ETaskPriority)&local_2a5,Inline,in_stack_fffffffffffffd38);
  Tasks::Private::FTaskHandle::Wait((FTaskHandle *)TVar17);
  Tasks::TTask<void>::~TTask<void>(&local_1b0);
  in_stack_fffffffffffffd38 = in_stack_fffffffffffffd38 & 0xffffff00;
  this_00 = Tasks::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l127::<lambda_16>_>
                      ((wchar_t *)&local_1a8,
                       (<lambda_16> *)
                       L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(198)"
                       ,(ETaskPriority)&local_2a4,Inline,in_stack_fffffffffffffd38);
  Tasks::TTask<bool>::GetResult((TTask<bool> *)this_00);
  Tasks::TTask<bool>::~TTask<bool>(&local_1a8);
  in_stack_fffffffffffffd38 = in_stack_fffffffffffffd38 & 0xffffff00;
  TVar17 = Tasks::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_[::A]::<lambda_17>_>
                     ((wchar_t *)&local_1a0,
                      (<lambda_17> *)
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(202)"
                      ,(ETaskPriority)&local_2a3,Inline,in_stack_fffffffffffffd38);
  local_268.Pimpl.Reference = *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)TVar17;
  *(undefined8 *)TVar17 = 0;
  Tasks::TTask<void>::~TTask<void>(&local_1a0);
  Tasks::Private::FTaskHandle::Wait(&local_268);
  local_218.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  Tasks::Private::FTaskHandle::operator=(&local_268,&local_218);
  Tasks::Private::FTaskHandle::~FTaskHandle(&local_218);
  Tasks::Private::FTaskHandle::~FTaskHandle(&local_268);
  local_198.Task = &local_280;
  local_280.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  in_stack_fffffffffffffd38 = in_stack_fffffffffffffd38 & 0xffffff00;
  Tasks::Private::FTaskHandle::
  Launch<_UE::TasksTests::FTasksBasicTest::TestBody_[::B]::<lambda_18>_>
            (&local_280,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(209)"
             ,&local_198,Default,None,None);
  Tasks::Private::FTaskHandle::Wait(&local_280);
  Tasks::Private::FTaskHandle::~FTaskHandle(&local_280);
  pFVar11 = (FTaskBase *)
            Tasks::Private::FTaskEventBase::Create
                      (
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(218)"
                      );
  TRefCountPtr<UE::Tasks::Private::FTaskBase>::TRefCountPtr<UE::Tasks::Private::FTaskBase>
            (&local_250,pFVar11,false);
  pFVar11 = (FTaskBase *)
            Tasks::Private::FTaskEventBase::Create
                      (
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(219)"
                      );
  TRefCountPtr<UE::Tasks::Private::FTaskBase>::TRefCountPtr<UE::Tasks::Private::FTaskBase>
            (&local_258.Pimpl,pFVar11,false);
  local_e8 = &local_250;
  local_e0 = &local_258;
  in_stack_fffffffffffffd38 = in_stack_fffffffffffffd38 & 0xffffff00;
  TVar17 = Tasks::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_[::C]::<lambda_19>_>
                     ((wchar_t *)&local_190,
                      (<lambda_19> *)
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(220)"
                      ,(ETaskPriority)&local_e8,Inline,in_stack_fffffffffffffd38);
  local_260.Pimpl.Reference = *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)TVar17;
  *(undefined8 *)TVar17 = 0;
  Tasks::TTask<void>::~TTask<void>(&local_190);
  FVar15 = FTimespan::FromMilliseconds((double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00));
                    /* WARNING: Load size is inaccurate */
  bVar9 = Tasks::Private::FTaskHandle::Wait(&local_260,(FTimespan)*FVar15.Ticks);
  if ((bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Task.Wait(FTimespan::FromMilliseconds(100))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0xe4,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  bVar9 = Tasks::Private::FTaskHandle::IsCompleted(&local_258);
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutedSignal.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0xe5,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  Tasks::FTaskEvent::Trigger((FTaskEvent *)&local_250);
  Tasks::Private::FTaskHandle::Wait(&local_260);
  Tasks::Private::FTaskHandle::~FTaskHandle(&local_260);
  Tasks::FTaskEvent::~FTaskEvent((FTaskEvent *)&local_258);
  Tasks::FTaskEvent::~FTaskEvent((FTaskEvent *)&local_250);
  in_stack_fffffffffffffd38 = in_stack_fffffffffffffd38 & 0xffffff00;
  TVar17 = Tasks::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l145::<lambda_20>_>
                     ((wchar_t *)&local_188,
                      (<lambda_20> *)
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(235)"
                      ,(ETaskPriority)&local_2a2,Inline,in_stack_fffffffffffffd38);
  Tasks::Private::FTaskHandle::Wait((FTaskHandle *)TVar17);
  Tasks::TTask<void>::~TTask<void>(&local_188);
  pFVar11 = (FTaskBase *)
            Tasks::Private::FTaskEventBase::Create
                      (
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(246)"
                      );
  TRefCountPtr<UE::Tasks::Private::FTaskBase>::TRefCountPtr<UE::Tasks::Private::FTaskBase>
            (&local_238,pFVar11,false);
  pFVar11 = (FTaskBase *)
            Tasks::Private::FTaskEventBase::Create
                      (
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(247)"
                      );
  TRefCountPtr<UE::Tasks::Private::FTaskBase>::TRefCountPtr<UE::Tasks::Private::FTaskBase>
            (&local_240,pFVar11,false);
  pFVar11 = (FTaskBase *)
            Tasks::Private::FTaskEventBase::Create
                      (
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(248)"
                      );
  TRefCountPtr<UE::Tasks::Private::FTaskBase>::TRefCountPtr<UE::Tasks::Private::FTaskBase>
            (&local_248,pFVar11,false);
  local_d8 = &local_238;
  local_d0 = &local_240;
  in_stack_fffffffffffffd38 = in_stack_fffffffffffffd38 & 0xffffff00;
  local_c8 = &local_248;
  TVar17 = Tasks::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l146::<lambda_21>_>
                     ((wchar_t *)&local_180,
                      (<lambda_21> *)
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(250)"
                      ,(ETaskPriority)&local_d8,Inline,in_stack_fffffffffffffd38);
  local_290.Pimpl.Reference = *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)TVar17;
  *(undefined8 *)TVar17 = 0;
  Tasks::TTask<void>::~TTask<void>(&local_180);
  FVar15 = FTimespan::FromMilliseconds((double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01));
                    /* WARNING: Load size is inaccurate */
  bVar9 = Tasks::Private::FTaskHandle::Wait(&local_290,(FTimespan)*FVar15.Ticks);
  if ((bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Task.Wait(FTimespan::FromMilliseconds(100))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x103,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  Tasks::FTaskEvent::Trigger((FTaskEvent *)&local_238);
  FVar15 = FTimespan::FromMilliseconds((double)CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02));
                    /* WARNING: Load size is inaccurate */
  bVar9 = Tasks::Private::FTaskHandle::Wait(&local_290,(FTimespan)*FVar15.Ticks);
  if ((bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Task.Wait(FTimespan::FromMilliseconds(100))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x105,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  Tasks::FTaskEvent::Trigger((FTaskEvent *)&local_240);
  FVar15 = FTimespan::FromMilliseconds((double)CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03));
                    /* WARNING: Load size is inaccurate */
  bVar9 = Tasks::Private::FTaskHandle::Wait(&local_290,(FTimespan)*FVar15.Ticks);
  if ((bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Task.Wait(FTimespan::FromMilliseconds(100))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x107,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  Tasks::FTaskEvent::Trigger((FTaskEvent *)&local_248);
  Tasks::Private::FTaskHandle::Wait(&local_290);
  Tasks::Private::FTaskHandle::~FTaskHandle(&local_290);
  Tasks::FTaskEvent::~FTaskEvent((FTaskEvent *)&local_248);
  Tasks::FTaskEvent::~FTaskEvent((FTaskEvent *)&local_240);
  Tasks::FTaskEvent::~FTaskEvent((FTaskEvent *)&local_238);
  pFVar11 = (FTaskBase *)
            Tasks::Private::FTaskEventBase::Create
                      (
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(269)"
                      );
  TRefCountPtr<UE::Tasks::Private::FTaskBase>::TRefCountPtr<UE::Tasks::Private::FTaskBase>
            (&local_228,pFVar11,false);
  local_178 = &local_228;
  EVar22 = None;
  in_stack_fffffffffffffd38 = in_stack_fffffffffffffd38 & 0xffffff00;
  TVar17 = Tasks::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l168::<lambda_22>_>
                     ((wchar_t *)&local_170,
                      (<lambda_22> *)
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(270)"
                      ,(ETaskPriority)&local_178,Inline,in_stack_fffffffffffffd38);
  local_230.Pimpl.Reference = *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)TVar17;
  *(undefined8 *)TVar17 = 0;
  Tasks::TTask<void>::~TTask<void>(&local_170);
  FVar15 = FTimespan::FromMilliseconds((double)CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04));
                    /* WARNING: Load size is inaccurate */
  bVar9 = Tasks::Private::FTaskHandle::Wait(&local_230,(FTimespan)*FVar15.Ticks);
  if ((bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Task.Wait(FTimespan::FromMilliseconds(200))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x121,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  Tasks::FTaskEvent::Trigger((FTaskEvent *)&local_228);
  Tasks::Private::FTaskHandle::Wait(&local_230);
  Tasks::Private::FTaskHandle::~FTaskHandle(&local_230);
  Tasks::FTaskEvent::~FTaskEvent((FTaskEvent *)&local_228);
  Tasks::FPipe::FPipe(&local_78,
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(320)"
                     );
  local_278.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  `UE::TasksTests::FTasksBasicTest::TestBody'::__l176::FPipeSuspensionScope::FPipeSuspensionScope
            (local_88,&local_78);
  uVar10 = CONCAT31((int3)(in_stack_fffffffffffffd38 >> 8),1);
  TVar17 = Tasks::FPipe::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l177::<lambda_23>_>
                     (&local_78,(wchar_t *)&local_168,
                      (<lambda_23> *)
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(324)"
                      ,(ETaskPriority)&local_2a1,Inline,EVar22 & 0xffffff00);
  Tasks::Private::FTaskHandle::operator=(&local_278,(FTaskHandle *)TVar17);
  Tasks::TTask<void>::~TTask<void>(&local_168);
  FVar15 = FTimespan::FromMilliseconds((double)CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05));
                    /* WARNING: Load size is inaccurate */
  bVar9 = Tasks::Private::FTaskHandle::Wait(&local_278,(FTimespan)*FVar15.Ticks);
  if ((bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Task.Wait(FTimespan::FromMilliseconds(100))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x145,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  `UE::TasksTests::FTasksBasicTest::TestBody'::__l176::FPipeSuspensionScope::~FPipeSuspensionScope
            (local_88);
  Tasks::Private::FTaskHandle::Wait(&local_278);
  Tasks::FPipe::WaitUntilEmpty(&local_78,(FTimespan)0x7fffffffffffffff);
  Tasks::Private::FTaskHandle::~FTaskHandle(&local_278);
  Tasks::FPipe::~FPipe(&local_78);
  local_160.Task = &local_288;
  local_288.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  uVar10 = uVar10 & 0xffffff00;
  Tasks::Private::FTaskHandle::
  Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l185::<lambda_24>_>
            (&local_288,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(333)"
             ,&local_160,Default,None,None);
  bVar9 = Tasks::Private::FTaskHandle::IsAwaitable(&local_288);
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Task.IsAwaitable()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x153,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  Tasks::Private::FTaskHandle::Wait(&local_288);
  Tasks::Private::FTaskHandle::~FTaskHandle(&local_288);
  local_158.Outer = &local_270;
  local_270.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  uVar10 = uVar10 & 0xffffff00;
  Tasks::Private::FTaskHandle::
  Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l193::<lambda_25>_>
            (&local_270,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(346)"
             ,&local_158,Default,None,None);
  Tasks::Private::FTaskHandle::Wait(&local_270);
  Tasks::Private::FTaskHandle::~FTaskHandle(&local_270);
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>(&local_148);
  TVar17 = Tasks::Launch<_UE::TasksTests::FTasksBasicTest::TestBody_::__l195::<lambda_26>_>
                     ((wchar_t *)&local_150,
                      (<lambda_26> *)
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(371)"
                      ,(ETaskPriority)local_2a0,Inline,CONCAT31((int3)(uVar10 >> 8),3));
  local_210.Pimpl.Reference = *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)TVar17;
  *(undefined8 *)TVar17 = 0;
  Tasks::TTask<void>::~TTask<void>(&local_150);
  Tasks::Private::FTaskHandle::Wait(&local_210);
  Tasks::Private::FTaskHandle::~FTaskHandle(&local_210);
  return;
}

