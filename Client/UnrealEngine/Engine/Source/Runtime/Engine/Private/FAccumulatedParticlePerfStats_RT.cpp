// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FAccumulatedParticlePerfStats_RT @ 14815a4c0

FAccumulatedParticlePerfStats_RT * __thiscall
FAccumulatedParticlePerfStats_RT::FAccumulatedParticlePerfStats_RT
          (FAccumulatedParticlePerfStats_RT *this)

{
  (this->AccumulatedStats).NumInstances = 0;
  (this->AccumulatedStats).RenderUpdateCycles = 0;
  (this->AccumulatedStats).GetDynamicMeshElementsCycles = 0;
  (this->MaxPerFrameTotalCycles).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  (this->MaxPerFrameTotalCycles).ArrayNum = 0;
  (this->MaxPerFrameTotalCycles).ArrayMax = 10;
  (this->MaxPerInstanceCycles).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  (this->MaxPerInstanceCycles).ArrayNum = 0;
  (this->MaxPerInstanceCycles).ArrayMax = 10;
  FAccumulatedParticlePerfStats::ResetMaxArray(&this->MaxPerFrameTotalCycles);
  FAccumulatedParticlePerfStats::ResetMaxArray(&this->MaxPerInstanceCycles);
  this->NumFrames = 0;
  (this->AccumulatedStats).NumInstances = 0;
  (this->AccumulatedStats).RenderUpdateCycles = 0;
  (this->AccumulatedStats).GetDynamicMeshElementsCycles = 0;
  return this;
}

// Reset @ 148191ca0

void __thiscall FAccumulatedParticlePerfStats_RT::Reset(FAccumulatedParticlePerfStats_RT *this)

{
  FAccumulatedParticlePerfStats::ResetMaxArray(&this->MaxPerFrameTotalCycles);
  FAccumulatedParticlePerfStats::ResetMaxArray(&this->MaxPerInstanceCycles);
  this->NumFrames = 0;
  (this->AccumulatedStats).NumInstances = 0;
  (this->AccumulatedStats).RenderUpdateCycles = 0;
  (this->AccumulatedStats).GetDynamicMeshElementsCycles = 0;
  return;
}

// Tick @ 1481a1e90

void __thiscall
FAccumulatedParticlePerfStats_RT::Tick
          (FAccumulatedParticlePerfStats_RT *this,FParticlePerfStats *param_1)

{
  ulong64 *puVar1;
  ulonglong uVar2;
  
  if ((param_1->RenderThreadStats).NumInstances != 0) {
    this->NumFrames = this->NumFrames + 1;
    (this->AccumulatedStats).NumInstances =
         (this->AccumulatedStats).NumInstances + (param_1->RenderThreadStats).NumInstances;
    puVar1 = &(this->AccumulatedStats).RenderUpdateCycles;
    *puVar1 = *puVar1 + (param_1->RenderThreadStats).RenderUpdateCycles;
    puVar1 = &(this->AccumulatedStats).GetDynamicMeshElementsCycles;
    *puVar1 = *puVar1 + (param_1->RenderThreadStats).GetDynamicMeshElementsCycles;
    FAccumulatedParticlePerfStats::AddMax
              (&this->MaxPerFrameTotalCycles,
               (param_1->RenderThreadStats).RenderUpdateCycles +
               (param_1->RenderThreadStats).GetDynamicMeshElementsCycles);
    uVar2 = (param_1->RenderThreadStats).NumInstances;
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = ((param_1->RenderThreadStats).GetDynamicMeshElementsCycles +
              (param_1->RenderThreadStats).RenderUpdateCycles) / uVar2;
    }
    FAccumulatedParticlePerfStats::AddMax(&this->MaxPerInstanceCycles,uVar2);
  }
  return;
}

