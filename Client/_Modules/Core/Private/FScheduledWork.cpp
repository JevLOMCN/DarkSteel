// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// FScheduledWork @ 141917a90

FScheduledWork * __thiscall
FQueuedThreadPoolWrapper::FScheduledWork::FScheduledWork(FScheduledWork *this)

{
  longlong lVar1;
  
  this->_padding_ = (longlong)&_vftable__for__IQueuedWork__;
  this->_padding_ = (longlong)&_vftable__for__IExecutionResource__;
  this->_padding_ = 0;
  (this->NumRefs).Counter = 0;
  LOCK();
  UNLOCK();
  lVar1 = (longlong)QueuedThreadPoolWrapperImpl::ScheduledWorkAllocs + 1;
  QueuedThreadPoolWrapperImpl::ScheduledWorkAllocs =
       (atomic<__int64>)((longlong)QueuedThreadPoolWrapperImpl::ScheduledWorkAllocs + 1);
  FCountersTrace::TCounter<__int64,0,__int64,0>::Set
            (&__GTraceCounterQueuedThreadPoolWrapperScheduledWorkAllocs,lVar1);
  return this;
}

// ~FScheduledWork @ 14191c1e0

void __thiscall FQueuedThreadPoolWrapper::FScheduledWork::~FScheduledWork(FScheduledWork *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  
  this->_padding_ = (longlong)&_vftable__for__IQueuedWork__;
  this->_padding_ = (longlong)&_vftable__for__IExecutionResource__;
  if ((this->NumRefs).Counter != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs.GetValue() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\QueuedThreadPoolWrapper.cpp"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  LOCK();
  UNLOCK();
  lVar6 = (longlong)QueuedThreadPoolWrapperImpl::ScheduledWorkAllocs + -1;
  QueuedThreadPoolWrapperImpl::ScheduledWorkAllocs =
       (atomic<__int64>)((longlong)QueuedThreadPoolWrapperImpl::ScheduledWorkAllocs + -1);
  FCountersTrace::TCounter<__int64,0,__int64,0>::Set
            (&__GTraceCounterQueuedThreadPoolWrapperScheduledWorkAllocs,lVar6);
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  this->_padding_ = (longlong)&___7IQueuedWork__6B_;
  puVar3 = (undefined8 *)this->_padding_;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return;
}

// Abandon @ 1419242f0

void __thiscall FQueuedThreadPoolWrapper::FScheduledWork::Abandon(FScheduledWork *this)

{
  (**(code **)(this->Work->_padding_ + 8))();
                    /* WARNING: Could not recover jumptable at 0x000141924310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(&this->_padding_);
  return;
}

// AddRef @ 1419258a0

FReturnedRefCountValue __thiscall
FQueuedThreadPoolWrapper::FScheduledWork::AddRef(FScheduledWork *this)

{
  longlong *plVar1;
  longlong lVar2;
  int *in_RDX;
  
  LOCK();
  plVar1 = &this->_padding_;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + 1;
  UNLOCK();
  *in_RDX = (int)lVar2 + 1;
  return (FReturnedRefCountValue)(uint)in_RDX;
}

// DoThreadedWork @ 141934a90

void __thiscall FQueuedThreadPoolWrapper::FScheduledWork::DoThreadedWork(FScheduledWork *this)

{
  FExecutionResourceContextScope local_res8 [8];
  undefined1 local_res10 [8];
  longlong *local_res18;
  
  local_res18 = &this->_padding_;
  if (this == (FScheduledWork *)0x0) {
    local_res18 = (longlong *)0x0;
  }
  if (local_res18 != (longlong *)0x0) {
    (**(code **)(*local_res18 + 8))(local_res18,local_res10);
  }
  FExecutionResourceContextScope::FExecutionResourceContextScope
            (local_res8,(IExecutionResource *)&local_res18);
  (**(code **)this->Work->_padding_)();
  FExecutionResourceContextScope::~FExecutionResourceContextScope(local_res8);
                    /* WARNING: Could not recover jumptable at 0x000141934af3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(&this->_padding_);
  return;
}

// GetDebugName @ 1419462a0

wchar_t * __thiscall FQueuedThreadPoolWrapper::FScheduledWork::GetDebugName(FScheduledWork *this)

{
  wchar_t *pwVar1;
  
  if (this->Work != (IQueuedWork *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001419462ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pwVar1 = (wchar_t *)(**(code **)(this->Work->_padding_ + 0x20))();
    return pwVar1;
  }
  return L"FScheduledWork";
}

// GetQueuedWorkFlags @ 14194a8a0

EQueuedWorkFlags __thiscall
FQueuedThreadPoolWrapper::FScheduledWork::GetQueuedWorkFlags(FScheduledWork *this)

{
  EQueuedWorkFlags EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014194a8a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(this->Work->_padding_ + 0x10))();
  return EVar1;
}

// GetRefCount @ 14194aab0

uint __thiscall FQueuedThreadPoolWrapper::FScheduledWork::GetRefCount(FScheduledWork *this)

{
  return (uint)this->_padding_;
}

// GetRequiredMemory @ 14194adc0

long64 __thiscall FQueuedThreadPoolWrapper::FScheduledWork::GetRequiredMemory(FScheduledWork *this)

{
  long64 lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014194adc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(this->Work->_padding_ + 0x18))();
  return lVar1;
}

// Release @ 141964940

uint __thiscall FQueuedThreadPoolWrapper::FScheduledWork::Release(FScheduledWork *this)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  
  LOCK();
  plVar1 = &this->_padding_;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  uVar3 = (int)lVar2 - 1;
  if (uVar3 == 0) {
    Schedule((FQueuedThreadPoolWrapper *)this->_padding_,(FScheduledWork *)&this[-1].Work);
  }
  return uVar3;
}

