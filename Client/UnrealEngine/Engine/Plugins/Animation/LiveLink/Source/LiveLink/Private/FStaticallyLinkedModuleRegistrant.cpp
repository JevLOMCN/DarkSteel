// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// InitializeModule @ 14d05cb00

/* WARNING: Enum "Type": Some values do not have unique names */

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FLiveLinkModule>::InitializeModule(void)

{
  FLiveLinkModule *pFVar1;
  
  pFVar1 = ::operator_new(0x300);
  if (pFVar1 != (FLiveLinkModule *)0x0) {
    pFVar1 = FLiveLinkModule::FLiveLinkModule(pFVar1);
    return (IModuleInterface *)pFVar1;
  }
  return (IModuleInterface *)0x0;
}

