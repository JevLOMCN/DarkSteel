// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 1

// InitializeModule @ 14dc04850

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FChaosClothModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x18);
  if (pIVar1 != (IModuleInterface *)0x0) {
    pIVar1[2] = (IModuleInterface)0x0;
    *pIVar1 = (IModuleInterface)&FChaosClothModule::_vftable__for__IChaosClothModuleInterface__;
    pIVar1[1] = (IModuleInterface)
                &FChaosClothModule::_vftable__for__IClothingSimulationFactoryClassProvider__;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

