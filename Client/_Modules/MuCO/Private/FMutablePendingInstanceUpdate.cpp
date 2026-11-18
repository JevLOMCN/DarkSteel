// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 3

// FMutablePendingInstanceUpdate @ 14ac0ab70

FMutablePendingInstanceUpdate * __thiscall
FMutablePendingInstanceUpdate::FMutablePendingInstanceUpdate
          (FMutablePendingInstanceUpdate *this,TSharedRef<FUpdateContextPrivate,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->Context).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Context).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// operator== @ 14ac0e0b0

bool __thiscall
FMutablePendingInstanceUpdate::operator==
          (FMutablePendingInstanceUpdate *this,FMutablePendingInstanceUpdate *param_1)

{
  FUpdateContextPrivate *pFVar1;
  FUpdateContextPrivate *pFVar2;
  
  pFVar1 = (this->Context).Object;
  pFVar2 = (param_1->Context).Object;
  if (((pFVar1->Instance).WeakPtr.ObjectIndex == (pFVar2->Instance).WeakPtr.ObjectIndex) &&
     ((pFVar1->Instance).WeakPtr.ObjectSerialNumber == (pFVar2->Instance).WeakPtr.ObjectSerialNumber
     )) {
    return true;
  }
  return false;
}

// operator< @ 14ac0e1d0

bool __thiscall
FMutablePendingInstanceUpdate::operator<
          (FMutablePendingInstanceUpdate *this,FMutablePendingInstanceUpdate *param_1)

{
  EQueuePriorityType EVar1;
  EQueuePriorityType EVar2;
  FUpdateContextPrivate *pFVar3;
  FUpdateContextPrivate *pFVar4;
  
  pFVar3 = (param_1->Context).Object;
  pFVar4 = (this->Context).Object;
  EVar1 = pFVar3->PriorityType;
  EVar2 = pFVar4->PriorityType;
  if (EVar2 < EVar1) {
    return true;
  }
  if (EVar1 < EVar2) {
    return false;
  }
  return pFVar4->StartQueueTime < pFVar3->StartQueueTime;
}

