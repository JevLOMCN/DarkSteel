// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// ~FGenericBaseRequest @ 141620b80

void __thiscall FGenericBaseRequest::~FGenericBaseRequest(FGenericBaseRequest *this)

{
  FAsyncTask<FGenericReadRequestWorker> *pFVar1;
  
  this->_padding_ = (longlong)&___7FGenericBaseRequest__6B_;
  if (this->Task != (FAsyncTask<FGenericReadRequestWorker> *)0x0) {
    FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->Task,true,false);
    pFVar1 = this->Task;
    if (pFVar1 != (FAsyncTask<FGenericReadRequestWorker> *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
  }
  IAsyncReadRequest::~IAsyncReadRequest((IAsyncReadRequest *)this);
  return;
}

// CancelImpl @ 14162dc70

void __thiscall FGenericBaseRequest::CancelImpl(FGenericBaseRequest *this)

{
  int iVar1;
  FAsyncTask<FGenericReadRequestWorker> *pFVar2;
  FQueuedThreadPool *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  
  pFVar2 = this->Task;
  if ((pFVar2 != (FAsyncTask<FGenericReadRequestWorker> *)0x0) &&
     (pFVar3 = (FQueuedThreadPool *)pFVar2->_padding_, pFVar3 != (FQueuedThreadPool *)0x0)) {
    cVar5 = (**(code **)((longlong)*pFVar3 + 0x20))(pFVar3,pFVar2);
    iVar1 = ((FThreadSafeCounter *)&pFVar2->_padding_)->Counter;
    if (cVar5 != '\0') {
      if (iVar1 != 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("WorkNotFinishedCounter.GetValue() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                           ,0x1e8,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      LOCK();
      ((FThreadSafeCounter *)&pFVar2->_padding_)->Counter =
           ((FThreadSafeCounter *)&pFVar2->_padding_)->Counter + -1;
      UNLOCK();
      FAsyncTaskBase::FinishThreadedWork((FAsyncTaskBase *)pFVar2);
      pFVar2->_padding_ = 0;
      pFVar2 = this->Task;
      if (pFVar2 != (FAsyncTask<FGenericReadRequestWorker> *)0x0) {
        (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,1);
      }
      this->Task = (FAsyncTask<FGenericReadRequestWorker> *)0x0;
      IAsyncReadRequest::SetComplete((IAsyncReadRequest *)this);
      return;
    }
    if (iVar1 != 0) {
      (**(code **)(pFVar2->_padding_ + 0x40))(pFVar2);
    }
  }
  return;
}

// EnsureCompletion @ 141638bb0

void __thiscall FGenericBaseRequest::EnsureCompletion(FGenericBaseRequest *this)

{
  FAsyncTask<FGenericReadRequestWorker> *pFVar1;
  
  if (this->Task != (FAsyncTask<FGenericReadRequestWorker> *)0x0) {
    FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->Task,true,false);
    pFVar1 = this->Task;
    if (pFVar1 != (FAsyncTask<FGenericReadRequestWorker> *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
    this->Task = (FAsyncTask<FGenericReadRequestWorker> *)0x0;
  }
  return;
}

// Start @ 1416610d0

void __thiscall FGenericBaseRequest::Start(FGenericBaseRequest *this)

{
  bool bVar1;
  
  bVar1 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar1) {
    FAsyncTaskBase::Start
              ((FAsyncTaskBase *)this->Task,false,GIOThreadPool,Normal,None,-1,(wchar_t *)0x0);
    return;
  }
  FAsyncTaskBase::Start((FAsyncTaskBase *)this->Task,true,GThreadPool,Normal,None,-1,(wchar_t *)0x0)
  ;
                    /* WARNING: Could not recover jumptable at 0x000141661130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this,0);
  return;
}

// WaitCompletionImpl @ 14166af70

void __thiscall FGenericBaseRequest::WaitCompletionImpl(FGenericBaseRequest *this,float param_1)

{
  FAsyncTask<FGenericReadRequestWorker> *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = this->Task;
  if (pFVar1 != (FAsyncTask<FGenericReadRequestWorker> *)0x0) {
    if (0.0 < param_1) {
      bVar3 = FAsyncTaskBase::WaitCompletionWithTimeout((FAsyncTaskBase *)pFVar1,param_1);
      if (!bVar3) {
        return;
      }
    }
    else {
      FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)pFVar1,true,false);
    }
    if ((*(char *)((longlong)&this->_padding_ + 1) == '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bCompleteAndCallbackCalled",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFile.cpp"
                           ,0x5f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = this->Task;
    if (pFVar1 != (FAsyncTask<FGenericReadRequestWorker> *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
    this->Task = (FAsyncTask<FGenericReadRequestWorker> *)0x0;
  }
  return;
}

