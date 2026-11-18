// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 2

// DestroyObject @ 14d912a20

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAudioSpectrogramViewport,SharedPointerInternals::DefaultDeleter<FAudioSpectrogramViewport>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAudioSpectrogramViewport,SharedPointerInternals::DefaultDeleter<FAudioSpectrogramViewport>,1>
                *this)

{
  FAudioSpectrogramViewport *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FAudioSpectrogramViewport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d912a31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14d912a40

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<enum_EAudioOscilloscopeTriggerMode,SharedPointerInternals::DefaultDeleter<enum_EAudioOscilloscopeTriggerMode>,1>
::DestroyObject(void *this)

{
  ::operator_delete(*(void **)((longlong)this + 0x10),1);
  return;
}

