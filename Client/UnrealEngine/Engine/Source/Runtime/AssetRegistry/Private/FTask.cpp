// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 2

// operator() @ 142ae1310

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTask * __thiscall
`LowLevelTasks::FTask::
Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::WaitOnDirectoriesAndUpdateWaitList'::__l30::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l13::<lambda_1>::operator()(void *this,bool param_1)

{
  atomic<bool> aVar1;
  uint uVar2;
  longlong lVar3;
  FTaskBase *this_00;
  code *pcVar4;
  bool bVar5;
  FTask *pFVar6;
  
  if (param_1) {
    if (*(longlong *)((longlong)this + 0x30) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FTask *)(*pcVar4)();
        return pFVar6;
      }
    }
    uVar2 = *(uint *)(*(longlong *)((longlong)this + 0x30) + 0x30);
    if (*(longlong *)this == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FTask *)(*pcVar4)();
        return pFVar6;
      }
    }
    lVar3 = **(longlong **)this;
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0xd0) == '\0')) {
      this_00 = (FTaskBase *)**(longlong **)this;
      LOCK();
      aVar1 = this_00->TaskTriggered;
      this_00->TaskTriggered = (atomic<bool>)0x1;
      UNLOCK();
      if (aVar1 == (atomic<bool>)0x0) {
        LOCK();
        this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0xd8);
      }
    }
    if (*(FTaskBase **)((longlong)this + 0x10) != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait(*(FTaskBase **)((longlong)this + 0x10));
    }
    UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::CompleteWorkItem
              (*(FPimpl **)((longlong)this + 0x18),uVar2);
  }
  return (FTask *)0x0;
}

// operator() @ 142ae13f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTask * __thiscall
`LowLevelTasks::FTask::
Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::ScheduleDirectory'::__l22::<lambda_2>_>'::__l2::<lambda_1>_>'
::__l13::<lambda_1>::operator()(void *this,bool param_1)

{
  atomic<bool> aVar1;
  uint uVar2;
  longlong lVar3;
  FTaskBase *this_00;
  code *pcVar4;
  bool bVar5;
  FTask *pFVar6;
  
  if (param_1) {
    if (*(longlong *)((longlong)this + 0x30) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FTask *)(*pcVar4)();
        return pFVar6;
      }
    }
    uVar2 = *(uint *)(*(longlong *)((longlong)this + 0x30) + 0x30);
    if (*(longlong *)this == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FTask *)(*pcVar4)();
        return pFVar6;
      }
    }
    lVar3 = **(longlong **)this;
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0xd0) == '\0')) {
      this_00 = (FTaskBase *)**(longlong **)this;
      LOCK();
      aVar1 = this_00->TaskTriggered;
      this_00->TaskTriggered = (atomic<bool>)0x1;
      UNLOCK();
      if (aVar1 == (atomic<bool>)0x0) {
        LOCK();
        this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0xd8);
      }
    }
    if (*(FTaskBase **)((longlong)this + 0x10) != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait(*(FTaskBase **)((longlong)this + 0x10));
    }
    UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::CompleteWorkItem
              (*(FPimpl **)((longlong)this + 0x18),uVar2);
  }
  return (FTask *)0x0;
}

