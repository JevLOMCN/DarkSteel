// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// InitializeModule @ 14ec09d30

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FOnlineSubsystemModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x220);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *pIVar1 = (IModuleInterface)&___7FOnlineSubsystemModule__6B_;
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
    *(undefined4 *)(pIVar1 + 0xc) = 0;
    pIVar1[0xd] = (IModuleInterface)0x0;
    pIVar1[0xe] = (IModuleInterface)0x0;
    pIVar1[0x11] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0x12) = 0;
    *(undefined4 *)&pIVar1[0x12].field_0x4 = 0x80;
    *(undefined4 *)(pIVar1 + 0x13) = 0xffffffff;
    *(undefined4 *)&pIVar1[0x13].field_0x4 = 0;
    pIVar1[0x15] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0x16) = 0;
    pIVar1[0x17] = (IModuleInterface)0x0;
    pIVar1[0x18] = (IModuleInterface)0x0;
    pIVar1[0x1b] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0x1c) = 0;
    *(undefined4 *)&pIVar1[0x1c].field_0x4 = 0x80;
    *(undefined4 *)(pIVar1 + 0x1d) = 0xffffffff;
    *(undefined4 *)&pIVar1[0x1d].field_0x4 = 0;
    pIVar1[0x1f] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0x20) = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar1 + 0x21),4000);
    pIVar1[0x26] = (IModuleInterface)0x0;
    pIVar1[0x27] = (IModuleInterface)0x0;
    pIVar1[0x2a] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0x2b) = 0;
    *(undefined4 *)&pIVar1[0x2b].field_0x4 = 0x80;
    *(undefined4 *)(pIVar1 + 0x2c) = 0xffffffff;
    *(undefined4 *)&pIVar1[0x2c].field_0x4 = 0;
    pIVar1[0x2e] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0x2f) = 0;
    pIVar1[0x30] = (IModuleInterface)0x0;
    pIVar1[0x31] = (IModuleInterface)0x0;
    pIVar1[0x34] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0x35) = 0;
    *(undefined4 *)&pIVar1[0x35].field_0x4 = 0x80;
    *(undefined4 *)(pIVar1 + 0x36) = 0xffffffff;
    *(undefined4 *)&pIVar1[0x36].field_0x4 = 0;
    pIVar1[0x38] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0x39) = 0;
    pIVar1[0x3a] = (IModuleInterface)0x0;
    pIVar1[0x3b] = (IModuleInterface)0x0;
    pIVar1[0x3e] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0x3f) = 0;
    *(undefined4 *)&pIVar1[0x3f].field_0x4 = 0x80;
    *(undefined4 *)(pIVar1 + 0x40) = 0xffffffff;
    *(undefined4 *)&pIVar1[0x40].field_0x4 = 0;
    pIVar1[0x42] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0x43) = 0;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

