// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MoviePlayer
// Functions: 3

// DestroyObject @ 146c7ae60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMoviePlayerWidgetRenderer,1>::DestroyObject
          (TIntrusiveReferenceController<FMoviePlayerWidgetRenderer,1> *this)

{
  FRHIResource *this_00;
  
  this_00 = *(FRHIResource **)((this->ObjectStorage).Pad + 0x30);
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 146c7aea0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDefaultMovieBorder,1>::DestroyObject
          (TIntrusiveReferenceController<SDefaultMovieBorder,1> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x2e0));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x2e8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x2e0));
  SBorder::~SBorder((SBorder *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146c7aef0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SLoadingScreenTestWidget,1>::DestroyObject
          (TIntrusiveReferenceController<SLoadingScreenTestWidget,1> *this)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

