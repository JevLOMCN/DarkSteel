// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PreLoadScreen
// Functions: 1

// DestroyObject @ 145ac7590

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FHittestGrid,SharedPointerInternals::DefaultDeleter<FHittestGrid>,1>
::DestroyObject(TReferenceControllerWithDeleter<FHittestGrid,SharedPointerInternals::DefaultDeleter<FHittestGrid>,1>
                *this)

{
  if (this->Object != (FHittestGrid *)0x0) {
    FHittestGrid::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

