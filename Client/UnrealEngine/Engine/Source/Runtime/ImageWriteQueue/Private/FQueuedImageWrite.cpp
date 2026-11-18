// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWriteQueue
// Functions: 3

// Abandon @ 1446eb080

void __thiscall FQueuedImageWrite::Abandon(FQueuedImageWrite *this)

{
  TFutureState<bool> *this_00;
  FImageWriteQueue *this_01;
  code *pcVar1;
  bool bVar2;
  
  if ((this->Promise).State.Object == (TFutureState<bool> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->Promise).State.Object == (TFutureState<bool> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this_00 = (this->Promise).State.Object;
  if (*(TAtomic<bool> *)&this_00->field_0x68 != (TAtomic<bool>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this_00->Result).Pad[0] = '\0';
  FFutureState::MarkComplete((FFutureState *)this_00);
  this_01 = this->Owner;
  FImageWriteQueue::DecrementFence(this_01,this->FenceID);
  LOCK();
  this_01->NumPendingTasks = (TAtomic<int>)((int)this_01->NumPendingTasks + -1);
  UNLOCK();
  (**(code **)(this_01->OnTaskCompletedEvent->_padding_ + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0001446eb158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x28))(this,1);
  return;
}

// DoThreadedWork @ 1446ec9c0

void __thiscall FQueuedImageWrite::DoThreadedWork(FQueuedImageWrite *this)

{
  TFutureState<bool> *this_00;
  FImageWriteQueue *this_01;
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  
  uVar2 = (**(code **)((longlong)*(this->Task).Ptr + 8))();
  if ((this->Promise).State.Object == (TFutureState<bool> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->Promise).State.Object == (TFutureState<bool> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this_00 = (this->Promise).State.Object;
  if (*(TAtomic<bool> *)&this_00->field_0x68 != (TAtomic<bool>)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this_00->Result).Pad[0] = uVar2;
  FFutureState::MarkComplete((FFutureState *)this_00);
  this_01 = this->Owner;
  FImageWriteQueue::DecrementFence(this_01,this->FenceID);
  LOCK();
  this_01->NumPendingTasks = (TAtomic<int>)((int)this_01->NumPendingTasks + -1);
  UNLOCK();
  (**(code **)(this_01->OnTaskCompletedEvent->_padding_ + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0001446efcef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x28))(this,1);
  return;
}

// RunTaskOnCurrentThread @ 1446efc00

void __thiscall FQueuedImageWrite::RunTaskOnCurrentThread(FQueuedImageWrite *this)

{
  TFutureState<bool> *this_00;
  FImageWriteQueue *this_01;
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  
  uVar2 = (**(code **)((longlong)*(this->Task).Ptr + 8))();
  if ((this->Promise).State.Object == (TFutureState<bool> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->Promise).State.Object == (TFutureState<bool> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this_00 = (this->Promise).State.Object;
  if (*(TAtomic<bool> *)&this_00->field_0x68 != (TAtomic<bool>)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this_00->Result).Pad[0] = uVar2;
  FFutureState::MarkComplete((FFutureState *)this_00);
  this_01 = this->Owner;
  FImageWriteQueue::DecrementFence(this_01,this->FenceID);
  LOCK();
  this_01->NumPendingTasks = (TAtomic<int>)((int)this_01->NumPendingTasks + -1);
  UNLOCK();
  (**(code **)(this_01->OnTaskCompletedEvent->_padding_ + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0001446efcef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x28))(this,1);
  return;
}

