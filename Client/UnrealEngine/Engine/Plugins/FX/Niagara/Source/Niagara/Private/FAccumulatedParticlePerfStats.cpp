// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FAccumulatedParticlePerfStats @ 149332480

FAccumulatedParticlePerfStats * __thiscall
FAccumulatedParticlePerfStats::FAccumulatedParticlePerfStats
          (FAccumulatedParticlePerfStats *this,FAccumulatedParticlePerfStats *param_1)

{
  ForElementType<unsigned___int64> FVar1;
  ulong64 uVar2;
  
  FAccumulatedParticlePerfStats_GT::FAccumulatedParticlePerfStats_GT
            (&this->GameThreadStats,&param_1->GameThreadStats);
  (this->RenderThreadStats).NumFrames = (param_1->RenderThreadStats).NumFrames;
  uVar2 = (param_1->RenderThreadStats).AccumulatedStats.RenderUpdateCycles;
  (this->RenderThreadStats).AccumulatedStats.NumInstances =
       (param_1->RenderThreadStats).AccumulatedStats.NumInstances;
  (this->RenderThreadStats).AccumulatedStats.RenderUpdateCycles = uVar2;
  (this->RenderThreadStats).AccumulatedStats.GetDynamicMeshElementsCycles =
       (param_1->RenderThreadStats).AccumulatedStats.GetDynamicMeshElementsCycles;
  (this->RenderThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  if ((param_1->RenderThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData ==
      (ForElementType<unsigned___int64>)0x0) {
    memmove(&(this->RenderThreadStats).MaxPerFrameTotalCycles,
            &(param_1->RenderThreadStats).MaxPerFrameTotalCycles,0x50);
  }
  FVar1 = (this->RenderThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->RenderThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData =
       (param_1->RenderThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData;
  (param_1->RenderThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  (this->RenderThreadStats).MaxPerFrameTotalCycles.ArrayNum =
       (param_1->RenderThreadStats).MaxPerFrameTotalCycles.ArrayNum;
  (this->RenderThreadStats).MaxPerFrameTotalCycles.ArrayMax =
       (param_1->RenderThreadStats).MaxPerFrameTotalCycles.ArrayMax;
  (param_1->RenderThreadStats).MaxPerFrameTotalCycles.ArrayNum = 0;
  (param_1->RenderThreadStats).MaxPerFrameTotalCycles.ArrayMax = 10;
  (this->RenderThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  if ((param_1->RenderThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData ==
      (ForElementType<unsigned___int64>)0x0) {
    memmove(&(this->RenderThreadStats).MaxPerInstanceCycles,
            &(param_1->RenderThreadStats).MaxPerInstanceCycles,0x50);
  }
  FVar1 = (this->RenderThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->RenderThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData =
       (param_1->RenderThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData;
  (param_1->RenderThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  (this->RenderThreadStats).MaxPerInstanceCycles.ArrayNum =
       (param_1->RenderThreadStats).MaxPerInstanceCycles.ArrayNum;
  (this->RenderThreadStats).MaxPerInstanceCycles.ArrayMax =
       (param_1->RenderThreadStats).MaxPerInstanceCycles.ArrayMax;
  (param_1->RenderThreadStats).MaxPerInstanceCycles.ArrayNum = 0;
  (param_1->RenderThreadStats).MaxPerInstanceCycles.ArrayMax = 10;
  (this->GPUStats).NumFrames = (param_1->GPUStats).NumFrames;
  uVar2 = (param_1->GPUStats).AccumulatedStats.TotalMicroseconds;
  (this->GPUStats).AccumulatedStats.NumInstances = (param_1->GPUStats).AccumulatedStats.NumInstances
  ;
  (this->GPUStats).AccumulatedStats.TotalMicroseconds = uVar2;
  (this->GPUStats).MaxPerFrameTotalMicroseconds.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  if ((param_1->GPUStats).MaxPerFrameTotalMicroseconds.AllocatorInstance.SecondaryData ==
      (ForElementType<unsigned___int64>)0x0) {
    memmove(&(this->GPUStats).MaxPerFrameTotalMicroseconds,
            &(param_1->GPUStats).MaxPerFrameTotalMicroseconds,0x50);
  }
  FVar1 = (this->GPUStats).MaxPerFrameTotalMicroseconds.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->GPUStats).MaxPerFrameTotalMicroseconds.AllocatorInstance.SecondaryData =
       (param_1->GPUStats).MaxPerFrameTotalMicroseconds.AllocatorInstance.SecondaryData;
  (param_1->GPUStats).MaxPerFrameTotalMicroseconds.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  (this->GPUStats).MaxPerFrameTotalMicroseconds.ArrayNum =
       (param_1->GPUStats).MaxPerFrameTotalMicroseconds.ArrayNum;
  (this->GPUStats).MaxPerFrameTotalMicroseconds.ArrayMax =
       (param_1->GPUStats).MaxPerFrameTotalMicroseconds.ArrayMax;
  (param_1->GPUStats).MaxPerFrameTotalMicroseconds.ArrayNum = 0;
  (param_1->GPUStats).MaxPerFrameTotalMicroseconds.ArrayMax = 10;
  (this->GPUStats).MaxPerInstanceMicroseconds.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  if ((param_1->GPUStats).MaxPerInstanceMicroseconds.AllocatorInstance.SecondaryData ==
      (ForElementType<unsigned___int64>)0x0) {
    memmove(&(this->GPUStats).MaxPerInstanceMicroseconds,
            &(param_1->GPUStats).MaxPerInstanceMicroseconds,0x50);
  }
  FVar1 = (this->GPUStats).MaxPerInstanceMicroseconds.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->GPUStats).MaxPerInstanceMicroseconds.AllocatorInstance.SecondaryData =
       (param_1->GPUStats).MaxPerInstanceMicroseconds.AllocatorInstance.SecondaryData;
  (param_1->GPUStats).MaxPerInstanceMicroseconds.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  (this->GPUStats).MaxPerInstanceMicroseconds.ArrayNum =
       (param_1->GPUStats).MaxPerInstanceMicroseconds.ArrayNum;
  (this->GPUStats).MaxPerInstanceMicroseconds.ArrayMax =
       (param_1->GPUStats).MaxPerInstanceMicroseconds.ArrayMax;
  (param_1->GPUStats).MaxPerInstanceMicroseconds.ArrayNum = 0;
  (param_1->GPUStats).MaxPerInstanceMicroseconds.ArrayMax = 10;
  return this;
}

// ~FAccumulatedParticlePerfStats @ 149335fc0

void __thiscall
FAccumulatedParticlePerfStats::~FAccumulatedParticlePerfStats(FAccumulatedParticlePerfStats *this)

{
  ForElementType<unsigned___int64> FVar1;
  
  FVar1 = (this->GPUStats).MaxPerInstanceMicroseconds.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->GPUStats).MaxPerFrameTotalMicroseconds.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->RenderThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->RenderThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->GameThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->GameThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)FVar1);
    return;
  }
  return;
}

