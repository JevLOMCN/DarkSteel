// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 1

// InitializeModule @ 14eb17470

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FNNERuntimeORTModule>::InitializeModule(void)

{
  FWeakObjectPtr *pFVar1;
  IModuleInterface *pIVar2;
  undefined8 local_res8;
  
  pIVar2 = ::operator_new(0x38);
  if (pIVar2 != (IModuleInterface *)0x0) {
    pIVar2[2] = (IModuleInterface)0x0;
    pFVar1 = (FWeakObjectPtr *)(pIVar2 + 1);
    pIVar2[3] = (IModuleInterface)0x0;
    pIVar2[4] = (IModuleInterface)0x0;
    pIVar2[5] = (IModuleInterface)0x0;
    pIVar2[6] = (IModuleInterface)0x0;
    *pIVar2 = (IModuleInterface)&___7FNNERuntimeORTModule__6B_;
    pFVar1->ObjectIndex = 0;
    pFVar1->ObjectSerialNumber = 0;
    local_res8 = 0;
    FWeakObjectPtr::operator=(pFVar1,(FObjectPtr)&local_res8);
    pFVar1 = (FWeakObjectPtr *)(pIVar2 + 2);
    local_res8 = 0;
    pFVar1->ObjectIndex = 0;
    pFVar1->ObjectSerialNumber = 0;
    FWeakObjectPtr::operator=(pFVar1,(FObjectPtr)&local_res8);
    pIVar2[3] = (IModuleInterface)0x0;
    pIVar2[4] = (IModuleInterface)0x0;
    pIVar2[5] = (IModuleInterface)0x0;
    pIVar2[6] = (IModuleInterface)0x0;
    return pIVar2;
  }
  return (IModuleInterface *)0x0;
}

