// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voice
// Functions: 3

// DestroyObject @ 14ec3d7c0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IVoiceCapture,SharedPointerInternals::DefaultDeleter<IVoiceCapture>,1>
::DestroyObject(TReferenceControllerWithDeleter<IVoiceCapture,SharedPointerInternals::DefaultDeleter<IVoiceCapture>,1>
                *this)

{
  IVoiceCapture *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (IVoiceCapture *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ec3d7d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pIVar1->_padding_)(pIVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14ec3d7e0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IVoiceDecoder,SharedPointerInternals::DefaultDeleter<IVoiceDecoder>,1>
::DestroyObject(TReferenceControllerWithDeleter<IVoiceDecoder,SharedPointerInternals::DefaultDeleter<IVoiceDecoder>,1>
                *this)

{
  IVoiceDecoder *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (IVoiceDecoder *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ec3d7f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pIVar1)(pIVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14ec3d800

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IVoiceEncoder,SharedPointerInternals::DefaultDeleter<IVoiceEncoder>,1>
::DestroyObject(TReferenceControllerWithDeleter<IVoiceEncoder,SharedPointerInternals::DefaultDeleter<IVoiceEncoder>,1>
                *this)

{
  IVoiceEncoder *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (IVoiceEncoder *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ec3d811. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pIVar1)(pIVar1,1);
    return;
  }
  return;
}

