// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Media
// Functions: 1

// InitializeModule @ 146bee710

IModuleInterface * __cdecl FStaticallyLinkedModuleRegistrant<FMediaModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  IModuleInterface IVar2;
  
  pIVar1 = ::operator_new(0x170);
  if (pIVar1 != (IModuleInterface *)0x0) {
    pIVar1[5] = (IModuleInterface)0x0;
    memset(pIVar1 + 0xc,0,0x110);
    *pIVar1 = (IModuleInterface)&___7FMediaModule__6B_;
    pIVar1[1] = (IModuleInterface)0x0;
    pIVar1[3] = (IModuleInterface)&___7FMediaClock__6B_;
    pIVar1[2] = (IModuleInterface)0x0;
    pIVar1[4] = (IModuleInterface)0x0;
    pIVar1[6] = (IModuleInterface)0x0;
    pIVar1[7] = (IModuleInterface)0x0;
    pIVar1[8] = (IModuleInterface)0x0;
    pIVar1[9] = (IModuleInterface)0x0;
    pIVar1[10] = (IModuleInterface)0x0;
    pIVar1[0xb] = (IModuleInterface)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar1 + 0xc),4000);
    pIVar1[0x11] = (IModuleInterface)0x8000000000000000;
    pIVar1[0x14] = (IModuleInterface)0x0;
    pIVar1[0x19] = (IModuleInterface)&FMediaTicker::_vftable__for__FRunnable__;
    pIVar1[0x1a] = (IModuleInterface)&FMediaTicker::_vftable__for__IMediaTicker__;
    pIVar1[0x15] = (IModuleInterface)0x0;
    pIVar1[0x16] = (IModuleInterface)0x0;
    pIVar1[0x17] = (IModuleInterface)0x0;
    pIVar1[0x18] = (IModuleInterface)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar1 + 0x1b),4000);
    *(undefined1 *)(pIVar1 + 0x20) = 0;
    pIVar1[0x21] = (IModuleInterface)0x0;
    pIVar1[0x22] = (IModuleInterface)0x0;
    pIVar1[0x23] = (IModuleInterface)0x0;
    pIVar1[0x24] = (IModuleInterface)0x0;
    IVar2 = (IModuleInterface)FGenericPlatformProcess::GetSynchEventFromPool(true);
    pIVar1[0x25] = IVar2;
    pIVar1[0x27] = (IModuleInterface)0x0;
    pIVar1[0x28] = (IModuleInterface)0x0;
    pIVar1[0x29] = (IModuleInterface)0x0;
    pIVar1[0x2a] = (IModuleInterface)0x2;
    *(undefined1 *)(pIVar1 + 0x2b) = 0;
    pIVar1[0x2c] = (IModuleInterface)0x0;
    pIVar1[0x2d] = (IModuleInterface)0x0;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

