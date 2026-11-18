// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 7

// FMeanUseTracker @ 1432814b0

FMeanUseTracker * __thiscall
BuildPatchServices::FMeanUseTracker::FMeanUseTracker(FMeanUseTracker *this)

{
  (this->UsesCount).Counter = 0;
  (this->SumCurrentUses).Counter = 0;
  (this->CurrentUse).Counter = 0;
  this->PeakUse = 0;
  return this;
}

// CountSame @ 1432c7f20

void __thiscall BuildPatchServices::FMeanUseTracker::CountSame(FMeanUseTracker *this)

{
  LOCK();
  (this->SumCurrentUses).Counter =
       (this->SumCurrentUses).Counter + (longlong)(this->CurrentUse).Counter;
  UNLOCK();
  LOCK();
  (this->UsesCount).Counter = (this->UsesCount).Counter + 1;
  UNLOCK();
  return;
}

// Decrement @ 1432cbc20

void __thiscall BuildPatchServices::FMeanUseTracker::Decrement(FMeanUseTracker *this)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  
  LOCK();
  pFVar1 = &this->CurrentUse;
  iVar2 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + -1;
  UNLOCK();
  LOCK();
  (this->SumCurrentUses).Counter = (this->SumCurrentUses).Counter + (longlong)(iVar2 + -1);
  UNLOCK();
  LOCK();
  (this->UsesCount).Counter = (this->UsesCount).Counter + 1;
  UNLOCK();
  return;
}

// GetCurrent @ 1432d41f0

int __thiscall BuildPatchServices::FMeanUseTracker::GetCurrent(FMeanUseTracker *this)

{
  return (this->CurrentUse).Counter;
}

// GetMean @ 1432d70c0

float __thiscall BuildPatchServices::FMeanUseTracker::GetMean(FMeanUseTracker *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  fVar2 = (float)(this->UsesCount).Counter;
  if (0.0 < fVar2) {
    fVar1 = (float)(this->SumCurrentUses).Counter / fVar2;
  }
  return fVar1;
}

// GetPeak @ 1432d8b20

int __thiscall BuildPatchServices::FMeanUseTracker::GetPeak(FMeanUseTracker *this)

{
  return this->PeakUse;
}

// Increment @ 1432dad10

void __thiscall BuildPatchServices::FMeanUseTracker::Increment(FMeanUseTracker *this)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  LOCK();
  pFVar1 = &this->CurrentUse;
  iVar3 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + 1;
  UNLOCK();
  iVar3 = iVar3 + 1;
  LOCK();
  (this->SumCurrentUses).Counter = (this->SumCurrentUses).Counter + (longlong)iVar3;
  UNLOCK();
  LOCK();
  (this->UsesCount).Counter = (this->UsesCount).Counter + 1;
  UNLOCK();
  do {
    iVar2 = this->PeakUse;
    if (iVar3 <= iVar2) {
      return;
    }
    LOCK();
    bVar4 = iVar2 == this->PeakUse;
    if (bVar4) {
      this->PeakUse = iVar3;
    }
    UNLOCK();
  } while (!bVar4);
  return;
}

