// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// AddPrerequisites<UE::Tasks::Private::FTaskHandle,0> @ 143cb4410

bool __thiscall
UE::Tasks::Private::FTaskBase::AddPrerequisites<UE::Tasks::Private::FTaskHandle,0>
          (FTaskBase *this,FTaskHandle *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  this_00 = (param_1->Pimpl).Reference;
  if (this_00 != (FTaskBase *)0x0) {
    if ((this->NumLocks == (atomic<unsigned_int>)0x0) || (0x7fffffff < (uint)this->NumLocks)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                         ,0xe3,L"Prerequisites can be added only before the task is launched");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    LOCK();
    paVar1 = &this->NumLocks;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
    UNLOCK();
    if (0x7fffffff < (int)aVar2 + 1U) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrevNumLocks + 1 < ExecutionFlag",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                         ,0xea,L"Max number of task prerequisites reached: %d");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    bVar4 = AddSubsequent(this_00,this);
    if (bVar4) {
      LOCK();
      this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
      UNLOCK();
      FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                (&this->Prerequisites,this_00);
      return true;
    }
    LOCK();
    this->NumLocks = (atomic<unsigned_int>)((int)this->NumLocks + -1);
    UNLOCK();
  }
  return false;
}

