// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 1

// DestroyObject @ 14d7a36a0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMediaCaptureSceneViewExtension,SharedPointerInternals::DefaultDeleter<FMediaCaptureSceneViewExtension>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMediaCaptureSceneViewExtension,SharedPointerInternals::DefaultDeleter<FMediaCaptureSceneViewExtension>,1>
                *this)

{
  FMediaCaptureSceneViewExtension *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMediaCaptureSceneViewExtension *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d7a36b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0xb8))(pFVar1,1);
    return;
  }
  return;
}

