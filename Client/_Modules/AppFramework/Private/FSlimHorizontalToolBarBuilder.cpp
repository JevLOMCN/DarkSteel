// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// ~FSlimHorizontalToolBarBuilder @ 142f3f210

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FSlimHorizontalToolBarBuilder::~FSlimHorizontalToolBarBuilder(FSlimHorizontalToolBarBuilder *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x130);
  if (*(void **)&this->field_0x138 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x138);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x130);
  FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)&this->field_0x60);
  *(undefined ***)this = &___7FMultiBoxBuilder__6B_;
  DestructItems<TSharedPtr<FExtender,1>,int>
            (*(TSharedPtr<FExtender,1> **)&this->field_0x28,*(int *)&this->field_0x30);
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  DestructItems<TSharedPtr<FUICommandList_const_,1>,int>
            (*(TSharedPtr<FUICommandList_const_,1> **)&this->field_0x18,*(int *)&this->field_0x20);
  if (*(void **)&this->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  return;
}

