// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignificanceManager
// Functions: 1

// InitializeModule @ 14e2a2d80

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FSignificanceManagerModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x18);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *(undefined4 *)&pIVar1[2].field_0x2 = 0;
    *(undefined2 *)&pIVar1[2].field_0x6 = 0;
    *pIVar1 = (IModuleInterface)FDefaultModuleImpl::vftable;
    pIVar1[1] = (IModuleInterface)&___7FGCObject__6B_;
    *(undefined2 *)(pIVar1 + 2) = 0;
    FGCObject::RegisterGCObject((FGCObject *)(pIVar1 + 1));
    *pIVar1 = (IModuleInterface)&FSignificanceManagerModule::_vftable__for__FDefaultModuleImpl__;
    pIVar1[1] = (IModuleInterface)&FSignificanceManagerModule::_vftable__for__FGCObject__;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

