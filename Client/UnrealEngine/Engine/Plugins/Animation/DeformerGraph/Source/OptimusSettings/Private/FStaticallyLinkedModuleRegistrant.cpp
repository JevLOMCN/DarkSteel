// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusSettings
// Functions: 1

// InitializeModule @ 14e100a40

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FOptimusSettingsModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x20);
  if (pIVar1 != (IModuleInterface *)0x0) {
    pIVar1[2] = (IModuleInterface)0x0;
    *pIVar1 = (IModuleInterface)&FOptimusSettingsModule::_vftable__for__IModuleInterface__;
    pIVar1[1] = (IModuleInterface)&FOptimusSettingsModule::_vftable__for__IMeshDeformerProvider__;
    pIVar1[3] = (IModuleInterface)0x0;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

