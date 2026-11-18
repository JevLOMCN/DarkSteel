// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// DontCompleteUntil @ 143b62e20

void __thiscall
FBaseGraphTask::DontCompleteUntil(FBaseGraphTask *this,TRefCountPtr<FBaseGraphTask> param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  FTaskBase *this_00;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  
  this_00 = *(FTaskBase **)param_1.Reference;
  if (this_00 != (FTaskBase *)0x0) {
    if (this->field_0x44 == '\x02') {
      if ((*(int *)&this->field_0x34 == 0) || (0x7fffffff < *(uint *)&this->field_0x34)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                           ,0xe3,L"Prerequisites can be added only before the task is launched");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      LOCK();
      puVar1 = &this->field_0x34;
      iVar3 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      UNLOCK();
      if (0x7fffffff < iVar3 + 1U) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PrevNumLocks + 1 < ExecutionFlag",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                           ,0xea,L"Max number of task prerequisites reached: %d");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      bVar7 = UE::Tasks::Private::FTaskBase::AddSubsequent(this_00,(FTaskBase *)this);
    }
    else {
      LOCK();
      puVar1 = &this->field_0x34;
      uVar4 = *(uint *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      UNLOCK();
      if (uVar4 == 0xfffffffe) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PrevNumLocks + 1 < TNumericLimits<uint32>::Max()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                           ,0x1c2,L"Max number of nested tasks reached: %d");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (uVar4 < 0x80000001) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PrevNumLocks > ExecutionFlag",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                           ,0x1c3,
                           L"Internal error: nested tasks can be added only during parent\'s execution (%u)"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      bVar7 = UE::Tasks::Private::FTaskBase::AddSubsequent(this_00,(FTaskBase *)this);
    }
    if (bVar7 == false) {
      LOCK();
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::
      FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                ((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                 &this->field_0x58,this_00);
    }
    puVar5 = *(undefined8 **)param_1.Reference;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar5 + 6);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  return;
}

