// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 2

// ~TFuture<void> @ 14ddc98b0

void __thiscall TFuture<void>::~TFuture<void>(TFuture<void> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x8);
  return;
}

// ~TFuture<bool> @ 14ddc98d0

void __thiscall TFuture<bool>::~TFuture<bool>(TFuture<bool> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x8);
  return;
}

