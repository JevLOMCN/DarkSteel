// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 1

// InitializeModule @ 14a6e49a0

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FEnhancedInputModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x30);
  if (pIVar1 != (IModuleInterface *)0x0) {
    pIVar1[1] = (IModuleInterface)0x0;
    pIVar1[2] = (IModuleInterface)0x0;
    pIVar1[3] = (IModuleInterface)0x0;
    pIVar1[4] = (IModuleInterface)0x0;
    pIVar1[5] = (IModuleInterface)0x0;
    *pIVar1 = (IModuleInterface)&___7IEnhancedInputModule__6B_;
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(pIVar1 + 1),NewObject);
    *pIVar1 = (IModuleInterface)&FEnhancedInputModule::_vftable__for__IEnhancedInputModule__;
    pIVar1[1] = (IModuleInterface)&FEnhancedInputModule::_vftable__for__FTickableGameObject__;
    pIVar1[2] = (IModuleInterface)0x0;
    pIVar1[3] = (IModuleInterface)0x0;
    pIVar1[4] = (IModuleInterface)0x0;
    pIVar1[5] = (IModuleInterface)0xffffffffffffffff;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

