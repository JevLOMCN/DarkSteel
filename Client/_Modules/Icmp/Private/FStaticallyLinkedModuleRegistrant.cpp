// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 1

// InitializeModule @ 144557710

IModuleInterface * __cdecl FStaticallyLinkedModuleRegistrant<FIcmpModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 != (IModuleInterface *)0x0) {
    pIVar1[1] = (IModuleInterface)0x0;
    *pIVar1 = (IModuleInterface)IModuleInterface::vftable;
    FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)(pIVar1 + 1));
    *pIVar1 = (IModuleInterface)&FIcmpModule::_vftable__for__IModuleInterface__;
    pIVar1[1] = (IModuleInterface)&FIcmpModule::_vftable__for__FSelfRegisteringExec__;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

