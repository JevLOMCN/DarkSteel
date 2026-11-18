// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FScopedEvent @ 1416d68d0

FScopedEvent * __thiscall FScopedEvent::FScopedEvent(FScopedEvent *this)

{
  TEventPool<0> *this_00;
  FEvent *pFVar1;
  
  this_00 = TLazySingleton<TEventPool<0>_>::Get();
  pFVar1 = TEventPool<0>::GetRawEvent(this_00);
  this->Event = pFVar1;
  return this;
}

// ~FScopedEvent @ 1416d93a0

void __thiscall FScopedEvent::~FScopedEvent(FScopedEvent *this)

{
  FEvent *pFVar1;
  atomic<void_*> aVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FLockFreePointerListLIFORoot<64,1> *this_00;
  FIndexedLockFreeLink *pFVar6;
  
  pFVar1 = this->Event;
  if (pFVar1 != (FEvent *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,0xffffffff,0);
    this_00 = (FLockFreePointerListLIFORoot<64,1> *)TLazySingleton<TEventPool<0>_>::Get();
    aVar2 = (atomic<void_*>)this->Event;
    if (aVar2 == (atomic<void_*>)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Event",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\EventPool.h"
                         ,0x9c,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(*(longlong *)aVar2 + 0x18))(aVar2);
    uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
    if (uVar5 == 0) {
      pFVar6 = (FIndexedLockFreeLink *)0x0;
    }
    else {
      pFVar6 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar5 >> 0xe] + (uVar5 & 0x3fff);
    }
    pFVar6->Payload = aVar2;
    FLockFreePointerListLIFORoot<64,1>::Push(this_00,uVar5);
  }
  return;
}

// IsReady @ 141702840

bool __thiscall FScopedEvent::IsReady(FScopedEvent *this)

{
  FEvent *pFVar1;
  atomic<void_*> aVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FLockFreePointerListLIFORoot<64,1> *this_00;
  FIndexedLockFreeLink *pFVar8;
  
  pFVar1 = this->Event;
  if (pFVar1 != (FEvent *)0x0) {
    cVar4 = (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,1,0);
    if (cVar4 != '\0') {
      this_00 = (FLockFreePointerListLIFORoot<64,1> *)TLazySingleton<TEventPool<0>_>::Get();
      aVar2 = (atomic<void_*>)this->Event;
      if (aVar2 == (atomic<void_*>)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Event",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\EventPool.h"
                           ,0x9c,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      (**(code **)(*(longlong *)aVar2 + 0x18))(aVar2);
      uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
      if (uVar7 == 0) {
        pFVar8 = (FIndexedLockFreeLink *)0x0;
      }
      else {
        pFVar8 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar7 >> 0xe] + (uVar7 & 0x3fff);
      }
      pFVar8->Payload = aVar2;
      FLockFreePointerListLIFORoot<64,1>::Push(this_00,uVar7);
      this->Event = (FEvent *)0x0;
      return true;
    }
  }
  return this->Event == (FEvent *)0x0;
}

