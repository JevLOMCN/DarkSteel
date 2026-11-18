// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// ~FSlateResourceHandle @ 143061de0

void __thiscall FSlateResourceHandle::~FSlateResourceHandle(FSlateResourceHandle *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Data).SharedReferenceCount.ReferenceController);
  return;
}

