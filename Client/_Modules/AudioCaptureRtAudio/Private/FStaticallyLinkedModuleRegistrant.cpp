// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureRtAudio
// Functions: 1

// InitializeModule @ 14d0c47e0

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<Audio::FAudioCaptureRtAudioModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *pIVar1 = (IModuleInterface)0x0;
    pIVar1[1] = (IModuleInterface)0x0;
    *pIVar1 = (IModuleInterface)&___7FAudioCaptureRtAudioModule_Audio__6B_;
    pIVar1[1] = (IModuleInterface)&___7FAudioCaptureRtAudioFactory_Audio__6B_;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

