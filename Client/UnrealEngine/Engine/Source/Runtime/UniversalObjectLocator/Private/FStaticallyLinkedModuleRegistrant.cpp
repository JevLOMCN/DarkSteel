// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UniversalObjectLocator
// Functions: 1

// InitializeModule @ 144348800

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<UE::UniversalObjectLocator::FUniversalObjectLocatorModule>::
InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x18);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *(undefined4 *)(pIVar1 + 1) = 0x49ceb527;
    *pIVar1 = (IModuleInterface)&___7FUniversalObjectLocatorModule_UniversalObjectLocator_UE__6B_;
    *(undefined4 *)&pIVar1[1].field_0x4 = 0xdb044325;
    *(undefined4 *)(pIVar1 + 2) = 0xa786a9b4;
    *(undefined4 *)&pIVar1[2].field_0x4 = 0x470158fc;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

