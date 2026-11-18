// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizationService
// Functions: 1

// InitializeModule @ 146b327e0

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FLocalizationServiceModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x30);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *pIVar1 = (IModuleInterface)&___7FLocalizationServiceModule__6B_;
    pIVar1[1] = (IModuleInterface)0x0;
    pIVar1[2] = (IModuleInterface)0x0;
    *(undefined1 *)(pIVar1 + 3) = 0;
    pIVar1[4] = (IModuleInterface)0x0;
    pIVar1[5] = (IModuleInterface)&___7FDefaultLocalizationServiceProvider__6B_;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

