// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 1

// InitializeModule @ 1445dbed0

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<UE::IoStore::FIoStoreOnDemandModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  IModuleInterface IVar2;
  
  pIVar1 = ::operator_new(0x18);
  if (pIVar1 == (IModuleInterface *)0x0) {
    return (IModuleInterface *)0x0;
  }
  *(undefined8 *)&pIVar1[1].field_0x4 = 0;
  *(undefined4 *)&pIVar1[2].field_0x4 = 0;
  *pIVar1 = (IModuleInterface)&___7FIoStoreOnDemandModule_IoStore_UE__6B_;
  *(undefined4 *)(pIVar1 + 1) = 0xffffffff;
  IVar2 = (IModuleInterface)::operator_new(0x18);
  if (IVar2 != (IModuleInterface)0x0) {
    *(undefined8 *)((longlong)IVar2 + 8) = 0;
    *(undefined ***)IVar2 = &___7FOnDemandIoStoreFactory_IoStore_UE__6B_;
    *(undefined8 *)((longlong)IVar2 + 0x10) = 0;
    pIVar1[2] = IVar2;
    return pIVar1;
  }
  pIVar1[2] = (IModuleInterface)0x0;
  return pIVar1;
}

