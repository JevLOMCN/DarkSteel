// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// ~FSlateFontInfo @ 142f3f200

void __thiscall FSlateFontInfo::~FSlateFontInfo(FSlateFontInfo *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CompositeFont).SharedReferenceCount.ReferenceController);
  return;
}

