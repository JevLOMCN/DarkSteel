// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 1

// DestroyObject @ 14eaf24a0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UE::NNEDenoiser::Private::FViewExtension,SharedPointerInternals::DefaultDeleter<UE::NNEDenoiser::Private::FViewExtension>,1>
::DestroyObject(TReferenceControllerWithDeleter<UE::NNEDenoiser::Private::FViewExtension,SharedPointerInternals::DefaultDeleter<UE::NNEDenoiser::Private::FViewExtension>,1>
                *this)

{
  if (this->Object != (FViewExtension *)0x0) {
    UE::NNEDenoiser::Private::FViewExtension::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

