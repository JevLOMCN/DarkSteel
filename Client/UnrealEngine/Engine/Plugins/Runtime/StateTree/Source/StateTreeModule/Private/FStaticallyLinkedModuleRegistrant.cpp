// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// InitializeModule @ 14d531930

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FStateTreeModule>::InitializeModule(void)

{
  FStateTreeModule *pFVar1;
  
  pFVar1 = ::operator_new(0x78);
  if (pFVar1 != (FStateTreeModule *)0x0) {
    pFVar1 = FStateTreeModule::FStateTreeModule(pFVar1);
    return (IModuleInterface *)pFVar1;
  }
  return (IModuleInterface *)0x0;
}

