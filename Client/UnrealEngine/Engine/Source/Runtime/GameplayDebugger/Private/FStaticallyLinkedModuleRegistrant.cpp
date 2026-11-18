// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 1

// InitializeModule @ 146d4f010

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FGameplayDebuggerModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x160);
  if (pIVar1 != (IModuleInterface *)0x0) {
    pIVar1[0xb] = (IModuleInterface)0x0;
    pIVar1[0xc] = (IModuleInterface)0x0;
    pIVar1[0x10] = (IModuleInterface)0x0;
    pIVar1[0x12] = (IModuleInterface)0x0;
    pIVar1[0x15] = (IModuleInterface)0x0;
    pIVar1[0x16] = (IModuleInterface)0x0;
    pIVar1[0x1a] = (IModuleInterface)0x0;
    pIVar1[0x1c] = (IModuleInterface)0x0;
    pIVar1[0x21] = (IModuleInterface)0x0;
    pIVar1[0x24] = (IModuleInterface)0x0;
    pIVar1[0x25] = (IModuleInterface)0x0;
    pIVar1[0x29] = (IModuleInterface)0x0;
    pIVar1[0x2b] = (IModuleInterface)0x0;
    *pIVar1 = (IModuleInterface)&___7FGameplayDebuggerModule__6B_;
    pIVar1[1] = (IModuleInterface)0x0;
    pIVar1[2] = (IModuleInterface)0x0;
    pIVar1[3] = (IModuleInterface)0x0;
    pIVar1[5] = (IModuleInterface)0x0;
    pIVar1[6] = (IModuleInterface)0x0;
    pIVar1[7] = (IModuleInterface)0x0;
    pIVar1[9] = (IModuleInterface)0x0;
    pIVar1[10] = (IModuleInterface)0x0;
    pIVar1[0xd] = (IModuleInterface)0x0;
    pIVar1[4] = (IModuleInterface)0x2;
    pIVar1[8] = (IModuleInterface)0x2;
    *(undefined4 *)(pIVar1 + 0xe) = 0;
    *(undefined4 *)&pIVar1[0xe].field_0x4 = 0x80;
    *(undefined4 *)(pIVar1 + 0xf) = 0xffffffff;
    *(undefined4 *)&pIVar1[0xf].field_0x4 = 0;
    pIVar1[0x11] = (IModuleInterface)0x0;
    pIVar1[0x13] = (IModuleInterface)0x0;
    pIVar1[0x14] = (IModuleInterface)0x0;
    pIVar1[0x17] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0x18) = 0;
    *(undefined4 *)&pIVar1[0x18].field_0x4 = 0x80;
    *(undefined4 *)(pIVar1 + 0x19) = 0xffffffff;
    *(undefined4 *)&pIVar1[0x19].field_0x4 = 0;
    pIVar1[0x1b] = (IModuleInterface)0x0;
    pIVar1[0x1d] = (IModuleInterface)0x0;
    pIVar1[0x1e] = (IModuleInterface)0x0;
    pIVar1[0x1f] = (IModuleInterface)0x0;
    pIVar1[0x20] = (IModuleInterface)0x0;
    pIVar1[0x22] = (IModuleInterface)0x0;
    pIVar1[0x23] = (IModuleInterface)0x0;
    pIVar1[0x26] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0x27) = 0;
    *(undefined4 *)&pIVar1[0x27].field_0x4 = 0x80;
    *(undefined4 *)(pIVar1 + 0x28) = 0xffffffff;
    *(undefined4 *)&pIVar1[0x28].field_0x4 = 0;
    pIVar1[0x2a] = (IModuleInterface)0x0;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

