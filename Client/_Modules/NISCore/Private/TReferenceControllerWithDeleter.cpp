// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NISCore
// Functions: 1

// DestroyObject @ 14de51c80

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNISViewExtension,SharedPointerInternals::DefaultDeleter<FNISViewExtension>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNISViewExtension,SharedPointerInternals::DefaultDeleter<FNISViewExtension>,1>
                *this)

{
  FSceneViewExtensionBase *this_00;
  
  this_00 = (FSceneViewExtensionBase *)this->Object;
  if (this_00 != (FSceneViewExtensionBase *)0x0) {
    FSceneViewExtensionBase::~FSceneViewExtensionBase(this_00);
    ::operator_delete(this_00,0x28);
    return;
  }
  return;
}

