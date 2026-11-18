// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141d5bf00

EAutomationTestFlags __thiscall
UE::TasksTests::FTasksMakeCompletedTask::GetTestFlags(FTasksMakeCompletedTask *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141d5bf10

bool __thiscall UE::TasksTests::FTasksMakeCompletedTask::IsStressTest(FTasksMakeCompletedTask *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141d5bf20

uint __thiscall
UE::TasksTests::FTasksMakeCompletedTask::GetRequiredDeviceNum(FTasksMakeCompletedTask *this)

{
  return 1;
}

// GetTestSourceFileName @ 141d5bf30

FString * __thiscall
UE::TasksTests::FTasksMakeCompletedTask::GetTestSourceFileName
          (FTasksMakeCompletedTask *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141d5bf60

int __thiscall
UE::TasksTests::FTasksMakeCompletedTask::GetTestSourceFileLine(FTasksMakeCompletedTask *this)

{
  return 0x58c;
}

// GetTests @ 141d5bf70

/* WARNING: Removing unreachable block (ram,0x000141d5c0ee) */

void __thiscall
UE::TasksTests::FTasksMakeCompletedTask::GetTests
          (FTasksMakeCompletedTask *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141d5c110

bool __thiscall
UE::TasksTests::FTasksMakeCompletedTask::RunTest(FTasksMakeCompletedTask *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141d5c140

FString * __thiscall
UE::TasksTests::FTasksMakeCompletedTask::GetBeautifiedTestName
          (FTasksMakeCompletedTask *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTasksMakeCompletedTask @ 141d6ba70

FTasksMakeCompletedTask * __thiscall
UE::TasksTests::FTasksMakeCompletedTask::FTasksMakeCompletedTask
          (FTasksMakeCompletedTask *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTasksMakeCompletedTask_TasksTests_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Tasks::MakeCompletedTask");
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

// TestBody @ 141d86580

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::TasksTests::FTasksMakeCompletedTask::TestBody(FTasksMakeCompletedTask *this,FString *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTaskBase *pFVar6;
  FTask *pFVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 local_38 [2];
  undefined4 *local_30;
  
  local_res20[0] = 0x2a;
  pFVar6 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  if (pFVar6 == (FTaskBase *)0x0) {
    pFVar6 = (FTaskBase *)0x0;
    Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0xc6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(pFVar6,2,true);
    pFVar6->_padding_ = (longlong)&___7__TTaskWithResult_H_Private_Tasks_UE__6B_;
    if ((*(ulonglong *)&(pFVar6->LowLevelTask).field_0x38 & 0x20) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(*(longlong *)&(pFVar6->LowLevelTask).field_0x28 + 0x18))
              (&(pFVar6->LowLevelTask).field_0x28,&pFVar6->LowLevelTask);
    *(undefined ***)&(pFVar6->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&pFVar6->LowLevelTask = pFVar6;
    *(FTaskBase **)&(pFVar6->LowLevelTask).field_0x8 = pFVar6;
    pFVar7 = LowLevelTasks::FTask::GetActiveTask();
    uVar8 = 0;
    if (pFVar7 != (FTask *)0x0) {
      uVar8 = *(undefined8 *)&pFVar7->field_0x30;
    }
    *(undefined8 *)&(pFVar6->LowLevelTask).field_0x30 = uVar8;
    *(undefined8 *)&(pFVar6->LowLevelTask).field_0x38 = 0xc80000541e87fc00;
    pFVar6->ExtendedPriority = Inline;
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar6->_padding_);
    pFVar6[1]._padding_ = (longlong)local_res20;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____MakeCompletedTask_HH_Tasks_UE__YA_AV__TTask_H_23___QEAH_Z__Private_Tasks_UE__6B_
    ;
    Tasks::Private::FTaskBase::TryLaunch(pFVar6,0x100);
    Tasks::Private::FTaskBase::Wait(pFVar6);
  }
  if ((pFVar6->Subsequents).bIsClosed == (atomic<bool>)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                       ,0x353,L"The task must be completed to obtain its result");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((int)pFVar6[1]._padding_ != 0x2a) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Task.GetResult() == 42",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                       ,0x590,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  LOCK();
  paVar1 = &pFVar6->RefCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<unsigned_int>)0x1) {
    (**(code **)pFVar6->_padding_)(pFVar6,1);
  }
  local_30 = ::operator_new(4);
  if (local_30 != (undefined4 *)0x0) {
    *local_30 = 0x2a;
  }
  pFVar6 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  if (pFVar6 == (FTaskBase *)0x0) {
    pFVar6 = (FTaskBase *)0x0;
    Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
    ::operator_delete(local_30,4);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0xc6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(pFVar6,2,true);
    pFVar6->_padding_ =
         (longlong)
         &___7__TTaskWithResult_V__TUniquePtr_HU__TDefaultDelete_H_____Private_Tasks_UE__6B_;
    if ((*(ulonglong *)&(pFVar6->LowLevelTask).field_0x38 & 0x20) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(*(longlong *)&(pFVar6->LowLevelTask).field_0x28 + 0x18))
              (&(pFVar6->LowLevelTask).field_0x28,&pFVar6->LowLevelTask);
    *(undefined ***)&(pFVar6->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&pFVar6->LowLevelTask = pFVar6;
    *(FTaskBase **)&(pFVar6->LowLevelTask).field_0x8 = pFVar6;
    pFVar7 = LowLevelTasks::FTask::GetActiveTask();
    uVar8 = 0;
    if (pFVar7 != (FTask *)0x0) {
      uVar8 = *(undefined8 *)&pFVar7->field_0x30;
    }
    *(undefined8 *)&(pFVar6->LowLevelTask).field_0x30 = uVar8;
    *(undefined8 *)&(pFVar6->LowLevelTask).field_0x38 = 0xc80000541e87fc00;
    pFVar6->ExtendedPriority = Inline;
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar6->_padding_);
    pFVar6[1]._padding_ = (longlong)&local_30;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____MakeCompletedTask_V__TUniquePtr_HU__TDefaultDelete_H____V1__Tasks_UE__YA_AV__TTask_V__TUniquePtr_HU__TDefaultDelete_H_____23___QEAV__TUniquePtr_HU__TDefaultDelete_H_____Z__Private_Tasks_UE__6B_
    ;
    Tasks::Private::FTaskBase::TryLaunch(pFVar6,0x100);
    ::operator_delete(local_30,4);
    Tasks::Private::FTaskBase::Wait(pFVar6);
  }
  if ((pFVar6->Subsequents).bIsClosed == (atomic<bool>)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                       ,0x353,L"The task must be completed to obtain its result");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)pFVar6[1]._padding_ != 0x2a) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("*Task.GetResult() == 42",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                       ,0x595,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  LOCK();
  paVar1 = &pFVar6->RefCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<unsigned_int>)0x1) {
    (**(code **)pFVar6->_padding_)(pFVar6,1);
  }
  pFVar6 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  if (pFVar6 == (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(pFVar6,2,true);
    pFVar6->_padding_ =
         (longlong)
         &Tasks::Private::
          TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::`19'::FCopyOnly>::
          _vftable_;
    Tasks::Private::FTaskBase::Init
              (pFVar6,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h(552)"
               ,Default,Inline,None);
    pFVar6[1]._padding_ = (longlong)local_res18;
    pFVar6->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::Tasks::MakeCompletedTask<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::`19'::FCopyOnly,`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::`19'::FCopyOnly>'::`2'::<lambda_1>_>
          ::_vftable_;
    Tasks::Private::FTaskBase::TryLaunch(pFVar6,0x100);
    LOCK();
    paVar1 = &pFVar6->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  pFVar6 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  if (pFVar6 == (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(pFVar6,2,true);
    pFVar6->_padding_ =
         (longlong)
         &Tasks::Private::
          TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::`20'::FNonMovable>::
          _vftable_;
    Tasks::Private::FTaskBase::Init
              (pFVar6,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h(552)"
               ,Default,Inline,None);
    pFVar6->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::Tasks::MakeCompletedTask<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::`20'::FNonMovable>'::`2'::<lambda_1>_>
          ::_vftable_;
    Tasks::Private::FTaskBase::TryLaunch(pFVar6,0x100);
    LOCK();
    paVar1 = &pFVar6->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  local_38[0] = 0x2a;
  pFVar6 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  if (pFVar6 == (FTaskBase *)0x0) {
    pFVar6 = (FTaskBase *)0x0;
    Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0xc6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(pFVar6,2,true);
    pFVar6->_padding_ =
         (longlong)
         &Tasks::Private::
          TTaskWithResult<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::`21'::FDummy>::
          _vftable_;
    Tasks::Private::FTaskBase::Init
              (pFVar6,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h(552)"
               ,Default,Inline,None);
    pFVar6[1]._padding_ = (longlong)local_38;
    pFVar6[1]._padding_ = (longlong)&u_Test;
    pFVar6->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::Tasks::MakeCompletedTask<`UE::TasksTests::FTasksMakeCompletedTask::TestBody'::`21'::FDummy,int,wchar_t_const_(&)[5]>'::`2'::<lambda_1>_>
          ::_vftable_;
    Tasks::Private::FTaskBase::TryLaunch(pFVar6,0x100);
    Tasks::Private::FTaskBase::Wait(pFVar6);
  }
  if ((pFVar6->Subsequents).bIsClosed == (atomic<bool>)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                       ,0x353,L"The task must be completed to obtain its result");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((int)pFVar6[1]._padding_ == 0x2a) {
    Tasks::Private::FTaskBase::Wait(pFVar6);
    if ((pFVar6->Subsequents).bIsClosed == (atomic<bool>)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                         ,0x353,L"The task must be completed to obtain its result");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((int)pFVar6[1]._padding_ == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)pFVar6[1]._padding_;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar9,L"Test");
    if (iVar5 == 0) goto LAB_141d86c1d;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Task.GetResult().Int == 42 && Task.GetResult().Str == L\"Test\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                     ,0x5ba,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_141d86c1d:
  LOCK();
  paVar1 = &pFVar6->RefCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000141d86c43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar6->_padding_)(pFVar6,1);
    return;
  }
  return;
}

