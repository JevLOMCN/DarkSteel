// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WidgetCarousel
// Functions: 2

// DestroyObject @ 14a77de80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWidgetCarouselNavigationBarStyle,1>::
DestroyObject(TIntrusiveReferenceController<FWidgetCarouselNavigationBarStyle,1> *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FWidgetCarouselNavigationBarStyle__6B_;
  FButtonStyle::~FButtonStyle((FButtonStyle *)((this->ObjectStorage).Pad + 0x7e0));
  FButtonStyle::~FButtonStyle((FButtonStyle *)((this->ObjectStorage).Pad + 0x450));
  FButtonStyle::~FButtonStyle((FButtonStyle *)((this->ObjectStorage).Pad + 0xc0));
  pTVar1 = *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0xb0);
  *(undefined ***)((this->ObjectStorage).Pad + 0x10) = &___7FSlateBrush__6B_;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14a77def0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWidgetCarouselNavigationButtonStyle,1>::
DestroyObject(TIntrusiveReferenceController<FWidgetCarouselNavigationButtonStyle,1> *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x4f0);
  *(undefined ***)(this->ObjectStorage).Pad = &___7FWidgetCarouselNavigationButtonStyle__6B_;
  *(undefined ***)((this->ObjectStorage).Pad + 0x450) = &___7FSlateBrush__6B_;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x440);
  *(undefined ***)((this->ObjectStorage).Pad + 0x3a0) = &___7FSlateBrush__6B_;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FButtonStyle::~FButtonStyle((FButtonStyle *)((this->ObjectStorage).Pad + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->ObjectStorage);
  return;
}

