// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 1

// InitializeModule @ 14f049a40

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<ResonanceAudio::FResonanceAudioModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x80);
  if (pIVar1 != (IModuleInterface *)0x0) {
    pIVar1[3] = (IModuleInterface)&___7FSpatializationPluginFactory_ResonanceAudio__6B_;
    *pIVar1 = (IModuleInterface)&___7FResonanceAudioModule_ResonanceAudio__6B_;
    pIVar1[4] = (IModuleInterface)&___7FReverbPluginFactory_ResonanceAudio__6B_;
    pIVar1[1] = (IModuleInterface)0x0;
    pIVar1[6] = (IModuleInterface)0x0;
    *(ISoundfieldFactory *)(pIVar1 + 5) =
         (ISoundfieldFactory)&___7FAmbisonicsFactory_ResonanceAudio__6B_;
    pIVar1[7] = (IModuleInterface)0x0;
    pIVar1[10] = (IModuleInterface)0x0;
    pIVar1[2] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0xb) = 0;
    *(undefined4 *)&pIVar1[0xb].field_0x4 = 0x80;
    *(undefined4 *)(pIVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)&pIVar1[0xc].field_0x4 = 0;
    pIVar1[0xe] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0xf) = 0;
    ISoundfieldFactory::RegisterSoundfieldFormat((ISoundfieldFactory *)(pIVar1 + 5));
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

