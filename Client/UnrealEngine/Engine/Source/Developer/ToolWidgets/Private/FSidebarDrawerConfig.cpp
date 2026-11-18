// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 1

// ~FSidebarDrawerConfig @ 142d66fe0

void __thiscall FSidebarDrawerConfig::~FSidebarDrawerConfig(FSidebarDrawerConfig *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OverrideContentWidget).SharedReferenceCount.ReferenceController);
  (this->InitialState).SelectedSections.HashSize = 0;
  FVar1 = (this->InitialState).SelectedSections.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->InitialState).SelectedSections.Elements);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Icon).Getter);
  pvVar2 = *(void **)&(this->Icon).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Icon).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ToolTipText).Getter);
  pvVar2 = *(void **)&(this->ToolTipText).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ToolTipText).Getter);
  pIVar3 = (this->ToolTipText).Value.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ButtonText).Getter);
  pvVar2 = *(void **)&(this->ButtonText).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ButtonText).Getter);
  pIVar3 = (this->ButtonText).Value.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  return;
}

