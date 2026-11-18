// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SSL
// Functions: 1

// InitializeModule @ 143147a00

IModuleInterface * __cdecl FStaticallyLinkedModuleRegistrant<FSslModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x18);
  if (pIVar1 != (IModuleInterface *)0x0) {
    pIVar1[1] = (IModuleInterface)0x0;
    *pIVar1 = (IModuleInterface)&___7FSslModule__6B_;
    pIVar1[2] = (IModuleInterface)0x0;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

