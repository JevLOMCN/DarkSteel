// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 2

// DestroyObject @ 14de25c50

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDLSSUpscalerViewExtension,SharedPointerInternals::DefaultDeleter<FDLSSUpscalerViewExtension>,1>
::DestroyObject(TReferenceControllerWithDeleter<FDLSSUpscalerViewExtension,SharedPointerInternals::DefaultDeleter<FDLSSUpscalerViewExtension>,1>
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

// DestroyObject @ 14de25c90

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNGXAutomationViewExtension,SharedPointerInternals::DefaultDeleter<FNGXAutomationViewExtension>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNGXAutomationViewExtension,SharedPointerInternals::DefaultDeleter<FNGXAutomationViewExtension>,1>
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

