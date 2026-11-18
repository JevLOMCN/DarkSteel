// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FEventRef @ 1416d4ac0

FEventRef * __thiscall FEventRef::FEventRef(FEventRef *this,EEventMode param_1)

{
  code *pcVar1;
  TAtomic<unsigned_int> TVar2;
  bool bVar3;
  uint uVar4;
  TEventPool<0> *this_00;
  FEvent *pFVar5;
  FLockFreePointerListLIFORoot<64,1> *this_01;
  atomic<void_*> aVar6;
  FEventRef *pFVar7;
  
  if (param_1 == AutoReset) {
    this_00 = TLazySingleton<TEventPool<0>_>::Get();
    pFVar5 = TEventPool<0>::GetRawEvent(this_00);
    this->Event = pFVar5;
    return this;
  }
  this_01 = (FLockFreePointerListLIFORoot<64,1> *)TLazySingleton<TEventPool<1>_>::Get();
  uVar4 = FLockFreePointerListLIFORoot<64,1>::Pop(this_01);
  aVar6 = (atomic<void_*>)0x0;
  if (uVar4 != 0) {
    aVar6 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe][uVar4 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar4);
  }
  if (aVar6 == (atomic<void_*>)0x0) {
    aVar6 = (atomic<void_*>)FWindowsPlatformProcess::CreateSynchEvent(true);
    if (aVar6 == (atomic<void_*>)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Event",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\EventPool.h"
                         ,0x8f,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FEventRef *)(*pcVar1)();
        return pFVar7;
      }
    }
  }
  LOCK();
  UNLOCK();
  TVar2 = (TAtomic<unsigned_int>)((int)FEvent::EventUniqueId + 1);
  *(TAtomic<unsigned_int> *)((longlong)aVar6 + 8) = FEvent::EventUniqueId;
  FEvent::EventUniqueId = TVar2;
  LOCK();
  *(undefined4 *)((longlong)aVar6 + 0xc) = 0;
  UNLOCK();
  this->Event = (FEvent *)aVar6;
  return this;
}

// ~FEventRef @ 1416d86c0

void __thiscall FEventRef::~FEventRef(FEventRef *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  FLockFreePointerListLIFORoot<64,1> *this_00;
  FIndexedLockFreeLink *pFVar5;
  atomic<void_*> aVar6;
  
  cVar2 = (**(code **)(this->Event->_padding_ + 8))();
  if (cVar2 == '\0') {
    this_00 = (FLockFreePointerListLIFORoot<64,1> *)TLazySingleton<TEventPool<0>_>::Get();
    aVar6 = (atomic<void_*>)this->Event;
    if (aVar6 == (atomic<void_*>)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Event",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\EventPool.h"
                         ,0x9c,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)(*(longlong *)aVar6 + 0x18))(aVar6);
    uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
    if (uVar4 != 0) {
      pFVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe] + (uVar4 & 0x3fff);
      goto LAB_1416d87bb;
    }
  }
  else {
    this_00 = (FLockFreePointerListLIFORoot<64,1> *)TLazySingleton<TEventPool<1>_>::Get();
    aVar6 = (atomic<void_*>)this->Event;
    if (aVar6 == (atomic<void_*>)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Event",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\EventPool.h"
                         ,0x9c,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)(*(longlong *)aVar6 + 0x18))(aVar6);
    uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
    if (uVar4 != 0) {
      pFVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe] + (uVar4 & 0x3fff);
      goto LAB_1416d87bb;
    }
  }
  pFVar5 = (FIndexedLockFreeLink *)0x0;
LAB_1416d87bb:
  pFVar5->Payload = aVar6;
  FLockFreePointerListLIFORoot<64,1>::Push(this_00,uVar4);
  return;
}

