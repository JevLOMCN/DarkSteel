// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FQuartLatencyTracker @ 14733f7d0

FQuartLatencyTracker * __thiscall
FQuartLatencyTracker::FQuartLatencyTracker(FQuartLatencyTracker *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  pTVar1 = ::operator_new(0x10);
  pTVar2 = (TNode *)0x0;
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar1->Item = 0;
    pTVar1->NextNode = (TNode *)0x0;
    pTVar2 = pTVar1;
  }
  (this->ResultQueue).Tail = pTVar2;
  (this->ResultQueue).Head = pTVar2;
  this->NumEntries = 0;
  this->LifetimeAverage = 0.0;
  this->Min = 3.4028235e+38;
  this->Max = 1.1754944e-38;
  return this;
}

// DigestQueue @ 14734a630

void __thiscall FQuartLatencyTracker::DigestQueue(FQuartLatencyTracker *this)

{
  longlong lVar1;
  float fVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzQuantizationUtilities.cpp"
                         ,0x93,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  while (pTVar3 = ((this->ResultQueue).Tail)->NextNode, pTVar3 != (TNode *)0x0) {
    fVar2 = pTVar3->Item;
    pTVar4 = (this->ResultQueue).Tail;
    (this->ResultQueue).Tail = pTVar3;
    pTVar3->Item = 0.0;
    ::operator_delete(pTVar4,0x10);
    lVar5 = this->NumEntries;
    lVar1 = lVar5 + 1;
    this->NumEntries = lVar1;
    fVar8 = fVar2;
    if (lVar1 != 0) {
      fVar8 = ((float)lVar5 * this->LifetimeAverage + fVar2) / (float)lVar1;
    }
    this->LifetimeAverage = fVar8;
    fVar8 = this->Min;
    if (fVar2 <= this->Min) {
      fVar8 = fVar2;
    }
    fVar9 = this->Max;
    if (this->Max <= fVar2) {
      fVar9 = fVar2;
    }
    this->Min = fVar8;
    this->Max = fVar9;
  }
  return;
}

// GetLifetimeAverageLatency @ 14734f6d0

float __thiscall FQuartLatencyTracker::GetLifetimeAverageLatency(FQuartLatencyTracker *this)

{
  bool bVar1;
  
  bVar1 = IsInGameThread();
  if (bVar1) {
    DigestQueue(this);
  }
  return this->LifetimeAverage;
}

// GetMaxLatency @ 14734f830

float __thiscall FQuartLatencyTracker::GetMaxLatency(FQuartLatencyTracker *this)

{
  bool bVar1;
  
  bVar1 = IsInGameThread();
  if (bVar1) {
    DigestQueue(this);
  }
  return this->Max;
}

// GetMinLatency @ 14734f860

float __thiscall FQuartLatencyTracker::GetMinLatency(FQuartLatencyTracker *this)

{
  bool bVar1;
  
  bVar1 = IsInGameThread();
  if (bVar1) {
    DigestQueue(this);
  }
  return this->Min;
}

// PushLatencyTrackerResult @ 1473537c0

void __thiscall
FQuartLatencyTracker::PushLatencyTrackerResult(FQuartLatencyTracker *this,double *param_1)

{
  double dVar1;
  TNode *pTVar2;
  bool bVar3;
  TNode *pTVar4;
  
  dVar1 = *param_1;
  pTVar4 = ::operator_new(0x10);
  if (pTVar4 != (TNode *)0x0) {
    pTVar4->Item = (float)dVar1;
    pTVar4->NextNode = (TNode *)0x0;
    if (((ulonglong)this & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = (this->ResultQueue).Head;
    (this->ResultQueue).Head = pTVar4;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar4;
    UNLOCK();
  }
  bVar3 = IsInGameThread();
  if (bVar3) {
    DigestQueue(this);
    return;
  }
  return;
}

// PushSingleResult @ 147353870

void __thiscall FQuartLatencyTracker::PushSingleResult(FQuartLatencyTracker *this,double *param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  lVar2 = this->NumEntries;
  lVar1 = lVar2 + 1;
  this->NumEntries = lVar1;
  fVar3 = (float)*param_1;
  if (lVar1 != 0) {
    fVar3 = ((float)lVar2 * this->LifetimeAverage + fVar3) / (float)lVar1;
  }
  this->LifetimeAverage = fVar3;
  fVar3 = (float)*param_1;
  if (this->Min <= (float)*param_1) {
    fVar3 = this->Min;
  }
  this->Min = fVar3;
  fVar3 = (float)*param_1;
  if ((float)*param_1 <= this->Max) {
    fVar3 = this->Max;
  }
  this->Max = fVar3;
  return;
}

