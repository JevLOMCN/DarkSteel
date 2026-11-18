// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FParticlePerfStats @ 149276e90

FParticlePerfStats * __thiscall
FParticlePerfStats::FParticlePerfStats(FParticlePerfStats *this,FParticlePerfStats *param_1)

{
  bool bVar1;
  ulong64 uVar2;
  
  (this->GameThreadStats).TickConcurrentCycles = (TAtomic<unsigned___int64>)0x0;
  (this->GameThreadStats).EndOfFrameCycles = (TAtomic<unsigned___int64>)0x0;
  (this->GameThreadStats).ActivationCycles = (TAtomic<unsigned___int64>)0x0;
  (this->GameThreadStats).NumInstances = (param_1->GameThreadStats).NumInstances;
  (this->GameThreadStats).TickGameThreadCycles = (param_1->GameThreadStats).TickGameThreadCycles;
  LOCK();
  (this->GameThreadStats).TickConcurrentCycles = (param_1->GameThreadStats).TickConcurrentCycles;
  UNLOCK();
  (this->GameThreadStats).FinalizeCycles = (param_1->GameThreadStats).FinalizeCycles;
  LOCK();
  (this->GameThreadStats).EndOfFrameCycles = (param_1->GameThreadStats).EndOfFrameCycles;
  UNLOCK();
  LOCK();
  (this->GameThreadStats).ActivationCycles = (param_1->GameThreadStats).ActivationCycles;
  UNLOCK();
  (this->GameThreadStats).WaitCycles = (param_1->GameThreadStats).WaitCycles;
  (param_1->GameThreadStats).NumInstances = 0;
  (param_1->GameThreadStats).TickGameThreadCycles = 0;
  LOCK();
  (param_1->GameThreadStats).TickConcurrentCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (param_1->GameThreadStats).FinalizeCycles = 0;
  LOCK();
  (param_1->GameThreadStats).EndOfFrameCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  LOCK();
  (param_1->GameThreadStats).ActivationCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (param_1->GameThreadStats).WaitCycles = 0;
  uVar2 = (param_1->RenderThreadStats).RenderUpdateCycles;
  (this->RenderThreadStats).NumInstances = (param_1->RenderThreadStats).NumInstances;
  (this->RenderThreadStats).RenderUpdateCycles = uVar2;
  (this->RenderThreadStats).GetDynamicMeshElementsCycles =
       (param_1->RenderThreadStats).GetDynamicMeshElementsCycles;
  uVar2 = (param_1->GPUStats).TotalMicroseconds;
  (this->GPUStats).NumInstances = (param_1->GPUStats).NumInstances;
  (this->GPUStats).TotalMicroseconds = uVar2;
  this->CSVStat_Count = param_1->CSVStat_Count;
  this->CSVStat_Total = param_1->CSVStat_Total;
  this->CSVStat_GTOnly = param_1->CSVStat_GTOnly;
  this->CSVStat_InstAvgGT = param_1->CSVStat_InstAvgGT;
  this->CSVStat_RT = param_1->CSVStat_RT;
  this->CSVStat_InstAvgRT = param_1->CSVStat_InstAvgRT;
  this->CSVStat_GPU = param_1->CSVStat_GPU;
  this->CSVStat_InstAvgGPU = param_1->CSVStat_InstAvgGPU;
  this->CSVStat_Activation = param_1->CSVStat_Activation;
  this->CSVStat_Waits = param_1->CSVStat_Waits;
  this->CSVStat_Culled = param_1->CSVStat_Culled;
  this->CSVStat_MemoryKB = param_1->CSVStat_MemoryKB;
  (this->CSVMemoryKB_Asset).bIsSet = false;
  bVar1 = (param_1->CSVMemoryKB_Asset).bIsSet;
  (this->CSVMemoryKB_Asset).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->CSVMemoryKB_Asset).TypedValue = (param_1->CSVMemoryKB_Asset).TypedValue;
  }
  return this;
}

