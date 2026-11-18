// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// DestroyObject @ 1444f9fe0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::IFFTAlgorithm,SharedPointerInternals::DefaultDeleter<Audio::IFFTAlgorithm>,1>
::DestroyObject(TReferenceControllerWithDeleter<Audio::IFFTAlgorithm,SharedPointerInternals::DefaultDeleter<Audio::IFFTAlgorithm>,1>
                *this)

{
  IFFTAlgorithm *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (IFFTAlgorithm *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001444f9ff1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 144522fb0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::FWaveTableOsc,SharedPointerInternals::DefaultDeleter<Audio::FWaveTableOsc>,1>
::DestroyObject(TReferenceControllerWithDeleter<Audio::FWaveTableOsc,SharedPointerInternals::DefaultDeleter<Audio::FWaveTableOsc>,1>
                *this)

{
  FWaveTableOsc *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FWaveTableOsc *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144522fc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

