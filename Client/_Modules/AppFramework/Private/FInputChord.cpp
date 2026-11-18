// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// ~FInputChord @ 143061a50

void __thiscall FInputChord::~FInputChord(FInputChord *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Key).KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

