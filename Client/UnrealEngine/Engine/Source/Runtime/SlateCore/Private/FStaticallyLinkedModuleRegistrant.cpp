// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// InitializeModule @ 14258b9c0

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FSlateCoreModule>::InitializeModule(void)

{
  FSlateCoreModule *pFVar1;
  
  pFVar1 = ::operator_new(0x40);
  if (pFVar1 != (FSlateCoreModule *)0x0) {
    pFVar1 = FSlateCoreModule::FSlateCoreModule(pFVar1);
    return (IModuleInterface *)pFVar1;
  }
  return (IModuleInterface *)0x0;
}

