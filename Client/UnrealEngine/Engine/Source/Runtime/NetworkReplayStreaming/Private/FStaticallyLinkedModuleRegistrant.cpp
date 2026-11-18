// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetworkReplayStreaming
// Functions: 1

// InitializeModule @ 1446446f0

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FNetworkReplayStreaming>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x60);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *pIVar1 = (IModuleInterface)IModuleInterface::vftable;
    FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)(pIVar1 + 1));
    *pIVar1 = (IModuleInterface)&FNetworkReplayStreaming::_vftable__for__IModuleInterface__;
    pIVar1[1] = (IModuleInterface)&FNetworkReplayStreaming::_vftable__for__FSelfRegisteringExec__;
    pIVar1[2] = (IModuleInterface)0x0;
    pIVar1[3] = (IModuleInterface)0x0;
    pIVar1[6] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 7) = 0;
    *(undefined4 *)&pIVar1[7].field_0x4 = 0x80;
    *(undefined4 *)&pIVar1[8].field_0x4 = 0;
    *(undefined4 *)(pIVar1 + 8) = 0xffffffff;
    pIVar1[10] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0xb) = 0;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

