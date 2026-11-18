// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 1

// ~TAlwaysValidWidget @ 142bcd1b0

void __thiscall TAlwaysValidWidget::~TAlwaysValidWidget(TAlwaysValidWidget *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Widget).SharedReferenceCount.ReferenceController);
  return;
}

