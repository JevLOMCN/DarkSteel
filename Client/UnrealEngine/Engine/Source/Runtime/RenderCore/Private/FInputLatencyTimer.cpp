// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// GameThreadTick @ 145db7800

void __thiscall FInputLatencyTimer::GameThreadTick(FInputLatencyTimer *this)

{
  double dVar1;
  LARGE_INTEGER local_res10 [3];
  
  if (FThreadStats::bPrimaryEnable) {
    if (this->bInitialized == false) {
      QueryPerformanceCounter(local_res10);
      dVar1 = (double)CONCAT44(local_res10[0].s.HighPart,local_res10[0].s.LowPart) *
              FGenericPlatformTime::SecondsPerCycle;
      this->bInitialized = true;
      this->LastCaptureTime = dVar1 + __real_4170000000000000;
    }
    QueryPerformanceCounter(local_res10);
    dVar1 = (double)CONCAT44(local_res10[0].s.HighPart,local_res10[0].s.LowPart) *
            FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
    if ((double)this->UpdateFrequency < dVar1 - this->LastCaptureTime) {
      this->LastCaptureTime = dVar1;
      QueryPerformanceCounter(local_res10);
      this->StartTime = local_res10[0].s.LowPart;
      this->GameThreadTrigger = true;
    }
  }
  return;
}

