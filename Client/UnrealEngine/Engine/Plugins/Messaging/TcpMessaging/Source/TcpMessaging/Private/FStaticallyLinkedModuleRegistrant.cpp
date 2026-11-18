// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TcpMessaging
// Functions: 1

// InitializeModule @ 14eacbdc0

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FTcpMessagingModule>::InitializeModule(void)

{
  FSelfRegisteringExec *this;
  FSelfRegisteringExec *pFVar1;
  
  this = ::operator_new(0x30);
  if (this == (FSelfRegisteringExec *)0x0) {
    return (IModuleInterface *)0x0;
  }
  *this = (FSelfRegisteringExec)0x0;
  this[1] = (FSelfRegisteringExec)0x0;
  this[2] = (FSelfRegisteringExec)0x0;
  this[3] = (FSelfRegisteringExec)0x0;
  this[4] = (FSelfRegisteringExec)0x0;
  this[5] = (FSelfRegisteringExec)0x0;
  FSelfRegisteringExec::FSelfRegisteringExec(this);
  *this = (FSelfRegisteringExec)&FTcpMessagingModule::_vftable__for__FSelfRegisteringExec__;
  this[2] = (FSelfRegisteringExec)0x0;
  this[1] = (FSelfRegisteringExec)&FTcpMessagingModule::_vftable__for__ITcpMessagingModule__;
  pFVar1 = this + 1;
  if (this == (FSelfRegisteringExec *)0x0) {
    pFVar1 = (FSelfRegisteringExec *)(IModuleInterface *)0x0;
  }
  this[3] = (FSelfRegisteringExec)0x0;
  this[4] = (FSelfRegisteringExec)0x0;
  this[5] = (FSelfRegisteringExec)0x0;
  return (IModuleInterface *)pFVar1;
}

