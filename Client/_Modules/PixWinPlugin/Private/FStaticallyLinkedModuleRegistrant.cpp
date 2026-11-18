// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PixWinPlugin
// Functions: 1

// InitializeModule @ 14e2c61a0

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FPixWinPluginModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x48);
  if (pIVar1 != (IModuleInterface *)0x0) {
    pIVar1[1] = (IModuleInterface)0x0;
    *(undefined4 *)&pIVar1[5].field_0x3 = 0;
    pIVar1[5].field_0x7 = 0;
    *pIVar1 = (IModuleInterface)&FPixWinPluginModule::_vftable__for__IInputDeviceModule__;
    pIVar1[2] = (IModuleInterface)&FPixWinPluginModule::_vftable__for__IRenderCaptureProvider__;
    pIVar1[8] = (IModuleInterface)0x0;
    pIVar1[3] = (IModuleInterface)0x0;
    pIVar1[4] = (IModuleInterface)0x0;
    *(undefined2 *)(pIVar1 + 5) = 0;
    pIVar1[5].field_0x2 = 0;
    pIVar1[6] = (IModuleInterface)0x0;
    pIVar1[7] = (IModuleInterface)0x0;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

