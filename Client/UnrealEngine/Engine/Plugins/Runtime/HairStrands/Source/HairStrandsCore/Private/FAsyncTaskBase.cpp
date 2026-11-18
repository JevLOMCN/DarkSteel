// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// Cancel @ 14e004b90

bool __thiscall FAsyncTaskBase::Cancel(FAsyncTaskBase *this)

{
  int iVar1;
  FQueuedThreadPool *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  
  pFVar2 = this->QueuedPool;
  if (pFVar2 != (FQueuedThreadPool *)0x0) {
    cVar4 = (**(code **)((longlong)*pFVar2 + 0x20))(pFVar2,this);
    iVar1 = (this->WorkNotFinishedCounter).Counter;
    if (cVar4 != '\0') {
      if (iVar1 != 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("WorkNotFinishedCounter.GetValue() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                           ,0x1e8,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      LOCK();
      (this->WorkNotFinishedCounter).Counter = (this->WorkNotFinishedCounter).Counter + -1;
      UNLOCK();
      FinishThreadedWork(this);
      this->QueuedPool = (FQueuedThreadPool *)0x0;
      return true;
    }
    if (iVar1 != 0) {
      (**(code **)(this->_padding_ + 0x40))(this);
    }
  }
  return false;
}

