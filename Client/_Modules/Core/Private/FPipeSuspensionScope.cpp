// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FPipeSuspensionScope @ 141d69800

FPipeSuspensionScope * __thiscall
`UE::TasksTests::FTasksBasicTest::TestBody'::__l176::FPipeSuspensionScope::FPipeSuspensionScope
          (void *this,FPipe *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  bool bVar4;
  FTaskEventBase *pFVar5;
  FTaskBase *this_00;
  FPipeSuspensionScope *pFVar6;
  FTask *pFVar7;
  undefined8 uVar8;
  
  pFVar5 = UE::Tasks::Private::FTaskEventBase::Create
                     (
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(316)"
                     );
  *(FTaskEventBase **)this = pFVar5;
  pFVar5 = UE::Tasks::Private::FTaskEventBase::Create
                     (
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(317)"
                     );
  *(FTaskEventBase **)((longlong)this + 8) = pFVar5;
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (this_00 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<``UE::TasksTests::FTasksBasicTest::TestBody'::`176'::FPipeSuspensionScope::FPipeSuspensionScope'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    if (((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FPipeSuspensionScope *)(*pcVar3)();
      return pFVar6;
    }
    (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
              (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
    *(FTaskBase **)&this_00->LowLevelTask = this_00;
    *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
    pFVar7 = LowLevelTasks::FTask::GetActiveTask();
    uVar8 = 0;
    if (pFVar7 != (FTask *)0x0) {
      uVar8 = *(undefined8 *)&pFVar7->field_0x30;
    }
    *(undefined8 *)&(this_00->LowLevelTask).field_0x30 = uVar8;
    *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc80000541e664000;
    this_00->ExtendedPriority = None;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_)
    ;
    this_00[1]._padding_ = (longlong)this;
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<``UE::TasksTests::FTasksBasicTest::TestBody'::`176'::FPipeSuspensionScope::FPipeSuspensionScope'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  LOCK();
  param_1->TaskCount = (atomic<unsigned___int64>)((longlong)param_1->TaskCount + 1);
  UNLOCK();
  LOCK();
  this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
  UNLOCK();
  this_00->Pipe = param_1;
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  LOCK();
  paVar1 = &this_00->RefCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<unsigned_int>)0x1) {
    (**(code **)this_00->_padding_)(this_00,1);
  }
  if (*(FTaskBase **)this != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(*(FTaskBase **)this);
  }
  return this;
}

// ~FPipeSuspensionScope @ 141d6d320

void __thiscall
`UE::TasksTests::FTasksBasicTest::TestBody'::__l176::FPipeSuspensionScope::~FPipeSuspensionScope
          (void *this)

{
  int *piVar1;
  atomic<bool> aVar2;
  int iVar3;
  FTaskBase *this_00;
  undefined8 *puVar4;
  
  if ((*(longlong *)((longlong)this + 8) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 8) + 0xd0) == '\0')) {
    this_00 = *(FTaskBase **)((longlong)this + 8);
    LOCK();
    aVar2 = this_00->TaskTriggered;
    this_00->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar2 == (atomic<bool>)0x0) {
      LOCK();
      this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0xd8);
    }
  }
  puVar4 = *(undefined8 **)((longlong)this + 8);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  puVar4 = *(undefined8 **)this;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  return;
}

// operator() @ 141d6d830

void __thiscall
``UE::TasksTests::FTasksBasicTest::TestBody'::__l176::FPipeSuspensionScope::FPipeSuspensionScope'::
__l2::<lambda_1>::operator()(void *this)

{
  atomic<bool> aVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FTaskBase *pFVar5;
  
  lVar2 = *(longlong *)this;
  pFVar5 = UE::Tasks::Private::GetCurrentTask();
  if (pFVar5 == (FTaskBase *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0x1ff,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  UE::Tasks::Private::FTaskBase::AddNested(pFVar5,*(FTaskBase **)(lVar2 + 8));
  lVar2 = **(longlong **)this;
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0xd0) == '\0')) {
    pFVar5 = (FTaskBase *)**(longlong **)this;
    LOCK();
    aVar1 = pFVar5->TaskTriggered;
    pFVar5->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar1 == (atomic<bool>)0x0) {
      LOCK();
      pFVar5->RefCount = (atomic<unsigned_int>)((int)pFVar5->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar5,0xd8);
    }
  }
  return;
}

