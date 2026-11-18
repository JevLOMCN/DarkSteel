// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// SNavData @ 1429ba800

SNavData * __thiscall FSimulatedNavigationMetaData::SNavData::SNavData(SNavData *this)

{
  (this->FocusRecipient).Object = (SWidget *)0x0;
  (this->FocusRecipient).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  return this;
}

// ~SNavData @ 1429bfcb0

void __thiscall FSimulatedNavigationMetaData::SNavData::~SNavData(SNavData *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->FocusRecipient).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001429bfcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

