// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// Accumulate @ 149283b20

void __thiscall
FNiagaraDebugHud::FSmoothedCounter<unsigned_int>::Accumulate
          (FSmoothedCounter<unsigned_int> *this,ulong64 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (this->LastFrameSeen != param_1) {
    uVar1 = this->CurrentFrameMax;
    if (this->CurrentFrameMax < this->CurrentFrameSum) {
      uVar1 = this->CurrentFrameSum;
    }
    this->LastFrameSeen = param_1;
    uVar2 = this->CurrentCount + 1;
    this->CurrentFrameMax = uVar1;
    this->CurrentFrameSum = 0;
    this->CurrentCount = uVar2;
    if ((this->SmoothedSetOnce == false) || (0x1f < uVar2)) {
      this->SmoothedFrameMax = uVar1;
      this->SmoothedSetOnce = (bool)(this->SmoothedSetOnce | 0x1f < uVar2);
      this->SmoothedTotalAvg = (float)this->CurrentTotalSum / (float)uVar2;
      if (0x1f < uVar2) {
        this->CurrentCount = 0;
        this->CurrentFrameMax = 0;
        this->CurrentTotalSum = 0;
      }
    }
  }
  this->CurrentTotalSum = this->CurrentTotalSum + param_2;
  this->CurrentFrameSum = this->CurrentFrameSum + param_2;
  return;
}

// Accumulate @ 149283ba0

void __thiscall
FNiagaraDebugHud::FSmoothedCounter<unsigned___int64>::Accumulate
          (FSmoothedCounter<unsigned___int64> *this,ulong64 param_1,ulong64 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  if (this->LastFrameSeen != param_1) {
    this->LastFrameSeen = param_1;
    uVar1 = this->CurrentFrameMax;
    if (this->CurrentFrameMax < this->CurrentFrameSum) {
      uVar1 = this->CurrentFrameSum;
    }
    uVar2 = this->CurrentCount + 1;
    this->CurrentFrameMax = uVar1;
    this->CurrentFrameSum = 0;
    this->CurrentCount = uVar2;
    if ((this->SmoothedSetOnce == false) || (0x1f < uVar2)) {
      this->SmoothedFrameMax = uVar1;
      this->SmoothedSetOnce = (bool)(this->SmoothedSetOnce | 0x1f < uVar2);
      this->SmoothedTotalAvg = (float)this->CurrentTotalSum / (float)uVar2;
      if (0x1f < uVar2) {
        this->CurrentCount = 0;
        this->CurrentFrameMax = 0;
        this->CurrentTotalSum = 0;
      }
    }
  }
  this->CurrentTotalSum = this->CurrentTotalSum + param_2;
  this->CurrentFrameSum = this->CurrentFrameSum + param_2;
  return;
}

