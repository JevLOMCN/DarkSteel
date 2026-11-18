// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 1

// InitializeModule @ 146d23930

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FDrawPrimitiveDebuggerModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x48);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *(undefined4 *)&pIVar1[1].field_0x1 = 0;
    *(undefined2 *)&pIVar1[1].field_0x5 = 0;
    pIVar1[1].field_0x7 = 0;
    *pIVar1 = (IModuleInterface)&___7FDrawPrimitiveDebuggerModule__6B_;
    *(undefined1 *)(pIVar1 + 1) = 0;
    pIVar1[2] = (IModuleInterface)0x0;
    pIVar1[3] = (IModuleInterface)0x0;
    pIVar1[4] = (IModuleInterface)0x0;
    pIVar1[5] = (IModuleInterface)0x0;
    pIVar1[6] = (IModuleInterface)0x0;
    pIVar1[7] = (IModuleInterface)0x0;
    pIVar1[8] = (IModuleInterface)0x0;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

