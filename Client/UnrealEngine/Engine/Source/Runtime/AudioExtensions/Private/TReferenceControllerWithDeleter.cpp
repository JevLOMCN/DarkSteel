// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 1

// DestroyObject @ 144533040

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::IProxyData,SharedPointerInternals::DefaultDeleter<Audio::IProxyData>,1>
::DestroyObject(TReferenceControllerWithDeleter<Audio::IProxyData,SharedPointerInternals::DefaultDeleter<Audio::IProxyData>,1>
                *this)

{
  IProxyData *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (IProxyData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144533051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pIVar1->_padding_)(pIVar1,1);
    return;
  }
  return;
}

