// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// GetRawEvent @ 1416fb5a0

FEvent * __thiscall TEventPool<0>::GetRawEvent(TEventPool<0> *this)

{
  code *pcVar1;
  TAtomic<unsigned_int> TVar2;
  bool bVar3;
  uint uVar4;
  atomic<void_*> aVar5;
  FEvent *pFVar6;
  
  uVar4 = FLockFreePointerListLIFORoot<64,1>::Pop((FLockFreePointerListLIFORoot<64,1> *)this);
  aVar5 = (atomic<void_*>)0x0;
  if (uVar4 != 0) {
    aVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe][uVar4 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar4);
  }
  if (aVar5 == (atomic<void_*>)0x0) {
    aVar5 = (atomic<void_*>)FWindowsPlatformProcess::CreateSynchEvent(false);
    if (aVar5 == (atomic<void_*>)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Event",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\EventPool.h"
                         ,0x8f,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FEvent *)(*pcVar1)();
        return pFVar6;
      }
    }
  }
  LOCK();
  UNLOCK();
  TVar2 = (TAtomic<unsigned_int>)((int)FEvent::EventUniqueId + 1);
  *(TAtomic<unsigned_int> *)((longlong)aVar5 + 8) = FEvent::EventUniqueId;
  FEvent::EventUniqueId = TVar2;
  LOCK();
  *(undefined4 *)((longlong)aVar5 + 0xc) = 0;
  UNLOCK();
  return (FEvent *)aVar5;
}

