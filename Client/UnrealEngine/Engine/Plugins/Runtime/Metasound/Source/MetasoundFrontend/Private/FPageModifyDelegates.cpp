// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// ~FPageModifyDelegates @ 14ae1dc70

void __thiscall
Metasound::Frontend::FPageModifyDelegates::~FPageModifyDelegates(FPageModifyDelegates *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->OnPageSet).field_0x8,
             *(int *)&(this->OnPageSet).field_0x10);
  pvVar1 = *(void **)&(this->OnPageSet).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPageSet);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRemovingPage).field_0x8,*(int *)&(this->OnRemovingPage).field_0x10);
  pvVar1 = *(void **)&(this->OnRemovingPage).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRemovingPage);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->OnPageAdded).field_0x8
             ,*(int *)&(this->OnPageAdded).field_0x10);
  pvVar1 = *(void **)&(this->OnPageAdded).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

