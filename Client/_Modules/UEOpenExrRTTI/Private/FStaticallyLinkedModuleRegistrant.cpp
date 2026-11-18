// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UEOpenExrRTTI
// Functions: 1

// InitializeModule @ 14ddb8660

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FOpenExrRTTIModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(8);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *pIVar1 = (IModuleInterface)FOpenExrRTTIModule::vftable;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

