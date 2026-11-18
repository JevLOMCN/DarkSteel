// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// Transform @ 14ae8c5e0

bool __thiscall
Metasound::Frontend::FRenameRootGraphClass::Transform
          (FRenameRootGraphClass *this,FMetasoundFrontendDocument *param_1)

{
  return false;
}

// Transform @ 14ae8c5f0

bool __thiscall
Metasound::Frontend::FRenameRootGraphClass::Transform
          (FRenameRootGraphClass *this,
          TSharedRef<Metasound::Frontend::IDocumentController,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

