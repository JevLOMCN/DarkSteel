// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ~FCanvasTextStringViewItem @ 145195af0

void __thiscall
FCanvasTextStringViewItem::~FCanvasTextStringViewItem(FCanvasTextStringViewItem *this)

{
  if ((char)this->_padding_ != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)this->_padding_);
  }
  FCanvasTextItemBase::~FCanvasTextItemBase((FCanvasTextItemBase *)this);
  return;
}

