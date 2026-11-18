// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageCore
// Functions: 1

// InitializeModule @ 14235f510

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(8);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *pIVar1 = (IModuleInterface)FDefaultModuleImpl::vftable;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

