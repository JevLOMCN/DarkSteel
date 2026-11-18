// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// ~FFramePair @ 145cd27e0

void __thiscall FRHIFrameFlipTrackingRunnable::FFramePair::~FFramePair(FFramePair *this)

{
  int *piVar1;
  int iVar2;
  FTaskEvent FVar3;
  
  if (CpuChannel->Enabled < 0) {
    UE::Tasks::FTaskEvent::Trigger(&this->Event);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___cdecl_FRHIFrameFlipTrackingRunnable::FFramePair::~FFramePair(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId181,"SyncTrigger_Swapchain",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIUtilities.cpp"
               ,0xb5);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___cdecl_FRHIFrameFlipTrackingRunnable::FFramePair::~FFramePair(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId181);
    UE::Tasks::FTaskEvent::Trigger(&this->Event);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FVar3 = this->Event;
  if (FVar3 != (FTaskEvent)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)FVar3 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000145cd2868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)FVar3)(FVar3,1);
      return;
    }
  }
  return;
}

