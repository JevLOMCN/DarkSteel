// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 1

// InitializeModule @ 1436d9cf0

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FChaosVDRuntimeModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x108);
  if (pIVar1 != (IModuleInterface *)0x0) {
    pIVar1[1] = (IModuleInterface)0x0;
    pIVar1[10] = (IModuleInterface)0x0;
    pIVar1[0xd] = (IModuleInterface)0x0;
    pIVar1[0xe] = (IModuleInterface)0x0;
    pIVar1[0x12] = (IModuleInterface)0x0;
    *(undefined4 *)&pIVar1[0x14].field_0x4 = 0;
    *(undefined4 *)&pIVar1[0x15].field_0x2 = 0;
    *(undefined2 *)&pIVar1[0x15].field_0x6 = 0;
    pIVar1[0x19] = (IModuleInterface)0x0;
    pIVar1[0x1c] = (IModuleInterface)0x0;
    *pIVar1 = (IModuleInterface)&___7FChaosVDRuntimeModule__6B_;
    pIVar1[2] = (IModuleInterface)0x0;
    pIVar1[3] = (IModuleInterface)0x0;
    pIVar1[4] = (IModuleInterface)0x0;
    pIVar1[5] = (IModuleInterface)0x0;
    pIVar1[6] = (IModuleInterface)0x0;
    pIVar1[7] = (IModuleInterface)0x0;
    pIVar1[8] = (IModuleInterface)0x0;
    pIVar1[9] = (IModuleInterface)0x0;
    pIVar1[0xb] = (IModuleInterface)0x0;
    pIVar1[0xc] = (IModuleInterface)0x0;
    pIVar1[0xf] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0x10) = 0;
    *(undefined4 *)&pIVar1[0x10].field_0x4 = 0x80;
    *(undefined4 *)(pIVar1 + 0x11) = 0xffffffff;
    *(undefined4 *)&pIVar1[0x11].field_0x4 = 0;
    pIVar1[0x13] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0x14) = 0;
    *(undefined2 *)(pIVar1 + 0x15) = 0;
    pIVar1[0x16] = (IModuleInterface)0x0;
    pIVar1[0x17] = (IModuleInterface)0x0;
    pIVar1[0x18] = (IModuleInterface)0x0;
    pIVar1[0x1a] = (IModuleInterface)0x0;
    pIVar1[0x1b] = (IModuleInterface)0x0;
    pIVar1[0x1d] = (IModuleInterface)0x0;
    pIVar1[0x1e] = (IModuleInterface)0x0;
    pIVar1[0x1f] = (IModuleInterface)0x0;
    pIVar1[0x20] = (IModuleInterface)0x2;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

