// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AvfMediaFactory
// Functions: 1

// InitializeModule @ 14ea27590

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FAvfMediaFactoryModule>::InitializeModule(void)

{
  undefined8 *puVar1;
  IModuleInterface *pIVar2;
  
  puVar1 = ::operator_new(0x40);
  if (puVar1 == (undefined8 *)0x0) {
    return (IModuleInterface *)0x0;
  }
  puVar1[2] = 0;
  *puVar1 = &FAvfMediaFactoryModule::_vftable__for__IMediaPlayerFactory__;
  puVar1[3] = 0;
  puVar1[1] = &FAvfMediaFactoryModule::_vftable__for__IModuleInterface__;
  pIVar2 = (IModuleInterface *)(puVar1 + 1);
  if (puVar1 == (undefined8 *)0x0) {
    pIVar2 = (IModuleInterface *)0x0;
  }
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return pIVar2;
}

