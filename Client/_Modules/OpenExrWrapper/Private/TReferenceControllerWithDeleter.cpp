// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenExrWrapper
// Functions: 1

// DestroyObject @ 14ea29d50

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<_priv_exr_context_t_*,SharedPointerInternals::DefaultDeleter<_priv_exr_context_t_*>,1>
::DestroyObject(TReferenceControllerWithDeleter<_priv_exr_context_t_*,SharedPointerInternals::DefaultDeleter<_priv_exr_context_t_*>,1>
                *this)

{
  ::operator_delete(this->Object,8);
  return;
}

