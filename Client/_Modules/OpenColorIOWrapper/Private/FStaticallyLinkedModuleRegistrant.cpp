// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIOWrapper
// Functions: 1

// InitializeModule @ 14d763c50

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FOpenColorIOWrapperModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x38);
  if (pIVar1 != (IModuleInterface *)0x0) {
    pIVar1[1] = (IModuleInterface)0x0;
    pIVar1[2] = (IModuleInterface)0x0;
    pIVar1[3] = (IModuleInterface)0x0;
    pIVar1[4] = (IModuleInterface)0x0;
    pIVar1[5] = (IModuleInterface)0x0;
    pIVar1[6] = (IModuleInterface)0x0;
    *pIVar1 = (IModuleInterface)&___7FOpenColorIOWrapperModule__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar1 + 1),4000);
    pIVar1[6] = (IModuleInterface)0x0;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

