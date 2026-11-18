// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 1

// InitializeModule @ 142d4a2f0

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FMessagingModule>::InitializeModule(void)

{
  FSelfRegisteringExec *this;
  FSelfRegisteringExec *pFVar1;
  
  this = ::operator_new(0x70);
  if (this == (FSelfRegisteringExec *)0x0) {
    return (IModuleInterface *)0x0;
  }
  *this = (FSelfRegisteringExec)0x0;
  this[1] = (FSelfRegisteringExec)0x0;
  this[2] = (FSelfRegisteringExec)0x0;
  this[3] = (FSelfRegisteringExec)0x0;
  this[4] = (FSelfRegisteringExec)0x0;
  this[5] = (FSelfRegisteringExec)0x0;
  this[6] = (FSelfRegisteringExec)0x0;
  this[7] = (FSelfRegisteringExec)0x0;
  this[8] = (FSelfRegisteringExec)0x0;
  this[9] = (FSelfRegisteringExec)0x0;
  this[10] = (FSelfRegisteringExec)0x0;
  this[0xb] = (FSelfRegisteringExec)0x0;
  this[0xc] = (FSelfRegisteringExec)0x0;
  this[0xd] = (FSelfRegisteringExec)0x0;
  FSelfRegisteringExec::FSelfRegisteringExec(this);
  this[9] = (FSelfRegisteringExec)0x2;
  this[2] = (FSelfRegisteringExec)0x0;
  *this = (FSelfRegisteringExec)&FMessagingModule::_vftable__for__FSelfRegisteringExec__;
  this[3] = (FSelfRegisteringExec)0x0;
  this[1] = (FSelfRegisteringExec)&FMessagingModule::_vftable__for__IMessagingModule__;
  pFVar1 = this + 1;
  if (this == (FSelfRegisteringExec *)0x0) {
    pFVar1 = (FSelfRegisteringExec *)(IModuleInterface *)0x0;
  }
  this[4] = (FSelfRegisteringExec)0x0;
  this[5] = (FSelfRegisteringExec)0x0;
  this[6] = (FSelfRegisteringExec)0x0;
  this[7] = (FSelfRegisteringExec)0x0;
  this[8] = (FSelfRegisteringExec)0x0;
  this[10] = (FSelfRegisteringExec)0x0;
  this[0xb] = (FSelfRegisteringExec)0x0;
  this[0xc] = (FSelfRegisteringExec)0x0;
  this[0xd] = (FSelfRegisteringExec)0x2;
  return (IModuleInterface *)pFVar1;
}

