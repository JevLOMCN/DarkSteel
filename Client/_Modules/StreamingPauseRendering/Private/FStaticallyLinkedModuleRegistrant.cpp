// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamingPauseRendering
// Functions: 1

// InitializeModule @ 146c84540

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FStreamingPauseRenderingModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x70);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *pIVar1 = (IModuleInterface)&___7FStreamingPauseRenderingModule__6B_;
    pIVar1[1] = (IModuleInterface)0x0;
    pIVar1[2] = (IModuleInterface)0x0;
    pIVar1[3] = (IModuleInterface)0x0;
    pIVar1[4] = (IModuleInterface)0x0;
    pIVar1[5] = (IModuleInterface)0x0;
    pIVar1[6] = (IModuleInterface)0x0;
    pIVar1[7] = (IModuleInterface)0x0;
    pIVar1[8] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 9) = 0;
    pIVar1[10] = (IModuleInterface)0x0;
    pIVar1[0xb] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0xc) = 0;
    *(undefined1 *)(pIVar1 + 0xd) = 0;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

