// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 1

// InitializeModule @ 14d8262a0

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<Audio::FAudioSynesthesiaModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x20);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *pIVar1 = (IModuleInterface)&___7FAudioSynesthesiaModule_Audio__6B_;
    pIVar1[1] = (IModuleInterface)&___7FLoudnessNRTFactory_Audio__6B_;
    pIVar1[2] = (IModuleInterface)&___7FConstantQNRTFactory_Audio__6B_;
    pIVar1[3] = (IModuleInterface)&___7FOnsetNRTFactory_Audio__6B_;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

