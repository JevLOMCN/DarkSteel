// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Settings
// Functions: 1

// InitializeModule @ 142699000

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FSettingsModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0xe0);
  if (pIVar1 != (IModuleInterface *)0x0) {
    pIVar1[5] = (IModuleInterface)0x0;
    pIVar1[6] = (IModuleInterface)0x0;
    pIVar1[10] = (IModuleInterface)0x0;
    pIVar1[0xc] = (IModuleInterface)0x0;
    pIVar1[0xf] = (IModuleInterface)0x0;
    pIVar1[0x10] = (IModuleInterface)0x0;
    pIVar1[0x14] = (IModuleInterface)0x0;
    pIVar1[0x16] = (IModuleInterface)0x0;
    *pIVar1 = (IModuleInterface)&___7FSettingsModule__6B_;
    pIVar1[1] = (IModuleInterface)0x0;
    pIVar1[2] = (IModuleInterface)0x0;
    pIVar1[3] = (IModuleInterface)0x0;
    pIVar1[4] = (IModuleInterface)0x0;
    pIVar1[7] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 8) = 0;
    *(undefined4 *)&pIVar1[8].field_0x4 = 0x80;
    *(undefined4 *)(pIVar1 + 9) = 0xffffffff;
    *(undefined4 *)&pIVar1[9].field_0x4 = 0;
    pIVar1[0xb] = (IModuleInterface)0x0;
    pIVar1[0xd] = (IModuleInterface)0x0;
    pIVar1[0xe] = (IModuleInterface)0x0;
    pIVar1[0x11] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0x12) = 0;
    *(undefined4 *)&pIVar1[0x12].field_0x4 = 0x80;
    *(undefined4 *)(pIVar1 + 0x13) = 0xffffffff;
    *(undefined4 *)&pIVar1[0x13].field_0x4 = 0;
    pIVar1[0x15] = (IModuleInterface)0x0;
    pIVar1[0x17] = (IModuleInterface)0x0;
    pIVar1[0x18] = (IModuleInterface)0x0;
    pIVar1[0x19] = (IModuleInterface)0x0;
    pIVar1[0x1a] = (IModuleInterface)0x2;
    pIVar1[0x1b] = (IModuleInterface)0x0;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

