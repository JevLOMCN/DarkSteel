// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 1

// DestroyObject @ 14d6c0650

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLensDistortionSceneViewExtension,SharedPointerInternals::DefaultDeleter<FLensDistortionSceneViewExtension>,1>
::DestroyObject(TReferenceControllerWithDeleter<FLensDistortionSceneViewExtension,SharedPointerInternals::DefaultDeleter<FLensDistortionSceneViewExtension>,1>
                *this)

{
  FLensDistortionSceneViewExtension *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FLensDistortionSceneViewExtension *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d6c0661. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0xb8))(pFVar1,1);
    return;
  }
  return;
}

