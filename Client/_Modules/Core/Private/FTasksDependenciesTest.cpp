// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141d58a30

EAutomationTestFlags __thiscall
UE::TasksTests::FTasksDependenciesTest::GetTestFlags(FTasksDependenciesTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141d58a40

bool __thiscall UE::TasksTests::FTasksDependenciesTest::IsStressTest(FTasksDependenciesTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141d58a50

uint __thiscall
UE::TasksTests::FTasksDependenciesTest::GetRequiredDeviceNum(FTasksDependenciesTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141d58a60

FString * __thiscall
UE::TasksTests::FTasksDependenciesTest::GetTestSourceFileName
          (FTasksDependenciesTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141d58a90

int __thiscall
UE::TasksTests::FTasksDependenciesTest::GetTestSourceFileLine(FTasksDependenciesTest *this)

{
  return 0x341;
}

// GetTests @ 141d58aa0

/* WARNING: Removing unreachable block (ram,0x000141d58c1e) */

void __thiscall
UE::TasksTests::FTasksDependenciesTest::GetTests
          (FTasksDependenciesTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141d58c40

bool __thiscall
UE::TasksTests::FTasksDependenciesTest::RunTest(FTasksDependenciesTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141d58c70

FString * __thiscall
UE::TasksTests::FTasksDependenciesTest::GetBeautifiedTestName
          (FTasksDependenciesTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTasksDependenciesTest @ 141d6b500

FTasksDependenciesTest * __thiscall
UE::TasksTests::FTasksDependenciesTest::FTasksDependenciesTest
          (FTasksDependenciesTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTasksDependenciesTest_TasksTests_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Tasks::Dependencies");
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

// TestBody @ 141d849d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "memory_order": Some values do not have unique names */

void __thiscall
UE::TasksTests::FTasksDependenciesTest::TestBody(FTasksDependenciesTest *this,FString *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<bool> aVar3;
  atomic<unsigned_int> aVar4;
  FTaskHandle this_00;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FTaskBase *pFVar10;
  FTaskBase *this_01;
  FTask *pFVar11;
  undefined8 uVar12;
  TTask<void> TVar13;
  TTask<void> TVar14;
  TTask<void> this_02;
  FTaskEvent this_03;
  TTask<void> TVar15;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> TVar16;
  longlong lVar17;
  FTaskHandle *pFVar18;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> *pTVar19;
  undefined1 local_res18 [16];
  undefined8 in_stack_fffffffffffffd78;
  ETaskFlags EVar20;
  ulonglong uVar21;
  ETaskFlags EVar22;
  ETaskFlags EVar23;
  undefined1 local_268;
  undefined1 local_267 [7];
  FTaskBase *local_260;
  FTaskBase *local_258;
  FTaskHandle local_250;
  FTaskHandle local_248;
  FTaskHandle local_240;
  TTask<void> local_238;
  TTask<void> local_230;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> local_228;
  FTaskHandle local_220;
  FTaskHandle local_218;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> local_210;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> local_208;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> local_200;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> local_1f8;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> local_1f0;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_1e8;
  FTaskEvent local_1d8;
  FTaskHandle local_1d0;
  FTaskHandle local_1c8;
  FTaskHandle local_1c0;
  FTaskBase *local_1b8;
  FTaskHandle local_1b0;
  FTaskHandle local_1a8;
  FTaskHandle local_1a0;
  TTask<void> local_198;
  TTask<void> local_190;
  FTaskHandle local_188;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> *local_180;
  TTask<void> local_178;
  TTask<void> local_170;
  FTaskHandle local_168;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> *local_160;
  TTask<void> local_158;
  TTask<void> local_150;
  TTask<void> local_148;
  initializer_list<UE::Tasks::TTask<void>_> local_140;
  initializer_list<UE::Tasks::Private::FTaskHandle> local_128;
  TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295> local_118;
  initializer_list<UE::Tasks::Private::FTaskHandle> local_108;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_f8;
  FTaskBase *local_e8;
  FTaskBase *local_e0;
  FTaskBase *local_d8;
  FTaskBase *local_d0;
  FPipe local_c8;
  FPipe local_a0;
  FPipe local_78;
  
  pFVar10 = (FTaskBase *)
            Tasks::Private::FTaskEventBase::Create
                      (
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(836)"
                      );
  this_01 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (this_01 == (FTaskBase *)0x0) {
    this_01 = (FTaskBase *)0x0;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(this_01,2,true);
    this_01->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`3'::<lambda_1>,void,void>
          ::_vftable_;
    if ((*(ulonglong *)&(this_01->LowLevelTask).field_0x38 & 0x20) == 0) {
      in_stack_fffffffffffffd78 = 0;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (**(code **)(*(longlong *)&(this_01->LowLevelTask).field_0x28 + 0x18))
              (&(this_01->LowLevelTask).field_0x28,&this_01->LowLevelTask);
    *(undefined ***)&(this_01->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&this_01->LowLevelTask = this_01;
    *(FTaskBase **)&(this_01->LowLevelTask).field_0x8 = this_01;
    pFVar11 = LowLevelTasks::FTask::GetActiveTask();
    uVar12 = 0;
    if (pFVar11 != (FTask *)0x0) {
      uVar12 = *(undefined8 *)&pFVar11->field_0x30;
    }
    *(undefined8 *)&(this_01->LowLevelTask).field_0x30 = uVar12;
    *(undefined8 *)&(this_01->LowLevelTask).field_0x38 = 0xc80000541e739000;
    this_01->ExtendedPriority = None;
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_01->_padding_);
    this_01->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`3'::<lambda_1>_>::
          _vftable_;
  }
  TVar15 = (TTask<void>)0x0;
  if (pFVar10 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::AddPrerequisites(this_01,pFVar10);
  }
  Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
  fVar6 = __real_3dcccccd;
  FWindowsPlatformProcess::Sleep(__real_3dcccccd);
  if (((this_01 == (FTaskBase *)0x0) || ((this_01->Subsequents).bIsClosed != (atomic<bool>)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Task.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x348,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((pFVar10 != (FTaskBase *)0x0) && ((pFVar10->Subsequents).bIsClosed == (atomic<bool>)0x0)) {
    LOCK();
    aVar3 = pFVar10->TaskTriggered;
    pFVar10->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar3 == (atomic<bool>)0x0) {
      LOCK();
      pFVar10->RefCount = (atomic<unsigned_int>)((int)pFVar10->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(pFVar10,0xd8);
    }
  }
  if (this_01 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::Wait(this_01);
    LOCK();
    paVar1 = &this_01->RefCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  if (pFVar10 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar10->RefCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar10->_padding_)(pFVar10,1);
    }
  }
  pFVar10 = (FTaskBase *)
            Tasks::Private::FTaskEventBase::Create
                      (
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(847)"
                      );
  TVar13 = (TTask<void>)
           TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  TVar14 = TVar15;
  if (TVar13 != (TTask<void>)0x0) {
    Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)TVar13,2,true);
    *(undefined ***)TVar13 =
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`11'::<lambda_2>,void,void>
          ::_vftable_;
    if ((*(ulonglong *)((longlong)TVar13 + 0xb0) & 0x20) == 0) {
      in_stack_fffffffffffffd78 = 0;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (**(code **)(*(longlong *)((longlong)TVar13 + 0xa0) + 0x18))
              ((undefined1 *)((longlong)TVar13 + 0xa0),(FTask *)((longlong)TVar13 + 0x78));
    *(undefined ***)((longlong)TVar13 + 0xa0) =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(TTask<void> *)((longlong)TVar13 + 0x78) = TVar13;
    *(TTask<void> *)((longlong)TVar13 + 0x80) = TVar13;
    pFVar11 = LowLevelTasks::FTask::GetActiveTask();
    if (pFVar11 != (FTask *)0x0) {
      TVar14 = *(TTask<void> *)&pFVar11->field_0x30;
    }
    *(TTask<void> *)((longlong)TVar13 + 0xa8) = TVar14;
    *(undefined8 *)((longlong)TVar13 + 0xb0) = 0xc80000541e73e800;
    *(EExtendedTaskPriority *)((longlong)TVar13 + 0x44) = None;
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)((longlong)TVar13 + 8));
    *(undefined ***)TVar13 =
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`11'::<lambda_2>_>::
          _vftable_;
    TVar14 = TVar13;
  }
  if (pFVar10 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::AddPrerequisites((FTaskBase *)TVar14,pFVar10);
  }
  Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)TVar14,0x100);
  FWindowsPlatformProcess::Sleep(fVar6);
  if (((TVar14 == (TTask<void>)0x0) ||
      (*(atomic<bool> *)((longlong)TVar14 + 0xd0) != (atomic<bool>)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Task.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x353,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((pFVar10 != (FTaskBase *)0x0) && ((pFVar10->Subsequents).bIsClosed == (atomic<bool>)0x0)) {
    LOCK();
    aVar3 = pFVar10->TaskTriggered;
    pFVar10->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar3 == (atomic<bool>)0x0) {
      LOCK();
      pFVar10->RefCount = (atomic<unsigned_int>)((int)pFVar10->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(pFVar10,0xd8);
    }
  }
  if (TVar14 != (TTask<void>)0x0) {
    Tasks::Private::FTaskBase::Wait((FTaskBase *)TVar14);
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)TVar14 + 0x30);
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)TVar14)(TVar14,1);
    }
  }
  if (pFVar10 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar10->RefCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar10->_padding_)(pFVar10,1);
    }
  }
  local_260 = (FTaskBase *)
              Tasks::Private::FTaskEventBase::Create
                        (
                        L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(858)"
                        );
  TVar13 = (TTask<void>)
           TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  TVar14 = TVar15;
  if (TVar13 != (TTask<void>)0x0) {
    Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)TVar13,2,true);
    in_stack_fffffffffffffd78 = 0;
    *(undefined ***)TVar13 =
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`19'::<lambda_3>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              ((FTaskBase *)TVar13,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(859)"
               ,Default,None,None);
    ((FTaskBase *)((longlong)TVar13 + 0xd8))->_padding_ = (longlong)&local_260;
    *(undefined ***)TVar13 =
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`19'::<lambda_3>_>::
          _vftable_;
    TVar14 = TVar13;
  }
  Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)TVar14,0x100);
  this_02 = (TTask<void>)
            TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  TVar13 = TVar15;
  if (this_02 != (TTask<void>)0x0) {
    Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)this_02,2,true);
    in_stack_fffffffffffffd78 = 0;
    *(undefined ***)this_02 =
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`19'::<lambda_4>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              ((FTaskBase *)this_02,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(860)"
               ,Default,None,None);
    *(undefined ***)this_02 =
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`19'::<lambda_4>_>::
          _vftable_;
    TVar13 = this_02;
  }
  if (TVar14 != (TTask<void>)0x0) {
    Tasks::Private::FTaskBase::AddPrerequisites((FTaskBase *)TVar13,(FTaskBase *)TVar14);
  }
  Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)TVar13,0x100);
  FWindowsPlatformProcess::Sleep(fVar6);
  if (((TVar13 == (TTask<void>)0x0) ||
      (*(atomic<bool> *)((longlong)TVar13 + 0xd0) != (atomic<bool>)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Task.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x35e,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_260 != (FTaskBase *)0x0) && ((local_260->Subsequents).bIsClosed == (atomic<bool>)0x0))
  {
    LOCK();
    aVar3 = local_260->TaskTriggered;
    local_260->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar3 == (atomic<bool>)0x0) {
      LOCK();
      local_260->RefCount = (atomic<unsigned_int>)((int)local_260->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(local_260,0xd8);
    }
  }
  if (TVar13 != (TTask<void>)0x0) {
    Tasks::Private::FTaskBase::Wait((FTaskBase *)TVar13);
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)TVar13 + 0x30);
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)TVar13)(TVar13,1);
    }
  }
  if (TVar14 != (TTask<void>)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)TVar14 + 0x30);
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)TVar14)(TVar14,1);
    }
  }
  if (local_260 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &local_260->RefCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)local_260->_padding_)(local_260,1);
    }
  }
  pFVar10 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  TVar16.Reference = (FTaskBase *)TVar15;
  if (pFVar10 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase(pFVar10,2,true);
    in_stack_fffffffffffffd78 = 0;
    pFVar10->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`27'::<lambda_5>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (pFVar10,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(869)"
               ,Default,None,None);
    pFVar10->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`27'::<lambda_5>_>::
          _vftable_;
    TVar16.Reference = pFVar10;
  }
  Tasks::Private::FTaskBase::TryLaunch(TVar16.Reference,0x100);
  local_1c0.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar16.Reference;
  local_1b8 = (FTaskBase *)
              Tasks::Private::FTaskEventBase::Create
                        (
                        L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(869)"
                        );
  local_128._First = &local_1c0;
  local_128._Last = &local_1b0;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>::
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>(&local_1e8,&local_128);
  pFVar18 = &local_1b0;
  lVar17 = 2;
  do {
    pFVar10 = pFVar18[-1].Pimpl.Reference;
    pFVar18 = pFVar18 + -1;
    lVar17 = lVar17 + -1;
    if (pFVar10 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar10->RefCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar10->_padding_)(pFVar10,1);
      }
    }
  } while (lVar17 != 0);
  TVar13 = (TTask<void>)
           TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  TVar14 = TVar15;
  if (TVar13 != (TTask<void>)0x0) {
    Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)TVar13,2,true);
    in_stack_fffffffffffffd78 = 0;
    *(undefined ***)TVar13 =
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`27'::<lambda_6>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              ((FTaskBase *)TVar13,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(871)"
               ,Default,None,None);
    *(undefined ***)TVar13 =
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`27'::<lambda_6>_>::
          _vftable_;
    TVar14 = TVar13;
  }
  Tasks::Private::FTaskBase::
  AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
            ((FTaskBase *)TVar14,&local_1e8,true);
  Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)TVar14,0x100);
  if (local_1e8.ArrayNum < 2) {
    in_stack_fffffffffffffd78 = 0;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (((FTaskBase *)
       *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)(local_1e8.AllocatorInstance.Data + 8) !=
       (FTaskBase *)0x0) &&
     (*(char *)((longlong)
                *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)
                 (local_1e8.AllocatorInstance.Data + 8) + 0xd0) == '\0')) {
    this_00.Pimpl.Reference =
         *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)(local_1e8.AllocatorInstance.Data + 8);
    LOCK();
    aVar3 = *(atomic<bool> *)((longlong)this_00.Pimpl.Reference + 0x45);
    *(atomic<bool> *)((longlong)this_00.Pimpl.Reference + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar3 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)this_00.Pimpl.Reference + 0x30) =
           (atomic<unsigned_int>)
           ((int)*(atomic<unsigned_int> *)((longlong)this_00.Pimpl.Reference + 0x30) + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00.Pimpl.Reference,0xd8);
    }
  }
  if (TVar14 != (TTask<void>)0x0) {
    Tasks::Private::FTaskBase::Wait((FTaskBase *)TVar14);
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)TVar14 + 0x30);
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)TVar14)(TVar14,1);
    }
  }
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)local_1e8.AllocatorInstance.Data,local_1e8.ArrayNum);
  if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.AllocatorInstance.Data);
  }
  local_238 = (TTask<void>)0x0;
  TVar13 = (TTask<void>)
           TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  TVar14 = TVar15;
  if (TVar13 != (TTask<void>)0x0) {
    Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)TVar13,2,true);
    in_stack_fffffffffffffd78 = 0;
    *(undefined ***)TVar13 =
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`28'::<lambda_7>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              ((FTaskBase *)TVar13,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(877)"
               ,Default,None,None);
    *(undefined ***)TVar13 =
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`28'::<lambda_7>_>::
          _vftable_;
    TVar14 = TVar13;
  }
  if (local_238 != (TTask<void>)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_238 + 0x30);
    iVar9 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (*(code *)**(undefined8 **)local_238)(local_238,1);
    }
  }
  local_238 = TVar14;
  Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)TVar14,0x100);
  local_230 = (TTask<void>)0x0;
  TVar13 = (TTask<void>)
           TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  TVar14 = TVar15;
  if (TVar13 != (TTask<void>)0x0) {
    Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)TVar13,2,true);
    in_stack_fffffffffffffd78 = 0;
    *(undefined ***)TVar13 =
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`28'::<lambda_8>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              ((FTaskBase *)TVar13,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(877)"
               ,Default,None,None);
    *(undefined ***)TVar13 =
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`28'::<lambda_8>_>::
          _vftable_;
    TVar14 = TVar13;
  }
  if (local_230 != (TTask<void>)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_230 + 0x30);
    iVar9 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (*(code *)**(undefined8 **)local_230)(local_230,1);
    }
  }
  local_230 = TVar14;
  Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)TVar14,0x100);
  local_140._First = &local_238;
  local_140._Last = (TTask<void> *)&local_228;
  pFVar10 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (pFVar10 == (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::AddPrerequisites<std::initializer_list<UE::Tasks::TTask<void>_>,0>
              ((FTaskBase *)0x0,&local_140,true);
    Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(pFVar10,2,true);
    in_stack_fffffffffffffd78 = 0;
    pFVar10->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`28'::<lambda_9>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (pFVar10,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(878)"
               ,Default,None,None);
    pFVar10->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`28'::<lambda_9>_>::
          _vftable_;
    Tasks::Private::FTaskBase::AddPrerequisites<std::initializer_list<UE::Tasks::TTask<void>_>,0>
              (pFVar10,&local_140,true);
    Tasks::Private::FTaskBase::TryLaunch(pFVar10,0x100);
    Tasks::Private::FTaskBase::Wait(pFVar10);
    LOCK();
    paVar1 = &pFVar10->RefCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar10->_padding_)(pFVar10,1);
    }
  }
  pTVar19 = &local_228;
  lVar17 = 2;
  do {
    pFVar10 = pTVar19[-1].Reference;
    pTVar19 = pTVar19 + -1;
    lVar17 = lVar17 + -1;
    if (pFVar10 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar10->RefCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar10->_padding_)(pFVar10,1);
      }
    }
    EVar22 = (ETaskFlags)in_stack_fffffffffffffd78;
  } while (lVar17 != 0);
  this_03 = (FTaskEvent)
            Tasks::Private::FTaskEventBase::Create
                      (
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(884)"
                      );
  local_1d8 = this_03;
  local_258 = (FTaskBase *)
              Tasks::Private::FTaskEventBase::Create
                        (
                        L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(885)"
                        );
  TVar13 = (TTask<void>)
           TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  TVar14 = TVar15;
  if (TVar13 != (TTask<void>)0x0) {
    Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)TVar13,2,true);
    EVar22 = None;
    *(undefined ***)TVar13 =
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`29'::<lambda_10>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              ((FTaskBase *)TVar13,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(886)"
               ,Default,None,None);
    ((FTaskBase *)((longlong)TVar13 + 0xd8))->_padding_ = (longlong)&local_258;
    *(undefined ***)TVar13 =
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`29'::<lambda_10>_>::
          _vftable_;
    TVar14 = TVar13;
  }
  Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)TVar14,0x100);
  local_118.Elements[0] = (FTaskBase *)this_03;
  local_118.Elements[1] = (FTaskBase *)TVar14;
  TVar13 = (TTask<void>)
           TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  if (TVar13 != (TTask<void>)0x0) {
    Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)TVar13,2,true);
    EVar22 = None;
    *(undefined ***)TVar13 =
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`29'::<lambda_11>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              ((FTaskBase *)TVar13,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(888)"
               ,Default,None,None);
    *(undefined ***)TVar13 =
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksDependenciesTest::TestBody'::`29'::<lambda_11>_>::
          _vftable_;
    TVar15 = TVar13;
  }
  Tasks::Private::FTaskBase::
  AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295>,0>
            ((FTaskBase *)TVar15,&local_118,true);
  Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)TVar15,0x100);
  FWindowsPlatformProcess::Sleep(fVar6);
  if (((TVar15 == (TTask<void>)0x0) ||
      (*(atomic<bool> *)((longlong)TVar15 + 0xd0) != (atomic<bool>)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Task.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x37a,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this_03 != (FTaskEvent)0x0) &&
     (*(atomic<bool> *)((longlong)this_03 + 0xd0) == (atomic<bool>)0x0)) {
    LOCK();
    aVar3 = *(atomic<bool> *)((longlong)this_03 + 0x45);
    *(atomic<bool> *)((longlong)this_03 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar3 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)this_03 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)this_03 + 0x30) + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_03,0xd8);
    }
  }
  FWindowsPlatformProcess::Sleep(fVar6);
  if (((TVar15 == (TTask<void>)0x0) ||
      (*(atomic<bool> *)((longlong)TVar15 + 0xd0) != (atomic<bool>)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Task.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x37e,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_258 != (FTaskBase *)0x0) && ((local_258->Subsequents).bIsClosed == (atomic<bool>)0x0))
  {
    LOCK();
    aVar3 = local_258->TaskTriggered;
    local_258->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar3 == (atomic<bool>)0x0) {
      LOCK();
      local_258->RefCount = (atomic<unsigned_int>)((int)local_258->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(local_258,0xd8);
    }
  }
  if (TVar15 != (TTask<void>)0x0) {
    Tasks::Private::FTaskBase::Wait((FTaskBase *)TVar15);
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)TVar15 + 0x30);
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)TVar15)(TVar15,1);
    }
  }
  if (TVar14 != (TTask<void>)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)TVar14 + 0x30);
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)TVar14)(TVar14,1);
    }
  }
  pFVar10 = local_258;
  if ((local_258 != (FTaskBase *)0x0) &&
     (uVar8 = std::_Atomic_integral<unsigned_int,4>::fetch_add
                        ((_Atomic_integral<unsigned_int,4> *)&local_258->RefCount,0xffffffff,acq_rel
                        ), uVar8 == 1)) {
    (**(code **)pFVar10->_padding_)(pFVar10,1);
  }
  Tasks::FTaskEvent::~FTaskEvent(&local_1d8);
  pFVar10 = (FTaskBase *)
            Tasks::Private::FTaskEventBase::Create
                      (
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(901)"
                      );
  TRefCountPtr<UE::Tasks::Private::FTaskBase>::TRefCountPtr<UE::Tasks::Private::FTaskBase>
            (&local_220.Pimpl,pFVar10,false);
  pFVar10 = (FTaskBase *)
            Tasks::Private::FTaskEventBase::Create
                      (
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(902)"
                      );
  TRefCountPtr<UE::Tasks::Private::FTaskBase>::TRefCountPtr<UE::Tasks::Private::FTaskBase>
            (&local_228,pFVar10,false);
  local_160 = &local_228;
  uVar21 = 0;
  TVar15 = Tasks::Launch<_UE::TasksTests::FTasksDependenciesTest::TestBody_::__l44::<lambda_12>_>
                     ((wchar_t *)&local_158,
                      (<lambda_12> *)
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(903)"
                      ,(ETaskPriority)&local_160,Inline,EVar22 & 0xffffff00);
  local_1d0.Pimpl.Reference = *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)TVar15;
  *(undefined8 *)TVar15 = 0;
  Tasks::TTask<void>::~TTask<void>(&local_158);
  Tasks::Private::FTaskHandle::FTaskHandle(&local_1b0,&local_220);
  Tasks::Private::FTaskHandle::FTaskHandle(&local_1a8,&local_1d0);
  local_108._First = &local_1b0;
  local_108._Last = &local_1a0;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>::
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>(&local_f8,&local_108);
  _vector_destructor_iterator_(&local_1b0,8,2,Tasks::Private::FTaskHandle::~FTaskHandle);
  EVar22 = None;
  uVar21 = uVar21 & 0xffffffffffffff00;
  Tasks::
  Launch<_UE::TasksTests::FTasksDependenciesTest::TestBody_::__l44::<lambda_13>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&>
            ((wchar_t *)&local_250,
             (<lambda_13> *)
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(906)"
             ,(TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)local_res18,
             (ETaskPriority)&local_f8,Inline,(ETaskFlags)uVar21);
  FWindowsPlatformProcess::Sleep(fVar6);
  bVar7 = Tasks::Private::FTaskHandle::IsCompleted(&local_250);
  if ((bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Task.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x38c,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  Tasks::FTaskEvent::Trigger((FTaskEvent *)&local_220);
  FWindowsPlatformProcess::Sleep(fVar6);
  bVar7 = Tasks::Private::FTaskHandle::IsCompleted(&local_250);
  if ((bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Task.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x390,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  Tasks::FTaskEvent::Trigger((FTaskEvent *)&local_228);
  Tasks::Private::FTaskHandle::Wait(&local_250);
  Tasks::TTask<void>::~TTask<void>((TTask<void> *)&local_250);
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>(&local_f8);
  Tasks::Private::FTaskHandle::~FTaskHandle(&local_1d0);
  Tasks::FTaskEvent::~FTaskEvent((FTaskEvent *)&local_228);
  Tasks::FTaskEvent::~FTaskEvent((FTaskEvent *)&local_220);
  Tasks::FPipe::FPipe(&local_c8,
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(919)"
                     );
  pFVar10 = (FTaskBase *)
            Tasks::Private::FTaskEventBase::Create
                      (
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(920)"
                      );
  TRefCountPtr<UE::Tasks::Private::FTaskBase>::TRefCountPtr<UE::Tasks::Private::FTaskBase>
            (&local_210,pFVar10,false);
  pTVar19 = &local_210;
  EVar20 = (ETaskFlags)CONCAT71((int7)(uVar21 >> 8),1);
  TVar15 = Tasks::FPipe::
           Launch<_UE::TasksTests::FTasksDependenciesTest::TestBody_::__l59::<lambda_14>,UE::Tasks::FTaskEvent_&>
                     (&local_c8,(wchar_t *)&local_150,
                      (<lambda_14> *)
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(922)"
                      ,(FTaskEvent *)(local_res18 + 8),(ETaskPriority)pTVar19,Inline,
                      EVar22 & 0xffffff00);
  iVar9 = (int)((ulonglong)pTVar19 >> 8);
  local_218.Pimpl.Reference = *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)TVar15;
  *(undefined8 *)TVar15 = 0;
  Tasks::TTask<void>::~TTask<void>(&local_150);
  FWindowsPlatformProcess::Sleep(fVar6);
  bVar7 = Tasks::Private::FTaskHandle::IsCompleted(&local_218);
  if ((bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Task1.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x39c,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar23 = None;
  TVar15 = Tasks::FPipe::
           Launch<_UE::TasksTests::FTasksDependenciesTest::TestBody_::__l59::<lambda_15>_>
                     (&local_c8,(wchar_t *)&local_148,
                      (<lambda_15> *)
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(926)"
                      ,(ETaskPriority)&local_268,Inline,EVar20 & 0xffffff00);
  local_1c8.Pimpl.Reference = *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)TVar15;
  *(undefined8 *)TVar15 = 0;
  Tasks::TTask<void>::~TTask<void>(&local_148);
  Tasks::Private::FTaskHandle::Wait(&local_1c8);
  Tasks::FTaskEvent::Trigger((FTaskEvent *)&local_210);
  Tasks::Private::FTaskHandle::Wait(&local_218);
  Tasks::FPipe::WaitUntilEmpty(&local_c8,(FTimespan)0x7fffffffffffffff);
  Tasks::Private::FTaskHandle::~FTaskHandle(&local_1c8);
  Tasks::Private::FTaskHandle::~FTaskHandle(&local_218);
  Tasks::FTaskEvent::~FTaskEvent((FTaskEvent *)&local_210);
  Tasks::FPipe::~FPipe(&local_c8);
  Tasks::FPipe::FPipe(&local_a0,
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(936)"
                     );
  pFVar10 = (FTaskBase *)
            Tasks::Private::FTaskEventBase::Create
                      (
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(937)"
                      );
  TRefCountPtr<UE::Tasks::Private::FTaskBase>::TRefCountPtr<UE::Tasks::Private::FTaskBase>
            (&local_200,pFVar10,false);
  pFVar10 = (FTaskBase *)
            Tasks::Private::FTaskEventBase::Create
                      (
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(938)"
                      );
  TRefCountPtr<UE::Tasks::Private::FTaskBase>::TRefCountPtr<UE::Tasks::Private::FTaskBase>
            (&local_208,pFVar10,false);
  local_1a0.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)&local_208;
  TVar15 = Tasks::Launch<_UE::TasksTests::FTasksDependenciesTest::TestBody_::__l67::<lambda_16>_>
                     ((wchar_t *)&local_198,
                      (<lambda_16> *)
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(939)"
                      ,(ETaskPriority)&local_1a0,Inline,iVar9 << 8);
  TVar16.Reference = *(FTaskBase **)TVar15;
  *(undefined8 *)TVar15 = 0;
  local_188.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar16.Reference;
  Tasks::TTask<void>::~TTask<void>(&local_198);
  local_e8 = local_200.Reference;
  EVar22 = (ETaskFlags)&local_e8;
  EVar23 = EVar23 & 0xffffff00;
  local_e0 = TVar16.Reference;
  TVar15 = Tasks::FPipe::
           Launch<_UE::TasksTests::FTasksDependenciesTest::TestBody_::__l67::<lambda_17>,TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295>_>
                     (&local_a0,(wchar_t *)&local_190,
                      (<lambda_17> *)
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(941)"
                      ,(TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295> *)local_267,
                      (ETaskPriority)&local_e8,Inline,EVar23);
  local_248.Pimpl.Reference = *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)TVar15;
  *(undefined8 *)TVar15 = 0;
  Tasks::TTask<void>::~TTask<void>(&local_190);
  FWindowsPlatformProcess::Sleep(fVar6);
  bVar7 = Tasks::Private::FTaskHandle::IsCompleted(&local_248);
  if ((bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Task.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x3af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  Tasks::FTaskEvent::Trigger((FTaskEvent *)&local_200);
  FWindowsPlatformProcess::Sleep(fVar6);
  bVar7 = Tasks::Private::FTaskHandle::IsCompleted(&local_248);
  if ((bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Task.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x3b3,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  Tasks::FTaskEvent::Trigger((FTaskEvent *)&local_208);
  Tasks::Private::FTaskHandle::Wait(&local_248);
  Tasks::FPipe::WaitUntilEmpty(&local_a0,(FTimespan)0x7fffffffffffffff);
  Tasks::Private::FTaskHandle::~FTaskHandle(&local_248);
  Tasks::Private::FTaskHandle::~FTaskHandle(&local_188);
  Tasks::FTaskEvent::~FTaskEvent((FTaskEvent *)&local_208);
  Tasks::FTaskEvent::~FTaskEvent((FTaskEvent *)&local_200);
  Tasks::FPipe::~FPipe(&local_a0);
  Tasks::FPipe::FPipe(&local_78,
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(956)"
                     );
  pFVar10 = (FTaskBase *)
            Tasks::Private::FTaskEventBase::Create
                      (
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(957)"
                      );
  TRefCountPtr<UE::Tasks::Private::FTaskBase>::TRefCountPtr<UE::Tasks::Private::FTaskBase>
            (&local_1f0,pFVar10,false);
  pFVar10 = (FTaskBase *)
            Tasks::Private::FTaskEventBase::Create
                      (
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(958)"
                      );
  TRefCountPtr<UE::Tasks::Private::FTaskBase>::TRefCountPtr<UE::Tasks::Private::FTaskBase>
            (&local_1f8,pFVar10,false);
  local_180 = &local_1f8;
  TVar15 = Tasks::Launch<_UE::TasksTests::FTasksDependenciesTest::TestBody_::__l82::<lambda_18>_>
                     ((wchar_t *)&local_178,
                      (<lambda_18> *)
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(959)"
                      ,(ETaskPriority)&local_180,Inline,EVar22 & 0xffffff00);
  TVar16.Reference = *(FTaskBase **)TVar15;
  *(undefined8 *)TVar15 = 0;
  local_168.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar16.Reference;
  Tasks::TTask<void>::~TTask<void>(&local_178);
  local_d8 = local_1f0.Reference;
  local_d0 = TVar16.Reference;
  TVar15 = Tasks::FPipe::
           Launch<_UE::TasksTests::FTasksDependenciesTest::TestBody_::__l82::<lambda_19>,TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295>_>
                     (&local_78,(wchar_t *)&local_170,
                      (<lambda_19> *)
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(961)"
                      ,(TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295> *)(local_267 + 1)
                      ,(ETaskPriority)&local_d8,Inline,EVar23 & 0xffffff00);
  local_240.Pimpl.Reference = *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)TVar15;
  *(undefined8 *)TVar15 = 0;
  Tasks::TTask<void>::~TTask<void>(&local_170);
  FWindowsPlatformProcess::Sleep(fVar6);
  bVar7 = Tasks::Private::FTaskHandle::IsCompleted(&local_240);
  if ((bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Task.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x3c3,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  Tasks::FTaskEvent::Trigger((FTaskEvent *)&local_1f0);
  FWindowsPlatformProcess::Sleep(fVar6);
  bVar7 = Tasks::Private::FTaskHandle::IsCompleted(&local_240);
  if ((bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Task.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                         ,0x3c7,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  Tasks::FTaskEvent::Trigger((FTaskEvent *)&local_1f8);
  Tasks::Private::FTaskHandle::Wait(&local_240);
  Tasks::FPipe::WaitUntilEmpty(&local_78,(FTimespan)0x7fffffffffffffff);
  Tasks::Private::FTaskHandle::~FTaskHandle(&local_240);
  Tasks::Private::FTaskHandle::~FTaskHandle(&local_168);
  Tasks::FTaskEvent::~FTaskEvent((FTaskEvent *)&local_1f8);
  Tasks::FTaskEvent::~FTaskEvent((FTaskEvent *)&local_1f0);
  Tasks::FPipe::~FPipe(&local_78);
  iVar9 = std::_Atomic_storage<int,4>::load
                    ((_Atomic_storage<int,4> *)&CpuChannel->Enabled,memory_order_relaxed);
  if (iVar9 < 0) {
    Benchmark<5,void_(__cdecl&)(void)>
              (L"DependenciesPerfTest<150, 150>",DependenciesPerfTest<150,150>);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId975,L"DependenciesPerfTest<150, 150>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
               ,0x3cf);
    uVar8 = std::_Atomic_storage<int,4>::load
                      ((_Atomic_storage<int,4> *)&__CpuProfilerEventSpecId975,memory_order_relaxed);
    FCpuProfilerTrace::OutputBeginEvent(uVar8);
    Benchmark<5,void_(__cdecl&)(void)>
              (L"DependenciesPerfTest<150, 150>",DependenciesPerfTest<150,150>);
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

