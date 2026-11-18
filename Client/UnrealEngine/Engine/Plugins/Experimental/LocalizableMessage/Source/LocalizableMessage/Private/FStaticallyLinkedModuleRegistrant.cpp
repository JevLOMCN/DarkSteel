// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizableMessage
// Functions: 1

// InitializeModule @ 14e9bfce0

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FLocalizableMessageModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x58);
  if (pIVar1 != (IModuleInterface *)0x0) {
    pIVar1[3] = (IModuleInterface)0x0;
    pIVar1[4] = (IModuleInterface)0x0;
    pIVar1[8] = (IModuleInterface)0x0;
    pIVar1[10] = (IModuleInterface)0x0;
    *pIVar1 = (IModuleInterface)&___7FLocalizableMessageModule__6B_;
    pIVar1[1] = (IModuleInterface)0x0;
    pIVar1[2] = (IModuleInterface)0x0;
    pIVar1[5] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 6) = 0;
    *(undefined4 *)&pIVar1[6].field_0x4 = 0x80;
    *(undefined4 *)(pIVar1 + 7) = 0xffffffff;
    *(undefined4 *)&pIVar1[7].field_0x4 = 0;
    pIVar1[9] = (IModuleInterface)0x0;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

