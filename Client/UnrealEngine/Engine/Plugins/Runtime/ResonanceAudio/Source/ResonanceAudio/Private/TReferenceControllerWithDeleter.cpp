// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 4

// DestroyObject @ 14f047100

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<ResonanceAudio::FResonanceAudioPluginListener,SharedPointerInternals::DefaultDeleter<ResonanceAudio::FResonanceAudioPluginListener>,1>
::DestroyObject(TReferenceControllerWithDeleter<ResonanceAudio::FResonanceAudioPluginListener,SharedPointerInternals::DefaultDeleter<ResonanceAudio::FResonanceAudioPluginListener>,1>
                *this)

{
  FResonanceAudioPluginListener *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FResonanceAudioPluginListener *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f047111. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14f047120

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<ResonanceAudio::FResonanceAudioReverb,SharedPointerInternals::DefaultDeleter<ResonanceAudio::FResonanceAudioReverb>,1>
::DestroyObject(TReferenceControllerWithDeleter<ResonanceAudio::FResonanceAudioReverb,SharedPointerInternals::DefaultDeleter<ResonanceAudio::FResonanceAudioReverb>,1>
                *this)

{
  FResonanceAudioReverb *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FResonanceAudioReverb *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f047131. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14f047140

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<ResonanceAudio::FResonanceAudioSpatialization,SharedPointerInternals::DefaultDeleter<ResonanceAudio::FResonanceAudioSpatialization>,1>
::DestroyObject(TReferenceControllerWithDeleter<ResonanceAudio::FResonanceAudioSpatialization,SharedPointerInternals::DefaultDeleter<ResonanceAudio::FResonanceAudioSpatialization>,1>
                *this)

{
  FResonanceAudioSpatialization *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FResonanceAudioSpatialization *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f047151. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14f047160

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<vraudio::ResonanceAudioApi,SharedPointerInternals::DefaultDeleter<vraudio::ResonanceAudioApi>,1>
::DestroyObject(TReferenceControllerWithDeleter<vraudio::ResonanceAudioApi,SharedPointerInternals::DefaultDeleter<vraudio::ResonanceAudioApi>,1>
                *this)

{
  ResonanceAudioApi *pRVar1;
  
  pRVar1 = this->Object;
  if (pRVar1 != (ResonanceAudioApi *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f047171. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pRVar1)(pRVar1,1);
    return;
  }
  return;
}

