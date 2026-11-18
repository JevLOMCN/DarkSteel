// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpusAudioDecoder
// Functions: 1

// InitializeModule @ 146bca880

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FOpusAudioDecoderModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 != (IModuleInterface *)0x0) {
    pIVar1[1] = (IModuleInterface)0x0;
    *pIVar1 = (IModuleInterface)&___7FOpusAudioDecoderModule__6B_;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

