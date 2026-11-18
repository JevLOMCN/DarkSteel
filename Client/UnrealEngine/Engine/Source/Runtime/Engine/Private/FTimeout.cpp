// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetElapsedSeconds @ 1489e8460

double __thiscall UE::FTimeout::GetElapsedSeconds(FTimeout *this)

{
  ulonglong uVar1;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  uVar1 = local_res8[0].QuadPart - this->StartCycles;
  if (-1 < (longlong)uVar1) {
    return (double)(longlong)uVar1 * FGenericPlatformTime::SecondsPerCycle64;
  }
  return (double)uVar1 * FGenericPlatformTime::SecondsPerCycle64;
}

