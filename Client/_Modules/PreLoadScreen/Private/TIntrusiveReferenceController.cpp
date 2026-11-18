// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PreLoadScreen
// Functions: 3

// DestroyObject @ 145ac7520

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPreLoadSlateWidgetRenderer,1>::DestroyObject
          (TIntrusiveReferenceController<FPreLoadSlateWidgetRenderer,1> *this)

{
  TRefCountPtr<FRHIViewport>::~TRefCountPtr<FRHIViewport>
            ((TRefCountPtr<FRHIViewport> *)((this->ObjectStorage).Pad + 0x30));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 145ac7550

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SScaleBox,1>::DestroyObject
          (TIntrusiveReferenceController<SScaleBox,1> *this)

{
  SScaleBox::~SScaleBox((SScaleBox *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 145ac7560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SVirtualWindow,1>::DestroyObject
          (TIntrusiveReferenceController<SVirtualWindow,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x748));
  SWindow::~SWindow((SWindow *)&this->ObjectStorage);
  return;
}

