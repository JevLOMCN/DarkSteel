// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EventLoop
// Functions: 7

// FIOManagerBSDSocketSelect @ 143140ad0

FIOManagerBSDSocketSelect * __thiscall
UE::EventLoop::FIOManagerBSDSocketSelect::FIOManagerBSDSocketSelect
          (FIOManagerBSDSocketSelect *this,IEventLoop *param_1,FParams *param_2)

{
  this->_padding_ = (longlong)&___7FIOManagerBSDSocketSelect_EventLoop_UE__6B_;
  MakeShared<UE::EventLoop::FIOManagerBSDSocketSelectImpl,1,UE::EventLoop::IEventLoop_&>
            (&this->Impl,param_1);
  return this;
}

// ~FIOManagerBSDSocketSelect @ 143141030

void __thiscall
UE::EventLoop::FIOManagerBSDSocketSelect::~FIOManagerBSDSocketSelect
          (FIOManagerBSDSocketSelect *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Impl).SharedReferenceCount.ReferenceController);
  return;
}

// GetIOAccess @ 1431414b0

FIOAccessBSDSocket * __thiscall
UE::EventLoop::FIOManagerBSDSocketSelect::GetIOAccess(FIOManagerBSDSocketSelect *this)

{
  return &((this->Impl).Object)->IOAccess;
}

// Init @ 143141630

bool __thiscall UE::EventLoop::FIOManagerBSDSocketSelect::Init(FIOManagerBSDSocketSelect *this)

{
  FIOManagerBSDSocketSelectImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TAtomic<unsigned_int> TVar5;
  
  pFVar1 = (this->Impl).Object;
  if ((pFVar1->IORequestStorage).ManagerThreadId != (TAtomic<unsigned_int>)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ManagerThreadId == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoopManagedStorage.h"
                       ,0x26,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  TVar5 = (TAtomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  (pFVar1->IORequestStorage).ManagerThreadId = TVar5;
  UNLOCK();
  return true;
}

// Notify @ 143141720

void __thiscall UE::EventLoop::FIOManagerBSDSocketSelect::Notify(FIOManagerBSDSocketSelect *this)

{
  LOCK();
  ((this->Impl).Object)->bAsyncSignal = (TAtomic<bool>)0x1;
  UNLOCK();
  return;
}

// Poll @ 143141760

void __thiscall
UE::EventLoop::FIOManagerBSDSocketSelect::Poll(FIOManagerBSDSocketSelect *this,FTimespan param_1)

{
  FIOManagerBSDSocketSelectImpl::Poll((this->Impl).Object,param_1);
  return;
}

// Shutdown @ 143144820

void __thiscall UE::EventLoop::FIOManagerBSDSocketSelect::Shutdown(FIOManagerBSDSocketSelect *this)

{
  return;
}

