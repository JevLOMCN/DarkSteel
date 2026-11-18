// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// SNavData @ 1469887e0

SNavData * __thiscall FNavigationMetaData::SNavData::SNavData(SNavData *this)

{
  (this->FocusRecipient).Object = (SWidget *)0x0;
  (this->FocusRecipient).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  *(undefined8 *)&this->FocusDelegate = 0;
  *(undefined8 *)&(this->FocusDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->FocusDelegate).field_0x10 = 0;
  return this;
}

// ~SNavData @ 146992690

void __thiscall FNavigationMetaData::SNavData::~SNavData(SNavData *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->FocusDelegate);
  pvVar3 = *(void **)&(this->FocusDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->FocusDelegate);
  pTVar4 = (this->FocusRecipient).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return;
}

