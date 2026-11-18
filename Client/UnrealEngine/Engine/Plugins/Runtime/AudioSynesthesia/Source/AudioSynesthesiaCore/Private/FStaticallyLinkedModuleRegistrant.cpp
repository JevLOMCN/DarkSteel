// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 1

// InitializeModule @ 14d807e70

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<Audio::FAudioSynesthesiaCoreModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x50);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *pIVar1 = (IModuleInterface)&___7FAudioSynesthesiaCoreModule_Audio__6B_;
    pIVar1[1] = (IModuleInterface)&___7FLoudnessNRTFactory_Audio__6B_;
    pIVar1[2] = (IModuleInterface)&___7FLKFSNRTFactory_Audio__6B_;
    pIVar1[3] = (IModuleInterface)&___7FConstantQNRTFactory_Audio__6B_;
    pIVar1[4] = (IModuleInterface)&___7FOnsetNRTFactory_Audio__6B_;
    pIVar1[5] = (IModuleInterface)&___7FLoudnessFactory_Audio__6B_;
    pIVar1[6] = (IModuleInterface)&___7FConstantQFactory_Audio__6B_;
    pIVar1[7] = (IModuleInterface)&___7FMeterFactory_Audio__6B_;
    pIVar1[8] = (IModuleInterface)&___7FLKFSFactory_Audio__6B_;
    pIVar1[9] = (IModuleInterface)&___7FSynesthesiaSpectrumAnalysisFactory_Audio__6B_;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

