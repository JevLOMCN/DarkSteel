// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 1

// InitializeModule @ 14de27aa0

IModuleInterface * __cdecl FStaticallyLinkedModuleRegistrant<FDLSSModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x58);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *(undefined8 *)&pIVar1[8].field_0x3 = 0;
    *(undefined8 *)&pIVar1[9].field_0x3 = 0;
    *(undefined4 *)&pIVar1[10].field_0x3 = 0;
    pIVar1[10].field_0x7 = 0;
    *pIVar1 = (IModuleInterface)&___7FDLSSModule__6B_;
    pIVar1[1] = (IModuleInterface)0x0;
    pIVar1[2] = (IModuleInterface)0x0;
    pIVar1[3] = (IModuleInterface)0x0;
    pIVar1[4] = (IModuleInterface)0x0;
    pIVar1[5] = (IModuleInterface)0x0;
    pIVar1[6] = (IModuleInterface)0x0;
    pIVar1[7] = (IModuleInterface)0x0;
    *(undefined2 *)(pIVar1 + 8) = 0x101;
    pIVar1[8].field_0x2 = 1;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

