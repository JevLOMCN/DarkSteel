// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// FQuartzLatencyTimer @ 14733f8e0

FQuartzLatencyTimer * __thiscall
Audio::FQuartzLatencyTimer::FQuartzLatencyTimer(FQuartzLatencyTimer *this)

{
  this->JourneyStartCycles = -1;
  this->JourneyEndCycles = -1;
  return this;
}

// GetCurrentTimePassedMs @ 14734edd0

double __thiscall Audio::FQuartzLatencyTimer::GetCurrentTimePassedMs(FQuartzLatencyTimer *this)

{
  LARGE_INTEGER local_res8 [4];
  
  if ((0 < this->JourneyStartCycles) && (this->JourneyEndCycles < 1)) {
    QueryPerformanceCounter(local_res8);
    return (double)(ulonglong)(local_res8[0].QuadPart - this->JourneyStartCycles) *
           FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000;
  }
  return 0.0;
}

// GetResultsMilliseconds @ 147350890

double __thiscall Audio::FQuartzLatencyTimer::GetResultsMilliseconds(FQuartzLatencyTimer *this)

{
  if ((0 < this->JourneyStartCycles) && (0 < this->JourneyEndCycles)) {
    return (double)(ulonglong)(this->JourneyEndCycles - this->JourneyStartCycles) *
           FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000;
  }
  return 0.0;
}

// HasTimerRun @ 147351650

bool __thiscall Audio::FQuartzLatencyTimer::HasTimerRun(FQuartzLatencyTimer *this)

{
  if ((0 < this->JourneyStartCycles) && (0 < this->JourneyEndCycles)) {
    return true;
  }
  return false;
}

// HasTimerStarted @ 147351670

bool __thiscall Audio::FQuartzLatencyTimer::HasTimerStarted(FQuartzLatencyTimer *this)

{
  return 0 < this->JourneyStartCycles;
}

// HasTimerStopped @ 147351680

bool __thiscall Audio::FQuartzLatencyTimer::HasTimerStopped(FQuartzLatencyTimer *this)

{
  return 0 < this->JourneyEndCycles;
}

// IsTimerRunning @ 1473519f0

bool __thiscall Audio::FQuartzLatencyTimer::IsTimerRunning(FQuartzLatencyTimer *this)

{
  if ((0 < this->JourneyStartCycles) && (this->JourneyEndCycles < 1)) {
    return true;
  }
  return false;
}

// ResetTimer @ 1473560a0

void __thiscall Audio::FQuartzLatencyTimer::ResetTimer(FQuartzLatencyTimer *this)

{
  this->JourneyStartCycles = -1;
  this->JourneyEndCycles = -1;
  return;
}

// StartTimer @ 147358800

void __thiscall Audio::FQuartzLatencyTimer::StartTimer(FQuartzLatencyTimer *this)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  this->JourneyStartCycles = (long64)local_res8[0];
  return;
}

// StopTimer @ 147358a30

void __thiscall Audio::FQuartzLatencyTimer::StopTimer(FQuartzLatencyTimer *this)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  this->JourneyEndCycles = (long64)local_res8[0];
  return;
}

