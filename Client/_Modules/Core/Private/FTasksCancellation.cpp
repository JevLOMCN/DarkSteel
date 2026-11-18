// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141d5c1c0

EAutomationTestFlags __thiscall
UE::TasksTests::FTasksCancellation::GetTestFlags(FTasksCancellation *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141d5c1d0

bool __thiscall UE::TasksTests::FTasksCancellation::IsStressTest(FTasksCancellation *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141d5c1e0

uint __thiscall UE::TasksTests::FTasksCancellation::GetRequiredDeviceNum(FTasksCancellation *this)

{
  return 1;
}

// GetTestSourceFileName @ 141d5c1f0

FString * __thiscall
UE::TasksTests::FTasksCancellation::GetTestSourceFileName
          (FTasksCancellation *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141d5c220

int __thiscall UE::TasksTests::FTasksCancellation::GetTestSourceFileLine(FTasksCancellation *this)

{
  return 0x5be;
}

// GetTests @ 141d5c230

/* WARNING: Removing unreachable block (ram,0x000141d5c3ae) */

void __thiscall
UE::TasksTests::FTasksCancellation::GetTests
          (FTasksCancellation *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141d5c3d0

bool __thiscall
UE::TasksTests::FTasksCancellation::RunTest(FTasksCancellation *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141d5c400

FString * __thiscall
UE::TasksTests::FTasksCancellation::GetBeautifiedTestName
          (FTasksCancellation *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTasksCancellation @ 141d6abf0

FTasksCancellation * __thiscall
UE::TasksTests::FTasksCancellation::FTasksCancellation(FTasksCancellation *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTasksCancellation_TasksTests_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Tasks::Cancellation");
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

// TestBody @ 141d83780

void __thiscall
UE::TasksTests::FTasksCancellation::TestBody(FTasksCancellation *this,FString *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<bool> aVar3;
  int iVar4;
  atomic<unsigned_int> aVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  FTaskBase *this_00;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> this_01;
  FTask *pFVar9;
  FTaskBase *this_02;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined1 local_res18 [8];
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_48;
  FTaskHandle local_38;
  FTaskBase *local_30;
  
  local_res18[0] = 0;
  this_00 = (FTaskBase *)
            Tasks::Private::FTaskEventBase::Create
                      (
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(1474)"
                      );
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  this_01.Reference =
       TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
       ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                   *)&Tasks::Private::SmallTaskAllocator);
  lVar11 = 2;
  if (this_01.Reference == (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
    this_01.Reference = (FTaskBase *)0x0;
    if (this_00 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &this_00->RefCount;
      aVar5 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar5 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_00->_padding_)(this_00,1);
        this_01.Reference = (FTaskBase *)0x0;
      }
    }
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(this_01.Reference,2,true);
    (this_01.Reference)->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksCancellation::TestBody'::`3'::<lambda_1>,void,void>
          ::_vftable_;
    if ((*(ulonglong *)&((this_01.Reference)->LowLevelTask).field_0x38 & 0x20) == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    (**(code **)(*(longlong *)&((this_01.Reference)->LowLevelTask).field_0x28 + 0x18))
              (&((this_01.Reference)->LowLevelTask).field_0x28,&(this_01.Reference)->LowLevelTask);
    *(undefined ***)&((this_01.Reference)->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(this_01.Reference)->LowLevelTask = this_01.Reference;
    *(FTaskBase **)&((this_01.Reference)->LowLevelTask).field_0x8 = this_01.Reference;
    pFVar9 = LowLevelTasks::FTask::GetActiveTask();
    uVar10 = 0;
    if (pFVar9 != (FTask *)0x0) {
      uVar10 = *(undefined8 *)&pFVar9->field_0x30;
    }
    *(undefined8 *)&((this_01.Reference)->LowLevelTask).field_0x30 = uVar10;
    *(undefined8 *)&((this_01.Reference)->LowLevelTask).field_0x38 = 0xc80000541e7db800;
    (this_01.Reference)->ExtendedPriority = None;
    FInheritedContextBase::CaptureInheritedContext
              ((FInheritedContextBase *)&(this_01.Reference)->_padding_);
    this_01.Reference[1]._padding_ = (longlong)this_00;
    this_01.Reference[1]._padding_ = (longlong)local_res18;
    (this_01.Reference)->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksCancellation::TestBody'::`3'::<lambda_1>_>::
          _vftable_;
    Tasks::Private::FTaskBase::TryLaunch(this_01.Reference,0x100);
  }
  this_02 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (this_02 == (FTaskBase *)0x0) {
    this_02 = (FTaskBase *)0x0;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(this_02,2,true);
    this_02->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TasksTests::FTasksCancellation::TestBody'::`3'::<lambda_2>,void,void>
          ::_vftable_;
    if ((*(ulonglong *)&(this_02->LowLevelTask).field_0x38 & 0x20) == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    (**(code **)(*(longlong *)&(this_02->LowLevelTask).field_0x28 + 0x18))
              (&(this_02->LowLevelTask).field_0x28,&this_02->LowLevelTask);
    *(undefined ***)&(this_02->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&this_02->LowLevelTask = this_02;
    *(FTaskBase **)&(this_02->LowLevelTask).field_0x8 = this_02;
    pFVar9 = LowLevelTasks::FTask::GetActiveTask();
    uVar10 = 0;
    if (pFVar9 != (FTask *)0x0) {
      uVar10 = *(undefined8 *)&pFVar9->field_0x30;
    }
    *(undefined8 *)&(this_02->LowLevelTask).field_0x30 = uVar10;
    *(undefined8 *)&(this_02->LowLevelTask).field_0x38 = 0xc80000541e7de400;
    this_02->ExtendedPriority = None;
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_02->_padding_);
    this_02[1]._padding_ = (longlong)local_res18;
    this_02->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TasksTests::FTasksCancellation::TestBody'::`3'::<lambda_2>_>::
          _vftable_;
  }
  Tasks::Private::FTaskBase::TryLaunch(this_02,0x100);
  local_res18[0] = 1;
  if ((this_00 != (FTaskBase *)0x0) && ((this_00->Subsequents).bIsClosed == (atomic<bool>)0x0)) {
    LOCK();
    aVar3 = this_00->TaskTriggered;
    this_00->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar3 == (atomic<bool>)0x0) {
      LOCK();
      this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(this_00,0xd8);
    }
  }
  if (this_01.Reference != (FTaskBase *)0x0) {
    LOCK();
    (this_01.Reference)->RefCount = (atomic<unsigned_int>)((int)(this_01.Reference)->RefCount + 1);
    UNLOCK();
  }
  if (this_02 != (FTaskBase *)0x0) {
    LOCK();
    this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
    UNLOCK();
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 2;
  local_38.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)this_01.Reference;
  local_30 = this_02;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_48.AllocatorInstance,2,&local_48.ArrayMax);
  ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
            (local_48.AllocatorInstance.Data,&local_38,2);
  Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
            (&local_48,(FTimespan)0x7fffffffffffffff);
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  puVar12 = &stack0xffffffffffffffd8;
  do {
    puVar6 = *(undefined8 **)(puVar12 + -8);
    puVar12 = puVar12 + -8;
    lVar11 = lVar11 + -1;
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar6 + 6);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
  } while (lVar11 != 0);
  if (this_02 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &this_02->RefCount;
    aVar5 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_02->_padding_)(this_02,1);
    }
  }
  if (this_01.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &(this_01.Reference)->RefCount;
    aVar5 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 == (atomic<unsigned_int>)0x1) {
      (**(code **)(this_01.Reference)->_padding_)(this_01.Reference,1);
    }
  }
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar5 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  return;
}

