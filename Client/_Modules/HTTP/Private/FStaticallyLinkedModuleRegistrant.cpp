// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 1

// InitializeModule @ 14316be70

IModuleInterface * __cdecl FStaticallyLinkedModuleRegistrant<FHttpModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0xe0);
  if (pIVar1 != (IModuleInterface *)0x0) {
    memset(pIVar1 + 1,0,0xd8);
    *pIVar1 = (IModuleInterface)IModuleInterface::vftable;
    FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)(pIVar1 + 1));
    *pIVar1 = (IModuleInterface)&FHttpModule::_vftable__for__IModuleInterface__;
    pIVar1[1] = (IModuleInterface)&FHttpModule::_vftable__for__FSelfRegisteringExec__;
    pIVar1[4] = (IModuleInterface)0x0;
    pIVar1[0xb] = (IModuleInterface)0x0;
    pIVar1[0xc] = (IModuleInterface)0x0;
    pIVar1[0xf] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0x10) = 0;
    *(undefined4 *)&pIVar1[0x10].field_0x4 = 0x80;
    *(undefined4 *)&pIVar1[0x11].field_0x4 = 0;
    *(undefined4 *)(pIVar1 + 0x11) = 0xffffffff;
    pIVar1[0x13] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0x14) = 0;
    pIVar1[0x15] = (IModuleInterface)0x0;
    pIVar1[0x16] = (IModuleInterface)0x0;
    pIVar1[0x17] = (IModuleInterface)0x0;
    pIVar1[0x18] = (IModuleInterface)0x0;
    pIVar1[0x1a] = (IModuleInterface)0x0;
    pIVar1[0x1b] = (IModuleInterface)0x0;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

