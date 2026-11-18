// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ~FCanvasSimpleTextItem @ 145195ab0

void __thiscall FCanvasSimpleTextItem::~FCanvasSimpleTextItem(FCanvasSimpleTextItem *this)

{
  if ((this->SlateFontInfo).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->SlateFontInfo).TypedValue.CompositeFont.SharedReferenceCount.
               ReferenceController);
  }
  FCanvasTextItemBase::~FCanvasTextItemBase((FCanvasTextItemBase *)this);
  return;
}

