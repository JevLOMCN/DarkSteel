// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 11

// ~FStatsCollector @ 143228d90

void __thiscall BuildPatchServices::FStatsCollector::~FStatsCollector(FStatsCollector *this)

{
  *this = (FStatsCollector)&___7FStatsCollector_BuildPatchServices__6B_;
  return;
}

// Accumulate @ 1432321e0

void __cdecl BuildPatchServices::FStatsCollector::Accumulate(long64 *param_1,long64 param_2)

{
  LOCK();
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return;
}

// AccumulateTimeBegin @ 1432321f0

void __cdecl BuildPatchServices::FStatsCollector::AccumulateTimeBegin(ulong64 *param_1)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  *param_1 = (ulong64)local_res8[0];
  return;
}

// AccumulateTimeEnd @ 143232220

void __cdecl
BuildPatchServices::FStatsCollector::AccumulateTimeEnd(long64 *param_1,ulong64 *param_2)

{
  LARGE_INTEGER local_res10 [3];
  
  QueryPerformanceCounter(local_res10);
  LOCK();
  *param_1 = *param_1 + (local_res10[0].QuadPart - *param_2);
  UNLOCK();
  return;
}

// CyclesToSeconds @ 143248e50

double __cdecl BuildPatchServices::FStatsCollector::CyclesToSeconds(ulong64 param_1)

{
  if (-1 < (longlong)param_1) {
    return (double)(longlong)param_1 * FGenericPlatformTime::SecondsPerCycle64;
  }
  return (double)param_1 * FGenericPlatformTime::SecondsPerCycle64;
}

// GetAsPercentage @ 1432542b0

double __cdecl BuildPatchServices::FStatsCollector::GetAsPercentage(long64 *param_1)

{
  return (double)*param_1 * __real_3f1a36e2eb1c432d;
}

// GetCycles @ 143255450

ulong64 __cdecl BuildPatchServices::FStatsCollector::GetCycles(void)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  return local_res8[0].QuadPart;
}

// GetSeconds @ 1432573e0

double __cdecl BuildPatchServices::FStatsCollector::GetSeconds(void)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  if (-1 < local_res8[0].QuadPart) {
    return (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle64;
  }
  return (double)(ulonglong)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle64;
}

// SecondsToCycles @ 143267d20

ulong64 __cdecl BuildPatchServices::FStatsCollector::SecondsToCycles(double param_1)

{
  longlong lVar1;
  double dVar2;
  
  dVar2 = param_1 / FGenericPlatformTime::SecondsPerCycle64;
  if (__real_43f0000000000000 <= dVar2) {
    return 0xffffffffffffffff;
  }
  lVar1 = 0;
  if ((__real_43e0000000000000 <= dVar2) &&
     (dVar2 = dVar2 - __real_43e0000000000000, dVar2 < __real_43e0000000000000)) {
    lVar1 = -0x8000000000000000;
  }
  return (longlong)dVar2 + lVar1;
}

// Set @ 143268b40

void __cdecl BuildPatchServices::FStatsCollector::Set(long64 *param_1,long64 param_2)

{
  LOCK();
  *param_1 = param_2;
  UNLOCK();
  return;
}

// SetAsPercentage @ 143268b50

void __cdecl BuildPatchServices::FStatsCollector::SetAsPercentage(long64 *param_1,double param_2)

{
  LOCK();
  *param_1 = (longlong)(param_2 * __real_40c3880000000000);
  UNLOCK();
  return;
}

