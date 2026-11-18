// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 1

// InitializeModule @ 144508760

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<Audio::FSignalProcessingModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x18);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *pIVar1 = (IModuleInterface)&___7FSignalProcessingModule_Audio__6B_;
    pIVar1[1] = (IModuleInterface)&___7FVectorFFTFactory_Audio__6B_;
    pIVar1[2] = (IModuleInterface)&___7FUniformPartitionConvolutionFactory_Audio__6B_;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

