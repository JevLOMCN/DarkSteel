// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineSettings
// Functions: 1

// DestroyObject @ 14ddb3450

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FImagePixelDataPayload,1>::DestroyObject
          (TIntrusiveReferenceController<FImagePixelDataPayload,1> *this)

{
  FImagePixelDataPayload::~FImagePixelDataPayload((FImagePixelDataPayload *)&this->ObjectStorage);
  return;
}

