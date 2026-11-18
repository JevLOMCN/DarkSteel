// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// GetPerFrameAvg @ 1492a5aa0

float __thiscall
FAccumulatedParticlePerfStats_GT::GetPerFrameAvg(FAccumulatedParticlePerfStats_GT *this)

{
  ulonglong uVar1;
  
  if (this->NumFrames == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ((longlong)(this->AccumulatedStats).EndOfFrameCycles +
             (longlong)(this->AccumulatedStats).ActivationCycles +
             (this->AccumulatedStats).WaitCycles + (this->AccumulatedStats).FinalizeCycles +
             (this->AccumulatedStats).TickGameThreadCycles +
            (longlong)(this->AccumulatedStats).TickConcurrentCycles) / (ulonglong)this->NumFrames;
  }
  return (float)((double)uVar1 * FGenericPlatformTime::SecondsPerCycle64 * __real_412e848000000000);
}

// GetPerFrameMax @ 1492a5b30

float __thiscall
FAccumulatedParticlePerfStats_GT::GetPerFrameMax(FAccumulatedParticlePerfStats_GT *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForElementType<unsigned___int64> FVar4;
  float fVar5;
  
  uVar3 = 0;
  if (param_1 < (this->MaxPerFrameTotalCycles).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    fVar5 = (float)(*pcVar1)();
    return fVar5;
  }
  FVar4 = (this->MaxPerFrameTotalCycles).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned___int64>)0x0) {
    FVar4 = (ForElementType<unsigned___int64>)&this->MaxPerFrameTotalCycles;
  }
  return (float)((double)*(ulonglong *)((longlong)FVar4 + (longlong)param_1 * 8) *
                 FGenericPlatformTime::SecondsPerCycle64 * __real_412e848000000000);
}

// GetPerInstanceAvg @ 1492a5cb0

float __thiscall
FAccumulatedParticlePerfStats_GT::GetPerInstanceAvg(FAccumulatedParticlePerfStats_GT *this)

{
  ulonglong uVar1;
  
  if ((this->AccumulatedStats).NumInstances == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ((longlong)(this->AccumulatedStats).EndOfFrameCycles +
             (longlong)(this->AccumulatedStats).ActivationCycles +
             (this->AccumulatedStats).WaitCycles + (this->AccumulatedStats).FinalizeCycles +
             (this->AccumulatedStats).TickGameThreadCycles +
            (longlong)(this->AccumulatedStats).TickConcurrentCycles) /
            (this->AccumulatedStats).NumInstances;
  }
  return (float)((double)uVar1 * FGenericPlatformTime::SecondsPerCycle64 * __real_412e848000000000);
}

// GetPerInstanceMax @ 1492a5d40

float __thiscall
FAccumulatedParticlePerfStats_GT::GetPerInstanceMax
          (FAccumulatedParticlePerfStats_GT *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForElementType<unsigned___int64> FVar4;
  float fVar5;
  
  uVar3 = 0;
  if (param_1 < (this->MaxPerInstanceCycles).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    fVar5 = (float)(*pcVar1)();
    return fVar5;
  }
  FVar4 = (this->MaxPerInstanceCycles).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned___int64>)0x0) {
    FVar4 = (ForElementType<unsigned___int64>)&this->MaxPerInstanceCycles;
  }
  return (float)((double)*(ulonglong *)((longlong)FVar4 + (longlong)param_1 * 8) *
                 FGenericPlatformTime::SecondsPerCycle64 * __real_412e848000000000);
}

// FAccumulatedParticlePerfStats_GT @ 149332680

FAccumulatedParticlePerfStats_GT * __thiscall
FAccumulatedParticlePerfStats_GT::FAccumulatedParticlePerfStats_GT
          (FAccumulatedParticlePerfStats_GT *this,FAccumulatedParticlePerfStats_GT *param_1)

