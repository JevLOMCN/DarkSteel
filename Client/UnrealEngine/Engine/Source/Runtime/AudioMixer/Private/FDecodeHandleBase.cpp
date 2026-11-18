// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 4

// ~FDecodeHandleBase @ 1464dbf00

void __thiscall Audio::FDecodeHandleBase::~FDecodeHandleBase(FDecodeHandleBase *this)

{
  FAsyncTask<Audio::FAsyncDecodeWorker> *pFVar1;
  
  this->_padding_ = (longlong)&___7FDecodeHandleBase_Audio__6B_;
  if (this->Task != (FAsyncTask<Audio::FAsyncDecodeWorker> *)0x0) {
    FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->Task,true,false);
    pFVar1 = this->Task;
    if (pFVar1 != (FAsyncTask<Audio::FAsyncDecodeWorker> *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
  }
  this->_padding_ = (longlong)&___7IAudioTask_Audio__6B_;
  return;
}

// CancelTask @ 1464f0070

void __thiscall Audio::FDecodeHandleBase::CancelTask(FDecodeHandleBase *this)

{
  int iVar1;
  FAsyncTask<Audio::FAsyncDecodeWorker> *this_00;
  FQueuedThreadPool *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  
  this_00 = this->Task;
  if (this_00 != (FAsyncTask<Audio::FAsyncDecodeWorker> *)0x0) {
    pFVar2 = (FQueuedThreadPool *)this_00->_padding_;
    if (pFVar2 != (FQueuedThreadPool *)0x0) {
      cVar4 = (**(code **)((longlong)*pFVar2 + 0x20))(pFVar2,this_00);
      iVar1 = ((FThreadSafeCounter *)&this_00->_padding_)->Counter;
      if (cVar4 != '\0') {
        if (iVar1 != 1) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("WorkNotFinishedCounter.GetValue() == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                             ,0x1e8,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        LOCK();
        ((FThreadSafeCounter *)&this_00->_padding_)->Counter =
             ((FThreadSafeCounter *)&this_00->_padding_)->Counter + -1;
        UNLOCK();
        FAsyncTaskBase::FinishThreadedWork((FAsyncTaskBase *)this_00);
        this_00->_padding_ = 0;
        return;
      }
      if (iVar1 != 0) {
        (**(code **)(this_00->_padding_ + 0x40))(this_00);
      }
    }
    FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->Task,true,false);
  }
  return;
}

// EnsureCompletion @ 1464fdaa0

void __thiscall Audio::FDecodeHandleBase::EnsureCompletion(FDecodeHandleBase *this)

{
  if (this->Task != (FAsyncTask<Audio::FAsyncDecodeWorker> *)0x0) {
    FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->Task,true,false);
    return;
  }
  return;
}

// IsDone @ 14650e7a0

bool __thiscall Audio::FDecodeHandleBase::IsDone(FDecodeHandleBase *this)

{
  FAsyncTask<Audio::FAsyncDecodeWorker> *this_00;
  
  this_00 = this->Task;
  if (this_00 != (FAsyncTask<Audio::FAsyncDecodeWorker> *)0x0) {
    if (((FThreadSafeCounter *)&this_00->_padding_)->Counter != 0) {
      return false;
    }
    FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this_00,false);
  }
  return true;
}

