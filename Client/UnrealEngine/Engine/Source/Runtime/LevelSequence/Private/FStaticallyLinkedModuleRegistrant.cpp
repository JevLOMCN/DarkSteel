// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 1

// InitializeModule @ 146c576a0

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FLevelSequenceModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x50);
  if (pIVar1 != (IModuleInterface *)0x0) {
    pIVar1[1] = (IModuleInterface)0x0;
    pIVar1[2] = (IModuleInterface)0x0;
    pIVar1[3] = (IModuleInterface)0x0;
    pIVar1[4] = (IModuleInterface)0x0;
    pIVar1[5] = (IModuleInterface)0x0;
    pIVar1[6] = (IModuleInterface)0x0;
    pIVar1[7] = (IModuleInterface)0x0;
    pIVar1[8] = (IModuleInterface)0x0;
    pIVar1[9] = (IModuleInterface)0x0;
    *pIVar1 = (IModuleInterface)&___7ILevelSequenceModule__6B_;
    FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)(pIVar1 + 1));
    *pIVar1 = (IModuleInterface)&FLevelSequenceModule::_vftable__for__ILevelSequenceModule__;
    pIVar1[1] = (IModuleInterface)&FLevelSequenceModule::_vftable__for__FSelfRegisteringExec__;
    pIVar1[2] = (IModuleInterface)0x0;
    pIVar1[3] = (IModuleInterface)0x0;
    pIVar1[4] = (IModuleInterface)0x0;
    pIVar1[5] = (IModuleInterface)0x0;
    pIVar1[6] = (IModuleInterface)0x0;
    pIVar1[7] = (IModuleInterface)0x0;
    pIVar1[8] = (IModuleInterface)0x0;
    pIVar1[9] = (IModuleInterface)0x2;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

