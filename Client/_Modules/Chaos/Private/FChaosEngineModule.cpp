// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// StartupModule @ 1436f0db0

void __thiscall FChaosEngineModule::StartupModule(FChaosEngineModule *this)

{
  bool bVar1;
  FModuleManager *pFVar2;
  FName *pFVar3;
  wchar_t *pwVar4;
  FName local_res10 [3];
  
  pFVar2 = FModuleManager::Get();
  bVar1 = FModuleManager::ModuleExists(pFVar2,L"GeometryCore",(FString *)0x0);
  if (bVar1) {
    pFVar2 = FModuleManager::Get();
    pFVar3 = ::FName::FName(local_res10,"GeometryCore");
    FModuleManager::LoadModule(pFVar2,*pFVar3,None);
  }
  pwVar4 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar4,L"SingleThreadedPhysics");
  if (bVar1) {
    Chaos::GSingleThreadedPhysics = 1;
  }
  FChaosVisualDebuggerTrace::RegisterEventHandlers();
  return;
}

// ShutdownModule @ 1436f0e40

void __thiscall FChaosEngineModule::ShutdownModule(FChaosEngineModule *this)

{
  AcquireSRWLockExclusive
            ((PSRWLOCK)&FChaosVisualDebuggerTrace::SessionState.DeltaRecordingStatesLock);
  if (FChaosVisualDebuggerTrace::SessionState.RecordingStartedDelegateHandle.ID != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    if (FChaosVisualDebuggerTrace::SessionState.RecordingStartedDelegateHandle.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FChaosVDRuntimeModule::RecordingStartedDelegate,
                 FChaosVisualDebuggerTrace::SessionState.RecordingStartedDelegateHandle);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
  }
  if (FChaosVisualDebuggerTrace::SessionState.RecordingStoppedDelegateHandle.ID != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    if (FChaosVisualDebuggerTrace::SessionState.RecordingStoppedDelegateHandle.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FChaosVDRuntimeModule::RecordingStopDelegate,
                 FChaosVisualDebuggerTrace::SessionState.RecordingStoppedDelegateHandle);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
  }
  if (FChaosVisualDebuggerTrace::SessionState.RecordingFullCaptureRequestedHandle.ID != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    if (FChaosVisualDebuggerTrace::SessionState.RecordingFullCaptureRequestedHandle.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FChaosVDRuntimeModule::PerformFullCaptureDelegate,
                 FChaosVisualDebuggerTrace::SessionState.RecordingFullCaptureRequestedHandle);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
  }
  LOCK();
  FChaosVisualDebuggerTrace::SessionState.bIsTracing = (atomic<bool>)0x0;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001437b84e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive
            ((PSRWLOCK)&FChaosVisualDebuggerTrace::SessionState.DeltaRecordingStatesLock);
  return;
}

