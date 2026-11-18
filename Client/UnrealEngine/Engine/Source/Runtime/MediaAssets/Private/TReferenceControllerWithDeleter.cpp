// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 2

// DestroyObject @ 146c26ad0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMediaPlayerFacade,SharedPointerInternals::DefaultDeleter<FMediaPlayerFacade>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMediaPlayerFacade,SharedPointerInternals::DefaultDeleter<FMediaPlayerFacade>,1>
                *this)

{
  FMediaPlayerFacade *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMediaPlayerFacade *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c26ae1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146c26af0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMediaSoundGenerator,SharedPointerInternals::DefaultDeleter<FMediaSoundGenerator>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMediaSoundGenerator,SharedPointerInternals::DefaultDeleter<FMediaSoundGenerator>,1>
                *this)

{
  FMediaSoundGenerator *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMediaSoundGenerator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c26b01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

