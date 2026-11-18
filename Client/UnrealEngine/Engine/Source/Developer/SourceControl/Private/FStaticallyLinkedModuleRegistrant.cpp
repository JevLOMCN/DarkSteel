// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 1

// InitializeModule @ 146b1b8f0

/* WARNING: Enum "Type": Some values do not have unique names */

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FSourceControlModule>::InitializeModule(void)

{
  FSourceControlModule *pFVar1;
  
  pFVar1 = ::operator_new(0x220);
  if (pFVar1 != (FSourceControlModule *)0x0) {
    pFVar1 = FSourceControlModule::FSourceControlModule(pFVar1);
    return (IModuleInterface *)pFVar1;
  }
  return (IModuleInterface *)0x0;
}

