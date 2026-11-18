// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FDurationTimer @ 141b21730

FDurationTimer * __thiscall FDurationTimer::FDurationTimer(FDurationTimer *this,double *param_1)

{
  double dVar1;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->Accumulator = param_1;
  this->StartTime = dVar1 + __real_4170000000000000;
  return this;
}

// Stop @ 141b4e8e0

double __thiscall FDurationTimer::Stop(FDurationTimer *this)

{
  double dVar1;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  dVar1 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  *this->Accumulator = (dVar1 - this->StartTime) + *this->Accumulator;
  this->StartTime = dVar1;
  return dVar1;
}

