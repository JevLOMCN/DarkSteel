// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// WaitForWriteLock @ 1419001f0

void __thiscall
UE::Private::FOutputDevicesReadScopeLock::WaitForWriteLock(FOutputDevicesReadScopeLock *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FOutputDeviceRedirectorState *SRWLock;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_UE::Private::FOutputDevicesReadScopeLock::WaitForWriteLock(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId302,"FOutputDevicesReadScopeLock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\OutputDeviceRedirector.cpp"
               ,0x12e);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_UE::Private::FOutputDevicesReadScopeLock::WaitForWriteLock(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId302);
  }
  LOCK();
  paVar1 = &this->State->OutputDevicesLockState;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -2);
  UNLOCK();
  SRWLock = this->State;
  if ((SRWLock == (FOutputDeviceRedirectorState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  LOCK();
  paVar1 = &this->State->OutputDevicesLockState;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 2);
  UNLOCK();
  if ((((uint)aVar2 & 1) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(LockState & 1) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\OutputDeviceRedirector.cpp"
                         ,0x135,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (SRWLock != (FOutputDeviceRedirectorState *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

