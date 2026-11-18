// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 1

// DestroyObject @ 146b56f70

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FPortableObjectEntry,SharedPointerInternals::DefaultDeleter<FPortableObjectEntry>,1>
::DestroyObject(TReferenceControllerWithDeleter<FPortableObjectEntry,SharedPointerInternals::DefaultDeleter<FPortableObjectEntry>,1>
                *this)

{
  FPortableObjectEntry *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FPortableObjectEntry *)0x0) {
    FPortableObjectEntry::~FPortableObjectEntry(this_00);
    ::operator_delete(this_00,0x90);
    return;
  }
  return;
}

