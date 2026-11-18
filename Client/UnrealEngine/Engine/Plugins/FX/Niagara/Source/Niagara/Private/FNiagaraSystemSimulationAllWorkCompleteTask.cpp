// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// DoTask @ 1493df160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraSystemSimulationAllWorkCompleteTask::DoTask
          (FNiagaraSystemSimulationAllWorkCompleteTask *this,Type param_1,
          TRefCountPtr<FBaseGraphTask> *param_2)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar5;
  FTaskBase *this_00;
  FTaskBase *this_01;
  code *pcVar6;
  bool bVar7;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar8;
  undefined1 local_res8 [8];
  
  if (!`public:_void___cdecl_FNiagaraSystemSimulationAllWorkCompleteTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
       ::__l2::__CsvProfilerStat299) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    `public:_void___cdecl_FNiagaraSystemSimulationAllWorkCompleteTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
    ::__l2::__CsvProfilerStat299 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  FVar5 = (this->EventsToWaitFor).AllocatorInstance.SecondaryData;
  iVar4 = (this->EventsToWaitFor).ArrayNum;
  FVar8 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)this;
  if (FVar5 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar8 = FVar5;
  }
  FVar5 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)((longlong)FVar8 + (longlong)iVar4 * 8);
  do {
    if ((this->EventsToWaitFor).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TRefCountPtr<FBaseGraphTask>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar8 == FVar5) {
      FVar5 = (this->EventsToWaitFor).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)this;
      if (FVar5 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar8 = FVar5;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar8,(this->EventsToWaitFor).ArrayNum);
      piVar2 = &(this->EventsToWaitFor).ArrayMax;
      (this->EventsToWaitFor).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                  (8,8,0,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)this,0,piVar2);
      }
      FCsvProfiler::EndExclusiveStat("Effects");
      return;
    }
    this_00 = *(FTaskBase **)FVar8;
    this_01 = (FTaskBase *)param_2->Reference;
    if (this_00 != (FTaskBase *)0x0) {
      LOCK();
      this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
      UNLOCK();
      if (this_01->ExtendedPriority == TaskEvent) {
        UE::Tasks::Private::FTaskBase::AddPrerequisites(this_01,this_00);
      }
      else {
        LOCK();
        paVar1 = &this_01->NumLocks;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
        UNLOCK();
        if ((aVar3 == (atomic<unsigned_int>)0xfffffffe) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("PrevNumLocks + 1 < TNumericLimits<uint32>::Max()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                               ,0x1c2,L"Max number of nested tasks reached: %d"), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (((uint)aVar3 < 0x80000001) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("PrevNumLocks > ExecutionFlag",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                               ,0x1c3,
                               L"Internal error: nested tasks can be added only during parent\'s execution (%u)"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar7 = UE::Tasks::Private::FTaskBase::AddSubsequent(this_00,this_01);
        if (bVar7) {
          LOCK();
          this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
          UNLOCK();
          UE::Tasks::Private::FTaskBase::
          FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                    (&this_01->Prerequisites,this_00);
        }
        else {
          LOCK();
          this_01->NumLocks = (atomic<unsigned_int>)((int)this_01->NumLocks + -1);
          UNLOCK();
        }
      }
      LOCK();
      paVar1 = &this_00->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_00->_padding_)(this_00,1);
      }
    }
    FVar8 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)((longlong)FVar8 + 8);
  } while( true );
}

