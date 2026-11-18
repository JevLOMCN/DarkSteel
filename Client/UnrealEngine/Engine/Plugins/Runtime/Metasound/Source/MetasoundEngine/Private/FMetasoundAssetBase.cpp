// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// ~FMetasoundAssetBase @ 14b351a00

void __thiscall FMetasoundAssetBase::~FMetasoundAssetBase(FMetasoundAssetBase *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Proxy).SharedReferenceCount.ReferenceController);
  return;
}

