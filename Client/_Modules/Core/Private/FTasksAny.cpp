// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141d5ca00

EAutomationTestFlags __thiscall UE::TasksTests::FTasksAny::GetTestFlags(FTasksAny *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141d5ca10

bool __thiscall UE::TasksTests::FTasksAny::IsStressTest(FTasksAny *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141d5ca20

uint __thiscall UE::TasksTests::FTasksAny::GetRequiredDeviceNum(FTasksAny *this)

{
  return 1;
}

// GetTestSourceFileName @ 141d5ca30

FString * __thiscall
UE::TasksTests::FTasksAny::GetTestSourceFileName(FTasksAny *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141d5ca60

int __thiscall UE::TasksTests::FTasksAny::GetTestSourceFileLine(FTasksAny *this)

{
  return 0x5f8;
}

// GetTests @ 141d5ca70

/* WARNING: Removing unreachable block (ram,0x000141d5cbee) */

void __thiscall
UE::TasksTests::FTasksAny::GetTests
          (FTasksAny *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141d5cc10

bool __thiscall UE::TasksTests::FTasksAny::RunTest(FTasksAny *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141d5cc40

FString * __thiscall
UE::TasksTests::FTasksAny::GetBeautifiedTestName(FTasksAny *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTasksAny @ 141d6a4b0

FTasksAny * __thiscall UE::TasksTests::FTasksAny::FTasksAny(FTasksAny *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTasksAny_TasksTests_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Async::Tasks::Any");
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

// TestBody @ 141d81840

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UE::TasksTests::FTasksAny::TestBody(FTasksAny *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  atomic<unsigned_int> *paVar2;
  int *piVar3;
  atomic<bool> aVar4;
  atomic<unsigned_int> aVar5;
  int iVar6;
  undefined8 *puVar7;
  code *pcVar8;
  bool bVar9;
  FTaskBase *apFVar10 [1];
  TRefCountPtr<UE::Tasks::Private::FTaskBase> TVar11;
  FTask *pFVar12;
  FTaskBase *pFVar13;
  undefined8 uVar14;
  FTaskHandle FVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 *puVar18;
  FTaskHandle *pFVar19;
  undefined1 auVar20 [16];
  TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295> local_res18;
  TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295> local_res20;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295> local_78;
  undefined1 local_70 [8];
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FTaskHandle local_48;
  FTaskBase *local_40;
  FTaskHandle local_38;
  FTaskBase *local_30;
  
  apFVar10[0] = (FTaskBase *)
                Tasks::Private::FTaskEventBase::Create
                          (
                          L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(1531)"
                          );
  local_res18.Elements[0] = (FTaskBase * [1])(FTaskBase * [1])apFVar10[0];
  TVar11.Reference =
       TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
       ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                   *)&Tasks::Private::SmallTaskAllocator);
  lVar16 = 2;
  if (TVar11.Reference == (FTaskBase *)0x0) {
    TVar11.Reference = (FTaskBase *)0x0;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(TVar11.Reference,2,true);
    (TVar11.Reference)->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksAny::TestBody'::`3'::<lambda_1>,void,void>::
          _vftable_;
    if ((*(ulonglong *)&((TVar11.Reference)->LowLevelTask).field_0x38 & 0x20) == 0) {
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
    (**(code **)(*(longlong *)&((TVar11.Reference)->LowLevelTask).field_0x28 + 0x18))
              (&((TVar11.Reference)->LowLevelTask).field_0x28,&(TVar11.Reference)->LowLevelTask);
    *(undefined ***)&((TVar11.Reference)->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(TVar11.Reference)->LowLevelTask = TVar11.Reference;
    *(FTaskBase **)&((TVar11.Reference)->LowLevelTask).field_0x8 = TVar11.Reference;
    pFVar12 = LowLevelTasks::FTask::GetActiveTask();
    uVar14 = 0;
    if (pFVar12 != (FTask *)0x0) {
      uVar14 = *(undefined8 *)&pFVar12->field_0x30;
    }
    *(undefined8 *)&((TVar11.Reference)->LowLevelTask).field_0x30 = uVar14;
    *(undefined8 *)&((TVar11.Reference)->LowLevelTask).field_0x38 = 0xc80000541e7f6400;
    (TVar11.Reference)->ExtendedPriority = None;
    FInheritedContextBase::CaptureInheritedContext
              ((FInheritedContextBase *)&(TVar11.Reference)->_padding_);
    (TVar11.Reference)->_padding_ =
         (longlong)
         &Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksAny::TestBody'::`3'::<lambda_1>_>::
          _vftable_;
  }
  Tasks::Private::FTaskBase::
  AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>,0>
            (TVar11.Reference,&local_res18,true);
  Tasks::Private::FTaskBase::TryLaunch(TVar11.Reference,0x100);
  local_res20.Elements[0] = (FTaskBase * [1])(FTaskBase * [1])apFVar10[0];
  local_48.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar11.Reference;
  pFVar13 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (pFVar13 == (FTaskBase *)0x0) {
    pFVar13 = (FTaskBase *)0x0;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(pFVar13,2,true);
    pFVar13->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksAny::TestBody'::`3'::<lambda_2>,void,void>::
          _vftable_;
    if ((*(ulonglong *)&(pFVar13->LowLevelTask).field_0x38 & 0x20) == 0) {
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
    (**(code **)(*(longlong *)&(pFVar13->LowLevelTask).field_0x28 + 0x18))
              (&(pFVar13->LowLevelTask).field_0x28,&pFVar13->LowLevelTask);
    *(undefined ***)&(pFVar13->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&pFVar13->LowLevelTask = pFVar13;
    *(FTaskBase **)&(pFVar13->LowLevelTask).field_0x8 = pFVar13;
    pFVar12 = LowLevelTasks::FTask::GetActiveTask();
    uVar14 = 0;
    if (pFVar12 != (FTask *)0x0) {
      uVar14 = *(undefined8 *)&pFVar12->field_0x30;
    }
    *(undefined8 *)&(pFVar13->LowLevelTask).field_0x30 = uVar14;
    *(undefined8 *)&(pFVar13->LowLevelTask).field_0x38 = 0xc80000541e7f9000;
    pFVar13->ExtendedPriority = None;
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar13->_padding_);
    pFVar13->_padding_ =
         (longlong)
         &Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksAny::TestBody'::`3'::<lambda_2>_>::
          _vftable_;
  }
  Tasks::Private::FTaskBase::
  AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>,0>
            (pFVar13,&local_res20,true);
  Tasks::Private::FTaskBase::TryLaunch(pFVar13,0x100);
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 2;
  local_40 = pFVar13;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_68,2,&local_5c);
  ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
            (local_68.Data,&local_48,2);
  pFVar19 = &local_38;
  lVar17 = 2;
  do {
    pFVar13 = pFVar19[-1].Pimpl.Reference;
    pFVar19 = pFVar19 + -1;
    lVar17 = lVar17 + -1;
    if (pFVar13 != (FTaskBase *)0x0) {
      LOCK();
      paVar2 = &pFVar13->RefCount;
      aVar5 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar5 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar13->_padding_)(pFVar13,1);
      }
    }
  } while (lVar17 != 0);
  FVar15 = Tasks::Any<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
                     ((TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)
                      local_88);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = __real_408f440000000000;
  auVar20 = roundpd(auVar20,auVar20,1);
  bVar9 = Tasks::Private::FTaskHandle::Wait
                    ((FTaskHandle *)FVar15.Pimpl.Reference,(FTimespan)(longlong)auVar20._0_8_);
  if (local_88 != (undefined1  [8])0x0) {
    LOCK();
    pFVar1 = (FScriptContainerElement *)((longlong)local_88 + 0x30);
    iVar6 = *(int *)pFVar1;
    *(int *)pFVar1 = *(int *)pFVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (*(code *)**(undefined8 **)local_88)(local_88,1);
    }
  }
  if (bVar9) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Any(Tasks).Wait(FTimespan::FromMilliseconds(0.1))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                       ,0x603,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if ((apFVar10[0] != (FTaskBase *)0x0) &&
     ((apFVar10[0]->Subsequents).bIsClosed == (atomic<bool>)0x0)) {
    LOCK();
    aVar4 = apFVar10[0]->TaskTriggered;
    apFVar10[0]->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar4 == (atomic<bool>)0x0) {
      LOCK();
      apFVar10[0]->RefCount = (atomic<unsigned_int>)((int)apFVar10[0]->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(apFVar10[0],0xd8);
    }
  }
  FVar15 = Tasks::Any<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
                     ((TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)
                      local_80);
  if (*(FTaskBase **)FVar15.Pimpl.Reference != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::Wait(*(FTaskBase **)FVar15.Pimpl.Reference);
  }
  if (local_80 != (undefined1  [8])0x0) {
    LOCK();
    pFVar1 = (FScriptContainerElement *)((longlong)local_80 + 0x30);
    iVar6 = *(int *)pFVar1;
    *(int *)pFVar1 = *(int *)pFVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (*(code *)**(undefined8 **)local_80)(local_80,1);
    }
  }
  DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)local_68.Data,local_60);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (apFVar10[0] != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = &apFVar10[0]->RefCount;
    aVar5 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar5 == (atomic<unsigned_int>)0x1) {
      (**(code **)apFVar10[0]->_padding_)(apFVar10[0],1);
    }
  }
  apFVar10[0] = (FTaskBase *)
                Tasks::Private::FTaskEventBase::Create
                          (
                          L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(1547)"
                          );
  TVar11.Reference =
       TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
       ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                   *)&Tasks::Private::SmallTaskAllocator);
  if (TVar11.Reference == (FTaskBase *)0x0) {
    TVar11.Reference = (FTaskBase *)0x0;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(TVar11.Reference,2,true);
    (TVar11.Reference)->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksAny::TestBody'::`11'::<lambda_3>,void,void>::
          _vftable_;
    Tasks::Private::FTaskBase::Init
              (TVar11.Reference,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(1551)"
               ,Default,None,None);
    (TVar11.Reference)->_padding_ =
         (longlong)
         &Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksAny::TestBody'::`11'::<lambda_3>_>
          ::_vftable_;
  }
  Tasks::Private::FTaskBase::TryLaunch(TVar11.Reference,0x100);
  local_78.Elements[0] = (FTaskBase * [1])(FTaskBase * [1])apFVar10[0];
  local_38.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar11.Reference;
  pFVar13 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (pFVar13 == (FTaskBase *)0x0) {
    pFVar13 = (FTaskBase *)0x0;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(pFVar13,2,true);
    pFVar13->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksAny::TestBody'::`11'::<lambda_4>,void,void>::
          _vftable_;
    Tasks::Private::FTaskBase::Init
              (pFVar13,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(1552)"
               ,Default,None,None);
    pFVar13->_padding_ =
         (longlong)
         &Tasks::Private::TExecutableTask<`UE::TasksTests::FTasksAny::TestBody'::`11'::<lambda_4>_>
          ::_vftable_;
  }
  Tasks::Private::FTaskBase::
  AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>,0>
            (pFVar13,&local_78,true);
  Tasks::Private::FTaskBase::TryLaunch(pFVar13,0x100);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 2;
  local_30 = pFVar13;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_58,2,&local_4c);
  ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
            (local_58.Data,&local_38,2);
  puVar18 = &stack0xffffffffffffffd8;
  do {
    puVar7 = *(undefined8 **)(puVar18 + -8);
    puVar18 = puVar18 + -8;
    lVar16 = lVar16 + -1;
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      piVar3 = (int *)(puVar7 + 6);
      iVar6 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
  } while (lVar16 != 0);
  FVar15 = Tasks::Any<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
                     ((TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)
                      local_70);
  if (*(FTaskBase **)FVar15.Pimpl.Reference != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::Wait(*(FTaskBase **)FVar15.Pimpl.Reference);
  }
  if (local_70 != (undefined1  [8])0x0) {
    LOCK();
    pFVar1 = (FScriptContainerElement *)((longlong)local_70 + 0x30);
    iVar6 = *(int *)pFVar1;
    *(int *)pFVar1 = *(int *)pFVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (*(code *)**(undefined8 **)local_70)(local_70,1);
    }
  }
  if ((apFVar10[0] != (FTaskBase *)0x0) &&
     ((apFVar10[0]->Subsequents).bIsClosed == (atomic<bool>)0x0)) {
    LOCK();
    aVar4 = apFVar10[0]->TaskTriggered;
    apFVar10[0]->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar4 == (atomic<bool>)0x0) {
      LOCK();
      apFVar10[0]->RefCount = (atomic<unsigned_int>)((int)apFVar10[0]->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(apFVar10[0],0xd8);
    }
  }
  DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)local_58.Data,local_50);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (apFVar10[0] != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = &apFVar10[0]->RefCount;
    aVar5 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar5 == (atomic<unsigned_int>)0x1) {
      (**(code **)apFVar10[0]->_padding_)(apFVar10[0],1);
    }
  }
  return;
}

