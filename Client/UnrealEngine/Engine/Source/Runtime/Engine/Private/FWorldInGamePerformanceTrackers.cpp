// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FWorldInGamePerformanceTrackers @ 147cc6240

FWorldInGamePerformanceTrackers * __thiscall
FWorldInGamePerformanceTrackers::FWorldInGamePerformanceTrackers
          (FWorldInGamePerformanceTrackers *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)FInGamePerformanceTracker::HistorySize + 200))();
  FInGameCycleHistory::FInGameCycleHistory((FInGameCycleHistory *)this,iVar1);
  this->InGamePerformanceTrackers[0][0].DirectSectionTime_EntryCount = 0;
  this->InGamePerformanceTrackers[0][0].DirectSectionTime_BeginCycles = 0;
  iVar1 = (**(code **)(*(longlong *)FInGamePerformanceTracker::HistorySize + 200))();
  FInGameCycleHistory::FInGameCycleHistory(&this->InGamePerformanceTrackers[0][1].History,iVar1);
  this->InGamePerformanceTrackers[0][1].DirectSectionTime_EntryCount = 0;
  this->InGamePerformanceTrackers[0][1].DirectSectionTime_BeginCycles = 0;
  iVar1 = (**(code **)(*(longlong *)FInGamePerformanceTracker::HistorySize + 200))();
  FInGameCycleHistory::FInGameCycleHistory(&this->InGamePerformanceTrackers[0][2].History,iVar1);
  this->InGamePerformanceTrackers[0][2].DirectSectionTime_EntryCount = 0;
  this->InGamePerformanceTrackers[0][2].DirectSectionTime_BeginCycles = 0;
  return this;
}

// ~FWorldInGamePerformanceTrackers @ 147cc8fc0

void __thiscall
FWorldInGamePerformanceTrackers::~FWorldInGamePerformanceTrackers
          (FWorldInGamePerformanceTrackers *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = this->InGamePerformanceTrackers[0][2].History.FrameCycles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = this->InGamePerformanceTrackers[0][1].History.FrameCycles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = this->InGamePerformanceTrackers[0][0].History.FrameCycles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

