// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FAccumulatedParticlePerfStats_GT @ 14815a3d0

FAccumulatedParticlePerfStats_GT * __thiscall
FAccumulatedParticlePerfStats_GT::FAccumulatedParticlePerfStats_GT
          (FAccumulatedParticlePerfStats_GT *this)

{
  (this->MaxPerFrameTotalCycles).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  (this->MaxPerFrameTotalCycles).ArrayNum = 0;
  (this->MaxPerFrameTotalCycles).ArrayMax = 10;
  (this->MaxPerInstanceCycles).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  (this->MaxPerInstanceCycles).ArrayNum = 0;
  (this->MaxPerInstanceCycles).ArrayMax = 10;
  (this->AccumulatedStats).TickConcurrentCycles = (TAtomic<unsigned___int64>)0x0;
  (this->AccumulatedStats).EndOfFrameCycles = (TAtomic<unsigned___int64>)0x0;
  (this->AccumulatedStats).ActivationCycles = (TAtomic<unsigned___int64>)0x0;
  (this->AccumulatedStats).NumInstances = 0;
  (this->AccumulatedStats).TickGameThreadCycles = 0;
  LOCK();
  (this->AccumulatedStats).TickConcurrentCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->AccumulatedStats).FinalizeCycles = 0;
  LOCK();
  (this->AccumulatedStats).EndOfFrameCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  LOCK();
  (this->AccumulatedStats).ActivationCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->AccumulatedStats).WaitCycles = 0;
  FAccumulatedParticlePerfStats::ResetMaxArray(&this->MaxPerFrameTotalCycles);
  FAccumulatedParticlePerfStats::ResetMaxArray(&this->MaxPerInstanceCycles);
  this->NumFrames = 0;
  (this->AccumulatedStats).NumInstances = 0;
  (this->AccumulatedStats).TickGameThreadCycles = 0;
  LOCK();
  (this->AccumulatedStats).TickConcurrentCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->AccumulatedStats).FinalizeCycles = 0;
  LOCK();
  (this->AccumulatedStats).EndOfFrameCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  LOCK();
  (this->AccumulatedStats).ActivationCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->AccumulatedStats).WaitCycles = 0;
  return this;
}

// Reset @ 148191c30

void __thiscall FAccumulatedParticlePerfStats_GT::Reset(FAccumulatedParticlePerfStats_GT *this)

{
  FAccumulatedParticlePerfStats::ResetMaxArray(&this->MaxPerFrameTotalCycles);
  FAccumulatedParticlePerfStats::ResetMaxArray(&this->MaxPerInstanceCycles);
  this->NumFrames = 0;
  (this->AccumulatedStats).NumInstances = 0;
  (this->AccumulatedStats).TickGameThreadCycles = 0;
  LOCK();
  (this->AccumulatedStats).TickConcurrentCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->AccumulatedStats).FinalizeCycles = 0;
  LOCK();
  (this->AccumulatedStats).EndOfFrameCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  LOCK();
  (this->AccumulatedStats).ActivationCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->AccumulatedStats).WaitCycles = 0;
  return;
}

// Tick @ 1481a1db0

void __thiscall
FAccumulatedParticlePerfStats_GT::Tick
          (FAccumulatedParticlePerfStats_GT *this,FParticlePerfStats *param_1)

{
  ulong64 *puVar1;
  TAtomic<unsigned___int64> *pTVar2;
  ulonglong uVar3;
  
  if ((param_1->GameThreadStats).NumInstances != 0) {
    this->NumFrames = this->NumFrames + 1;
    (this->AccumulatedStats).NumInstances =
         (this->AccumulatedStats).NumInstances + (param_1->GameThreadStats).NumInstances;
    puVar1 = &(this->AccumulatedStats).TickGameThreadCycles;
    *puVar1 = *puVar1 + (param_1->GameThreadStats).TickGameThreadCycles;
    LOCK();
    pTVar2 = &(this->AccumulatedStats).TickConcurrentCycles;
    *pTVar2 = (TAtomic<unsigned___int64>)
              ((longlong)*pTVar2 + (longlong)(param_1->GameThreadStats).TickConcurrentCycles);
    UNLOCK();
    puVar1 = &(this->AccumulatedStats).FinalizeCycles;
    *puVar1 = *puVar1 + (param_1->GameThreadStats).FinalizeCycles;
    LOCK();
    pTVar2 = &(this->AccumulatedStats).EndOfFrameCycles;
    *pTVar2 = (TAtomic<unsigned___int64>)
              ((longlong)*pTVar2 + (longlong)(param_1->GameThreadStats).EndOfFrameCycles);
    UNLOCK();
    FAccumulatedParticlePerfStats::AddMax
              (&this->MaxPerFrameTotalCycles,
               (param_1->GameThreadStats).FinalizeCycles + (param_1->GameThreadStats).WaitCycles +
               (longlong)(param_1->GameThreadStats).ActivationCycles +
               (param_1->GameThreadStats).TickGameThreadCycles +
               (longlong)(param_1->GameThreadStats).EndOfFrameCycles +
               (longlong)(param_1->GameThreadStats).TickConcurrentCycles);
    if ((param_1->GameThreadStats).NumInstances == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = ((longlong)(param_1->GameThreadStats).EndOfFrameCycles +
               (param_1->GameThreadStats).FinalizeCycles +
               (param_1->GameThreadStats).TickGameThreadCycles +
               (longlong)(param_1->GameThreadStats).ActivationCycles +
               (param_1->GameThreadStats).WaitCycles +
              (longlong)(param_1->GameThreadStats).TickConcurrentCycles) /
              (param_1->GameThreadStats).NumInstances;
    }
    FAccumulatedParticlePerfStats::AddMax(&this->MaxPerInstanceCycles,uVar3);
  }
  return;
}

