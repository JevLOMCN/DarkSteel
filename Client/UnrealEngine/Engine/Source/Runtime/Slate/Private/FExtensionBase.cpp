// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// ~FExtensionBase @ 1427b91b0

void __thiscall FExtensionBase::~FExtensionBase(FExtensionBase *this)

{
  this->_padding_ = (longlong)&___7FExtensionBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CommandList).SharedReferenceCount.ReferenceController);
  return;
}