{
  uint uVar1;
  ForElementType<unsigned___int64> FVar2;
  
  uVar1 = param_1->NumFrames;
  (this->MaxPerFrameTotalCycles).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  this->NumFrames = uVar1;
  if ((param_1->MaxPerFrameTotalCycles).AllocatorInstance.SecondaryData ==
      (ForElementType<unsigned___int64>)0x0) {
    memmove(&this->MaxPerFrameTotalCycles,&param_1->MaxPerFrameTotalCycles,0x50);
  }
  FVar2 = (this->MaxPerFrameTotalCycles).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->MaxPerFrameTotalCycles).AllocatorInstance.SecondaryData =
       (param_1->MaxPerFrameTotalCycles).AllocatorInstance.SecondaryData;
  (param_1->MaxPerFrameTotalCycles).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  (this->MaxPerFrameTotalCycles).ArrayNum = (param_1->MaxPerFrameTotalCycles).ArrayNum;
  (this->MaxPerFrameTotalCycles).ArrayMax = (param_1->MaxPerFrameTotalCycles).ArrayMax;
  (param_1->MaxPerFrameTotalCycles).ArrayNum = 0;
  (param_1->MaxPerFrameTotalCycles).ArrayMax = 10;
  (this->MaxPerInstanceCycles).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  if ((param_1->MaxPerInstanceCycles).AllocatorInstance.SecondaryData ==
      (ForElementType<unsigned___int64>)0x0) {
    memmove(&this->MaxPerInstanceCycles,&param_1->MaxPerInstanceCycles,0x50);
  }
  FVar2 = (this->MaxPerInstanceCycles).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->MaxPerInstanceCycles).AllocatorInstance.SecondaryData =
       (param_1->MaxPerInstanceCycles).AllocatorInstance.SecondaryData;
  (param_1->MaxPerInstanceCycles).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  (this->MaxPerInstanceCycles).ArrayNum = (param_1->MaxPerInstanceCycles).ArrayNum;
  (this->MaxPerInstanceCycles).ArrayMax = (param_1->MaxPerInstanceCycles).ArrayMax;
  (param_1->MaxPerInstanceCycles).ArrayNum = 0;
  (param_1->MaxPerInstanceCycles).ArrayMax = 10;
  (this->AccumulatedStats).TickConcurrentCycles = (TAtomic<unsigned___int64>)0x0;
  (this->AccumulatedStats).EndOfFrameCycles = (TAtomic<unsigned___int64>)0x0;
  (this->AccumulatedStats).ActivationCycles = (TAtomic<unsigned___int64>)0x0;
  (this->AccumulatedStats).NumInstances = (param_1->AccumulatedStats).NumInstances;
  (this->AccumulatedStats).TickGameThreadCycles = (param_1->AccumulatedStats).TickGameThreadCycles;
  LOCK();
  (this->AccumulatedStats).TickConcurrentCycles = (param_1->AccumulatedStats).TickConcurrentCycles;
  UNLOCK();
  (this->AccumulatedStats).FinalizeCycles = (param_1->AccumulatedStats).FinalizeCycles;
  LOCK();
  (this->AccumulatedStats).EndOfFrameCycles = (param_1->AccumulatedStats).EndOfFrameCycles;
  UNLOCK();
  LOCK();
  (this->AccumulatedStats).ActivationCycles = (param_1->AccumulatedStats).ActivationCycles;
  UNLOCK();
  (this->AccumulatedStats).WaitCycles = (param_1->AccumulatedStats).WaitCycles;
  (param_1->AccumulatedStats).NumInstances = 0;
  (param_1->AccumulatedStats).TickGameThreadCycles = 0;
  LOCK();
  (param_1->AccumulatedStats).TickConcurrentCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (param_1->AccumulatedStats).FinalizeCycles = 0;
  LOCK();
  (param_1->AccumulatedStats).EndOfFrameCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  LOCK();
  (param_1->AccumulatedStats).ActivationCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (param_1->AccumulatedStats).WaitCycles = 0;
  return this;
}

// operator= @ 149336fc0

FAccumulatedParticlePerfStats_GT * __thiscall
FAccumulatedParticlePerfStats_GT::operator=
          (FAccumulatedParticlePerfStats_GT *this,FAccumulatedParticlePerfStats_GT *param_1)

{
  this->NumFrames = param_1->NumFrames;
  TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>::operator=
            (&this->MaxPerFrameTotalCycles,&param_1->MaxPerFrameTotalCycles);
  TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>::operator=
            (&this->MaxPerInstanceCycles,&param_1->MaxPerInstanceCycles);
  (this->AccumulatedStats).NumInstances = (param_1->AccumulatedStats).NumInstances;
  (this->AccumulatedStats).TickGameThreadCycles = (param_1->AccumulatedStats).TickGameThreadCycles;
  LOCK();
  (this->AccumulatedStats).TickConcurrentCycles = (param_1->AccumulatedStats).TickConcurrentCycles;
  UNLOCK();
  (this->AccumulatedStats).FinalizeCycles = (param_1->AccumulatedStats).FinalizeCycles;
  LOCK();
  (this->AccumulatedStats).EndOfFrameCycles = (param_1->AccumulatedStats).EndOfFrameCycles;
  UNLOCK();
  LOCK();
  (this->AccumulatedStats).ActivationCycles = (param_1->AccumulatedStats).ActivationCycles;
  UNLOCK();
  (this->AccumulatedStats).WaitCycles = (param_1->AccumulatedStats).WaitCycles;
  return this;
}

// GetPerInstanceMaxCycles @ 1493553c0

ulong64 __thiscall
FAccumulatedParticlePerfStats_GT::GetPerInstanceMaxCycles
          (FAccumulatedParticlePerfStats_GT *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulong64 uVar4;
  ForElementType<unsigned___int64> FVar5;
  
  uVar3 = 0;
  if (param_1 < (this->MaxPerInstanceCycles).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  FVar5 = (this->MaxPerInstanceCycles).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<unsigned___int64>)0x0) {
    FVar5 = (ForElementType<unsigned___int64>)&this->MaxPerInstanceCycles;
  }
  return *(ulong64 *)((longlong)FVar5 + (longlong)param_1 * 8);
}

