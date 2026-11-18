// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// ~FNodeModifyDelegates @ 14ae1db90

void __thiscall
Metasound::Frontend::FNodeModifyDelegates::~FNodeModifyDelegates(FNodeModifyDelegates *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRemovingNodeInputLiteral).field_0x8,
             *(int *)&(this->OnRemovingNodeInputLiteral).field_0x10);
  pvVar1 = *(void **)&(this->OnRemovingNodeInputLiteral).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRemovingNodeInputLiteral);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnNodeInputLiteralSet).field_0x8,
             *(int *)&(this->OnNodeInputLiteralSet).field_0x10);
  pvVar1 = *(void **)&(this->OnNodeInputLiteralSet).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNodeInputLiteralSet);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRemoveSwappingNode).field_0x8,
             *(int *)&(this->OnRemoveSwappingNode).field_0x10);
  pvVar1 = *(void **)&(this->OnRemoveSwappingNode).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRemoveSwappingNode);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnNodeConfigurationUpdated).field_0x8,
             *(int *)&(this->OnNodeConfigurationUpdated).field_0x10);
  pvVar1 = *(void **)&(this->OnNodeConfigurationUpdated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNodeConfigurationUpdated);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->OnNodeAdded).field_0x8
             ,*(int *)&(this->OnNodeAdded).field_0x10);
  pvVar1 = *(void **)&(this->OnNodeAdded).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

