// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// GetTestFlags @ 141d5a480

EAutomationTestFlags __thiscall
UE::TasksTests::FTasksDeepRetractionTest::GetTestFlags(FTasksDeepRetractionTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141d5a490

bool __thiscall
UE::TasksTests::FTasksDeepRetractionTest::IsStressTest(FTasksDeepRetractionTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141d5a4a0

uint __thiscall
UE::TasksTests::FTasksDeepRetractionTest::GetRequiredDeviceNum(FTasksDeepRetractionTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141d5a4b0

FString * __thiscall
UE::TasksTests::FTasksDeepRetractionTest::GetTestSourceFileName
          (FTasksDeepRetractionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141d5a4e0

int __thiscall
UE::TasksTests::FTasksDeepRetractionTest::GetTestSourceFileLine(FTasksDeepRetractionTest *this)

{
  return 0x40f;
}

// GetTests @ 141d5a4f0

/* WARNING: Removing unreachable block (ram,0x000141d5a66e) */

void __thiscall
UE::TasksTests::FTasksDeepRetractionTest::GetTests
          (FTasksDeepRetractionTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141d5a690

bool __thiscall
UE::TasksTests::FTasksDeepRetractionTest::RunTest(FTasksDeepRetractionTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141d5a6c0

FString * __thiscall
UE::TasksTests::FTasksDeepRetractionTest::GetBeautifiedTestName
          (FTasksDeepRetractionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTasksDeepRetractionTest @ 141d6b330

FTasksDeepRetractionTest * __thiscall
UE::TasksTests::FTasksDeepRetractionTest::FTasksDeepRetractionTest
          (FTasksDeepRetractionTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTasksDeepRetractionTest_TasksTests_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Tasks::DeepRetraction");
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

// operator() @ 141d6fd90

void __thiscall
`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l11::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (**(char **)this != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bPrerequisiteDone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                       ,0x422,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (**(char **)((longlong)this + 8) != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bTaskDone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                       ,0x423,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  **(undefined1 **)this = 1;
  return;
}

// operator() @ 141d6fe10

void __thiscall
`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l11::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  
  if (**(char **)this == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bPrerequisiteDone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                       ,0x42a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar3 = *(char **)((longlong)this + 8);
  if (*pcVar3 != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bTaskDone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                       ,0x42b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar3 = *(char **)((longlong)this + 8);
  }
  *pcVar3 = '\x01';
  return;
}

// operator() @ 141d6fe90

void __thiscall
`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::__l26::<lambda_4>::operator()(void *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  longlong *plVar3;
  FTaskBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  FTaskBase *pFVar7;
  FTask *pFVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong local_28;
  longlong local_20;
  longlong lStack_18;
  
  if ((**(char **)this != '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bParentDone",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x43b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((**(char **)((longlong)this + 8) != '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bNestedDone",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x43c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_20 = *(longlong *)this;
  lStack_18 = *(longlong *)((longlong)this + 8);
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&UE::Tasks::Private::SmallTaskAllocator);
  if (pFVar7 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<``UE::TasksTests::FTasksDeepRetractionTest::TestBody'::`26'::<lambda_4>::operator()'::`2'::<lambda_1>,void,void>
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
    *(undefined8 *)&(pFVar7->LowLevelTask).field_0x38 = 0xc80000541e79d000;
    pFVar7->ExtendedPriority = None;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar7->_padding_);
    pFVar7[1]._padding_ = local_20;
    pFVar7[1]._padding_ = lStack_18;
    pFVar7->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<``UE::TasksTests::FTasksDeepRetractionTest::TestBody'::`26'::<lambda_4>::operator()'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(pFVar7,0x100);
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 == &local_28) {
    if (pFVar7 == (FTaskBase *)0x0) goto LAB_141d70081;
    LOCK();
    paVar1 = &pFVar7->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 != (atomic<unsigned_int>)0x1) goto LAB_141d70081;
    puVar10 = (undefined8 *)pFVar7->_padding_;
  }
  else {
    pFVar4 = (FTaskBase *)*plVar3;
    *plVar3 = (longlong)pFVar7;
    if (pFVar4 == (FTaskBase *)0x0) goto LAB_141d70081;
    LOCK();
    paVar1 = &pFVar4->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 != (atomic<unsigned_int>)0x1) goto LAB_141d70081;
    puVar10 = (undefined8 *)pFVar4->_padding_;
    pFVar7 = pFVar4;
  }
  (*(code *)*puVar10)(pFVar7,1);
LAB_141d70081:
  puVar10 = *(undefined8 **)((longlong)this + 0x10);
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
  UE::Tasks::Private::FTaskBase::AddNested(pFVar7,(FTaskBase *)*puVar10);
  if ((**(char **)((longlong)this + 8) != '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bNestedDone",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x447,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  **(undefined1 **)this = 1;
  return;
}

// TestBody @ 141d84090

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::TasksTests::FTasksDeepRetractionTest::TestBody(FTasksDeepRetractionTest *this,FString *param_1)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  atomic<bool> aVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  FTaskBase *pFVar8;
  FTask *pFVar9;
  FTaskBase *pFVar10;
  FTaskBase *this_00;
  FTaskBase *this_01;
  char local_res18 [8];
  char local_res20 [8];
  char local_e8 [8];
  ETaskPriority local_e0 [8];
  char local_d8;
  char local_d7 [7];
  undefined8 *local_d0;
  FTaskEvent local_c8;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_c0;
  FPipe local_b0;
  char *local_88;
  char *pcStack_80;
  char *local_78;
  char *pcStack_70;
  FPipe local_68;
  
  FWindowsPlatformProcess::Sleep(__real_3dcccccd);
  local_c8 = (FTaskEvent)
             Tasks::Private::FTaskEventBase::Create
                       (
                       L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(1043)"
                       );
  BlockWorkers(&local_c0,&local_c8,(uint)LowLevelTasks::FScheduler::Singleton.ActiveWorkers);
  local_e8[0] = '\0';
  pFVar8 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  this_01 = (FTaskBase *)0x0;
  if (pFVar8 == (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(pFVar8,2,true);
    pFVar8->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::`3'::<lambda_1>,void,void>
          ::_vftable_;
    if (((*(ulonglong *)&(pFVar8->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
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
    pFVar10 = this_01;
    if (pFVar9 != (FTask *)0x0) {
      pFVar10 = *(FTaskBase **)&pFVar9->field_0x30;
    }
    *(FTaskBase **)&(pFVar8->LowLevelTask).field_0x30 = pFVar10;
    *(undefined8 *)&(pFVar8->LowLevelTask).field_0x38 = 0xc80000541e7a2800;
    pFVar8->ExtendedPriority = None;
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar8->_padding_);
    pFVar8[1]._padding_ = (longlong)local_e8;
    pFVar8->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::`3'::<lambda_1>_>::
          _vftable_;
    Tasks::Private::FTaskBase::TryLaunch(pFVar8,0x100);
    Tasks::Private::FTaskBase::Wait(pFVar8);
    LOCK();
    paVar2 = &pFVar8->RefCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
  }
  if ((local_e8[0] == '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bDone",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x419,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_88 = local_res18;
  local_res18[0] = '\0';
  pcStack_80 = local_res20;
  local_res20[0] = '\0';
  pFVar10 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  pFVar8 = this_01;
  if (pFVar10 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase(pFVar10,2,true);
    pFVar10->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::`11'::<lambda_2>,void,void>
          ::_vftable_;
    if (((*(ulonglong *)&(pFVar10->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (**(code **)(*(longlong *)&(pFVar10->LowLevelTask).field_0x28 + 0x18))
              (&(pFVar10->LowLevelTask).field_0x28,&pFVar10->LowLevelTask);
    *(undefined ***)&(pFVar10->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&pFVar10->LowLevelTask = pFVar10;
    *(FTaskBase **)&(pFVar10->LowLevelTask).field_0x8 = pFVar10;
    pFVar9 = LowLevelTasks::FTask::GetActiveTask();
    if (pFVar9 != (FTask *)0x0) {
      pFVar8 = *(FTaskBase **)&pFVar9->field_0x30;
    }
    *(FTaskBase **)&(pFVar10->LowLevelTask).field_0x30 = pFVar8;
    *(undefined8 *)&(pFVar10->LowLevelTask).field_0x38 = 0xc80000541e7a5800;
    pFVar10->ExtendedPriority = None;
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar10->_padding_);
    pFVar10[1]._padding_ = (longlong)local_88;
    pFVar10[1]._padding_ = (longlong)pcStack_80;
    pFVar10->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::`11'::<lambda_2>_>::
          _vftable_;
    pFVar8 = pFVar10;
  }
  Tasks::Private::FTaskBase::TryLaunch(pFVar8,0x100);
  local_78 = local_res18;
  pcStack_70 = local_res20;
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  pFVar10 = this_01;
  if (this_00 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    local_e0[0] = Default;
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::`11'::<lambda_3>,void,void>
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
    LowLevelTasks::FTask::InheritParentData(&this_00->LowLevelTask,local_e0);
    *(ulonglong *)&(this_00->LowLevelTask).field_0x38 =
         ((longlong)(char)local_e0[0] << 0x35 | 0xff0000015079ea10U) << 6;
    this_00->ExtendedPriority = None;
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_);
    this_00[1]._padding_ = (longlong)local_78;
    this_00[1]._padding_ = (longlong)pcStack_70;
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::`11'::<lambda_3>_>::
          _vftable_;
    pFVar10 = this_00;
  }
  if (pFVar8 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::AddPrerequisites(pFVar10,pFVar8);
  }
  Tasks::Private::FTaskBase::TryLaunch(pFVar10,0x100);
  if (pFVar10 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::Wait(pFVar10);
    LOCK();
    paVar2 = &pFVar10->RefCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar10->_padding_)(pFVar10,1);
    }
  }
  if ((local_res18[0] == '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bPrerequisiteDone",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x430,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((local_res20[0] == '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bTaskDone",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x431,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (pFVar8 != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = &pFVar8->RefCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
  }
  local_d8 = '\0';
  local_d7[0] = '\0';
  local_d0 = (undefined8 *)0x0;
  pFVar8 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  if (pFVar8 == (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(pFVar8,2,true);
    pFVar8->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::`26'::<lambda_4>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (pFVar8,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(1080)"
               ,Default,None,None);
    pFVar8[1]._padding_ = (longlong)&local_d8;
    pFVar8[1]._padding_ = (longlong)local_d7;
    pFVar8[1]._padding_ = (longlong)&local_d0;
    pFVar8->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::`26'::<lambda_4>_>::
          _vftable_;
    Tasks::Private::FTaskBase::TryLaunch(pFVar8,0x100);
    Tasks::Private::FTaskBase::Wait(pFVar8);
    LOCK();
    paVar2 = &pFVar8->RefCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
  }
  if ((local_d8 == '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bParentDone",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,1099,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((local_d7[0] == '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bNestedDone",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x44c,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (local_d0 != (undefined8 *)0x0) {
    if ((*(char *)(local_d0 + 0x1a) == '\0') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NestedTask.IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                           ,0x44d,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (local_d0 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_d0 + 6);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)*local_d0)(local_d0,1);
      }
    }
  }
  TwoLevelsDeepRetractionTest();
  Tasks::FPipe::FPipe(&local_68,
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(1107)"
                     );
  pFVar10 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  pFVar8 = this_01;
  if (pFVar10 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase(pFVar10,2,true);
    pFVar10->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::`48'::<lambda_5>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (pFVar10,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(1108)"
               ,Default,None,None);
    pFVar10->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::`48'::<lambda_5>_>::
          _vftable_;
    pFVar8 = pFVar10;
  }
  LOCK();
  local_68.TaskCount = (atomic<unsigned___int64>)((longlong)local_68.TaskCount + 1);
  UNLOCK();
  LOCK();
  pFVar8->NumLocks = (atomic<unsigned_int>)((int)pFVar8->NumLocks + 1);
  UNLOCK();
  pFVar8->Pipe = &local_68;
  Tasks::Private::FTaskBase::TryLaunch(pFVar8,0x100);
  Tasks::Private::FTaskBase::Wait(pFVar8);
  LOCK();
  paVar2 = &pFVar8->RefCount;
  aVar4 = *paVar2;
  *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
  UNLOCK();
  if (aVar4 == (atomic<unsigned_int>)0x1) {
    (**(code **)pFVar8->_padding_)(pFVar8,1);
  }
  if ((local_68.TaskCount != (atomic<unsigned___int64>)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasWork()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                         ,0x2a,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.EmptyEventRef.SharedReferenceCount.ReferenceController);
  Tasks::FPipe::FPipe(&local_b0,
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(1113)"
                     );
  pFVar10 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  pFVar8 = this_01;
  if (pFVar10 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase(pFVar10,2,true);
    pFVar10->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::`49'::<lambda_6>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (pFVar10,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(1114)"
               ,Default,None,None);
    pFVar10->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::`49'::<lambda_6>_>::
          _vftable_;
    pFVar8 = pFVar10;
  }
  LOCK();
  local_b0.TaskCount = (atomic<unsigned___int64>)((longlong)local_b0.TaskCount + 1);
  UNLOCK();
  LOCK();
  pFVar8->NumLocks = (atomic<unsigned_int>)((int)pFVar8->NumLocks + 1);
  UNLOCK();
  pFVar8->Pipe = &local_b0;
  Tasks::Private::FTaskBase::TryLaunch(pFVar8,0x100);
  pFVar10 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (pFVar10 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase(pFVar10,2,true);
    pFVar10->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::`49'::<lambda_7>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (pFVar10,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(1115)"
               ,Default,None,None);
    pFVar10->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksDeepRetractionTest::TestBody'::`49'::<lambda_7>_>::
          _vftable_;
    this_01 = pFVar10;
  }
  LOCK();
  local_b0.TaskCount = (atomic<unsigned___int64>)((longlong)local_b0.TaskCount + 1);
  UNLOCK();
  LOCK();
  this_01->NumLocks = (atomic<unsigned_int>)((int)this_01->NumLocks + 1);
  UNLOCK();
  this_01->Pipe = &local_b0;
  Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
  Tasks::Private::FTaskBase::Wait(this_01);
  Tasks::FPipe::WaitUntilEmpty(&local_b0,(FTimespan)0x7fffffffffffffff);
  LOCK();
  paVar2 = &this_01->RefCount;
  aVar4 = *paVar2;
  *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
  UNLOCK();
  if (aVar4 == (atomic<unsigned_int>)0x1) {
    (**(code **)this_01->_padding_)(this_01,1);
  }
  LOCK();
  paVar2 = &pFVar8->RefCount;
  aVar4 = *paVar2;
  *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
  UNLOCK();
  if (aVar4 == (atomic<unsigned_int>)0x1) {
    (**(code **)pFVar8->_padding_)(pFVar8,1);
  }
  if ((local_b0.TaskCount != (atomic<unsigned___int64>)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasWork()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                         ,0x2a,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.EmptyEventRef.SharedReferenceCount.ReferenceController);
  if ((local_c8 != (FTaskEvent)0x0) &&
     (*(atomic<bool> *)((longlong)local_c8 + 0xd0) == (atomic<bool>)0x0)) {
    LOCK();
    aVar3 = *(atomic<bool> *)((longlong)local_c8 + 0x45);
    *(atomic<bool> *)((longlong)local_c8 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar3 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)local_c8 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)local_c8 + 0x30) + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)local_c8,0xd8);
    }
  }
  Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
            (&local_c0,(FTimespan)0x7fffffffffffffff);
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  if (local_c8 != (FTaskEvent)0x0) {
    LOCK();
    paVar2 = (atomic<unsigned_int> *)((longlong)local_c8 + 0x30);
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)local_c8)(local_c8,1);
    }
  }
  return;
}

