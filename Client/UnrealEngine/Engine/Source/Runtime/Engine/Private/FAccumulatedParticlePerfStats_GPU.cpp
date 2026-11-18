// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FAccumulatedParticlePerfStats_GPU @ 14815a350

FAccumulatedParticlePerfStats_GPU * __thiscall
FAccumulatedParticlePerfStats_GPU::FAccumulatedParticlePerfStats_GPU
          (FAccumulatedParticlePerfStats_GPU *this)

{
  (this->AccumulatedStats).NumInstances = 0;
  (this->AccumulatedStats).TotalMicroseconds = 0;
  (this->MaxPerFrameTotalMicroseconds).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  (this->MaxPerFrameTotalMicroseconds).ArrayNum = 0;
  (this->MaxPerFrameTotalMicroseconds).ArrayMax = 10;
  (this->MaxPerInstanceMicroseconds).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  (this->MaxPerInstanceMicroseconds).ArrayNum = 0;
  (this->MaxPerInstanceMicroseconds).ArrayMax = 10;
  FAccumulatedParticlePerfStats::ResetMaxArray(&this->MaxPerFrameTotalMicroseconds);
  FAccumulatedParticlePerfStats::ResetMaxArray(&this->MaxPerInstanceMicroseconds);
  this->NumFrames = 0;
  (this->AccumulatedStats).NumInstances = 0;
  (this->AccumulatedStats).TotalMicroseconds = 0;
  return this;
}

// Reset @ 148191bf0

void __thiscall FAccumulatedParticlePerfStats_GPU::Reset(FAccumulatedParticlePerfStats_GPU *this)

{
  FAccumulatedParticlePerfStats::ResetMaxArray(&this->MaxPerFrameTotalMicroseconds);
  FAccumulatedParticlePerfStats::ResetMaxArray(&this->MaxPerInstanceMicroseconds);
  this->NumFrames = 0;
  (this->AccumulatedStats).NumInstances = 0;
  (this->AccumulatedStats).TotalMicroseconds = 0;
  return;
}

// Tick @ 1481a1d40

void __thiscall
FAccumulatedParticlePerfStats_GPU::Tick
          (FAccumulatedParticlePerfStats_GPU *this,FParticlePerfStats *param_1)

{
  ulong64 *puVar1;
  ulonglong uVar2;
  
  if ((param_1->GPUStats).NumInstances != 0) {
    this->NumFrames = this->NumFrames + 1;
    (this->AccumulatedStats).NumInstances =
         (this->AccumulatedStats).NumInstances + (param_1->GPUStats).NumInstances;
    puVar1 = &(this->AccumulatedStats).TotalMicroseconds;
    *puVar1 = *puVar1 + (param_1->GPUStats).TotalMicroseconds;
    FAccumulatedParticlePerfStats::AddMax
              (&this->MaxPerFrameTotalMicroseconds,(param_1->GPUStats).TotalMicroseconds);
    uVar2 = (param_1->GPUStats).NumInstances;
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (param_1->GPUStats).TotalMicroseconds / uVar2;
    }
    FAccumulatedParticlePerfStats::AddMax(&this->MaxPerInstanceMicroseconds,uVar2);
  }
  return;
}

