// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// ~SExpandableArea @ 1469924c0

void __thiscall SExpandableArea::~SExpandableArea(SExpandableArea *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAreaExpansionChanged);
  pvVar1 = *(void **)&(this->OnAreaExpansionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAreaExpansionChanged);
  FCurveSequence::~FCurveSequence(&this->RolloutCurve);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ExpandingButton).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BodyBorder).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetBorder).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TitleBorder).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// IsExpanded @ 1469e16e0

bool __thiscall SExpandableArea::IsExpanded(SExpandableArea *this)

{
  return this->bAreaCollapsed == false;
}

