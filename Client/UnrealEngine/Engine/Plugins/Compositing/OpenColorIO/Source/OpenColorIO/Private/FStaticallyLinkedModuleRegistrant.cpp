// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 1

// InitializeModule @ 14d773200

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FOpenColorIOModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  IModuleInterface IVar2;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 == (IModuleInterface *)0x0) {
    return (IModuleInterface *)0x0;
  }
  *pIVar1 = (IModuleInterface)&___7FOpenColorIOModule__6B_;
  IVar2 = (IModuleInterface)::operator_new(0x20);
  if (IVar2 != (IModuleInterface)0x0) {
    *(undefined8 *)IVar2 = 0;
    *(undefined8 *)((longlong)IVar2 + 8) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x10) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x18) = 0;
    pIVar1[1] = IVar2;
    return pIVar1;
  }
  pIVar1[1] = (IModuleInterface)0x0;
  return pIVar1;
}

