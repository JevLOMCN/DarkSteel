// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// EnqueueFromOtherThread @ 141493aa0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTaskThreadBase::EnqueueFromOtherThread(FTaskThreadBase *this,int param_1,FBaseGraphTask *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                     ,0x23e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// EnqueueFromThisThread @ 141493b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTaskThreadBase::EnqueueFromThisThread(FTaskThreadBase *this,int param_1,FBaseGraphTask *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                     ,0x22a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Exit @ 141494e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTaskThreadBase::Exit(FTaskThreadBase *this)

{
  return;
}

// GetSingleThreadInterface @ 14149a520

/* WARNING: Enum "Type": Some values do not have unique names */

FSingleThreadRunnable * __thiscall FTaskThreadBase::GetSingleThreadInterface(FTaskThreadBase *this)

{
  FSingleThreadRunnable *pFVar1;
  
  pFVar1 = (FSingleThreadRunnable *)&this->_padding_;
  if (this == (FTaskThreadBase *)0x0) {
    pFVar1 = (FSingleThreadRunnable *)0x0;
  }
  return pFVar1;
}

// Init @ 14149b920

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTaskThreadBase::Init(FTaskThreadBase *this)

{
  TlsSetValue(this->PerThreadIDTLSSlot,this->OwnerWorker);
  return true;
}

// ProcessTasksUntilIdle @ 1414aab20

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall FTaskThreadBase::ProcessTasksUntilIdle(FTaskThreadBase *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                     ,0x21e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 0;
}

// Run @ 1414af460

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FTaskThreadBase::Run(FTaskThreadBase *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (this->OwnerWorker == (FWorkerThread *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerWorker",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                       ,0x26a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  (**(code **)(this->_padding_ + 0x30))(this,0);
  FMemory::ClearAndDisableTLSCachesOnCurrentThread();
  return 0;
}

// Stop @ 1414b1aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTaskThreadBase::Stop(FTaskThreadBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001414b1aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x48))(this,0xffffffff);
  return;
}

// Tick @ 1414b4ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTaskThreadBase::Tick(FTaskThreadBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001414b4aba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)this[-1].OwnerWorker[2].RunnableThread)(&this[-1].OwnerWorker,0);
  return;
}

