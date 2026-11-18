// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// GetSeconds @ 1431e3160

double __thiscall
BuildPatchServices::TProcessTimer<BuildPatchServices::FStatsCollector,1>::GetSeconds
          (TProcessTimer<BuildPatchServices::FStatsCollector,1> *this)

{
  ulong64 uVar1;
  ulong64 uVar2;
  double dVar3;
  double dVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  dVar3 = FStatsCollector::CyclesToSeconds(this->Cycles);
  if ((this->bIsRunning != false) && (this->bIsPaused == false)) {
    uVar1 = this->StartCycles;
    uVar2 = FStatsCollector::GetCycles();
    dVar4 = FStatsCollector::CyclesToSeconds(uVar2 - uVar1);
    dVar3 = dVar3 + dVar4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return dVar3;
}

// Stop @ 1432695d0

void __thiscall
BuildPatchServices::TProcessTimer<BuildPatchServices::FStatsCollector,1>::Stop
          (TProcessTimer<BuildPatchServices::FStatsCollector,1> *this)

{
  LARGE_INTEGER local_res8 [4];
  
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ((this->bIsRunning != false) && (this->bIsRunning = false, this->bIsPaused == false)) {
    QueryPerformanceCounter(local_res8);
    this->Cycles = this->Cycles + (local_res8[0].QuadPart - this->StartCycles);
  }
                    /* WARNING: Could not recover jumptable at 0x00014326960f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// GetSeconds @ 1433210a0

double __thiscall
BuildPatchServices::TProcessTimer<BuildPatchServices::FMockCyclesProvider,1>::GetSeconds
          (TProcessTimer<BuildPatchServices::FMockCyclesProvider,1> *this)

{
  ulong64 uVar1;
  ulong64 uVar2;
  double dVar3;
  double dVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  dVar3 = FMockCyclesProvider::CyclesToSeconds(this->Cycles);
  if ((this->bIsRunning != false) && (this->bIsPaused == false)) {
    uVar1 = this->StartCycles;
    uVar2 = FMockCyclesProvider::GetCycles();
    dVar4 = FMockCyclesProvider::CyclesToSeconds(uVar2 - uVar1);
    dVar3 = dVar3 + dVar4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return dVar3;
}

