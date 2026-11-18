// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 1

// InitializeModule @ 14ac7a350

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FTemplateSequenceModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(8);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *pIVar1 = (IModuleInterface)&___7FTemplateSequenceModule__6B_;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

