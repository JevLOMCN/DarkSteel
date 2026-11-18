// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ~FRemovedAssetRecord @ 14877ee40

void __thiscall
FSimpleStreamableAssetManager::FRemovedAssetRecord::~FRemovedAssetRecord(FRemovedAssetRecord *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SimpleStreamableAssetManagerIndex).SharedReferenceCount.ReferenceController);
  return;
}

