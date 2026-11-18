// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 6

// FMediaIOCoreWaitVSyncThread @ 14d78a6c0

FMediaIOCoreWaitVSyncThread * __thiscall
FMediaIOCoreWaitVSyncThread::FMediaIOCoreWaitVSyncThread
          (FMediaIOCoreWaitVSyncThread *this,TSharedPtr<IMediaIOCoreHardwareSync,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FEvent *pFVar2;
  
  this->_padding_ = (longlong)&___7FMediaIOCoreWaitVSyncThread__6B_;
  (this->HardwareSync).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->HardwareSync).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bWaitingForSignal = (TAtomic<bool>)0x0;
  this->bAlive = (TAtomic<bool>)0x0;
  pFVar2 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->WaitVSync = pFVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// Exit @ 14d7a6f40

void __thiscall FMediaIOCoreWaitVSyncThread::Exit(FMediaIOCoreWaitVSyncThread *this)

{
  FGenericPlatformProcess::ReturnSynchEventToPool(this->WaitVSync);
  return;
}

// Init @ 14d7af080

bool __thiscall FMediaIOCoreWaitVSyncThread::Init(FMediaIOCoreWaitVSyncThread *this)

{
  LOCK();
  this->bAlive = (TAtomic<bool>)0x1;
  UNLOCK();
  return true;
}

// Run @ 14d7bb590

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FMediaIOCoreWaitVSyncThread::Run(FMediaIOCoreWaitVSyncThread *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  
  if (!GIsRequestingExit) {
    do {
      if (this->bAlive == (TAtomic<bool>)0x0) {
        return 0;
      }
      if (((this->HardwareSync).Object == (IMediaIOCoreHardwareSync *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      cVar3 = (**(code **)*(this->HardwareSync).Object)();
      if (cVar3 == '\0') {
        return 0;
      }
      if (((this->HardwareSync).Object == (IMediaIOCoreHardwareSync *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      (**(code **)((longlong)*(this->HardwareSync).Object + 8))();
      if (((this->bWaitingForSignal == (TAtomic<bool>)0x0) && (this->bAlive != (TAtomic<bool>)0x0))
         && (1 < (byte)LogMediaIOCore._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      }
      (**(code **)(this->WaitVSync->_padding_ + 0x10))();
    } while (GIsRequestingExit == false);
  }
  return 0;
}

// Stop @ 14d7be510

void __thiscall FMediaIOCoreWaitVSyncThread::Stop(FMediaIOCoreWaitVSyncThread *this)

{
  LOCK();
  this->bAlive = (TAtomic<bool>)0x0;
  UNLOCK();
  return;
}

// Wait_GameOrRenderThread @ 14d7c4390

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMediaIOCoreWaitVSyncThread::Wait_GameOrRenderThread(FMediaIOCoreWaitVSyncThread *this)

{
  char cVar1;
  
  if (this->bAlive != (TAtomic<bool>)0x0) {
    LOCK();
    this->bWaitingForSignal = (TAtomic<bool>)0x1;
    UNLOCK();
    cVar1 = (**(code **)(this->WaitVSync->_padding_ + 0x20))(this->WaitVSync,100,0);
    if (this->bAlive != (TAtomic<bool>)0x0) {
      (**(code **)(this->WaitVSync->_padding_ + 0x18))();
      LOCK();
      this->bWaitingForSignal = (TAtomic<bool>)0x0;
      UNLOCK();
      if ((cVar1 == '\0') && (1 < (byte)LogMediaIOCore._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      }
    }
    return (bool)cVar1;
  }
  return true;
}

