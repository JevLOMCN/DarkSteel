// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 6

// FImgMediaSchedulerThread @ 14ea38c50

FImgMediaSchedulerThread * __thiscall
FImgMediaSchedulerThread::FImgMediaSchedulerThread
          (FImgMediaSchedulerThread *this,IImgMediaScheduler *param_1,uint param_2,
          EThreadPriority param_3)

{
  code *pcVar1;
  bool bVar2;
  FEvent *pFVar3;
  FImgMediaSchedulerThread *pFVar4;
  FRunnableThread *pFVar5;
  ForAnyElementType FVar6;
  FString local_18;
  
  this->Owner = param_1;
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->QueuedWork = (IQueuedWork *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  this->Stopping = (TAtomic<bool>)0x0;
  pFVar3 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->WorkEvent = pFVar3;
  if (pFVar3 == (FEvent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorkEvent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Scheduler\\ImgMediaSchedulerThread.cpp"
                       ,0x17,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FImgMediaSchedulerThread *)(*pcVar1)();
      return pFVar4;
    }
  }
  ThreadIndex = ThreadIndex + 1;
  ::FString::PrintfImpl(&local_18,L"FImgMediaSchedulerThread %d");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar6.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar5 = FRunnableThread::Create
                     ((FRunnable *)this,(wchar_t *)FVar6.Data,param_2,param_3,0xffffffffffffffff,
                      None);
  this->Thread = pFVar5;
  if (pFVar5 == (FRunnableThread *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Thread != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Scheduler\\ImgMediaSchedulerThread.cpp"
                       ,0x1d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FImgMediaSchedulerThread *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FImgMediaSchedulerThread @ 14ea3b280

void __thiscall FImgMediaSchedulerThread::~FImgMediaSchedulerThread(FImgMediaSchedulerThread *this)

{
  FRunnableThread *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  LOCK();
  this->Stopping = (TAtomic<bool>)0x1;
  UNLOCK();
  (**(code **)(this->WorkEvent->_padding_ + 0x10))();
  (**(code **)(this->Thread->_padding_ + 0x20))();
  (**(code **)(this->Thread->_padding_ + 0x18))(this->Thread,1);
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
  }
  this->Thread = (FRunnableThread *)0x0;
  FGenericPlatformProcess::ReturnSynchEventToPool(this->WorkEvent);
  this->WorkEvent = (FEvent *)0x0;
  this->_padding_ = (longlong)&___7FSingleThreadRunnable__6B_;
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// GetSingleThreadInterface @ 14ea4e920

FSingleThreadRunnable * __thiscall
FImgMediaSchedulerThread::GetSingleThreadInterface(FImgMediaSchedulerThread *this)

{
  FSingleThreadRunnable *pFVar1;
  
  pFVar1 = (FSingleThreadRunnable *)&this->_padding_;
  if (this == (FImgMediaSchedulerThread *)0x0) {
    pFVar1 = (FSingleThreadRunnable *)0x0;
  }
  return pFVar1;
}

// QueueWork @ 14ea55470

void __thiscall
FImgMediaSchedulerThread::QueueWork(FImgMediaSchedulerThread *this,IQueuedWork *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->QueuedWork != (IQueuedWork *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("QueuedWork == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Scheduler\\ImgMediaSchedulerThread.cpp"
                       ,0x35,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->QueuedWork = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014ea554c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->WorkEvent->_padding_ + 0x10))();
  return;
}

// Run @ 14ea5b240

uint __thiscall FImgMediaSchedulerThread::Run(FImgMediaSchedulerThread *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  IQueuedWork *pIVar5;
  
  do {
    while( true ) {
      do {
        if (this->Stopping != (TAtomic<bool>)0x0) {
          return 0;
        }
        cVar2 = (**(code **)(this->WorkEvent->_padding_ + 0x20))(this->WorkEvent,10,0);
      } while (cVar2 == '\0');
      pIVar5 = this->QueuedWork;
      this->QueuedWork = (IQueuedWork *)0x0;
      if (pIVar5 == (IQueuedWork *)0x0) break;
      do {
        (**(code **)pIVar5->_padding_)();
        pIVar5 = (IQueuedWork *)(**(code **)*this->Owner)(this->Owner,this);
      } while (pIVar5 != (IQueuedWork *)0x0);
    }
  } while ((this->Stopping != (TAtomic<bool>)0x0) ||
          (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Work != nullptr) || Stopping.Load(EMemoryOrder::Relaxed)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Scheduler\\ImgMediaSchedulerThread.cpp"
                              ,0x53,L""), !bVar3));
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}

// Tick @ 14ea5cb80

void __thiscall FImgMediaSchedulerThread::Tick(FImgMediaSchedulerThread *this)

{
  IImgMediaScheduler *pIVar1;
  
  pIVar1 = this->Owner;
  this->Owner = (IImgMediaScheduler *)0x0;
  while (pIVar1 != (IImgMediaScheduler *)0x0) {
    (**(code **)*pIVar1)(pIVar1);
    pIVar1 = (IImgMediaScheduler *)
             (*(code *)**(undefined8 **)this->_padding_)
                       ((undefined8 *)this->_padding_,&this[-1].WorkEvent);
  }
  return;
}

