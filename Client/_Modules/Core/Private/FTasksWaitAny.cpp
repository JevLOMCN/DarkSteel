// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141d5c480

EAutomationTestFlags __thiscall UE::TasksTests::FTasksWaitAny::GetTestFlags(FTasksWaitAny *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141d5c490

bool __thiscall UE::TasksTests::FTasksWaitAny::IsStressTest(FTasksWaitAny *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141d5c4a0

uint __thiscall UE::TasksTests::FTasksWaitAny::GetRequiredDeviceNum(FTasksWaitAny *this)

{
  return 1;
}

// GetTestSourceFileName @ 141d5c4b0

FString * __thiscall
UE::TasksTests::FTasksWaitAny::GetTestSourceFileName
          (FTasksWaitAny *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141d5c4e0

int __thiscall UE::TasksTests::FTasksWaitAny::GetTestSourceFileLine(FTasksWaitAny *this)

{
  return 0x5d7;
}

// GetTests @ 141d5c4f0

/* WARNING: Removing unreachable block (ram,0x000141d5c66e) */

void __thiscall
UE::TasksTests::FTasksWaitAny::GetTests
          (FTasksWaitAny *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141d5c690

bool __thiscall UE::TasksTests::FTasksWaitAny::RunTest(FTasksWaitAny *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141d5c6c0

FString * __thiscall
UE::TasksTests::FTasksWaitAny::GetBeautifiedTestName
          (FTasksWaitAny *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTasksWaitAny @ 141d6c720

FTasksWaitAny * __thiscall
UE::TasksTests::FTasksWaitAny::FTasksWaitAny(FTasksWaitAny *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTasksWaitAny_TasksTests_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Async::Tasks::WaitAny");
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

// TestBody @ 141d89bb0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UE::TasksTests::FTasksWaitAny::TestBody(FTasksWaitAny *this,FString *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<bool> aVar3;
  atomic<unsigned_int> aVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FTaskBase *apFVar9 [1];
  TRefCountPtr<UE::Tasks::Private::FTaskBase> TVar10;
  FTask *pFVar11;
  FTaskBase *pFVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  FTaskHandle *pFVar16;
  undefined1 *puVar17;
  undefined1 auVar18 [16];
  TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295> local_res18;
  TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295> local_res20;
  TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295> local_78;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_70;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_60;
  FTaskHandle local_50;
  FTaskBase *local_48;
  FTaskHandle local_40;
  FTaskBase *local_38;
  undefined1 local_30 [8];
  
  apFVar9[0] = (FTaskBase *)
               Tasks::Private::FTaskEventBase::Create
                         (
                         L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(1498)"
                         );
  local_res18.Elements[0] = (FTaskBase * [1])(FTaskBase * [1])apFVar9[0];
  TVar10.Reference =
       TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
       ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                   *)&Tasks::Private::SmallTaskAllocator);
  lVar14 = 2;
  if (TVar10.Reference == (FTaskBase *)0x0) {
    TVar10.Reference = (FTaskBase *)0x0;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(TVar10.Reference,2,true);
    (TVar10.Reference)->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksWaitAny::TestBody'::`3'::<lambda_1>,void,void>
          ::_vftable_;
    if ((*(ulonglong *)&((TVar10.Reference)->LowLevelTask).field_0x38 & 0x20) == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    (**(code **)(*(longlong *)&((TVar10.Reference)->LowLevelTask).field_0x28 + 0x18))
              (&((TVar10.Reference)->LowLevelTask).field_0x28,&(TVar10.Reference)->LowLevelTask);
    *(undefined ***)&((TVar10.Reference)->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(TVar10.Reference)->LowLevelTask = TVar10.Reference;
    *(FTaskBase **)&((TVar10.Reference)->LowLevelTask).field_0x8 = TVar10.Reference;
    pFVar11 = LowLevelTasks::FTask::GetActiveTask();
    uVar13 = 0;
    if (pFVar11 != (FTask *)0x0) {
      uVar13 = *(undefined8 *)&pFVar11->field_0x30;
    }
    *(undefined8 *)&((TVar10.Reference)->LowLevelTask).field_0x30 = uVar13;
    *(undefined8 *)&((TVar10.Reference)->LowLevelTask).field_0x38 = 0xc80000541e7e3c00;
    (TVar10.Reference)->ExtendedPriority = None;
    FInheritedContextBase::CaptureInheritedContext
              ((FInheritedContextBase *)&(TVar10.Reference)->_padding_);
    (TVar10.Reference)->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksWaitAny::TestBody'::`3'::<lambda_1>_>::_vftable_;
  }
  Tasks::Private::FTaskBase::
  AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>,0>
            (TVar10.Reference,&local_res18,true);
  Tasks::Private::FTaskBase::TryLaunch(TVar10.Reference,0x100);
  local_res20.Elements[0] = (FTaskBase * [1])(FTaskBase * [1])apFVar9[0];
  local_50.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar10.Reference;
  pFVar12 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (pFVar12 == (FTaskBase *)0x0) {
    pFVar12 = (FTaskBase *)0x0;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(pFVar12,2,true);
    pFVar12->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksWaitAny::TestBody'::`3'::<lambda_2>,void,void>
          ::_vftable_;
    if ((*(ulonglong *)&(pFVar12->LowLevelTask).field_0x38 & 0x20) == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    (**(code **)(*(longlong *)&(pFVar12->LowLevelTask).field_0x28 + 0x18))
              (&(pFVar12->LowLevelTask).field_0x28,&pFVar12->LowLevelTask);
    *(undefined ***)&(pFVar12->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&pFVar12->LowLevelTask = pFVar12;
    *(FTaskBase **)&(pFVar12->LowLevelTask).field_0x8 = pFVar12;
    pFVar11 = LowLevelTasks::FTask::GetActiveTask();
    uVar13 = 0;
    if (pFVar11 != (FTask *)0x0) {
      uVar13 = *(undefined8 *)&pFVar11->field_0x30;
    }
    *(undefined8 *)&(pFVar12->LowLevelTask).field_0x30 = uVar13;
    *(undefined8 *)&(pFVar12->LowLevelTask).field_0x38 = 0xc80000541e7e6800;
    pFVar12->ExtendedPriority = None;
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar12->_padding_);
    pFVar12->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksWaitAny::TestBody'::`3'::<lambda_2>_>::_vftable_;
  }
  Tasks::Private::FTaskBase::
  AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>,0>
            (pFVar12,&local_res20,true);
  Tasks::Private::FTaskBase::TryLaunch(pFVar12,0x100);
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 2;
  local_48 = pFVar12;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_70.AllocatorInstance,2,&local_70.ArrayMax);
  ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
            (local_70.AllocatorInstance.Data,&local_50,2);
  pFVar16 = &local_40;
  lVar15 = 2;
  do {
    pFVar12 = pFVar16[-1].Pimpl.Reference;
    pFVar16 = pFVar16 + -1;
    lVar15 = lVar15 + -1;
    if (pFVar12 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar12->RefCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar12->_padding_)(pFVar12,1);
      }
    }
  } while (lVar15 != 0);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = __real_40c3884000000000;
  auVar18 = roundpd(auVar18,auVar18,1);
  iVar8 = Tasks::WaitAny<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
                    (&local_70,(FTimespan)(longlong)auVar18._0_8_);
  if (iVar8 != -1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("WaitAny(Tasks, FTimespan::FromMilliseconds(1.0)) == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                       ,0x5e2,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if ((apFVar9[0] != (FTaskBase *)0x0) && ((apFVar9[0]->Subsequents).bIsClosed == (atomic<bool>)0x0)
     ) {
    LOCK();
    aVar3 = apFVar9[0]->TaskTriggered;
    apFVar9[0]->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar3 == (atomic<bool>)0x0) {
      LOCK();
      apFVar9[0]->RefCount = (atomic<unsigned_int>)((int)apFVar9[0]->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(apFVar9[0],0xd8);
    }
  }
  iVar8 = Tasks::WaitAny<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
                    (&local_70,(FTimespan)0x7fffffffffffffff);
  if (iVar8 == -1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("WaitAny(Tasks) != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                       ,0x5e6,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)local_70.AllocatorInstance.Data,local_70.ArrayNum);
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  if (apFVar9[0] != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &apFVar9[0]->RefCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)apFVar9[0]->_padding_)(apFVar9[0],1);
    }
  }
  apFVar9[0] = (FTaskBase *)
               Tasks::Private::FTaskEventBase::Create
                         (
                         L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(1514)"
                         );
  TVar10.Reference =
       TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
       ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                   *)&Tasks::Private::SmallTaskAllocator);
  if (TVar10.Reference == (FTaskBase *)0x0) {
    TVar10.Reference = (FTaskBase *)0x0;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(TVar10.Reference,2,true);
    (TVar10.Reference)->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksWaitAny::TestBody'::`18'::<lambda_3>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (TVar10.Reference,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(1518)"
               ,Default,None,None);
    (TVar10.Reference)->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksWaitAny::TestBody'::`18'::<lambda_3>_>::_vftable_;
  }
  Tasks::Private::FTaskBase::TryLaunch(TVar10.Reference,0x100);
  local_78.Elements[0] = (FTaskBase * [1])(FTaskBase * [1])apFVar9[0];
  local_40.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar10.Reference;
  pFVar12 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (pFVar12 == (FTaskBase *)0x0) {
    pFVar12 = (FTaskBase *)0x0;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(pFVar12,2,true);
    pFVar12->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksWaitAny::TestBody'::`18'::<lambda_4>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (pFVar12,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(1519)"
               ,Default,None,None);
    pFVar12->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksWaitAny::TestBody'::`18'::<lambda_4>_>::_vftable_;
  }
  Tasks::Private::FTaskBase::
  AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>,0>
            (pFVar12,&local_78,true);
  Tasks::Private::FTaskBase::TryLaunch(pFVar12,0x100);
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 2;
  local_38 = pFVar12;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_60.AllocatorInstance,2,&local_60.ArrayMax);
  ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
            (local_60.AllocatorInstance.Data,&local_40,2);
  puVar17 = local_30;
  do {
    puVar5 = *(undefined8 **)(puVar17 + -8);
    puVar17 = puVar17 + -8;
    lVar14 = lVar14 + -1;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar5 + 6);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  } while (lVar14 != 0);
  iVar8 = Tasks::WaitAny<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
                    (&local_60,(FTimespan)0x7fffffffffffffff);
  if (iVar8 != 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("WaitAny(Tasks) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                       ,0x5f2,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if ((apFVar9[0] != (FTaskBase *)0x0) && ((apFVar9[0]->Subsequents).bIsClosed == (atomic<bool>)0x0)
     ) {
    LOCK();
    aVar3 = apFVar9[0]->TaskTriggered;
    apFVar9[0]->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar3 == (atomic<bool>)0x0) {
      LOCK();
      apFVar9[0]->RefCount = (atomic<unsigned_int>)((int)apFVar9[0]->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(apFVar9[0],0xd8);
    }
  }
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)local_60.AllocatorInstance.Data,local_60.ArrayNum);
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  if (apFVar9[0] != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &apFVar9[0]->RefCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)apFVar9[0]->_padding_)(apFVar9[0],1);
    }
  }
  return;
}

