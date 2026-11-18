// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ExrReaderGpu
// Functions: 1

// ~TSharedPtr<IPlugin,1> @ 14ea2b5b0

void __thiscall TSharedPtr<IPlugin,1>::~TSharedPtr<IPlugin,1>(TSharedPtr<IPlugin,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

