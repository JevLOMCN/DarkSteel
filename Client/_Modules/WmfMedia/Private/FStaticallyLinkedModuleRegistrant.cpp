// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 1

// InitializeModule @ 14eab3ed0

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FWmfMediaModule>::InitializeModule(void)

{
  undefined8 *puVar1;
  IModuleInterface *pIVar2;
  
  puVar1 = ::operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    return (IModuleInterface *)0x0;
  }
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *puVar1 = &FWmfMediaModule::_vftable__for__IMediaCaptureSupport__;
  puVar1[1] = &FWmfMediaModule::_vftable__for__IWmfMediaModule__;
  pIVar2 = (IModuleInterface *)(puVar1 + 1);
  if (puVar1 == (undefined8 *)0x0) {
    pIVar2 = (IModuleInterface *)0x0;
  }
  return pIVar2;
}

